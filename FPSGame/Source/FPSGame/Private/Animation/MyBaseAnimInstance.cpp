// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/MyBaseAnimInstance.h"
#include "Character/MyCharacter.h"

void UMyBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	if (OwningCharacter)
	{
		PlayerOwningCharacter = Cast<AMyCharacter>(OwningCharacter);
	}
}

void UMyBaseAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
	if (PlayerOwningCharacter)
	{
		DeltaRot = PlayerOwningCharacter->DeltaRotation ;
		bIsPlayerADS = PlayerOwningCharacter->bIsADS;
		LHIKTransform = PlayerOwningCharacter->GetLhikTransform();
		MoveSway = PlayerOwningCharacter->MovementSway;
		MouseXSway = PlayerOwningCharacter->MouseSwayX;
		MouseYSway = PlayerOwningCharacter->MouseSwayY;

		float MovingSway = FMath::GetMappedRangeValueClamped(FVector2D(-1,1),
			FVector2D(-10,10),MoveSway);
		
		SwayRotation.Pitch = FMath::FInterpTo(SwayRotation.Pitch, MovingSway,DeltaSeconds, 5.0f);
		
		float MouseX = FMath::GetMappedRangeValueClamped(FVector2D(-1,1),
			FVector2D(-10,10),MouseXSway);
		
		SwayRotation.Yaw = FMath::FInterpTo(SwayRotation.Yaw,MouseX,DeltaSeconds,5.0f);
		
		float MouseY = FMath::GetMappedRangeValueClamped(FVector2D(1,-1),
			FVector2D(-10,10),MouseYSway);

		SwayRotation.Roll = FMath::FInterpTo(SwayRotation.Roll,MouseY,DeltaSeconds,5.0f);
	}

}
