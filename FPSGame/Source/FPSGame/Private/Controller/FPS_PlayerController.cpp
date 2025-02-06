// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/FPS_PlayerController.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void AFPS_PlayerController::UpdateRotation(float DeltaTime)
{
	Super::UpdateRotation(DeltaTime);

	FVector GravityDirection = FVector::DownVector;
	
	if (const ACharacter* TempChar = Cast<ACharacter>(GetPawn()))
	{
		if (const UCharacterMovementComponent* TempMoveComp = TempChar->GetCharacterMovement(); TempMoveComp)
		{
			GravityDirection = TempMoveComp->GetGravityDirection();
		}
	}
	
	FRotator ViewRotation = GetControlRotation();

	if (!LastFrameGravity.Equals(FVector::ZeroVector))
	{
		const FQuat DeltaGravityRotation = FQuat::FindBetweenNormals(LastFrameGravity, GravityDirection);
		const FQuat WarpedCameraRotation = DeltaGravityRotation * FQuat(ViewRotation);

		ViewRotation = WarpedCameraRotation.Rotator();
	}

	LastFrameGravity = GravityDirection;

	ViewRotation = GetGravityRelativeRotation(ViewRotation, GravityDirection);

	FRotator DeltaRot(RotationInput);

	if (PlayerCameraManager)
	{
		ACharacter* TempPlayerChar = Cast<ACharacter>(GetPawn());

		PlayerCameraManager->ProcessViewRotation(DeltaTime, ViewRotation, DeltaRot);

		ViewRotation.Roll = 0;

		SetControlRotation(GetGravityWorldRotation(ViewRotation, GravityDirection));
	}
	
	if (APawn* TempPawn = GetPawnOrSpectator();TempPawn)
	{
		TempPawn->FaceRotation(ViewRotation, DeltaTime);
	}
}

FRotator AFPS_PlayerController::GetGravityRelativeRotation(const FRotator Rotation, const FVector GravityDirection)
{
	if ( !GravityDirection.Equals(FVector::DownVector))
	{
		const FQuat GravityRotation = FQuat::FindBetweenNormals(GravityDirection, FVector::DownVector);
		return (GravityRotation * Rotation.Quaternion()).Rotator();
	}
	return Rotation;
}

FRotator AFPS_PlayerController::GetGravityWorldRotation(const FRotator Rotation, const FVector GravityDirection)
{
	if (!GravityDirection.Equals(FVector::DownVector))
	{
		const FQuat GravityRotation = FQuat::FindBetweenNormals(FVector::DownVector, GravityDirection);
		return GravityRotation.Rotator();
	}
	return Rotation;
}
