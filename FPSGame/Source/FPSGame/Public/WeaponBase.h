// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem/BaseInteractionActor.h"
#include "WeaponBase.generated.h"

class  USkeletalMeshComponent;
class UCameraComponent;
class AMyCharacter;
struct FHitResult;
struct FTimerHandle;
struct FTimerManagerTimerParameters;

UCLASS()
class FPSGAME_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	

	AWeaponBase();

protected:

	virtual void BeginPlay() override;
#pragma region Components

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorCore|Weapon")
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY()
	UCameraComponent* PlayerCamera;

#pragma endregion


#pragma region CoreVariables

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Trace")
	TArray <TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Trace")
	float FireRate = 0.25f;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Trace")
	float TraceDistance = 2000.f;
	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Trace")
	bool bIsSingleFireWeapon = false;

	FTimerHandle FireTimerHandle;
	float LastFiredTime;
	float FirstFireDelay;

	UPROPERTY()
	AMyCharacter* OwningPlayer ;

	UPROPERTY()
	FVector MuzzleLocation;

	//UPROPERTY()
	//FVector ADSLocation;

	//UPROPERTY()
	//FVector IronSightLocation;
#pragma endregion

protected:
#pragma region CoreFunctions

	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug = false, bool ForDuration = false, float Duration= 2.f);


public:	

	void StartFireEvent();
	UFUNCTION(Server,Reliable)
	void HandleFire();
	void StopFireEvent();


	FORCEINLINE UCameraComponent* GetCameraComponent() { return PlayerCamera; }
	FORCEINLINE FVector GetADSLocation() { return WeaponMesh->GetSocketLocation("ADS"); }
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() { return WeaponMesh; }
#pragma endregion
};
