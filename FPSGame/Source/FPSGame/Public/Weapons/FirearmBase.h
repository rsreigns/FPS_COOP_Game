// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/WeaponBase.h"

#include "FirearmBase.generated.h"

class AFirearmAttachments;
class AProjectileBase;
class  USkeletalMeshComponent;
class UCameraComponent;
class AMyCharacter;
struct FHitResult;
struct FTimerHandle;

UENUM(BlueprintType)
enum class EWeaponFiringMode : uint8
{
	Single,Burst,Automatic
};
UENUM(BlueprintType)
enum class EWeaponFireType : uint8
{
	Trace,Projectile
};

UCLASS()
class FPSGAME_API AFirearmBase : public AWeaponBase
{
	GENERATED_BODY()
	
public:	

	AFirearmBase();

protected:

	virtual void BeginPlay() override;
	virtual void Tick( float DeltaSeconds ) override;
#pragma region Components
	
	UPROPERTY(BlueprintReadOnly)
	UCameraComponent* PlayerCamera;

#pragma endregion


#pragma region Properties

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TArray <TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	EWeaponFiringMode WeaponFiringMode = EWeaponFiringMode::Automatic;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	EWeaponFireType WeaponFireType = EWeaponFireType::Trace;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon",
		meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst",EditConditionHides =true))
	int32 BurstFireBulletCount =3;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon",
		meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst",EditConditionHides =true))
	float BurstFireDelay = 0.1f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon",
	meta = (EditCondition = "WeaponFireType == EWeaponFireType::Projectile",EditConditionHides =true))
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float FireRate = 0.25f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float FireDistance = 7000.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	int32 MaxAmmo = 20;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float ReloadTime =3.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon",
		meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	float WeaponDamage = 25.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon",
		meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	float CriticalDamageMultiplier = 2.5f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon",
		meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	TSubclassOf<UDamageType> DamageTypeClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FVector2D RecoilYaw ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FVector2D RecoilPitch ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float MaxPitchMultiplier = 1.5;
	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	TArray<AFirearmAttachments*> FireArmAttachments;
	
	int32 BulletsFired = 0;
	FRotator PreRecoilRotation = FRotator(0.0f);
	bool bIsResettingRecoilRotation = false;
	
	int32 CurrentAmmo ;
	FTimerHandle ReloadTimerHandle;
	
	FTimerHandle FireTimerHandle;
	FTimerHandle BurstFireHandle;
	
	float LastFiredTime;
	float FirstFireDelay;
	int32 BurstBulletCounter = 0;
	
	FHitResult OutHit;
	
	UPROPERTY()
	AMyCharacter* OwningPlayer ;

	UPROPERTY()
	FVector MuzzleLocation;

	//UPROPERTY()
	//FVector ADSLocation;

	//UPROPERTY()
	//FVector IronSightLocation;
#pragma endregion

protected:
#pragma region CoreFunctions

	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug = false, bool ForDuration = false, float Duration= 2.f);
	
public:	

	virtual void StartFireEvent() override;
	UFUNCTION(Server,Reliable)
	void HandleFire();
	virtual void StopFireEvent() override;
	void HandleBurstFire();
	
	UFUNCTION(Server,Reliable)
	void ReloadWeapon();
	bool GetIsReloading();

	void HandleRecoil();

	void HandleWeaponProjectile();


	void HandleHitDetection();



#pragma endregion

#pragma region Getters

	UFUNCTION(BlueprintPure,BlueprintCallable,Category ="Getter")
	FORCEINLINE UCameraComponent* GetCameraComponent() const { return PlayerCamera; }
	
	UFUNCTION(BlueprintPure,BlueprintCallable,Category ="Getter")
	FORCEINLINE FVector GetADSLocation() const { return GetWeaponMesh()->GetSocketLocation("ADS"); }
	
#pragma endregion
};
