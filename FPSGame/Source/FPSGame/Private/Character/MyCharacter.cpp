// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"    
#include "Engine/Engine.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapons/WeaponBase.h"
#include "Kismet/KismetMathLibrary.h"

#include "FPSGame/DebugHelper.h"
#include "GameFramework/CharacterMovementComponent.h"


AMyCharacter::AMyCharacter()
{

	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(GetMesh(),"CameraSocket");
	SpringArm->TargetArmLength = 0.f;
	
	
	MyInputComponent = CreateDefaultSubobject<UEnhancedInputComponent>(TEXT("InputComponent"));

	CurrentHealth = MaxHealth;
}

#pragma region OverridenFunctions

void AMyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyCharacter, CurrentHealth);
}

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	RegisterCameraComponent();
	EquipWeapon(WeaponToSpawn);
}
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CameraComponent)
	{
		DeltaRotation =  CameraComponent->GetComponentRotation();
	}

}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	MyController = Cast<APlayerController>(GetController());
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(MyController->GetLocalPlayer());
	if (Subsystem)
	{
		Subsystem->AddMappingContext(MappingContext,0);
	}
	MyInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	
	MyInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::HandleMove);
	MyInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::HandleLook);
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &ThisClass::StartFire);
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &ThisClass::StopFire);
	MyInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ThisClass::HandleJump);
	MyInputComponent->BindAction(ADSAction, ETriggerEvent::Started, this, &ThisClass::HandleAds);
	MyInputComponent->BindAction(ADSAction, ETriggerEvent::Completed, this, &ThisClass::HandleAds);
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::HandleStartInteract);
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &ThisClass::HandleStopInteract);
	
}




float AMyCharacter::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float NewHealth = CurrentHealth - DamageTaken;
	SetCurrentHealth(NewHealth);
	return NewHealth;
}



#pragma endregion

void AMyCharacter::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}


void AMyCharacter::OnHealthUpdate()
{
	if (IsLocallyControlled())
	{
		DEBUG::PrintString(FString::Printf(TEXT("%f health remains"), CurrentHealth));
		if (CurrentHealth <= 0.f)
		{
			DEBUG::PrintString("You Died");
		}
	}
	if (GetLocalRole() == ROLE_Authority)
	{
		DEBUG::PrintString(FString::Printf(TEXT("%s has %f health "), *GetFName().ToString(), CurrentHealth));
	}
}


void AMyCharacter::HandleMove(const FInputActionValue& Value)
{
	const FVector2D MovementInput = Value.Get<FVector2D>();
	const FRotator MovementRotation(0.f, MyController->GetControlRotation().Yaw, 0.f);
	if (MovementInput.Y != 0)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection,MovementInput.Y);
	}
	if (MovementInput.X != 0)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementInput.X);
		MovementSway = MovementInput.X;
	}

}

void AMyCharacter::HandleLook(const FInputActionValue& Value)
{
	const FVector2D LookInput = Value.Get<FVector2D>();
	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
	MouseSwayX = LookInput.X;
	MouseSwayY = LookInput.Y;

	//PitchValue = GetBaseAimRotation().Pitch - GetActorRotation().Pitch  ;
}

void AMyCharacter::HandleJump()
{
	Jump();
}

void AMyCharacter::StartFire()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->StartFireEvent();
	}
}

void AMyCharacter::StopFire()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->StopFireEvent();
	}

}

void AMyCharacter::HandleAds()
{
	if (EquippedWeapon->WeaponType != EWeaponType::Firearm) return;
	if (EquippedWeapon)
	{
		if (bIsADS)
		{
			if (CameraComponent)
			{
				CameraComponent->AttachToComponent(GetSpringArmComponent(),
					FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
				bIsADS = false;
				return;
			}
		}
		else
		{
			if (CameraComponent)
			{
				CameraComponent->AttachToComponent(EquippedWeapon->GetWeaponMesh(),
					FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), "ADS");
				bIsADS = true;
				return;
			}
		}
	}

}

void AMyCharacter::HandleStartInteract()
{
	FVector StartLocation = GetCameraComponent()->GetComponentLocation();
	FVector EndLocation = StartLocation + GetCameraComponent()->GetForwardVector() * InteractionRadius;
	FHitResult OutHit = DoSphereTraceByObject(StartLocation, EndLocation,InteractionSphereRadius, true,true);
	if (OutHit.bBlockingHit && OutHit.GetActor()->GetClass()->ImplementsInterface(UNativeInteractionInterface::StaticClass()))
	{
		InteractingActor = OutHit.GetActor();
			if (INativeInteractionInterface* InteractInterface = Cast<INativeInteractionInterface>(OutHit.GetActor()))
			{
				InteractInterface->PlayerPressedInteract(this);
			}
	}
}

void AMyCharacter::HandleStopInteract()
{
	if (InteractingActor)
	{
		if (INativeInteractionInterface* InteractInterface = Cast<INativeInteractionInterface>(InteractingActor))
		{
			InteractInterface->PlayerReleasedInteract(this);
		}
		InteractingActor = nullptr;
	}
}


FHitResult AMyCharacter::DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug, bool ForDuration,float Duration)
{
	EDrawDebugTrace::Type DebugType = EDrawDebugTrace::None;
	if (ShowDebug)
	{
		DebugType = EDrawDebugTrace::ForOneFrame;
		if (ForDuration)
		{
			DebugType = EDrawDebugTrace::ForDuration;
		}
	}
	FHitResult OutHit;
	UKismetSystemLibrary::LineTraceSingleForObjects
	(this, Start, End, TraceObjectTypes, false, TArray<AActor*>(), DebugType, OutHit, true, FColor::Red, FColor::Green, Duration);

	return OutHit;
}

FHitResult AMyCharacter::DoSphereTraceByObject(FVector Start, FVector End, float TraceRadius, bool ShowDebug, bool ForDuration, float Duration)
{
	EDrawDebugTrace::Type DebugType = EDrawDebugTrace::None;
	if (ShowDebug)
	{
		DebugType = EDrawDebugTrace::ForOneFrame;
		if (ForDuration)
		{
			DebugType = EDrawDebugTrace::ForDuration;
		}
	}
	FHitResult OutHit;
	UKismetSystemLibrary::SphereTraceSingleForObjects
	(this, Start, End, TraceRadius, TraceObjectTypes, false, TArray<AActor*>(), DebugType, OutHit, true, FColor::Red, FColor::Green, Duration);

	return OutHit;
}

void AMyCharacter::RegisterCameraComponent()
{
	CameraComponent = NewObject <UCameraComponent>(this, UCameraComponent::StaticClass(), "CameraComponent");

	
	//CameraComponent->bUsePawnControlRotation = true;
	CameraComponent->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
	//CameraComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), "CameraSocket");
	CameraComponent->AttachToComponent(GetSpringArmComponent(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
	CameraComponent->RegisterComponent();
}

void AMyCharacter::EquipWeapon(TSubclassOf<AWeaponBase> ToEquipWeapon)
{
	if (EquippedWeapon) EquippedWeapon->Destroy();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FTransform WeaponTransform = GetMesh()->GetSocketTransform(FName("WeaponSocket"));
	
	EquippedWeapon = GetWorld()->SpawnActor<AWeaponBase>(ToEquipWeapon, WeaponTransform, SpawnParams);

	EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget,
		true), FName("WeaponSocket"));

}



void AMyCharacter::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CurrentHealth = FMath::Clamp(healthValue, 0.f, MaxHealth);
		OnHealthUpdate();
	}
}

FTransform AMyCharacter::GetLhikTransform()
{
	if (!EquippedWeapon) return FTransform();
	FTransform LHIKSocketTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform("LHIK");
	FVector OutLocation;
	FRotator OutRotation;
	GetMesh()->TransformToBoneSpace("hand_r",
		LHIKSocketTransform.GetLocation(),
		LHIKSocketTransform.Rotator(),OutLocation,OutRotation);
	return FTransform(OutRotation, OutLocation);
}



