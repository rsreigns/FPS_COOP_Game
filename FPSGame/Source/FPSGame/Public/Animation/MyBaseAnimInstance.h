// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/BaseAnimInstance.h"
#include "MyBaseAnimInstance.generated.h"

class AMyCharacter;

UCLASS()
class FPSGAME_API UMyBaseAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(BlueprintReadOnly,Category = "Animation|Player")
	AMyCharacter* PlayerOwningCharacter;


	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	FRotator DeltaRot;
	UPROPERTY(BlueprintReadOnly, Category = "Animation|Player")
	bool bIsPlayerADS = false;

};
