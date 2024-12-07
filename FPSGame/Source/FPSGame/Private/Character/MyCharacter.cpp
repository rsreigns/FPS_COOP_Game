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
#include "Weapons/MeleeBase.h"
#include "Weapons/FirearmBase.h"


AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(GetMesh(), "CameraSocket");
	SpringArm->TargetArmLength = 0.f;


	MyInputComponent = CreateDefaultSubobject<UEnhancedInputComponent>(TEXT("InputComponent"));

	CurrentHealth = MaxHealth;

	EquippedWeaponSlotType = EWeaponSlotType::Unarmed;
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

	MyInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::HandleMove);
	MyInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::HandleLook);
	
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &ThisClass::StartFire);
	MyInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &ThisClass::StopFire);
	MyInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ThisClass::HandleJump);
	
	MyInputComponent->BindAction(ADSAction, ETriggerEvent::Started, this, &ThisClass::HandleAds);
	MyInputComponent->BindAction(ADSAction, ETriggerEvent::Completed, this, &ThisClass::HandleAds);
	
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::HandleStartInteract);
	MyInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &ThisClass::HandleStopInteract);

	MyInputComponent->BindAction(PrimaryWeaponAction, ETriggerEvent::Started, this, &ThisClass::SwitchToPrimaryWeapon);

	MyInputComponent->BindAction(SecondaryWeaponAction, ETriggerEvent::Started, this, &ThisClass::SwitchToSecondaryWeapon);

	MyInputComponent->BindAction(MeleeWeaponAction, ETriggerEvent::Started, this, &ThisClass::SwitchToMeleeWeapon);

	MyInputComponent->BindAction(ThrowableWeaponAction, ETriggerEvent::Started, this, &ThisClass::SwitchToThrowableWeapon);

	MyInputComponent->BindAction(DropWeaponAction, ETriggerEvent::Started, this, &ThisClass::DropCurrentWeapon);
}


float AMyCharacter::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator,
                               AActor* DamageCauser)
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

void AMyCharacter::StartFire()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->StartFireEvent();
		if (EquippedWeapon->WeaponType == EWeaponType::Melee)
		{
			PlayMontageOnCharacter(HitMontage);
			return;
		}
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
	if (!EquippedWeapon) return;
	if (EquippedWeapon->WeaponType == EWeaponType::Melee)
	{
		PlayMontageOnCharacter(ADSMontage);
		return;
	}
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
				                                   FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true),
				                                   "ADS");
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
	FHitResult OutHit = DoSphereTraceByObject(StartLocation, EndLocation, InteractionSphereRadius);
	if (OutHit.bBlockingHit && OutHit.GetActor()->GetClass()->ImplementsInterface(
		UNativeInteractionInterface::StaticClass()))
	{
		InteractingActor = OutHit.GetActor();

		DEBUG::PrintString(FString::Printf(TEXT("%s has been interacted "),
			*OutHit.GetActor()->GetName()),5.f,FColor::Magenta);
		
		if (INativeInteractionInterface* InteractInterface = Cast<INativeInteractionInterface>(OutHit.GetActor()))
		{
			if (AWeaponBase* WeaponToEquip = Cast<AWeaponBase>(InteractingActor))
			{
				PickupWeapon(WeaponToEquip);
				WeaponToEquip->EnablePawnCollision(false);
				if (AFirearmBase* FireArm = Cast<AFirearmBase>(InteractingActor))
				{
					FireArm->OwningPlayer = this;
					FireArm->PlayerCamera = CameraComponent;
				}
				if (WeaponToEquip == EquippedWeapon)
				{
					// Inspect weapon animation or maybe have other keybind for it
					return;
				}
			}
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

void AMyCharacter::SwitchToPrimaryWeapon()
{
	SwitchWeaponSlot(EWeaponSlotType::Primary);
	DEBUG::PrintString("Switching to primary action");
}

void AMyCharacter::SwitchToSecondaryWeapon()
{
	SwitchWeaponSlot(EWeaponSlotType::Secondary);
}

void AMyCharacter::SwitchToMeleeWeapon()
{
	SwitchWeaponSlot(EWeaponSlotType::Melee);
	DEBUG::PrintString("Switching to melee action");
}

void AMyCharacter::SwitchToThrowableWeapon()
{
	SwitchWeaponSlot(EWeaponSlotType::Throwable);
}

void AMyCharacter::DropCurrentWeapon()
{
	ThrowWeaponFromSlot(EquippedWeaponSlotType);
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

FHitResult AMyCharacter::DoSphereTraceByObject(FVector Start, FVector End, float TraceRadius, bool ShowDebug,
                                               bool ForDuration, float Duration)
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
	(this, Start, End, TraceRadius, TraceObjectTypes, false, TArray<AActor*>(), DebugType, OutHit, true,
	 FColor::Red, FColor::Green, Duration);

	return OutHit;
}

void AMyCharacter::RegisterCameraComponent()
{
	CameraComponent = NewObject<UCameraComponent>(this, UCameraComponent::StaticClass(), "CameraComponent");


	//CameraComponent->bUsePawnControlRotation = true;
	CameraComponent->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
	//CameraComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), "CameraSocket");
	CameraComponent->AttachToComponent(GetSpringArmComponent(),
	                                   FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
	CameraComponent->RegisterComponent();
}

void AMyCharacter::PickupWeapon(AWeaponBase* ToPickWeapon)
{
	if (!ToPickWeapon) return;
	
	const EWeaponSlotType SlotToEquipAt = ToPickWeapon->WeaponSlotType;
	
	bool bWasEquippedWeapon = false;
	
	if (const AWeaponBase* WeaponAlreadyAtSlot = GetWeaponFromSlotType(SlotToEquipAt))
	{
		if (WeaponAlreadyAtSlot == EquippedWeapon)
		{
			bWasEquippedWeapon = true;
		}
		ThrowWeaponFromSlot(SlotToEquipAt);
	}

	bool bShouldEquipAsCurrentWeapon = bWasEquippedWeapon || !EquippedWeapon;
	
	AttachToSocket(ToPickWeapon,!bShouldEquipAsCurrentWeapon);
	SetWeaponAtSlot(ToPickWeapon);
	
	if (bShouldEquipAsCurrentWeapon)
	{
		EquippedWeapon = ToPickWeapon;
	}
		
	EquippedWeaponSlotType = GetEquippedWeapon()->WeaponSlotType;
}

FName AMyCharacter::GetSocketNameForWeapon(EWeaponSlotType WeaponSlot, bool bNeedRestSocket)
{
	switch (WeaponSlot)
	{
	case EWeaponSlotType::Unarmed: return FName();
	case EWeaponSlotType::Melee: return bNeedRestSocket ? FName("MeleeRestSocket") : FName("MeleeSocket");
	case EWeaponSlotType::Primary: return bNeedRestSocket ? FName("PrimaryRestSocket") : FName("PrimarySocket");
	case EWeaponSlotType::Secondary: return bNeedRestSocket ? FName("SecondaryRestSocket") : FName("SecondarySocket");
	case EWeaponSlotType::Throwable: return bNeedRestSocket ? FName("ThrowableRestSocket") : FName("ThrowableSocket");
	default: return FName();
	}
}

void AMyCharacter::ThrowWeaponFromSlot(EWeaponSlotType WeaponSlotToThrow)
{
	AWeaponBase* ThrownWeapon = DetachWeaponAtSlot(WeaponSlotToThrow);
	if (!ThrownWeapon) return;
	ThrownWeapon->EnablePawnCollision(true);
	if (USkeletalMeshComponent* WeaponMeshComp = Cast<USkeletalMeshComponent>(ThrownWeapon->GetWeaponMesh()))
	{
		WeaponMeshComp->AddForce(WeaponThrowForce * GetActorForwardVector());
	}
	ClearWeaponSlot(WeaponSlotToThrow);
	if (WeaponSlotToThrow == EquippedWeaponSlotType)
	{
		EquippedWeapon = nullptr;
		EquippedWeaponSlotType = EWeaponSlotType::Unarmed;
	}
	
	if (AFirearmBase* FireArm = Cast<AFirearmBase>(InteractingActor))
	{
		FireArm->OwningPlayer = nullptr;
		FireArm->PlayerCamera = nullptr;
		
	}
}

void AMyCharacter::ClearWeaponSlot(EWeaponSlotType SlotType)
{
	switch (SlotType)
	{
	case EWeaponSlotType::Melee: MeleeSlotWeapon = nullptr;
		break;
	case EWeaponSlotType::Primary: PrimarySlotWeapon = nullptr;
		break;
	case EWeaponSlotType::Secondary: SecondarySlotWeapon = nullptr;
		break;
	case EWeaponSlotType::Throwable: break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unknown Weapon Slot Type"));
		break;
	}
	EquippedWeaponSlotType = EWeaponSlotType::Unarmed;
}

void AMyCharacter::SwitchWeaponSlot(EWeaponSlotType SlotType)
{
	switch (SlotType)
	{
	case EWeaponSlotType::Melee: TrySwitchWeapon(MeleeSlotWeapon);
		break;
	case EWeaponSlotType::Primary: TrySwitchWeapon(PrimarySlotWeapon);
		break;
	case EWeaponSlotType::Secondary: TrySwitchWeapon(SecondarySlotWeapon);
		break;
	case EWeaponSlotType::Throwable: break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unknown Weapon Slot Type"));
		break;
	}
}

void AMyCharacter::TrySwitchWeapon(AWeaponBase* WeaponToEquip)
{
	if (!WeaponToEquip)
	{
		DEBUG::PrintString("Invalid weapon to equpip");
		return;
	}

	if (EquippedWeapon)
	{
		if (WeaponToEquip->WeaponSlotType == GetEquippedWeapon()->WeaponSlotType)
		{
			DEBUG::PrintString("Already Equipping this weapon");
			return;
		}
		
		const EWeaponSlotType CurrentWeaponSlotType = EquippedWeapon->WeaponSlotType;
		
		DetachWeaponAtSlot(CurrentWeaponSlotType);
		AttachToSocket(EquippedWeapon, true);
		
		DEBUG::PrintString("detached equipped weapon");
	}
	const EWeaponSlotType WeaponToEquipSlotType = WeaponToEquip->WeaponSlotType;
	DetachWeaponAtSlot(WeaponToEquipSlotType);
	AttachToSocket(WeaponToEquip, false);
	EquippedWeapon = WeaponToEquip;

	EquippedWeaponSlotType = GetEquippedWeapon()->WeaponSlotType;
	DEBUG::PrintString("Switch weapon end statement");
}

void AMyCharacter::AttachToSocket(AWeaponBase* WeaponToAttach, bool bAttachToRestSocket)
{
	if (!WeaponToAttach)return;

	FDetachmentTransformRules TransformRules = FDetachmentTransformRules::KeepWorldTransform;

	FName AttachSocket = GetSocketNameForWeapon(WeaponToAttach->WeaponSlotType, bAttachToRestSocket);

	WeaponToAttach->SetActorTransform(GetMesh()->GetSocketTransform(AttachSocket));
	WeaponToAttach->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget,
	                                                                       true), AttachSocket);
}

AWeaponBase* AMyCharacter::DetachWeaponAtSlot(EWeaponSlotType WeaponSlot) // Detach weapon using it's slot
{
	if (AWeaponBase* WeaponToDetach = GetWeaponFromSlotType(WeaponSlot))
	{
		FDetachmentTransformRules TransformRules = FDetachmentTransformRules::KeepWorldTransform;
		WeaponToDetach->DetachFromActor(TransformRules);
		return WeaponToDetach;
	}
	return nullptr;
}

AWeaponBase* AMyCharacter::GetWeaponFromSlotType(EWeaponSlotType WeaponSlot) // Retrieve weapon by its slot
{
	switch (WeaponSlot)
	{
	case EWeaponSlotType::Unarmed : return nullptr;
	case EWeaponSlotType::Melee: return GetMeleeSlotWeapon();
	case EWeaponSlotType::Primary: return GetPrimarySlotWeapon();
	case EWeaponSlotType::Secondary: return GetSecondarySlotWeapon();
	case EWeaponSlotType::Throwable: return nullptr;
	default: return nullptr;
	}
}

void AMyCharacter::SetWeaponAtSlot(AWeaponBase* WeaponToSet)
{
	if (!WeaponToSet) return;
	const EWeaponSlotType WeaponSlot = WeaponToSet->WeaponSlotType;
	switch (WeaponSlot)
	{
	case EWeaponSlotType::Unarmed : return;
	case EWeaponSlotType::Melee: MeleeSlotWeapon = Cast<AMeleeBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Primary: PrimarySlotWeapon = Cast<AFirearmBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Secondary: SecondarySlotWeapon = Cast<AFirearmBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Throwable: break;
	default: break;
	}
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
	                                LHIKSocketTransform.Rotator(), OutLocation, OutRotation);
	return FTransform(OutRotation, OutLocation);
}
