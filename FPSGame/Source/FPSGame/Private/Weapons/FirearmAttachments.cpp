// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/FirearmAttachments.h"


AFirearmAttachments::AFirearmAttachments()
{

	PrimaryActorTick.bCanEverTick = false;
	AttachmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttachmentMesh"));
	RootComponent = AttachmentMesh;
}


void AFirearmAttachments::BeginPlay()
{
	Super::BeginPlay();
	
}


