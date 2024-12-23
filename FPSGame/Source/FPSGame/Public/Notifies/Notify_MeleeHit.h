// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Notify_MeleeHit.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API UNotify_MeleeHit : public UAnimNotifyState
{
	GENERATED_BODY()

#pragma region Overrides
protected:

	virtual void NotifyBegin(USkeletalMeshComponent * MeshComp,
		UAnimSequenceBase * Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	
	virtual void NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation,
		const FAnimNotifyEventReference& EventReference) override;
	
#pragma endregion

#pragma region Functions

	void ToggleCollision(bool bCollisionState,USkeletalMeshComponent* MeshRef);

#pragma endregion
};
