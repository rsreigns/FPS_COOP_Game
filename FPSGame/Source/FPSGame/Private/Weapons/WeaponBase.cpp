
#include "Weapons/WeaponBase.h"


AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
}


void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}


void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::StartFireEvent()
{
}

void AWeaponBase::StopFireEvent()
{
}

void AWeaponBase::StartAds()
{
}

