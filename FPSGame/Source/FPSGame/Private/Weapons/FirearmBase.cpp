// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/FirearmBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Camera/CameraComponent.h"
#include "Character/MyCharacter.h"

#include "FPSGame/DebugHelper.h"
#include "DrawDebugHelpers.h"
#include "Actors/ProjectileBase.h"
#include "Kismet/GameplayStatics.h"
 

AFirearmBase::AFirearmBase()
{
	/*WeaponMesh = CreateDefaultSubobject< USkeletalMeshComponent>(TEXT("WeaponSKM"));*/
	WeaponType = EWeaponType::Firearm;
}

void AFirearmBase::BeginPlay()
{
	Super::BeginPlay();
	if(GetOwner())
	{
		OwningPlayer = Cast<AMyCharacter>(GetOwner());
		if(OwningPlayer)
		{
			PlayerCamera = OwningPlayer->GetCameraComponent();
		}
	}
	CurrentAmmo = MaxAmmo;
}

void AFirearmBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (bIsResettingRecoilRotation)
	{
		
	}
}


void AFirearmBase::StartFireEvent()
{
	Super::StartFireEvent();
	bIsResettingRecoilRotation = false;
	PreRecoilRotation = OwningPlayer->GetControlRotation();
	if (GetIsReloading()) return;
	
	FirstFireDelay = FMath::Max(LastFiredTime + FireRate - GetWorld()->TimeSeconds, 0.f);
	
	bool bShouldLoop = WeaponFiringMode == EWeaponFiringMode::Automatic? true:false;
	BulletsFired = 0;
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ThisClass::HandleFire,
		FireRate,bShouldLoop, FirstFireDelay);
}

void AFirearmBase::StopFireEvent()
{
	Super::StopFireEvent();
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	FireTimerHandle.Invalidate();

	bIsResettingRecoilRotation = true;
}


bool AFirearmBase::GetIsReloading()
{
	if (CurrentAmmo <= 0)
	{
		if (!GetWorldTimerManager().IsTimerActive(ReloadTimerHandle))
		{
			DEBUG::PrintString("Reloading");
			GetWorldTimerManager().SetTimer(ReloadTimerHandle,this,&ThisClass::ReloadWeapon,ReloadTime);
		}
		return true;
	}
	return false;
}


void AFirearmBase::ReloadWeapon_Implementation()
{
	CurrentAmmo = MaxAmmo;
	BulletsFired =0;
	DEBUG::PrintString("Weapon Reloaded");
}

void AFirearmBase::HandleFire_Implementation()
{
	if (GetIsReloading())
	{
		StopFireEvent();
		return;
	}
	
	DEBUG::PrintString(FString::Printf(TEXT("Current Ammo: %d"), CurrentAmmo),1.f,FColor::Magenta);
	

	LastFiredTime = GetWorld()->TimeSeconds;
	
	
	if (WeaponFiringMode != EWeaponFiringMode::Burst)
	{
		CurrentAmmo-=1;
		HandleWeaponProjectile();
	}
	else
	{
		GetWorldTimerManager().SetTimer(BurstFireHandle,this,&ThisClass::HandleBurstFire,
		BurstFireDelay,true,0.f);
	}
	

}
void AFirearmBase::HandleBurstFire()
{
	if (BurstBulletCounter == BurstFireBulletCount)
	{
		BurstBulletCounter = 0;
		GetWorldTimerManager().ClearTimer(BurstFireHandle);
		BurstFireHandle.Invalidate();
		return;
	}
	CurrentAmmo-=1;
	BurstBulletCounter+=1;
	HandleWeaponProjectile();
}
void AFirearmBase::HandleWeaponProjectile()
{
	if(!PlayerCamera) return;

	MuzzleLocation = WeaponMesh->GetSocketLocation("Muzzle"); 
	FVector StartPoint = PlayerCamera->GetComponentLocation();
	FVector EndPoint = StartPoint + PlayerCamera->GetForwardVector() * FireDistance;
	if (WeaponFireType == EWeaponFireType::Trace)
	{
		OutHit = DoLineTraceByObject(MuzzleLocation, EndPoint, true,true);
		HandleHitDetection();
	}
	else if (WeaponFireType == EWeaponFireType::Projectile)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = GetOwner()->GetInstigator();
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		const FTransform ProjectileTransform = FTransform(PlayerCamera->GetComponentRotation(),MuzzleLocation);
		AActor* Projectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileClass, ProjectileTransform, SpawnParams);
	}
	HandleRecoil();
}

void AFirearmBase::HandleRecoil()
{
	// random value of pitch yaw that gets added
	BulletsFired +=1;
	float InYaw = FMath::RandRange(RecoilYaw.X,RecoilYaw.Y);
	float InPitch = FMath::RandRange(RecoilPitch.X,RecoilPitch.Y)
	* FMath::GetMappedRangeValueClamped
	(FVector2D(0,MaxAmmo-CurrentAmmo),FVector2D(0,MaxPitchMultiplier),BulletsFired);
	
	// on stop fire event, reset rotation with interpolation based on number of bullets fired
	
	OwningPlayer->AddControllerYawInput(InYaw);
	OwningPlayer->AddControllerPitchInput(-InPitch);
}


void AFirearmBase::HandleHitDetection()
{
	if (WeaponFireType == EWeaponFireType::Projectile) return;
	if (AActor* HitActor = OutHit.GetActor())
	{
		float NewDamage = WeaponDamage;
		APawn* HitPawn = Cast<APawn>(HitActor);
		if (HitPawn)
		{
			if (OutHit.BoneName == FName("head"))
			{
				NewDamage*= CriticalDamageMultiplier;
			}
		}
		UGameplayStatics::ApplyDamage(HitActor,NewDamage,
	GetOwner()->GetInstigatorController(),GetOwner(),DamageTypeClass);
	}
}
FHitResult AFirearmBase::DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug, bool ForDuration, float Duration)
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
	FHitResult Hit;
	UKismetSystemLibrary::LineTraceSingleForObjects
	(this, Start, End, TraceObjectTypes, false, TArray<AActor*>(),
		DebugType, OutHit, true, FColor::Red, FColor::Green, Duration);

	return Hit;
}
