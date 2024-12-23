// Fill out your copyright notice in the Description page of Project Settings.


#include "Notifies/Notify_MeleeHit.h"

#include "Character/MyCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/WeaponComponent.h"
#include "Weapons/MeleeBase.h"
#include "Weapons/WeaponBase.h"

void UNotify_MeleeHit::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                                   const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	ToggleCollision(true,MeshComp);
}

void UNotify_MeleeHit::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	ToggleCollision(false,MeshComp);
}

void UNotify_MeleeHit::ToggleCollision(bool bCollisionState,USkeletalMeshComponent* MeshRef)
{
	if (!MeshRef)return;
	AMyCharacter* MyChar = Cast<AMyCharacter>(MeshRef->GetOwner());
	if (!MyChar)return;
	AWeaponBase* WeaponRef = MyChar->GetWeaponComponent()->GetEquippedWeapon();
	
	if (WeaponRef && WeaponRef->WeaponInfo.WeaponType == EWeaponType::Melee)
	{
		if (const AMeleeBase* Melee = Cast<AMeleeBase>(WeaponRef); Melee)
		{
			if (bCollisionState)
			{
				Melee->BoxOverlap->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				return;
			}
			Melee->BoxOverlap->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}
