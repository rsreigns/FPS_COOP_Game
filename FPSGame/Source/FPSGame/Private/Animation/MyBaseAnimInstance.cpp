// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/MyBaseAnimInstance.h"
#include "Character/MyCharacter.h"
#include "Net/UnrealNetwork.h"
#include "KismetAnimationLibrary.h"
#include "Components/WeaponComponent.h"

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
		MovementDirection = UKismetAnimationLibrary::CalculateDirection(CharVelocity, OwningCharacter->GetActorRotation());
		
		
		Server_UpdateSpineRotation();
		
		LHIKTransform = PlayerOwningCharacter->GetLhikTransform();


		// Weapon Sway calculation
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


		// Animation states

		bIsCrouching = PlayerOwningCharacter->bIsCrouching;

		bIsSprinting = PlayerOwningCharacter->bIsSprinting;
		
		bIsADS = PlayerOwningCharacter->GetWeaponComponent()->bIsAds;

		WeaponSlot = PlayerOwningCharacter->GetWeaponComponent()->GetEquippedSlot();

		TurnRate = PlayerOwningCharacter->MouseSwayX;


	}

}

void UMyBaseAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMyBaseAnimInstance, SpineRotation);
	
}

/*void UMyBaseAnimInstance::OnRep_SpineRotation()
{
	Server_UpdateSpineRotation();
}*/

void UMyBaseAnimInstance::Server_UpdateSpineRotation_Implementation()
{
	const float ControllerPitch = OwningCharacter->GetControlRotation().Pitch;
	SpineRotation = (ControllerPitch > 180? 360 - ControllerPitch : ControllerPitch * -1) / SpineRotationFactor;
	//UpdateSpineRotation();
}
void UMyBaseAnimInstance::UpdateSpineRotation_Implementation()
{
	const float ControllerPitch = OwningCharacter->GetControlRotation().Pitch;
	SpineRotation = (ControllerPitch > 180? 360 - ControllerPitch : ControllerPitch * -1) / SpineRotationFactor;
}
