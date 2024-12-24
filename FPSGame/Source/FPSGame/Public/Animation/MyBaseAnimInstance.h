// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/BaseAnimInstance.h"
#include "DataClasses/EnumTypes.h"
#include "MyBaseAnimInstance.generated.h"

class AMyCharacter;

UCLASS()
class FPSGAME_API UMyBaseAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()

protected:
	
	virtual void NativeInitializeAnimation() override;
	
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	
	UPROPERTY(BlueprintReadOnly,Category = "Animation|Player")
	AMyCharacter* PlayerOwningCharacter;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	float MovementDirection;

	UPROPERTY(Replicated,BlueprintReadOnly, Category = "Animation|Player")
	float SpineRotation;

	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	float SpineRotationFactor = 3.f;
	

	
	UPROPERTY(Replicated,BlueprintReadOnly, Category = "Animation|Player")
	FTransform LHIKTransform;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	FRotator SwayRotation;


	// Animation Type

	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	EWeaponSlotType WeaponSlot = EWeaponSlotType::Unarmed;

	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	float TurnRate;

	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	bool bIsADS = false;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	bool bIsCrouching = false;

	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	bool bIsSprinting = false;



	
	
	float MoveSway;
	float MouseXSway;
	float MouseYSway;
	

	/*UFUNCTION()
	void OnRep_SpineRotation();*/

	UFUNCTION(Server,Unreliable)
	void Server_UpdateSpineRotation();

	UFUNCTION(NetMulticast, Unreliable)
	void UpdateSpineRotation();

};
