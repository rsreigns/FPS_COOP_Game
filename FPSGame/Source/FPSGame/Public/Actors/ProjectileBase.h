// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class FPSGAME_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	

	AProjectileBase();
	
protected:
#pragma region Components
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* ProjectileComp;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoxComp;
#pragma endregion
	
#pragma region Overrides
	virtual void BeginPlay() override;


#pragma endregion
};
