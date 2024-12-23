// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/FirearmBase.h"
#include "FPSGame/DebugHelper.h"
#include "DrawDebugHelpers.h"

#include "Net/UnrealNetwork.h"


AFirearmBase::AFirearmBase()
{
	/*WeaponType = EWeaponType::Firearm;
	WeaponSlotType = EWeaponSlotType::Primary;*/
	WeaponInfo.WeaponType = EWeaponType::Firearm;
	WeaponInfo.WeaponSlotType = EWeaponSlotType::Primary;
	
}

void AFirearmBase::BeginPlay()
{
	Super::BeginPlay();

	CurrentAmmo = FirearmInfo.MaxAmmo;
	//FirearmInfo = WeaponData.FirearmInfo;
}

void AFirearmBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}
void AFirearmBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (CachedDataTable)
	{
		FirearmInfo = WeaponData.FirearmInfo;
	}
}
void AFirearmBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFirearmBase, CurrentAmmo);
}

//~~~~~~~~~~~~~~~~~~~~~~~
// Handle Player Input
//~~~~~~~~~~~~~~~~~~~~~~~


void AFirearmBase::PlayerPressedInteract(APawn* PlayerPawn)
{
	Super::PlayerPressedInteract(PlayerPawn);

}








