// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "MyCharacter.generated.h"

class UWeaponComponent;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UWeaponComponent* WeaponComponent;

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

	

	/* ------------------>  Input <----------------------*/

	
	
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

	

	/* ------------------>  Interaction <----------------------*/
	
	
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	TArray <TEnumAsByte <EObjectTypeQuery>> TraceObjectTypes;


	UPROPERTY(EditDefaultsOnly,Category="Player|Weapon")
	TSubclassOf<AWeaponBase> WeaponToSpawn;
	
	UPROPERTY(EditDefaultsOnly,Category="Player|Weapon")
	float WeaponThrowForce = 2000.f;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	float InteractionRadius = 300.f;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Interaction")
	float InteractionSphereRadius = 30.f;

	
	
	/* ------------------>  Montages <----------------------*/


	
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* DeathMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* HitMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* AdsMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Montages")
	UAnimMontage* HitReactMontage;
	
	FViewTargetTransitionParams TransitionParams;

	
	

	/* ------------------>  Weapons <----------------------*/

	

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

	UFUNCTION(Server,Reliable,Category="Gameplay")
	void ServerStartFire();
	UFUNCTION(NetMulticast,Reliable, Category="Gameplay")
	void StartFire();

	UFUNCTION(Server,Reliable,Category="Gameplay")
	void ServerStopFire();
	UFUNCTION(NetMulticast,Reliable, Category = "Gameplay")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleAds();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStartInteract();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleStopInteract();


	

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void ServerSwitchToPrimary();
	
	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void ServerSwitchToSecondary();

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void ServerSwitchToMelee();


	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void SwitchToThrowableWeapon();

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void Server_DropCurrentWeapon();

#pragma endregion
	
#pragma region CustomFunctions
	FHitResult DoLineTraceByObject(FVector Start, FVector End, bool ShowDebug=false, bool ForDuration=false,float Duration=2.f);
	
	bool DoSphereTraceByObject(FHitResult& InHit,FVector Start, FVector End,float TraceRadius = 5.f, bool ShowDebug = false, bool ForDuration = false, float Duration = 2.f);
	
	void RegisterCameraComponent();


	


	/* ====================================================  //                   \\ ==================================================== */  
	/* ----------------------------------------------->>>>> ||   Weapon System    || <<<<------------------------------------------------ */
	/* ==================================================== \\                   //  ==================================================== */
	

	
public:
	
	UFUNCTION(Server,UnReliable,Category="Gameplay")
	void ServerPickupWeapon(AWeaponBase* InPickupWeapon);
	
	UFUNCTION(Server,Reliable,Category="Gameplay")
	void Server_ThrowWeapon(EWeaponSlotType WeaponSlotToThrow);

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetCurrentHealth(float healthValue);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "LHIK")
	FTransform GetLhikTransform();


#pragma endregion


	UFUNCTION(Server,Unreliable)
	void ServerHandleHitReact();

	UFUNCTION(NetMulticast,Unreliable)
	void HandleHitReact();

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



#pragma region Getters

	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Getters")
	FORCEINLINE  UCameraComponent* GetCameraComponent()const { return CameraComponent; }
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "Getters")
	FORCEINLINE USpringArmComponent* GetSpringArmComponent() const {return SpringArm;}
	
	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Getters")
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Getters")
	FORCEINLINE float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Getters")
	FORCEINLINE UWeaponComponent* GetWeaponComponent() const { return WeaponComponent;}

	UFUNCTION(BlueprintPure, BlueprintCallable,Category = "Getters")
	FORCEINLINE USkeletalMeshComponent* GetMeshComp() const { return GetMesh();}
	
#pragma endregion
};




