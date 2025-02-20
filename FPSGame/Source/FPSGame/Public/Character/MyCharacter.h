// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "InteractionSystem/NativeInteractionInterface.h"
#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "MyCharacter.generated.h"

struct FInputActionValue;
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



	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

	UFUNCTION(BlueprintCallable, Category = "Health")
	virtual float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


protected:

	

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Components")
	USpringArmComponent* SpringArm;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UWeaponComponent* WeaponComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UEnhancedInputComponent* MyInputComponent;



	UPROPERTY()
	APlayerController* MyController;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Health")
	float MaxHealth= 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth )
	float CurrentHealth;


	/* ------------------>  Animation Data <----------------------*/

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Animation")
	TSubclassOf<UAnimInstance> UnarmedLocomotionClass;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Animation")
	TSubclassOf<UAnimInstance> PrimaryWeaponLocomotionClass;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Animation")
	TSubclassOf<UAnimInstance> SecondaryWeaponLocomotionClass;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Animation")
	TSubclassOf<UAnimInstance> MeleeWeaponLocomotionClass;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Animation")
	TSubclassOf<UAnimInstance> ThrowableWeaponLocomotionClass;


	
	void InitializeUnarmedLayer() const;

	void ChangeAnimLayer(TSubclassOf<UAnimInstance> TempAnimLayer) const;
	
	UFUNCTION(Server, Unreliable)
	void Svr_ChangeAnimLayer(TSubclassOf<UAnimInstance> TempAnimLayer) const;

	UFUNCTION(NetMulticast, Unreliable)
	void MC_ChangeAnimLayer(TSubclassOf<UAnimInstance> TempAnimLayer) const;

	

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
	const UInputAction* AdsAction;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* CrouchAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	const UInputAction* SprintAction;

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


	

	/* ------------------>  Locomotion <----------------------*/


	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Locomotion")
	float WalkSpeed = 250.f;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Locomotion")
	float SprintSpeed = 600.f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Player|Locomotion")
	float CrouchSpeed = 120.f;






	

	/* ------------------>  Weapons <----------------------*/

	

	UFUNCTION()
	void OnRep_CurrentHealth() const;

	void OnHealthUpdate() const;

	
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleMove(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleLook(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void HandleJump();

	UFUNCTION(Server,Unreliable,Category="Gameplay")
	void ServerStartFire();

	UFUNCTION(Server,Unreliable,Category="Gameplay")
	void ServerStopFire();

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

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void Server_StartCrouch();

	UFUNCTION(NetMulticast, Unreliable, Category = "Gameplay")
	void StartCrouch();

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void Server_StopCrouch();
	
	UFUNCTION(NetMulticast, Unreliable, Category = "Gameplay")
	void StopCrouch();

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void Server_StartSprint();

	UFUNCTION(NetMulticast, Unreliable, Category = "Gameplay")
	void StartSprint();

	UFUNCTION(Server, Unreliable, Category = "Gameplay")
	void Server_StopSprint();
	
	UFUNCTION(NetMulticast, Unreliable, Category = "Gameplay")
	void StopSprint();


	void SetMovementSpeed(float NewSpeed);

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





	UFUNCTION(Server,Unreliable)
	void ServerHandleHitReact();

	UFUNCTION(NetMulticast,Unreliable)
	void HandleHitReact();

#pragma region Variables
	UPROPERTY(BlueprintReadOnly)
	FRotator DeltaRotation = FRotator::ZeroRotator;

	// Animation Specific

	UPROPERTY(BlueprintReadOnly)
	bool bIsCrouching;
	UPROPERTY(BlueprintReadOnly)
	bool bIsSprinting;

	UPROPERTY(BlueprintReadOnly)
	float MovementSway;
	UPROPERTY(BlueprintReadOnly)
	float MouseX;
	UPROPERTY(BlueprintReadOnly)
	float MouseY;

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




