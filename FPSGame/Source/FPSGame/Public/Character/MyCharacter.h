// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "MyCharacter.generated.h"

enum class EWeaponSlotType : uint8;
class UCameraComponent;
class USpringArmComponent;
class ATestProjectile;
class UInputAction;
class UInputMappingContext;
class UEnhancedInputComponent;
struct FHitResult;
class AWeaponBase;
class AMeleeBase;
class AFirearmBase;

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

	UPROPERTY(EditDefaultsOnly, Category = "Player|Health")
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

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* PrimaryWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* SecondaryWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* MeleeWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* ThrowableWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* DropWeaponAction;


	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	TArray <TEnumAsByte <EObjectTypeQuery>> TraceObjectTypes;


	UPROPERTY(EditDefaultsOnly,Category="Player|Weapon")
	TSubclassOf<AWeaponBase> WeaponToSpawn;
	UPROPERTY(EditDefaultsOnly,Category="Player|Weapon")
	float WeaponThrowForce = 2000.f;

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
	UPROPERTY(BlueprintReadOnly,Category="Player|Weapon")
	EWeaponSlotType EquippedWeaponSlotType;

	UPROPERTY(BlueprintReadOnly,Category="Player|Weapon")
	AMeleeBase* MeleeSlotWeapon;
	UPROPERTY(BlueprintReadOnly,Category="Player|Weapon")
	AFirearmBase* PrimarySlotWeapon;
	UPROPERTY(BlueprintReadOnly,Category="Player|Weapon")
	AFirearmBase* SecondarySlotWeapon;
	/*UPROPERTY(BlueprintReadOnly,Category="Player|Weapon")
	class TArray<AThrowableBase*> ThrowableSlotWeapons;*/

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

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void SwitchToPrimaryWeapon();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void SwitchToSecondaryWeapon();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void SwitchToMeleeWeapon();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void SwitchToThrowableWeapon();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void DropCurrentWeapon();

#pragma endregion
	
#pragma region CustomFunctions
	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug=false, bool ForDuration=false,float Duration=2.f);
	FHitResult DoSphereTraceByObject(FVector Start, FVector End,float TraceRadius = 5.f, bool ShowDebug = false, bool ForDuration = false, float Duration = 2.f);
	
	void RegisterCameraComponent();

public:
	
//   Weapon Equipment System
	
	void PickupWeapon(AWeaponBase* ToPickWeapon);
	void ThrowWeaponFromSlot(EWeaponSlotType WeaponSlotToThrow);
	
	void SwitchWeaponSlot(EWeaponSlotType SlotType);
	void TrySwitchWeapon(AWeaponBase* WeaponToEquip);
	
	void AttachToSocket(AWeaponBase* WeaponToAttach,bool bAttachToRestSocket = false);
	AWeaponBase* DetachWeaponAtSlot(EWeaponSlotType WeaponSlot);

	FName GetSocketNameForWeapon(EWeaponSlotType WeaponSlot,bool bNeedRestSocket = false);

	AWeaponBase* GetWeaponFromSlotType(EWeaponSlotType WeaponSlot);
	void SetWeaponAtSlot(AWeaponBase* WeaponToSet);
	void ClearWeaponSlot(EWeaponSlotType SlotType);

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
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE AMeleeBase* GetMeleeSlotWeapon() const { return MeleeSlotWeapon;}
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE AFirearmBase* GetPrimarySlotWeapon() const { return PrimarySlotWeapon;}
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Gameplay")
	FORCEINLINE AFirearmBase* GetSecondarySlotWeapon() const { return SecondarySlotWeapon;}

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Health")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Health")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }
#pragma endregion
};




