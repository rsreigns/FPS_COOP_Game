// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirearmAttachments.generated.h"

UENUM(BlueprintType)
enum class EFirearmAttachmentType : uint8
{
	None, ADS, Suppressor, Grip
};
UCLASS()
class FPSGAME_API AFirearmAttachments : public AActor
{
	GENERATED_BODY()
	
public:	

	AFirearmAttachments();

#pragma region Components

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category="Components")
	USceneComponent* RootComp;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	class UStaticMeshComponent* AttachmentMesh;

#pragma endregion

#pragma region Properties
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Attachment")
	EFirearmAttachmentType AttachmentType;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Attachment")
	FVector AttachmentOffset;

#pragma endregion
	
#pragma region Overrides
	
protected:

	virtual void BeginPlay() override;
	
#pragma endregion

};
