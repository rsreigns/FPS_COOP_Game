
#include "Components/WeaponComponent.h"

#include "Actors/ProjectileBase.h"
#include "Camera/CameraComponent.h"
#include "Character/MyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Weapons/FirearmBase.h"

#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "FPSGame/DebugHelper.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Weapons/MeleeBase.h"


UWeaponComponent::UWeaponComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

	
}

void UWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWeaponComponent,PlayerCamera);
	DOREPLIFETIME(UWeaponComponent,OwningPlayer);
	DOREPLIFETIME(UWeaponComponent,EquippedWeapon);
	DOREPLIFETIME(UWeaponComponent,PrimaryWeapon);
	DOREPLIFETIME(UWeaponComponent,SecondaryWeapon);
	DOREPLIFETIME(UWeaponComponent,MeleeWeapon);
}


void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}





/* ========================================  //                    \\ =============================================== */  
/* ----------------------------------->>>>> ||    Weapon System    || <<<<------------------------------------------- */
/* ======================================== \\                    //  =============================================== */






void UWeaponComponent::StartFireEvent_Implementation()
{
	if (!OwningPlayer || !EquippedWeapon || GetIsReloading())
	{
		return;
	}
	PreRecoilRotation = OwningPlayer->GetControlRotation();

	FirstFireDelay = FMath::Max(LastFiredTime + FirearmInfo.FireRate - GetWorld()->TimeSeconds, 0.f);

	const bool bShouldLoop = FirearmInfo.WeaponFiringMode == EWeaponFiringMode::Automatic ? true : false;
	BulletsFired = 0;
	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &ThisClass::HandleFire,FirearmInfo.FireRate, bShouldLoop, FirstFireDelay);
}

void UWeaponComponent::StopFireEvent_Implementation()
{
	if (!EquippedWeapon)
	{
		return;
	}
	GetWorld()->GetTimerManager().ClearTimer(FireTimerHandle);
	FireTimerHandle.Invalidate();
}



void UWeaponComponent::HandleFire_Implementation()
{
	if (GetIsReloading())
	{
		StopFireEvent();
		return;
	}

	DEBUG::PrintString(FString::Printf(TEXT("Current Ammo: %d"), CurrentAmmo), 1.f, FColor::Magenta);


	LastFiredTime = GetWorld()->TimeSeconds;


	if (FirearmInfo.WeaponFiringMode != EWeaponFiringMode::Burst)
	{
		CurrentAmmo -= 1;
		HandleWeaponProjectile();
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(BurstFireHandle, this, &ThisClass::HandleBurstFire,FirearmInfo.BurstFireDelay, true, 0.f);
	}
}


void UWeaponComponent::HandleBurstFire_Implementation()
{
	if (BurstBulletCounter == FirearmInfo.BurstFireBulletCount)
	{
		BurstBulletCounter = 0;
		GetWorld()->GetTimerManager().ClearTimer(BurstFireHandle);
		BurstFireHandle.Invalidate();
		return;
	}
	CurrentAmmo -= 1;
	BurstBulletCounter += 1;
	HandleWeaponProjectile();
}
void UWeaponComponent::HandleWeaponProjectile_Implementation()
{
	if (!PlayerCamera)
	{
		DEBUG::PrintString(TEXT("Player Camera is invalid"),5.f,FColor::Red);
		return;
	}

	if (!EquippedWeapon->GetWeaponMesh())
	{
		DEBUG::PrintString(TEXT("Weapon mesh is invalid"),5.f,FColor::Red);
		return;
	}
	const FVector MuzzleLocation = EquippedWeapon->GetWeaponMesh()->GetSocketLocation("Muzzle");
	const FVector StartPoint = PlayerCamera->GetComponentLocation();
	const FVector EndPoint = StartPoint + PlayerCamera->GetForwardVector() * FirearmInfo.FireDistance;
	
	if ( FirearmInfo.WeaponFireType == EWeaponFireType::Trace )
	{
		DoLineTraceByObject(MuzzleLocation, EndPoint,true);
		HandleHitDetection();
		WeaponEffects();
	}
	else if (FirearmInfo.WeaponFireType == EWeaponFireType::Projectile)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = GetOwner()->GetInstigator();
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const FTransform ProjectileTransform = FTransform(PlayerCamera->GetComponentRotation(), MuzzleLocation);
		AActor* Projectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileClass, ProjectileTransform, SpawnParams);
		WeaponEffects();

	}
	HandleRecoil();
}

void UWeaponComponent::HandleHitDetection_Implementation()
{
	if (FirearmInfo.WeaponFireType == EWeaponFireType::Projectile)
	{
		return;
	}
	if (AActor* HitActor = OutHit.GetActor();HitActor)
	{
		float NewDamage = FirearmInfo.WeaponDamage;
		
		if (HitActor->IsA(APawn::StaticClass()))
		{
			if (OutHit.BoneName == FName("head"))
			{
				NewDamage *= FirearmInfo.CriticalDamageMultiplier;
			}
		}
		
		if (GetOwner())
		{
			UGameplayStatics::ApplyDamage(HitActor, NewDamage, GetOwner()->GetInstigatorController(), GetOwner(), DamageTypeClass);
		}
		else
		{
			DEBUG::PrintString(TEXT("Owner is invalid"),5.f,FColor::Red);
		}
	}
}



void UWeaponComponent::WeaponEffects_Implementation()
{
	const FImpactEffects TempImpactEffects = GetImpactEffects();
	if (TempImpactEffects.ImpactSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(this, TempImpactEffects.ImpactSound, OutHit.ImpactPoint);
	}
	if (TempImpactEffects.ImpactParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, TempImpactEffects.ImpactParticle, OutHit.ImpactPoint,OutHit.ImpactNormal.Rotation() );
	}
	if (WeaponInfo.HitSound)
	{
		UGameplayStatics::SpawnSound2D(this, WeaponInfo.HitSound);
	}
	if (FirearmInfo.MuzzleFlash && EquippedWeapon->GetWeaponMesh())
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, FirearmInfo.MuzzleFlash, EquippedWeapon->GetWeaponMesh()->GetSocketLocation("Muzzle"));
	}
}


void UWeaponComponent::HandleRecoil_Implementation()
{
	BulletsFired += 1;
	float InYaw = FMath::RandRange(FirearmInfo.RecoilYaw.X, FirearmInfo.RecoilYaw.Y);
	float InPitch = FMath::RandRange(FirearmInfo.RecoilPitch.X, FirearmInfo.RecoilPitch.Y)
		* FMath::GetMappedRangeValueClamped(FVector2D(0, FirearmInfo.MaxAmmo - CurrentAmmo), FVector2D(0, FirearmInfo.MaxPitchMultiplier), BulletsFired);

	OwningPlayer->AddControllerYawInput(InYaw);
	OwningPlayer->AddControllerPitchInput(-InPitch);
}

void UWeaponComponent::HandleAds()
{
	if ( !EquippedWeapon || !EquippedWeapon->GetWeaponMesh() )
	{
		return;
	}
	if ( WeaponInfo.WeaponType == EWeaponType::Melee )
	{
		OwningPlayer->PlayMontageOnCharacter(MeleeInfo.HeavyAttackMontage);
		return;
	}
	if ( EquippedWeapon )
	{
		if ( bIsAds )
		{
			if ( PlayerCamera )
			{
				PlayerCamera->AttachToComponent(OwningPlayer->GetSpringArmComponent(),FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));
				bIsAds = false;
				return;
			}
		}
		else
		{
			if ( PlayerCamera )
			{
				PlayerCamera->AttachToComponent(EquippedWeapon->GetWeaponMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true),"ADS");
				bIsAds = true;
				return;
			}
		}
	}
}



bool UWeaponComponent::GetIsReloading()
{
	if (CurrentAmmo <= 0)
	{
		if (!GetWorld()->GetTimerManager().IsTimerActive(ReloadTimerHandle))
		{
			DEBUG::PrintString("Reloading");
			GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ThisClass::ReloadWeapon, FirearmInfo.ReloadTime);
		}
		return true;
	}
	return false;
}


void UWeaponComponent::ReloadWeapon_Implementation()
{
	CurrentAmmo = FirearmInfo.MaxAmmo;
	BulletsFired = 0;
	DEBUG::PrintString("Weapon Reloaded");
}


FImpactEffects UWeaponComponent::GetImpactEffects()
{
	if (!OutHit.Component.IsValid())
	{
		if (const FImpactEffects* DefaultEffects = FirearmInfo.CollisionImpactEffects.Find(ECC_WorldStatic))
		{
			return *DefaultEffects;
		}
		return FImpactEffects(); 
	}
	
	const ECollisionChannel CollisionType = OutHit.Component->GetCollisionObjectType();
	
	if (const FImpactEffects* FoundEffects = FirearmInfo.CollisionImpactEffects.Find(CollisionType))
	{
		return *FoundEffects;
	}
	
	if (const FImpactEffects* DefaultEffects = FirearmInfo.CollisionImpactEffects.Find(ECC_WorldStatic))
	{
		return *DefaultEffects;
	}

	return FImpactEffects(); 
}





void UWeaponComponent::DoLineTraceByObject_Implementation(const FVector Start, const FVector End, bool ShowDebug, bool ForDuration, float Duration)
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
	UKismetSystemLibrary::LineTraceSingleForObjects
	(this, Start, End, ObjectTypes, false, TArray<AActor*>(),
	 DebugType, OutHit, true, FColor::Red, FColor::Green, Duration);
}





/* ========================================  //                    \\ ================================================ */  
/* ----------------------------------->>>>> ||  Equipment System   || <<<<------------------------------------------- */
/* ======================================== \\                    //  =============================================== */






void UWeaponComponent::PickupWeapon_Implementation(AWeaponBase* ToPickWeapon) //   Look into firearmInfo stuff and use weapon class to update it
{
	if (!ToPickWeapon) return;
	
	ToPickWeapon->EnablePawnCollision(false);
	
	const EWeaponSlotType SlotToEquipAt = ToPickWeapon->WeaponInfo.WeaponSlotType;
	
	bool bWasEquippedWeapon = false;
	
	if (const AWeaponBase* WeaponAlreadyAtSlot = GetWeaponFromSlotType(SlotToEquipAt))
	{
		if (WeaponAlreadyAtSlot == EquippedWeapon)
		{
			bWasEquippedWeapon = true;
		}
		ThrowWeaponFromSlot(SlotToEquipAt);
	}

	const bool bShouldEquipAsCurrentWeapon = bWasEquippedWeapon || !EquippedWeapon;
	
	AttachToSocket(ToPickWeapon,!bShouldEquipAsCurrentWeapon);
	SetWeaponAtSlot(ToPickWeapon);
	
	if (bShouldEquipAsCurrentWeapon)
	{
		EquippedWeapon = ToPickWeapon;
		SetWeaponInfoByWeapon(EquippedWeapon);                                                   // Updating current data only when current weapon is changed
	}
		
	EquippedWeaponSlot = EquippedWeapon->WeaponInfo.WeaponSlotType;
	WeaponInfo =  EquippedWeapon->WeaponInfo;
}


void UWeaponComponent::ThrowWeaponFromSlot_Implementation(EWeaponSlotType WeaponSlotToThrow)
{
	DetachWeaponAtSlot(WeaponSlotToThrow);
	AWeaponBase* ThrownWeapon = GetWeaponFromSlotType(WeaponSlotToThrow);
	if (!ThrownWeapon) return;
	ThrownWeapon->EnablePawnCollision(true);
	if (USkeletalMeshComponent* WeaponMeshComp = Cast<USkeletalMeshComponent>(ThrownWeapon->GetWeaponMesh()))
	{
		WeaponMeshComp->AddForce(WeaponThrowForce * GetOwner()->GetActorForwardVector());
	}
	ClearWeaponSlot(WeaponSlotToThrow);
	if (ThrownWeapon == EquippedWeapon)
	{
		EquippedWeapon = nullptr;
		EquippedWeaponSlot= EWeaponSlotType::Unarmed;
		SetWeaponInfoByWeapon(nullptr);                                                   // Removing set data
	}
	
}

void UWeaponComponent::SwitchWeaponSlot_Implementation(EWeaponSlotType SlotType)
{
	switch (SlotType)
	{
	case EWeaponSlotType::Melee: TrySwitchWeapon(MeleeWeapon);
		break;
	case EWeaponSlotType::Primary: TrySwitchWeapon(PrimaryWeapon);
		break;
	case EWeaponSlotType::Secondary: TrySwitchWeapon(SecondaryWeapon);
		break;
	case EWeaponSlotType::Throwable: break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unknown Weapon Slot Type"));
		break;
	}
}

void UWeaponComponent::TrySwitchWeapon_Implementation(AWeaponBase* WeaponToEquip)
{
	if (!WeaponToEquip)
	{
		DEBUG::PrintString("Invalid weapon to equip",1.f,FColor::Red);
		return;
	}

	if (EquippedWeapon)
	{
		if (WeaponToEquip->WeaponInfo.WeaponSlotType == EquippedWeapon->WeaponInfo.WeaponSlotType)                                  // Checking weapon variable
		{
			DEBUG::PrintString("Already Equipping this weapon",1.f,FColor::Red);
			return;
		}
		
		const EWeaponSlotType CurrentWeaponSlotType = EquippedWeapon->WeaponInfo.WeaponSlotType;                         // Checking weapon variable
		
		DetachWeaponAtSlot(CurrentWeaponSlotType);
		AttachToSocket(EquippedWeapon, true);
		                                              
		
	}
	const EWeaponSlotType WeaponToEquipSlotType = WeaponToEquip->WeaponInfo.WeaponSlotType;                             // Checking weapon variable
	DetachWeaponAtSlot(WeaponToEquipSlotType);
	AttachToSocket(WeaponToEquip, false);
	EquippedWeapon = WeaponToEquip;

	EquippedWeaponSlot = EquippedWeapon->WeaponInfo.WeaponSlotType;
	SetWeaponInfoByWeapon(EquippedWeapon);                                                   // Updating current data only when current weapon is changed
}

void UWeaponComponent::AttachToSocket_Implementation(AWeaponBase* WeaponToAttach, const bool bAttachToRestSocket)
{
	if (!WeaponToAttach)return;

	const FName AttachSocket = GetSocketNameForWeapon(WeaponToAttach->WeaponInfo.WeaponSlotType, bAttachToRestSocket);

	if (OwningPlayer->GetMeshComp() && OwningPlayer)
	{
			WeaponToAttach->SetActorTransform(OwningPlayer->GetMeshComp()->GetSocketTransform(AttachSocket));
        	WeaponToAttach->AttachToComponent(OwningPlayer->GetMeshComp(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget,true), AttachSocket);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to attach to socket"));
	}
}

void UWeaponComponent::DetachWeaponAtSlot_Implementation(EWeaponSlotType WeaponSlot)
{
	if (AWeaponBase* WeaponToDetach = GetWeaponFromSlotType(WeaponSlot))
	{
		FDetachmentTransformRules TransformRules = FDetachmentTransformRules::KeepWorldTransform;
		WeaponToDetach->DetachFromActor(TransformRules);
	}
}

void UWeaponComponent::ClearWeaponSlot_Implementation(EWeaponSlotType SlotType)
{
	switch (SlotType)
	{
	case EWeaponSlotType::Melee: MeleeWeapon = nullptr;
		break;
	case EWeaponSlotType::Primary: PrimaryWeapon = nullptr;
		break;
	case EWeaponSlotType::Secondary: SecondaryWeapon = nullptr;
		break;
	case EWeaponSlotType::Throwable: break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Unknown Weapon Slot Type"));
		break;
	}
	EquippedWeaponSlot = EWeaponSlotType::Unarmed;
}

void UWeaponComponent::SetWeaponAtSlot_Implementation(AWeaponBase* WeaponToSet)
{
	if (!WeaponToSet) return;
	switch (const EWeaponSlotType WeaponSlot = WeaponToSet->WeaponInfo.WeaponSlotType;WeaponSlot)
	{
	case EWeaponSlotType::Unarmed : return;
	case EWeaponSlotType::Melee: MeleeWeapon = Cast<AMeleeBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Primary: PrimaryWeapon = Cast<AFirearmBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Secondary: SecondaryWeapon = Cast<AFirearmBase>(WeaponToSet);
		break;
	case EWeaponSlotType::Throwable: break;
	default: break;
	}
}

void UWeaponComponent::SetWeaponInfoByWeapon_Implementation(AWeaponBase* InWeapon)
{
	if (!InWeapon)
	{
		WeaponInfo = FWeaponInfo();
		FirearmInfo = FFirearmInfo();
		MeleeInfo = FMeleeInfo();
		return;
	}
	switch (InWeapon->WeaponInfo.WeaponType)
	{
		
	case EWeaponType::Melee :
		if (const AMeleeBase* TempMelee = Cast<AMeleeBase>(InWeapon); TempMelee)
		{
			MeleeInfo = TempMelee->MeleeInfo;
		}
		break;
		
	case EWeaponType::Firearm :
		if (const AFirearmBase* TempFirearm = Cast<AFirearmBase>(InWeapon); TempFirearm)
		{
			FirearmInfo = TempFirearm->FirearmInfo;
		}
		break;
		
	default : break;
	}
}

AWeaponBase* UWeaponComponent::GetWeaponFromSlotType(EWeaponSlotType WeaponSlot)
{
	switch (WeaponSlot)
	{
	case EWeaponSlotType::Unarmed : return nullptr;
	case EWeaponSlotType::Melee: return MeleeWeapon;
	case EWeaponSlotType::Primary: return PrimaryWeapon;
	case EWeaponSlotType::Secondary: return SecondaryWeapon;
	case EWeaponSlotType::Throwable: return nullptr;
	default: return nullptr;
	}
}

FName UWeaponComponent::GetSocketNameForWeapon(EWeaponSlotType WeaponSlot, bool bNeedRestSocket)
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

