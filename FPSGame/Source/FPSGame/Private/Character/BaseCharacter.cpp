// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "FPSGame/DebugHelper.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseASC = CreateDefaultSubobject<UBaseAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (BaseASC)
	{
		BaseASC->InitAbilityActorInfo(this, this);
	}

}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return BaseASC;
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABaseCharacter::ChangeGravDirection( FVector Direction)
{
	GetCharacterMovement()->SetGravityDirection(Direction);
}



void ABaseCharacter::PlayMontageOnCharacter( UAnimMontage* Montage, const bool bAllowWhileFalling , const bool bAllowMontageOverlap, const bool bCanStopCurrentMontage )
{
	if (!GetMesh()->GetAnimInstance())
	{
		return;
	}
	if (!Montage) 
	{
		return;
	}
	if (GetCharacterMovement()->IsFalling() && !bAllowWhileFalling)
	{
		return;
	}
	if (GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() && !bAllowMontageOverlap)
	{
		return;
	}
	if (bCanStopCurrentMontage)
	{
		if (Montage == GetMesh()->GetAnimInstance()->GetCurrentActiveMontage() )
		{
			return;
		}
		else
		{
			GetMesh()->GetAnimInstance()->StopAllMontages(0.1f);
		}
	}
	PlayAnimMontage(Montage);
}
