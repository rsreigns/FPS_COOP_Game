// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/WeaponBase.h"
#include "MeleeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AMeleeBase : public AWeaponBase
{
	GENERATED_BODY()
public:
	AMeleeBase();

#pragma region Components

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	class UBoxComponent* BoxOverlap;
	
#pragma endregion
	
#pragma region Overrides
	
	virtual void StartFireEvent() override;
	virtual void StopFireEvent() override;
	virtual void StartAds() override;

#pragma endregion
};
