// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NativeInteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNativeInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

class FPSGAME_API INativeInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void PlayerPressedInteract(APawn* PlayerPawn)  ;
	virtual void PlayerReleasedInteract(APawn* PlayerPawn)  ;

};
