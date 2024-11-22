// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/BaseAnimInstance.h"
#include "Character/BaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	OwningCharacter = Cast<ABaseCharacter>(TryGetPawnOwner());
	if (OwningCharacter)
	{
		OwningCharacterMovement = Cast<UCharacterMovementComponent>(OwningCharacter->GetCharacterMovement());
	}
}

void UBaseAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	if (OwningCharacterMovement && OwningCharacter)
	{
		bIsFalling = OwningCharacterMovement->IsFalling();
		GroundSpeed = OwningCharacter->GetVelocity().Size2D();
		bIsMoving = GroundSpeed > 0.0f;
		ZVelocity = OwningCharacter->GetVelocity().Z;
	}
}
