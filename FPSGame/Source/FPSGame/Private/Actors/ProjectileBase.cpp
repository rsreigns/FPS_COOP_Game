// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ProjectileBase.h"

#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectileBase::AProjectileBase()
{

	PrimaryActorTick.bCanEverTick = true;
	ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>("ProjectileMesh");
	RootComponent = ProjectileMesh;
	BoxComp = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComp->SetupAttachment(RootComponent);
}

void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();
	
}

