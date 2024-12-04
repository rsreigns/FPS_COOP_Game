// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem/BaseInteractionActor.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "Character/MyCharacter.h"
#include "Components/SkeletalMeshComponent.h"

#include "FPSGame/DebugHelper.h"

// Sets default values
ABaseInteractionActor::ABaseInteractionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereOverlapComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereOverlapComponent"));
	SphereOverlapComponent->SetGenerateOverlapEvents(true);
	SphereOverlapComponent->OnComponentBeginOverlap.AddUniqueDynamic(this,&ThisClass::OnBeginOverlap);
	SphereOverlapComponent->OnComponentEndOverlap.AddUniqueDynamic(this,&ThisClass::OnEndOverlap);
	SphereOverlapComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SphereOverlapComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	SphereOverlapComponent->SetSphereRadius(120.f, true);
	SphereOverlapComponent->SetupAttachment(RootComponent);

	/*ActorMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ActorMesh");
	ActorMesh->SetupAttachment(SphereOverlapComponent);*/

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
}


void ABaseInteractionActor::BeginPlay()
{
	Super::BeginPlay();
	if (WidgetComponent && WidgetComponent->GetWidget())
	{
		WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void ABaseInteractionActor::PlayerPressedInteract(APawn* PlayerPawn) 
{
	INativeInteractionInterface::PlayerPressedInteract(PlayerPawn);
	if (InteractionType == EInteractionType::Equipment)
	{
		if (EquipmentType == EEquipmentType::Weapon)
		{
			/*if (AMyCharacter* MyCharacter = Cast<AMyCharacter>(PlayerPawn))
			{
				/*MyCharacter->EquipWeapon(WeaponClass);
				Destroy();#1#
			}*/
		}
	}
}

void ABaseInteractionActor::PlayerReleasedInteract(APawn* PlayerPawn)
{
	INativeInteractionInterface::PlayerReleasedInteract(PlayerPawn);
}



// Called every frame
void ABaseInteractionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseInteractionActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APawn>(OtherActor))
	{
		if (WidgetComponent && WidgetComponent->GetWidget())
		{
			WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
	}
}

void ABaseInteractionActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		if (Cast<APawn>(OtherActor))
		{
			if (WidgetComponent && WidgetComponent->GetWidget())
			{
				WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::Collapsed);
			}
			//OverlappingActors.Remove(OtherActor);
		}
	}

}

