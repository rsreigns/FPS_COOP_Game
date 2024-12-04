
#include "Weapons/WeaponBase.h"

#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"


AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
	WeaponMesh->SetupAttachment(SphereOverlapComponent);
	EquipmentType = EEquipmentType::Weapon;

	WidgetComponent->SetupAttachment(WeaponMesh);
}


void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	if (APawn* Pawn = Cast<APawn>(GetOwner()))
	{
		EnablePawnCollision(false);
	}
}


void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponBase::PlayerPressedInteract(APawn* PlayerPawn)
{
	Super::PlayerPressedInteract(PlayerPawn);
	EnablePawnCollision(false);
}

void AWeaponBase::PlayerReleasedInteract(APawn* PlayerPawn)
{
	Super::PlayerReleasedInteract(PlayerPawn);
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

void AWeaponBase::EnablePawnCollision(bool bShouldEnable)
{
	if (bShouldEnable)
	{
		GetWeaponMesh()->SetSimulatePhysics(true);
		SphereOverlapComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
		return;
	}
	GetWeaponMesh()->SetSimulatePhysics(false);
	SphereOverlapComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
}

