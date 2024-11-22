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
		LHIKTransform = PlayerOwningCharacter->GetLeftHandIK();
	}

}
