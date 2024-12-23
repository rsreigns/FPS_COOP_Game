// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/MeleeBase.h"

#include "Components/BoxComponent.h"

AMeleeBase::AMeleeBase()
{
	WeaponInfo.WeaponType = EWeaponType::Melee;
	BoxOverlap = CreateDefaultSubobject<UBoxComponent>("Box Overlap");
	BoxOverlap->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BoxOverlap->SetCollisionResponseToAllChannels(ECR_Overlap);
	BoxOverlap->SetupAttachment(GetWeaponMesh());
}

void AMeleeBase::BeginPlay()
{
	Super::BeginPlay();

	
}

void AMeleeBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if ( CachedDataTable )
	{
		MeleeInfo = WeaponData.MeleeInfo;
	}
}


