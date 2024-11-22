// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionSystem/BaseInteractionActor.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"

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
	SphereOverlapComponent->SetSphereRadius(120.f, true);

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	WidgetComponent->SetupAttachment(SphereOverlapComponent);
	WidgetComponent->SetDrawAtDesiredSize(true);
	WidgetComponent->SetDrawSize(FVector2D(32.f, 32.f));
	WidgetComponent->SetWidgetClass(InteractionWidget);

}


void ABaseInteractionActor::BeginPlay()
{
	Super::BeginPlay();
	if (!Cast<APawn>(GetOwner()))
	{
		SphereOverlapComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	}
	WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::Collapsed);
}

void ABaseInteractionActor::PlayerPressedInteract() const
{
	DEBUG::PrintString("Press event recieved");
}

void ABaseInteractionActor::PlayerReleasedInteract() const
{
	DEBUG::PrintString("Release event recieved");
}

// Called every frame
void ABaseInteractionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseInteractionActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void ABaseInteractionActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	WidgetComponent->GetWidget()->SetVisibility(ESlateVisibility::Collapsed);
}

