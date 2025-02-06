
#pragma once

#include "CoreMinimal.h"
#include "InteractionSystem/BaseInteractionActor.h"
#include "DataClasses/EnumTypes.h"
#include "DataClasses/StructTypesClass.h"
#include "WeaponBase.generated.h"



UCLASS()
class FPSGAME_API AWeaponBase : public ABaseInteractionActor
{
	GENERATED_BODY()
	
public:	

	AWeaponBase();

protected:

	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:

	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(BlueprintReadOnly,Category = "Weapon")
	FWeaponInfo WeaponInfo;


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Default")
	FString RowName;
	
	UPROPERTY(BlueprintReadOnly, Category = "DataTable")
	UDataTable* CachedDataTable;

	UPROPERTY(BlueprintReadOnly, Category = "DataTable")
	FWeaponData WeaponData;

	
	
	UFUNCTION(NetMulticast,Unreliable)
	void EnablePawnCollision(const bool bShouldEnable);
	
	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "Weapons")
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const { return WeaponMesh;}

	UFUNCTION(CallInEditor,BlueprintCallable)
	void UpdateWeapon();


	
	

};


