// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
#include "InteractionSystem/BaseInteractionActor.h"
#include "WeaponBase.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Firearm, Melee
};
UENUM(BlueprintType)
enum class EWeaponSlotType: uint8
{
	Melee,Primary,Secondary,Throwable
};

UCLASS()
class FPSGAME_API AWeaponBase : public ABaseInteractionActor
{
	GENERATED_BODY()
	
public:	

	AWeaponBase();

#pragma region Components
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* WeaponMesh;

#pragma endregion
#pragma region Overrides
protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	virtual void PlayerPressedInteract(APawn* PlayerPawn)  override;
	virtual void PlayerReleasedInteract(APawn* PlayerPawn)  override;
#pragma endregion

#pragma region Variables

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	EWeaponType WeaponType = EWeaponType::Firearm;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Weapon")
	EWeaponSlotType WeaponSlotType = EWeaponSlotType::Melee;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon")
	USoundBase* HitSound;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Weapon")
	USoundBase* AdsSound;
	
#pragma endregion
	
#pragma region Functions
	
	virtual void StartFireEvent();
	virtual void StopFireEvent();
	virtual void StartAds();

	void EnablePawnCollision(bool bShouldEnable);
	
#pragma endregion
	
#pragma region Getters

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Weapons")
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const { return WeaponMesh;}
	
#pragma endregion

};


