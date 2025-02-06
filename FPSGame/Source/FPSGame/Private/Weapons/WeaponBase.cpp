
#include "Weapons/WeaponBase.h"

#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "FPSGame/DebugHelper.h"
#include "Net/UnrealNetwork.h"

#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "UObject/ConstructorHelpers.h"

AWeaponBase::AWeaponBase()
{
	
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
	WeaponMesh->SetupAttachment(WidgetSwitcherOverlap);
	WeaponMesh->SetCollisionObjectType(ECC_PhysicsBody);
	
	WidgetComponent->SetupAttachment(WeaponMesh);

	InteractionHelper->SetupAttachment(WeaponMesh);
	
	EquipmentType = EEquipmentType::Weapon;

	WeaponMesh->SetIsReplicated(true);

	if (WeaponInfo.WeaponMesh)
	{
		WeaponMesh->SetSkeletalMesh(WeaponInfo.WeaponMesh);
	}
	
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableFinder(TEXT("/Game/MyFiles/WeaponSystem/Data/DT_WeaponBase.DT_WeaponBase"));
	if (DataTableFinder.Succeeded())
	{
		CachedDataTable = DataTableFinder.Object;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load data table!"));
	}

	
}

void AWeaponBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	UpdateWeapon();


	
}

void AWeaponBase::UpdateWeapon()
{
	if (CachedDataTable)
	{
		const FWeaponData* Row = CachedDataTable->FindRow<FWeaponData>(*RowName, TEXT("GetRowByName"), true);
		if (!Row)
		{
			UE_LOG(LogTemp, Warning, TEXT("Row not found"));
			return;
		}
		WeaponData = *Row;

		WeaponInfo = WeaponData.WeaponInfo;

		if (WeaponInfo.WeaponMesh)
		{
			WeaponMesh->SetSkeletalMeshAsset(WeaponInfo.WeaponMesh);
		}
	}
}


void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateWeapon();
}




void AWeaponBase::EnablePawnCollision_Implementation(const bool bShouldEnable)
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

