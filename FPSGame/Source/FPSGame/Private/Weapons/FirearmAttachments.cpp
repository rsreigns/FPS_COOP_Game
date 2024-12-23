// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/FirearmAttachments.h"


AFirearmAttachments::AFirearmAttachments()
{

	PrimaryActorTick.bCanEverTick = false;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;
	AttachmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttachmentMesh"));
	AttachmentMesh->SetupAttachment(RootComp);
}


void AFirearmAttachments::BeginPlay()
{
	Super::BeginPlay();
	
}


