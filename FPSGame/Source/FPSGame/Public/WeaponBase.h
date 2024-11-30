// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem/BaseInteractionActor.h"
#include "WeaponBase.generated.h"

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
class FPSGAME_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	

	AWeaponBase();

protected:

	virtual void BeginPlay() override;
	virtual void Tick( float DeltaSeconds ) override;
#pragma region Components

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Components")
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(BlueprintReadOnly)
	UCameraComponent* PlayerCamera;

#pragma endregion


#pragma region CoreVariables

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	TArray <TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	EWeaponFiringMode WeaponFiringMode = EWeaponFiringMode::Automatic;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	EWeaponFireType WeaponFireType = EWeaponFireType::Trace;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon|Core",
		meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst"))
	int32 BurstFireBulletCount =3;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon|Core",
		meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst"))
	float BurstFireDelay = 0.1f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon|Core",
	meta = (EditCondition = "WeaponFireType == EWeaponFireType::Projectile"))
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float FireRate = 0.25f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float FireDistance = 7000.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	int32 MaxAmmo = 20;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float ReloadTime =3.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float WeaponDamage = 25.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float CriticalDamageMultiplier = 2.5f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	TSubclassOf<UDamageType> DamageTypeClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	FVector2D RecoilYaw ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	FVector2D RecoilPitch ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Core")
	float MaxPitchMultiplier = 1.5;
	
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

	void StartFireEvent();
	UFUNCTION(Server,Reliable)
	void HandleFire();
	void StopFireEvent();
	void HandleBurstFire();
	
	UFUNCTION(Server,Reliable)
	void ReloadWeapon();
	bool GetIsReloading();

	void HandleRecoil();

	void HandleWeaponProjectile();


	void HandleHitDetection();

	FORCEINLINE UCameraComponent* GetCameraComponent() { return PlayerCamera; }
	FORCEINLINE FVector GetADSLocation() { return WeaponMesh->GetSocketLocation("ADS"); }
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() { return WeaponMesh; }
#pragma endregion
};
