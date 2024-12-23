// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"  
#include "UObject/Class.h"   
#include "ScalableFloat.h"
#include "DataClasses/EnumTypes.h"
#include "StructTypesClass.generated.h"






/* ============================================  //                   \\ =========================================== */  
/* --------------------------------------->>>>> ||    Impact Effects  || <<<<--------------------------------------- */
/* ============================================ \\                   //  =========================================== */





USTRUCT(BlueprintType)
struct FImpactEffects
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* ImpactParticle;
};






/* ====================================================  //                   \\ ==================================================== */  
/* ----------------------------------------------->>>>> ||     Weapon Info    || <<<<------------------------------------------------ */
/* ==================================================== \\                   //  ==================================================== */


class AProjectileBase;

USTRUCT(BlueprintType,meta = (DisplayName = "Weapon Info"))
struct FWeaponInfo : public FTableRowBase
{
	GENERATED_BODY()

	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Enums ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	EWeaponType WeaponType = EWeaponType::Firearm;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon")
	EWeaponSlotType WeaponSlotType = EWeaponSlotType::Melee;

	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Effects ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon|SFX")
	USoundBase* HitSound;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon|SFX")
	USoundBase* AdsSound;

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Default ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	USkeletalMesh* WeaponMesh;
	
};






/* ====================================================  //                   \\ ==================================================== */  
/* ----------------------------------------------->>>>> ||     Firearm Info   || <<<<------------------------------------------------ */
/* ==================================================== \\                   //  ==================================================== */







USTRUCT(BlueprintType,meta = (DisplayName = "Firearm Info"))
struct FFirearmInfo : public FTableRowBase
{
	GENERATED_BODY()

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Enums ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	EWeaponFiringMode WeaponFiringMode = EWeaponFiringMode::Automatic;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	EWeaponFireType WeaponFireType = EWeaponFireType::Trace;
	
	
	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Default ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon", meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst",EditConditionHides =true))
	int32 BurstFireBulletCount =3;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon", meta = (EditCondition = "WeaponFiringMode == EWeaponFiringMode::Burst",EditConditionHides =true))
	float BurstFireDelay = 0.1f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon", meta = (EditCondition = "WeaponFireType == EWeaponFireType::Projectile",EditConditionHides =true))
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float FireRate = 0.25f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float FireDistance = 7000.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	int32 MaxAmmo = 20;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float ReloadTime =3.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	float WeaponDamage = 25.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	float CriticalDamageMultiplier = 2.5f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon", meta = (EditCondition = "WeaponFireType == EWeaponFireType::Trace",EditConditionHides =true))
	TSubclassOf<UDamageType> DamageTypeClass;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FVector2D RecoilYaw = FVector2D(1,1);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FVector2D RecoilPitch = FVector2D(-1,1);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float MaxPitchMultiplier = 1.5;

	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Effects ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon|VFX")
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon|Effects")
	TMap<TEnumAsByte<ECollisionChannel>, FImpactEffects> CollisionImpactEffects;
	
};





/* ====================================================  //                   \\ ==================================================== */  
/* ----------------------------------------------->>>>> ||     Melee Info     || <<<<------------------------------------------------ */
/* ==================================================== \\                   //  ==================================================== */







USTRUCT(BlueprintType, meta = (DisplayName = "Melee Info"))
struct FMeleeInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Melee")
	UAnimMontage* HeavyAttackMontage;

	
};

USTRUCT(BlueprintType, meta = (DisplayName = "Weapon Data"))
struct FWeaponData : public FTableRowBase
{
	GENERATED_BODY()

private:
	
	UPROPERTY(EditAnywhere, meta = (DisplayName = "Weapon Type"))
	EWeaponType WeaponType = EWeaponType::Melee;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWeaponInfo WeaponInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "WeaponType == EWeaponType::Firearm" , EditConditionHides =true))
	FFirearmInfo FirearmInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "WeaponType == EWeaponType::Melee" , EditConditionHides =true))
	FMeleeInfo MeleeInfo;


	

	EWeaponType GetWeaponType() const { return WeaponType; }
	
	void SetWeaponType(const EWeaponType NewType)
	{
		WeaponType = NewType;
		
		WeaponInfo.WeaponType = NewType;
	}
};


