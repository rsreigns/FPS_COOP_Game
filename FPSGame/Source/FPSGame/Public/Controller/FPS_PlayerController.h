// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPS_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPS_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void UpdateRotation(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	static FRotator GetGravityRelativeRotation(const FRotator Rotation, const FVector GravityDirection);

	UFUNCTION(BlueprintPure)
	static FRotator GetGravityWorldRotation(FRotator Rotation, FVector GravityDirection);

private:
	FVector LastFrameGravity = FVector::ZeroVector;
};
