// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BaseGameplayAbility.generated.h"

class UBaseAbilitySystemComponent;
class ABaseCharacter;
/**
 * 
 */
UCLASS()
class FPSGAME_API UBaseGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
protected:
#pragma region Overrides

	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

#pragma endregion

protected:
	ABaseCharacter* OwningCharacter;
	UBaseAbilitySystemComponent* BaseASCRef;

public:

	UFUNCTION(BlueprintPure, BlueprintCallable)
	ABaseCharacter* GetOwningCharacter();

	UFUNCTION(BlueprintPure, BlueprintCallable)
	UBaseAbilitySystemComponent* GetBaseASC();
	
};
