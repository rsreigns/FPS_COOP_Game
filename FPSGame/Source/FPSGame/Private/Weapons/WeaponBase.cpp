
#include "Weapons/WeaponBase.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "FPSGame/DebugHelper.h"


AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
	WeaponMesh->SetupAttachment(WidgetSwitcherOverlap);
	WeaponMesh->SetCollisionObjectType(ECC_PhysicsBody);
	
	WidgetComponent->SetupAttachment(WeaponMesh);

	InteractionHelper->SetupAttachment(WeaponMesh);
	
	EquipmentType = EEquipmentType::Weapon;

}


void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	if (APawn* Pawn = Cast<APawn>(GetOwner()))
	{
		EnablePawnCollision(false);
	}
	ReceiveBeginPlay();
	
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
		SetActorEnableCollision(true);
		
		/*WeaponMesh->SetCollisionObjectType(ECC_PhysicsBody);
		WeaponMesh->SetSimulatePhysics(true);
		WeaponMesh->SetAllBodiesSimulatePhysics(true);
		WeaponMesh->SetAllBodiesBelowSimulatePhysics(WeaponMesh->GetBoneName(0), true);*/
		
		WidgetSwitcherOverlap->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
		InteractionHelper->SetCollisionResponseToChannel(ECC_GameTraceChannel2,ECR_Block);
		
		DEBUG::PrintString("Enabled collision on weapon");
		
		return;
	}

	SetActorEnableCollision(false);
	
	/*WeaponMesh->SetCollisionObjectType(ECC_WorldStatic);
	WeaponMesh->SetSimulatePhysics(false);
	WeaponMesh->SetAllBodiesSimulatePhysics(false);
	WeaponMesh->SetAllBodiesBelowSimulatePhysics(WeaponMesh->GetBoneName(0), false);*/
	
	InteractionHelper->SetCollisionResponseToAllChannels(ECR_Ignore);
	WidgetSwitcherOverlap->SetCollisionResponseToAllChannels(ECR_Ignore);
	
}

