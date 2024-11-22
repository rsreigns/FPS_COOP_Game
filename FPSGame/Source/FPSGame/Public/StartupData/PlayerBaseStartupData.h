// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StartupData/BaseStartupData.h"
#include "Data/StructTypes.h"
#include "PlayerBaseStartupData.generated.h"

class UInputMappingContext;
class UGameplayAbility;
class UAbilitySystemComponent;

UCLASS()
class FPSGAME_API UPlayerBaseStartupData : public UBaseStartupData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "InputMapping")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "InputAbilityTagMapping")
	TArray<FInputAbilityTagMapping> InputAbilityTagMapping;

#pragma region Functions

	UInputAction* GetInputActionByTag(FGameplayTag InTag);
	FGameplayTag GetAbilityTagFromInputTag(FGameplayTag InInputTag);
	void GiveAbilitiesToASC(UAbilitySystemComponent* InASC, int32 level);

#pragma endregion

};
