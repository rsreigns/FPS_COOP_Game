// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Components/WeaponComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapons/WeaponBase.h"


#include "FPSGame/DebugHelper.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "DataClasses/EnumTypes.h"



AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(GetMesh(), "CameraSocket");
	SpringArm->TargetArmLength = 0.f;


	MyInputComponent = CreateDefaultSubobject<UEnhancedInputComponent>(TEXT("InputComponent"));

	CurrentHealth = MaxHealth;

	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>("Weapon Component");

	
	
}


void AMyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyCharacter, CurrentHealth);
	
}

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	RegisterCameraComponent();
	if (WeaponComponent)
	{
		WeaponComponent->OwningPlayer = this;
	}
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CameraComponent)
	{
		DeltaRotation = CameraComponent->GetComponentRotation();
	}
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	MyController = Cast<APlayerController>(GetController());
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		MyController->GetLocalPlayer());
	if (Subsystem)
	{
		Subsystem->AddMappingContext(MappingContext, 0);
	}
	MyInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	// Movement
	MyInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::HandleMove);
	MyInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::HandleLook);

	
	// Fire
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &ThisClass::ServerStartFire);
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &ThisClass::ServerStopFire);
	MyInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ThisClass::HandleJump);
	

	// ADS
	MyInputComponent->BindAction(AdsAction, ETriggerEvent::Started, this, &ThisClass::HandleAds);
	MyInputComponent->BindAction(AdsAction, ETriggerEvent::Completed, this, &ThisClass::HandleAds);
	

	// Interact
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::HandleStartInteract);
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &ThisClass::HandleStopInteract);

	
	// Crouching
	MyInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ThisClass::Server_StartSprint);
	MyInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ThisClass::StopSprint);

	
	// Sprinting
	MyInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &ThisClass::Server_StartCrouch);
	MyInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &ThisClass::Server_StopCrouch);
	

	// Weapon Switching ->

	// Primary 
	MyInputComponent->BindAction(PrimaryWeaponAction, ETriggerEvent::Started, this, &ThisClass::ServerSwitchToPrimary);

	// Secondary 
	MyInputComponent->BindAction(SecondaryWeaponAction, ETriggerEvent::Started, this, &ThisClass::ServerSwitchToSecondary);

	// Melee
	MyInputComponent->BindAction(MeleeWeaponAction, ETriggerEvent::Started, this, &ThisClass::ServerSwitchToMelee);


	// Throwable
	MyInputComponent->BindAction(ThrowableWeaponAction, ETriggerEvent::Started, this, &ThisClass::SwitchToThrowableWeapon);


	
	// Drop Weapon
	MyInputComponent->BindAction(DropWeaponAction, ETriggerEvent::Started, this, &ThisClass::Server_DropCurrentWeapon);
}


float AMyCharacter::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator,
                               AActor* DamageCauser)
{
	float NewHealth = CurrentHealth - DamageTaken;
	SetCurrentHealth(NewHealth);

	ServerHandleHitReact();
	
	return NewHealth;
}



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
		AddMovementInput(ForwardDirection, MovementInput.Y);
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
}

void AMyCharacter::HandleJump()
{
	Jump();
}

void AMyCharacter::ServerStartFire_Implementation()
{
	StartFire();
}

void AMyCharacter::StartFire_Implementation()
{
	WeaponComponent->StartFireEvent();
}


void AMyCharacter::ServerStopFire_Implementation()
{
	StopFire();
}

void AMyCharacter::StopFire_Implementation()
{
	WeaponComponent->StopFireEvent();
}

void AMyCharacter::HandleAds()
{
	WeaponComponent->HandleAds();
}

void AMyCharacter::HandleStartInteract()
{
	const FVector StartLocation = GetCameraComponent()->GetComponentLocation();
	const FVector EndLocation = StartLocation + GetCameraComponent()->GetForwardVector() * InteractionRadius;
	
	FHitResult OutHit;
	
	if (DoSphereTraceByObject(OutHit, StartLocation, EndLocation, InteractionSphereRadius ) &&
		                         OutHit.GetActor()->GetClass()->ImplementsInterface(UNativeInteractionInterface::StaticClass()))
	{
		InteractingActor = OutHit.GetActor();
		
		if (INativeInteractionInterface* InteractInterface = Cast<INativeInteractionInterface>(OutHit.GetActor()); InteractingActor && InteractInterface)
		{
			if (AWeaponBase* WeaponToEquip = Cast<AWeaponBase>(InteractingActor))
			{
				ServerPickupWeapon(WeaponToEquip);
				
			}
			//InteractInterface->PlayerPressedInteract(this);
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

void AMyCharacter::ServerSwitchToPrimary_Implementation()
{
	WeaponComponent->SwitchWeaponSlot(EWeaponSlotType::Primary);
}

void AMyCharacter::ServerSwitchToSecondary_Implementation()
{
	WeaponComponent->SwitchWeaponSlot(EWeaponSlotType::Secondary);
}

void AMyCharacter::ServerSwitchToMelee_Implementation()
{
	WeaponComponent->SwitchWeaponSlot(EWeaponSlotType::Melee);
}


void AMyCharacter::SwitchToThrowableWeapon()
{
	// Master, please add my logic!
}



void AMyCharacter::Server_StartCrouch_Implementation()
{
	StartCrouch();
}

void AMyCharacter::StartCrouch_Implementation()
{
	bIsCrouching = true;
	SetMovementSpeed(CrouchSpeed);
}

void AMyCharacter::Server_StopCrouch_Implementation()
{
	StopCrouch();
	
}

void AMyCharacter::StopCrouch_Implementation()
{
	bIsCrouching = false;
	SetMovementSpeed(WalkSpeed);
}
void AMyCharacter::Server_StartSprint_Implementation()
{
	StartSprint();
}

void AMyCharacter::StartSprint_Implementation()
{
	bIsSprinting = true;
	SetMovementSpeed(SprintSpeed);
}

void AMyCharacter::Server_StopSprint_Implementation()
{
	StopSprint();
}

void AMyCharacter::StopSprint_Implementation()
{
	bIsSprinting = false;
	SetMovementSpeed(WalkSpeed);
}



void AMyCharacter::Server_DropCurrentWeapon_Implementation()
{
	WeaponComponent->ThrowWeaponFromSlot(WeaponComponent->GetEquippedSlot());
}




void AMyCharacter::RegisterCameraComponent()
{
	CameraComponent = NewObject<UCameraComponent>(this, UCameraComponent::StaticClass(), "CameraComponent");
	
	CameraComponent->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
	
	CameraComponent->AttachToComponent(GetSpringArmComponent(),
	                                   FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
	CameraComponent->RegisterComponent();

	if (WeaponComponent)
	{
		WeaponComponent->PlayerCamera = CameraComponent;
	}
	
}

void AMyCharacter::ServerPickupWeapon_Implementation(AWeaponBase* InPickupWeapon)
{
	WeaponComponent->PickupWeapon( InPickupWeapon );
}

void AMyCharacter::Server_ThrowWeapon_Implementation(EWeaponSlotType WeaponSlotToThrow)
{
	WeaponComponent->ThrowWeaponFromSlot(WeaponSlotToThrow);
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
	if (!GetWeaponComponent()->GetEquippedWeapon())
	{
		return FTransform();
	}
	
	const FTransform LHIKSocketTransform = GetWeaponComponent()->GetEquippedWeapon()->GetWeaponMesh()->GetSocketTransform("LHIK");
	FVector OutLocation;
	FRotator OutRotation;
	GetMesh()->TransformToBoneSpace("hand_r",
	                                LHIKSocketTransform.GetLocation(),
	                                LHIKSocketTransform.Rotator(), OutLocation, OutRotation);
	
	return FTransform(OutRotation, OutLocation);
}


void AMyCharacter::ServerHandleHitReact_Implementation()
{
	HandleHitReact();
}
void AMyCharacter::HandleHitReact_Implementation()
{
	if (CurrentHealth <= 0)
	{
		PlayMontageOnCharacter(DeathMontage,true,true,true);
	}
	else
	{
		PlayMontageOnCharacter(HitReactMontage,true,true);
	}
}


void AMyCharacter::SetMovementSpeed(float NewSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
}

FHitResult AMyCharacter::DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug, bool ForDuration,
                                             float Duration)
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
	(this, Start, End, TraceObjectTypes, false, TArray<AActor*>(), DebugType, OutHit, true, FColor::Red,
	 FColor::Green, Duration);

	return OutHit;
}

bool AMyCharacter::DoSphereTraceByObject(FHitResult& InHit, const FVector Start, const FVector End, const float TraceRadius,const bool ShowDebug, const bool ForDuration, const float Duration)
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
	return UKismetSystemLibrary::SphereTraceSingleForObjects
	(this, Start, End, TraceRadius, TraceObjectTypes, false, TArray<AActor*>(), DebugType, InHit, true,
	 FColor::Red, FColor::Green, Duration);
}


