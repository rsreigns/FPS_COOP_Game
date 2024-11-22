// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Camera/CameraComponent.h"
#include "Character/MyCharacter.h"

#include "FPSGame/DebugHelper.h"
#include "DrawDebugHelpers.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	WeaponMesh = CreateDefaultSubobject< USkeletalMeshComponent>(TEXT("WeaponSKM"));
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	if(GetOwner())
	{
		OwningPlayer = Cast<AMyCharacter>(GetOwner());
		if(OwningPlayer)
		{
			PlayerCamera = OwningPlayer->GetCameraComponent();
		}
	}
}



void AWeaponBase::StartFireEvent()
{
	FirstFireDelay = FMath::Max(LastFiredTime + FireRate - GetWorld()->TimeSeconds, 0.f);
	GetWorldTimerManager().SetTimer(FireTimerHandle, this, &ThisClass::HandleFire, FireRate, !bIsSingleFireWeapon, FirstFireDelay);
}

void AWeaponBase::StopFireEvent()
{
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	FireTimerHandle.Invalidate();
}


void AWeaponBase::HandleFire_Implementation()
{
	// aim from camera and ironsight, line trace visible from muzzle

	//ADSLocation = WeaponMesh->GetSocketLocation("ADS");
	//IronSightLocation = WeaponMesh->GetSocketLocation("IronSight");

	//FVector Direction = (IronSightLocation - ADSLocation);
	//FVector ForwardDirection = Direction.GetSafeNormal();
	
	//FVector StartPoint = ADSLocation + ForwardDirection * 20.f;
	//FVector EndPoint = StartPoint + ForwardDirection * TraceDistance;
	if(!PlayerCamera) return;
	MuzzleLocation = WeaponMesh->GetSocketLocation("Muzzle"); 
	FVector StartPoint = PlayerCamera->GetComponentLocation();
	FVector EndPoint = StartPoint + PlayerCamera->GetForwardVector() * 4000.f;
	LastFiredTime = GetWorld()->TimeSeconds;
	//FHitResult OutHit = DoLineTraceByObject(StartPoint, EndPoint,true);
	//FVector HitPoint = OutHit.Location == FVector::ZeroVector ? OutHit.TraceEnd : OutHit.Location;
	FHitResult RealHit = DoLineTraceByObject(MuzzleLocation, EndPoint, true,true);
}

FHitResult AWeaponBase::DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug, bool ForDuration, float Duration)
{
	EDrawDebugTrace::Type DebugType = EDrawDebugTrace::None;
	if (ShowDebug)
	{
		DebugType = EDrawDebugTrace::ForOneFrame;
		if (ForDuration)
		{
			DebugType = EDrawDebugTrace::ForDuration;
		}
	}
	FHitResult OutHit;
	UKismetSystemLibrary::LineTraceSingleForObjects
	(this, Start, End, TraceObjectTypes, false, TArray<AActor*>(), DebugType, OutHit, true, FColor::Red, FColor::Green, Duration);

	return OutHit;
}
