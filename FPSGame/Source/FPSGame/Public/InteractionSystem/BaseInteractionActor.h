// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "BaseInteractionActor.generated.h"

class UWidgetComponent;
class UUserWidget;
class USphereComponent;
class UBoxComponent;
class AWeaponBase;

UENUM(BlueprintType)
enum class EInteractionType : uint8
{
	Equipment, Trigger
};
UENUM(BlueprintType)
enum class EEquipmentType : uint8
{
	Weapon, InventoryItem
};

UCLASS()
class FPSGAME_API ABaseInteractionActor : public AActor, public INativeInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractionActor();

protected:
#pragma region Components

	/*UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category="Interaction|Components")
	USkeletalMeshComponent* ActorMesh;*/
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Interaction|Components")
	USphereComponent* WidgetSwitcherOverlap;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,  Category = "Interaction|Components")
	UWidgetComponent* WidgetComponent;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Interaction|Components")
	UBoxComponent* InteractionHelper;



#pragma endregion

#pragma region Overrides

	virtual void BeginPlay() override;
	virtual void PlayerPressedInteract(APawn* PlayerPawn)  override;
	virtual void PlayerReleasedInteract(APawn* PlayerPawn)  override;

public:
	virtual void Tick(float DeltaTime) override;

#pragma endregion

#pragma region Variables 

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Interaction")
	EInteractionType InteractionType = EInteractionType::Trigger;
	
	UPROPERTY(BlueprintReadOnly, Category = "Interaction",
		meta = (EditCondition = "InteractionType == EInteractionType::Equipment ",EditConditionHides =true))
	EEquipmentType EquipmentType = EEquipmentType::InventoryItem;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction",
		meta = (EditCondition =
			"EquipmentType == EEquipmentType::Weapon && InteractionType == EInteractionType::Equipment ",
			EditConditionHides =true))
	TSubclassOf<AWeaponBase> WeaponClass;

	/*UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	TArray<AActor*> OverlappingActors;*/
	
#pragma endregion

#pragma region Functions

protected:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

#pragma endregion



};
