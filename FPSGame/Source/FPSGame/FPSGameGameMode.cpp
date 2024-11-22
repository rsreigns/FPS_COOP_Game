// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSGameGameMode.h"
#include "TimerManager.h"
#include "DebugHelper.h"
#include "Character/BaseCharacter.h"
#include "UObject/ConstructorHelpers.h"



AFPSGameGameMode::AFPSGameGameMode()
{

}

void AFPSGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(GameTimerHandle,this,&ThisClass::Ticking,1.f,true);
}
void AFPSGameGameMode::Ticking()
{
	GameTime+=1;
	GravityEventTimeCounter = GameTime;
	DEBUG::PrintString(FString::Printf(TEXT("Time : %d"),GameTime),1.f,FColor::Blue);
	if(GravityEventTimeCounter == 15)
	{
		GravityEventTimeCounter = 0;
		bool RandBool = FMath::RandBool();
		int32 RandAxis = FMath::RandRange(1,3);
		FVector Direction = FVector(RandAxis == 1? 1 : 0, RandAxis == 2? 1 : 0, RandAxis == 3? 1 : 0)*(RandBool == true? 1 : -1);
		BroadcastGravityChange(Direction);
	}
}
void AFPSGameGameMode::BroadcastGravityChange_Implementation(FVector NewGravityDirection)
{
	for(FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator();It;It++)
	{
		APlayerController* PC = Cast<APlayerController>(It->Get());
		if(PC && PC->GetPawn())
		{
			ABaseCharacter* Char = Cast<ABaseCharacter>(PC->GetPawn());
			if(Char)
			{
				Char->ChangeGravDirection(NewGravityDirection);
			}
		}
	}
}