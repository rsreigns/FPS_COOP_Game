// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "MyCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ATestProjectile;
class UInputAction;
class UInputMappingContext;
class UEnhancedInputComponent;
struct FHitResult;
class AWeaponBase;

UCLASS()
class FPSGAME_API AMyCharacter : public ABaseCharacter, public INativeInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

#pragma region Overriden functions

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PlayerPressedInteract() const ;
	void PlayerReleasedInteract() const ;

	UFUNCTION(BlueprintCallable, Category = "Health")
	float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


#pragma endregion

protected:
#pragma region Components

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	USpringArmComponent* SpringArm;
	UPROPERTY()
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UEnhancedInputComponent* MyInputComponent;

#pragma endregion

#pragma region Properties

	UPROPERTY()
	APlayerController* MyController;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Health")
	float MaxHealth= 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth )
	float CurrentHealth;

	UPROPERTY(EditDefaultsOnly,Category ="ActorCore|Input")
	UInputMappingContext* MappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* FireAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* ADSAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Input|Action")
	const UInputAction* InteractAction;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Trace")
	TArray <TEnumAsByte <EObjectTypeQuery>> TraceObjectTypes;


	UPROPERTY(EditDefaultsOnly,Category="ActorCore|Gameplay|Projectile")
	TSubclassOf<AWeaponBase> WeaponToSpawn;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Gameplay|Interaction")
	float InteractionRadius=300.f;

	UPROPERTY(EditDefaultsOnly, Category = "ActorCore|Gameplay|Interaction")
	float InteractionSphereRadius = 30.f;

	FViewTargetTransitionParams TransitionParams;

public:
	UPROPERTY()
	AWeaponBase* EquippedWeapon;
#pragma endregion


protected:

	UFUNCTION()
	void OnRep_CurrentHealth();

	void OnHealthUpdate();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleMove(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleLook(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleJump();

	UFUNCTION(BlueprintCallable,Category="Gameplay")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleADS();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStartInteract();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStopInteract();


	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug=false, bool ForDuration=false,float Duration=2.f);
	FHitResult DoSphereTraceByObject(FVector Start, FVector End,float TraceRadius = 5.f, bool ShowDebug = false, bool ForDuration = false, float Duration = 2.f);
	
	void RegisterCameraComponent();
	void EquipWeapon(TSubclassOf<AWeaponBase> ToEquipWeapon);


public:	

	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetCurrentHealth(float healthValue);
	
	UFUNCTION(BlueprintCallable,BlueprintPure)
	FTransform GetLeftHandIK();

	USpringArmComponent* GetSpringArmComponent();

#pragma region Variables
	UPROPERTY(BlueprintReadOnly)
	FRotator DeltaRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly)
	bool bIsADS=false;

	UPROPERTY(BlueprintReadOnly)
	AActor* InteractingActor;



#pragma endregion



#pragma region InlineFunctions

	FORCEINLINE  UCameraComponent* GetCameraComponent() { return CameraComponent; }

#pragma endregion
};
