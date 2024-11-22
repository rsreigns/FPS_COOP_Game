// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "BaseInteractionActor.generated.h"

class UWidgetComponent;
class UUserWidget;
class USphereComponent;

UCLASS()
class FPSGAME_API ABaseInteractionActor : public AActor, public INativeInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractionActor();

protected:
#pragma region Components

	UPROPERTY(EditDefaultsOnly,Category = "CoreGameplay")
	USphereComponent* SphereOverlapComponent;

	UPROPERTY(EditDefaultsOnly, Category = "CoreGameplay")
	UWidgetComponent* WidgetComponent;


#pragma endregion

#pragma region Overrides

	virtual void BeginPlay() override;
	virtual void PlayerPressedInteract() const override;
	virtual void PlayerReleasedInteract() const override;

public:
	virtual void Tick(float DeltaTime) override;

#pragma endregion

#pragma region Variables 
	TSubclassOf<UUserWidget> InteractionWidget;

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
