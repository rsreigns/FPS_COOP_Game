// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UBaseAbilitySystemComponent;


UCLASS()
class FPSGAME_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	ABaseCharacter();

#pragma region Overrides 

protected:

	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;


public:

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion

#pragma region Components

protected:
	UPROPERTY(EditAnywhere)
	UBaseAbilitySystemComponent* BaseASC;

	
#pragma endregion
	
#pragma region CustomFunctions
public:
	void ChangeGravDirection(FVector Direction);
#pragma endregion

#pragma region Inline Functions

public:
	FORCEINLINE UBaseAbilitySystemComponent* GetBaseASC() { return BaseASC; }


#pragma endregion

};
