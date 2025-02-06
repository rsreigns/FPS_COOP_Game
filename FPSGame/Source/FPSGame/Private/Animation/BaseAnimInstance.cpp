// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/BaseAnimInstance.h"

#include "ObjectTools.h"
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

void UBaseAnimInstance::NativeThreadSafeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	
	if (OwningCharacterMovement && OwningCharacter)
	{
		
		CharVelocity = OwningCharacter->GetVelocity();
		
		bIsFalling = OwningCharacterMovement->IsFalling();
		
		GroundSpeed2D = OwningCharacter->GetVelocity().Size2D();

		GroundSpeed3D = CalculateMovementSpeed3D();
		
		bIsMoving = GroundSpeed3D > 0.0f;
		
		ZVelocity = OwningCharacter->GetVelocity().Z;
	}
}

float UBaseAnimInstance::CalculateMovementSpeed3D()
{
	const float ForwardSpeed = FVector::DotProduct(OwningCharacter->GetActorForwardVector(),CharVelocity);
	
	const float RightSpeed = FVector::DotProduct(OwningCharacter->GetActorRightVector(),CharVelocity);
	
	
	return FMath::Sqrt(FMath::Square(ForwardSpeed) + FMath::Square(RightSpeed));
}
