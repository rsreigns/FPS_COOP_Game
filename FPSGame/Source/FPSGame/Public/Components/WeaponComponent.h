// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "WeaponComponent.generated.h"


class AMeleeBase;
class AFirearmBase;
class AWeaponBase;
class AMyCharacter;
class UCameraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSGAME_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UWeaponComponent();


	

	
	/* ====================================================  //                   \\ ==================================================== */  
	/* ----------------------------------------------->>>>> ||     Overrides      || <<<<------------------------------------------------ */
	/* ==================================================== \\                   //  ==================================================== */


	

	
protected:
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;








	/* ====================================================  //                   \\ ==================================================== */  
	/* ----------------------------------------------->>>>> ||     Variables      || <<<<------------------------------------------------ */
	/* ==================================================== \\                   //  ==================================================== */




	

protected:

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Editable Variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon|Trace")
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Weapon|Handle")
	float WeaponThrowForce = 500.f;

	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Read-Only Variables ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

public:
	
	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	UCameraComponent* PlayerCamera;

	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	AMyCharacter* OwningPlayer;
	
protected:

	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	AWeaponBase* EquippedWeapon;

	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	AFirearmBase* PrimaryWeapon;

	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	AFirearmBase* SecondaryWeapon;

	UPROPERTY(Replicated,BlueprintReadOnly,Category="Weapon|References")
	AMeleeBase* MeleeWeapon;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|References")
	EWeaponSlotType EquippedWeaponSlot;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|References")
	EWeaponType EquippedWeaponType;
	

	UPROPERTY(BlueprintReadOnly,Category="Weapon|Data")
	FWeaponInfo WeaponInfo;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|Data")
	FFirearmInfo FirearmInfo;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|Data")
	FMeleeInfo MeleeInfo;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|Proejctile")
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(BlueprintReadOnly,Category="Weapon|Projectile")
	TSubclassOf<UDamageType> DamageTypeClass;
	

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Trace")
	FHitResult OutHit;

public:
	
	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Input")
	bool bIsAds = false;

protected:

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	FRotator PreRecoilRotation;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	float FirstFireDelay;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	float LastFiredTime;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	int32 BulletsFired = 0;
	
	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	bool bIsResettingRecoilRotation = false;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	int32 CurrentAmmo ;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Firing")
	int32 BurstBulletCounter = 0;
	

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Timer")
	FTimerHandle ReloadTimerHandle;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Timer")
	FTimerHandle FireTimerHandle;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon|Timer")
	FTimerHandle BurstFireHandle;
	
	
	

	

	

	/* ====================================================  //                   \\ ==================================================== */  
	/* ----------------------------------------------->>>>> ||     Functions      || <<<<------------------------------------------------ */
	/* ==================================================== \\                   //  ==================================================== */
	
	

	

	
public:

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Weapon System ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	

	UFUNCTION(NetMulticast,Unreliable)
	void StartFireEvent() ;

	UFUNCTION(NetMulticast,Unreliable)
	void StopFireEvent() ;

	void HandleAds();

protected:
	
	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Firearm System ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	
	UFUNCTION(NetMulticast,Reliable)
	void HandleFire();
	
	UFUNCTION(NetMulticast,Reliable)
	void HandleBurstFire();
	
	UFUNCTION(NetMulticast,Reliable)
	void HandleWeaponProjectile();
	
	UFUNCTION(NetMulticast,Reliable)
	void HandleHitDetection();
	
	UFUNCTION(NetMulticast,Reliable)
	void WeaponEffects();

	UFUNCTION(NetMulticast,Reliable)
	void ReloadWeapon();
	
	
	UFUNCTION(NetMulticast,Reliable)
	void HandleRecoil();
	

	UFUNCTION(NetMulticast,Unreliable)
	void DoLineTraceByObject(const FVector Start, const FVector End, bool ShowDebug = false, bool ForDuration = false, float Duration= 2.f);

	

	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Equipment System ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

	
public:

	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void PickupWeapon(AWeaponBase* ToPickWeapon);
	
	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void ThrowWeaponFromSlot(EWeaponSlotType WeaponSlotToThrow);

	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void SwitchWeaponSlot(EWeaponSlotType SlotType);

protected:
	
	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void TrySwitchWeapon(AWeaponBase* WeaponToEquip);

	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void AttachToSocket(AWeaponBase* WeaponToAttach,bool bAttachToRestSocket = false);
	
	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void DetachWeaponAtSlot(EWeaponSlotType WeaponSlot);

	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void SetWeaponAtSlot(AWeaponBase* WeaponToSet);

	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void SetWeaponInfoByWeapon(AWeaponBase* InWeapon);
	
	UFUNCTION(NetMulticast,UnReliable,Category="Gameplay")
	void ClearWeaponSlot(EWeaponSlotType SlotType);
	
	

	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Getters ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

public:
	
	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	bool GetIsReloading();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	FImpactEffects GetImpactEffects();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	FName GetSocketNameForWeapon(EWeaponSlotType WeaponSlot,bool bNeedRestSocket = false);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	AWeaponBase* GetWeaponFromSlotType(EWeaponSlotType WeaponSlot);


	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	FORCEINLINE EWeaponSlotType GetEquippedSlot() const { return EquippedWeaponSlot;}

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	FORCEINLINE EWeaponType GetEquippedWeaponType() const { return EquippedWeaponType;}

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Getters")
	FORCEINLINE AWeaponBase* GetEquippedWeapon() const { return EquippedWeapon;}

	

	
		
};
