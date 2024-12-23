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


protected:
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;


public:
	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	class UBoxComponent* BoxOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="MeleeBase")
	FMeleeInfo MeleeInfo;
	


};
