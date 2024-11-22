// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameGameMode.generated.h"

UCLASS(minimalapi)
class AFPSGameGameMode : public AGameModeBase
{
    GENERATED_BODY()
protected:
    FTimerHandle GameTimerHandle;
    
    void Ticking();
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastGravityChange(FVector NewGravityDirection);
    int32 GameTime;
    int32 GravityEventTime = 15;
    int32 GravityEventTimeCounter;

public:
    AFPSGameGameMode();
    virtual void BeginPlay() override;
};
