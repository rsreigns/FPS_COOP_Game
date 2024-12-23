// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MyHUD.h"
#include"Blueprint/UserWidget.h"

#include "FPSGame/DebugHelper.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	for (TSubclassOf<UUserWidget>& Widget : WidgetList)
	{
		if (Widget)
		{
			UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(GetWorld(), Widget);
			if (WidgetInstance)
			{
				WidgetInstance->AddToViewport();
			}
		}
	}

}
