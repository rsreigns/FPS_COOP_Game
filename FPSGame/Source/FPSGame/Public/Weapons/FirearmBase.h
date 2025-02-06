// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/WeaponBase.h"
#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"

#include "FirearmBase.generated.h"

class AFirearmAttachments;
class AProjectileBase;






UCLASS()
class FPSGAME_API AFirearmBase : public AWeaponBase
{
	GENERATED_BODY()
	
public:	

	AFirearmBase();


protected:

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;
	
	virtual void PlayerPressedInteract(APawn* PlayerPawn)  override;

	virtual void OnConstruction(const FTransform& Transform) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	FFirearmInfo FirearmInfo;
	
	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	TArray<AFirearmAttachments*> FireArmAttachments;

	UPROPERTY(Replicated)
	int32 CurrentAmmo ;

	
};
	

