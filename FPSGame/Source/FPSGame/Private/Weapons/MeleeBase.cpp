// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/MeleeBase.h"

#include "Components/BoxComponent.h"

AMeleeBase::AMeleeBase()
{
	WeaponType = EWeaponType::Melee;
	BoxOverlap = CreateDefaultSubobject<UBoxComponent>("Box Overlap");
	BoxOverlap->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BoxOverlap->SetCollisionResponseToAllChannels(ECR_Overlap);
}

void AMeleeBase::StartFireEvent()
{
	Super::StartFireEvent();
}

void AMeleeBase::StopFireEvent()
{
	Super::StopFireEvent();
}

void AMeleeBase::StartAds()
{
	Super::StartAds();
}
