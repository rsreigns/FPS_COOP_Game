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

	AMyCharacter();

#pragma region Overriden functions

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


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

	UPROPERTY(EditDefaultsOnly,Category ="Player|Input")
	UInputMappingContext* MappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* FireAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* ADSAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* InteractAction;


	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	TArray <TEnumAsByte <EObjectTypeQuery>> TraceObjectTypes;


	UPROPERTY(EditDefaultsOnly,Category="Player|Weapon")
	TSubclassOf<AWeaponBase> WeaponToSpawn;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	float InteractionRadius=300.f;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	float InteractionSphereRadius = 30.f;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* DeathMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* HitMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* ADSMontage;
	
	FViewTargetTransitionParams TransitionParams;

public:
	UPROPERTY()
	AWeaponBase* EquippedWeapon;
#pragma endregion


protected:

	UFUNCTION()
	void OnRep_CurrentHealth();

	void OnHealthUpdate();
#pragma region InputFunctions
	
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
	void HandleAds();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStartInteract();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStopInteract();

#pragma endregion
#pragma region CustomFunctions
	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug=false, bool ForDuration=false,float Duration=2.f);
	FHitResult DoSphereTraceByObject(FVector Start, FVector End,float TraceRadius = 5.f, bool ShowDebug = false, bool ForDuration = false, float Duration = 2.f);
	
	void RegisterCameraComponent();

public:	

	void EquipWeapon(TSubclassOf<AWeaponBase> ToEquipWeapon);
	
	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetCurrentHealth(float healthValue);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "LHIK")
	FTransform GetLhikTransform();


#pragma endregion

#pragma region Variables
	UPROPERTY(BlueprintReadOnly)
	FRotator DeltaRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly)
	float MovementSway;
	UPROPERTY(BlueprintReadOnly)
	float MouseSwayX;
	UPROPERTY(BlueprintReadOnly)
	float MouseSwayY;
	

	UPROPERTY(BlueprintReadOnly)
	bool bIsADS=false;

	UPROPERTY(BlueprintReadOnly)
	AActor* InteractingActor;



#pragma endregion



#pragma region InlineFunctions

	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE  UCameraComponent* GetCameraComponent()const { return CameraComponent; }
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE USpringArmComponent* GetSpringArmComponent() const {return SpringArm;}
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE AWeaponBase* GetEquippedWeapon() const { return EquippedWeapon;}
	
#pragma endregion
};
