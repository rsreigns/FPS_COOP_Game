// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "Character/BaseCharacter.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"

void UBaseGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

}

void UBaseGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

ABaseCharacter* UBaseGameplayAbility::GetOwningCharacter()
{
	if (!OwningCharacter)
	{
		OwningCharacter = Cast<ABaseCharacter>(GetAvatarActorFromActorInfo());
	}
	return OwningCharacter;
}

UBaseAbilitySystemComponent* UBaseGameplayAbility::GetBaseASC()
{
	if (!BaseASCRef)
	{
		BaseASCRef = Cast<UBaseAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());
	}
	return 	BaseASCRef;
}
