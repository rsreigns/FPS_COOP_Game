// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayTagContainer.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"  
#include "UObject/Class.h"   
#include "StructTypes.generated.h" 


class UInputAction;
struct FGameplayTag;
class UBaseGameplayAbility;

USTRUCT(BlueprintType)
struct FInputAbilityTagMapping
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* InputAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TSubclassOf<UBaseGameplayAbility> Ability;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	FGameplayTag AbilityTag;

};