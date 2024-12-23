// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseAnimInstance.generated.h"

class ABaseCharacter;
class UCharacterMovementComponent;

UCLASS()
class FPSGAME_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Locomotion")
	FVector CharVelocity;

	UPROPERTY(BlueprintReadOnly,Category="Animation|Locomotion")
	float GroundSpeed;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Locomotion")
	float ZVelocity;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Locomotion")
	bool bIsMoving;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Locomotion")
	bool bIsFalling;


	UPROPERTY(BlueprintReadOnly, Category = "Animation|Character")
	ABaseCharacter* OwningCharacter;
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Character")
	UCharacterMovementComponent* OwningCharacterMovement;


	
};
