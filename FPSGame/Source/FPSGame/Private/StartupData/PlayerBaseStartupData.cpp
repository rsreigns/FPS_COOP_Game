// Fill out your copyright notice in the Description page of Project Settings.


#include "StartupData/PlayerBaseStartupData.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"

UInputAction* UPlayerBaseStartupData::GetInputActionByTag(FGameplayTag InTag)
{
	for (FInputAbilityTagMapping& Map : InputAbilityTagMapping)
	{
		if (Map.InputTag != InTag) continue;
		return Map.InputAction;
	}
	return nullptr;
}

FGameplayTag UPlayerBaseStartupData::GetAbilityTagFromInputTag(FGameplayTag InInputTag)
{
	for (FInputAbilityTagMapping& Map : InputAbilityTagMapping)
	{
		if (Map.InputTag != InInputTag) continue;
		return Map.AbilityTag;
	}
	return FGameplayTag();
}

void UPlayerBaseStartupData::GiveAbilitiesToASC(UAbilitySystemComponent* InASC, int32 level)
{
	if (InASC)
	{
		for (FInputAbilityTagMapping& Map : InputAbilityTagMapping)
		{
			FGameplayAbilitySpec AbilitySpec(Map.Ability);
			AbilitySpec.SourceObject = InASC->GetAvatarActor();
			AbilitySpec.Level = level;
			AbilitySpec.DynamicAbilityTags.AddTag(Map.AbilityTag);
			InASC->GiveAbility(AbilitySpec);
		}
	}

}
