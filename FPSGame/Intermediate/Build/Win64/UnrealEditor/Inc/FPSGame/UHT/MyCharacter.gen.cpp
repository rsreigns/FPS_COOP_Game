// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Character/MyCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
FPSGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
FPSGAME_API UClass* Z_Construct_UClass_AFirearmBase_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AMeleeBase_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AMyCharacter();
FPSGAME_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UNativeInteractionInterface_NoRegister();
FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EWeaponSlotType();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class AMyCharacter Function DropCurrentWeapon
struct Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "DropCurrentWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execDropCurrentWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropCurrentWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function DropCurrentWeapon

// Begin Class AMyCharacter Function GetCameraComponent
struct Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics
{
	struct MyCharacter_eventGetCameraComponent_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetCameraComponent", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::MyCharacter_eventGetCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::MyCharacter_eventGetCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetCameraComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetCameraComponent

// Begin Class AMyCharacter Function GetCurrentHealth
struct Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics
{
	struct MyCharacter_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::MyCharacter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::MyCharacter_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetCurrentHealth

// Begin Class AMyCharacter Function GetEquippedWeapon
struct Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics
{
	struct MyCharacter_eventGetEquippedWeapon_Parms
	{
		AWeaponBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::MyCharacter_eventGetEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::MyCharacter_eventGetEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWeaponBase**)Z_Param__Result=P_THIS->GetEquippedWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetEquippedWeapon

// Begin Class AMyCharacter Function GetLhikTransform
struct Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics
{
	struct MyCharacter_eventGetLhikTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LHIK" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetLhikTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetLhikTransform", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::MyCharacter_eventGetLhikTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::MyCharacter_eventGetLhikTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetLhikTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetLhikTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetLhikTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetLhikTransform();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetLhikTransform

// Begin Class AMyCharacter Function GetMaxHealth
struct Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics
{
	struct MyCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::MyCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::MyCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetMaxHealth

// Begin Class AMyCharacter Function GetMeleeSlotWeapon
struct Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics
{
	struct MyCharacter_eventGetMeleeSlotWeapon_Parms
	{
		AMeleeBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetMeleeSlotWeapon_Parms, ReturnValue), Z_Construct_UClass_AMeleeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetMeleeSlotWeapon", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::MyCharacter_eventGetMeleeSlotWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::MyCharacter_eventGetMeleeSlotWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetMeleeSlotWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMeleeBase**)Z_Param__Result=P_THIS->GetMeleeSlotWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetMeleeSlotWeapon

// Begin Class AMyCharacter Function GetPrimarySlotWeapon
struct Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics
{
	struct MyCharacter_eventGetPrimarySlotWeapon_Parms
	{
		AFirearmBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetPrimarySlotWeapon_Parms, ReturnValue), Z_Construct_UClass_AFirearmBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetPrimarySlotWeapon", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::MyCharacter_eventGetPrimarySlotWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::MyCharacter_eventGetPrimarySlotWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetPrimarySlotWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFirearmBase**)Z_Param__Result=P_THIS->GetPrimarySlotWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetPrimarySlotWeapon

// Begin Class AMyCharacter Function GetSecondarySlotWeapon
struct Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics
{
	struct MyCharacter_eventGetSecondarySlotWeapon_Parms
	{
		AFirearmBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetSecondarySlotWeapon_Parms, ReturnValue), Z_Construct_UClass_AFirearmBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetSecondarySlotWeapon", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::MyCharacter_eventGetSecondarySlotWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::MyCharacter_eventGetSecondarySlotWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetSecondarySlotWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFirearmBase**)Z_Param__Result=P_THIS->GetSecondarySlotWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetSecondarySlotWeapon

// Begin Class AMyCharacter Function GetSpringArmComponent
struct Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics
{
	struct MyCharacter_eventGetSpringArmComponent_Parms
	{
		USpringArmComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventGetSpringArmComponent_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "GetSpringArmComponent", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::MyCharacter_eventGetSpringArmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::MyCharacter_eventGetSpringArmComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execGetSpringArmComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpringArmComponent**)Z_Param__Result=P_THIS->GetSpringArmComponent();
	P_NATIVE_END;
}
// End Class AMyCharacter Function GetSpringArmComponent

// Begin Class AMyCharacter Function HandleAds
struct Z_Construct_UFunction_AMyCharacter_HandleAds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleAds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleAds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleAds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleAds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_HandleAds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleAds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleAds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAds();
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleAds

// Begin Class AMyCharacter Function HandleJump
struct Z_Construct_UFunction_AMyCharacter_HandleJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleJump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_HandleJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleJump();
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleJump

// Begin Class AMyCharacter Function HandleLook
struct Z_Construct_UFunction_AMyCharacter_HandleLook_Statics
{
	struct MyCharacter_eventHandleLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventHandleLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleLook", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::MyCharacter_eventHandleLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::MyCharacter_eventHandleLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_HandleLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLook(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleLook

// Begin Class AMyCharacter Function HandleMove
struct Z_Construct_UFunction_AMyCharacter_HandleMove_Statics
{
	struct MyCharacter_eventHandleMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventHandleMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleMove", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::MyCharacter_eventHandleMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::MyCharacter_eventHandleMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_HandleMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMove(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleMove

// Begin Class AMyCharacter Function HandleStartInteract
struct Z_Construct_UFunction_AMyCharacter_HandleStartInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleStartInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleStartInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleStartInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleStartInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_HandleStartInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleStartInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleStartInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStartInteract();
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleStartInteract

// Begin Class AMyCharacter Function HandleStopInteract
struct Z_Construct_UFunction_AMyCharacter_HandleStopInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_HandleStopInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "HandleStopInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_HandleStopInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_HandleStopInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_HandleStopInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_HandleStopInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execHandleStopInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStopInteract();
	P_NATIVE_END;
}
// End Class AMyCharacter Function HandleStopInteract

// Begin Class AMyCharacter Function OnRep_CurrentHealth
struct Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execOnRep_CurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth();
	P_NATIVE_END;
}
// End Class AMyCharacter Function OnRep_CurrentHealth

// Begin Class AMyCharacter Function SetCurrentHealth
struct Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics
{
	struct MyCharacter_eventSetCurrentHealth_Parms
	{
		float healthValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_healthValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::NewProp_healthValue = { "healthValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventSetCurrentHealth_Parms, healthValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::NewProp_healthValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::MyCharacter_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::MyCharacter_eventSetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_SetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execSetCurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_healthValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentHealth(Z_Param_healthValue);
	P_NATIVE_END;
}
// End Class AMyCharacter Function SetCurrentHealth

// Begin Class AMyCharacter Function StartFire
struct Z_Construct_UFunction_AMyCharacter_StartFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "StartFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_StartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_StartFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_StartFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_StartFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execStartFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFire();
	P_NATIVE_END;
}
// End Class AMyCharacter Function StartFire

// Begin Class AMyCharacter Function StopFire
struct Z_Construct_UFunction_AMyCharacter_StopFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "StopFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_StopFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_StopFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_StopFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_StopFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execStopFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFire();
	P_NATIVE_END;
}
// End Class AMyCharacter Function StopFire

// Begin Class AMyCharacter Function SwitchToMeleeWeapon
struct Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SwitchToMeleeWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execSwitchToMeleeWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToMeleeWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function SwitchToMeleeWeapon

// Begin Class AMyCharacter Function SwitchToPrimaryWeapon
struct Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SwitchToPrimaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execSwitchToPrimaryWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToPrimaryWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function SwitchToPrimaryWeapon

// Begin Class AMyCharacter Function SwitchToSecondaryWeapon
struct Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SwitchToSecondaryWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execSwitchToSecondaryWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToSecondaryWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function SwitchToSecondaryWeapon

// Begin Class AMyCharacter Function SwitchToThrowableWeapon
struct Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SwitchToThrowableWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execSwitchToThrowableWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToThrowableWeapon();
	P_NATIVE_END;
}
// End Class AMyCharacter Function SwitchToThrowableWeapon

// Begin Class AMyCharacter Function TakeDamage
struct Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics
{
	struct MyCharacter_eventTakeDamage_Parms
	{
		float DamageTaken;
		FDamageEvent DamageEvent;
		AController* EventInstigator;
		AActor* DamageCauser;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTakeDamage_Parms, DamageTaken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEvent_MetaData), NewProp_DamageEvent_MetaData) }; // 3306819763
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_EventInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::MyCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::MyCharacter_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
	P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
	P_GET_OBJECT(AController,Z_Param_EventInstigator);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageTaken,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class AMyCharacter Function TakeDamage

// Begin Class AMyCharacter
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
	UClass* Class = AMyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropCurrentWeapon", &AMyCharacter::execDropCurrentWeapon },
		{ "GetCameraComponent", &AMyCharacter::execGetCameraComponent },
		{ "GetCurrentHealth", &AMyCharacter::execGetCurrentHealth },
		{ "GetEquippedWeapon", &AMyCharacter::execGetEquippedWeapon },
		{ "GetLhikTransform", &AMyCharacter::execGetLhikTransform },
		{ "GetMaxHealth", &AMyCharacter::execGetMaxHealth },
		{ "GetMeleeSlotWeapon", &AMyCharacter::execGetMeleeSlotWeapon },
		{ "GetPrimarySlotWeapon", &AMyCharacter::execGetPrimarySlotWeapon },
		{ "GetSecondarySlotWeapon", &AMyCharacter::execGetSecondarySlotWeapon },
		{ "GetSpringArmComponent", &AMyCharacter::execGetSpringArmComponent },
		{ "HandleAds", &AMyCharacter::execHandleAds },
		{ "HandleJump", &AMyCharacter::execHandleJump },
		{ "HandleLook", &AMyCharacter::execHandleLook },
		{ "HandleMove", &AMyCharacter::execHandleMove },
		{ "HandleStartInteract", &AMyCharacter::execHandleStartInteract },
		{ "HandleStopInteract", &AMyCharacter::execHandleStopInteract },
		{ "OnRep_CurrentHealth", &AMyCharacter::execOnRep_CurrentHealth },
		{ "SetCurrentHealth", &AMyCharacter::execSetCurrentHealth },
		{ "StartFire", &AMyCharacter::execStartFire },
		{ "StopFire", &AMyCharacter::execStopFire },
		{ "SwitchToMeleeWeapon", &AMyCharacter::execSwitchToMeleeWeapon },
		{ "SwitchToPrimaryWeapon", &AMyCharacter::execSwitchToPrimaryWeapon },
		{ "SwitchToSecondaryWeapon", &AMyCharacter::execSwitchToSecondaryWeapon },
		{ "SwitchToThrowableWeapon", &AMyCharacter::execSwitchToThrowableWeapon },
		{ "TakeDamage", &AMyCharacter::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MyCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyInputComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player|Health" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "Category", "Player|Input" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeWeaponAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableWeaponAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropWeaponAction_MetaData[] = {
		{ "Category", "Player|Input|Actions" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "Player|Interaction" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponToSpawn_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponThrowForce_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "Player|Interaction" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphereRadius_MetaData[] = {
		{ "Category", "Player|Interaction" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[] = {
		{ "Category", "Player|Montages" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitMontage_MetaData[] = {
		{ "Category", "Player|Montages" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ADSMontage_MetaData[] = {
		{ "Category", "Player|Montages" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeaponSlotType_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeSlotWeapon_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotWeapon_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotWeapon_MetaData[] = {
		{ "Category", "Player|Weapon" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSway_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSwayX_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSwayY_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsADS_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractingActor_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/Character/MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableWeaponAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropWeaponAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponThrowForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionSphereRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquippedWeaponSlotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquippedWeaponSlotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeSlotWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimarySlotWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondarySlotWeapon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSway;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSwayX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSwayY;
	static void NewProp_bIsADS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsADS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_DropCurrentWeapon, "DropCurrentWeapon" }, // 1495390175
		{ &Z_Construct_UFunction_AMyCharacter_GetCameraComponent, "GetCameraComponent" }, // 687426709
		{ &Z_Construct_UFunction_AMyCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 1045261550
		{ &Z_Construct_UFunction_AMyCharacter_GetEquippedWeapon, "GetEquippedWeapon" }, // 3584320619
		{ &Z_Construct_UFunction_AMyCharacter_GetLhikTransform, "GetLhikTransform" }, // 1567147572
		{ &Z_Construct_UFunction_AMyCharacter_GetMaxHealth, "GetMaxHealth" }, // 1737394467
		{ &Z_Construct_UFunction_AMyCharacter_GetMeleeSlotWeapon, "GetMeleeSlotWeapon" }, // 1632172206
		{ &Z_Construct_UFunction_AMyCharacter_GetPrimarySlotWeapon, "GetPrimarySlotWeapon" }, // 2137573147
		{ &Z_Construct_UFunction_AMyCharacter_GetSecondarySlotWeapon, "GetSecondarySlotWeapon" }, // 4262279984
		{ &Z_Construct_UFunction_AMyCharacter_GetSpringArmComponent, "GetSpringArmComponent" }, // 2533027152
		{ &Z_Construct_UFunction_AMyCharacter_HandleAds, "HandleAds" }, // 2573299350
		{ &Z_Construct_UFunction_AMyCharacter_HandleJump, "HandleJump" }, // 2831584708
		{ &Z_Construct_UFunction_AMyCharacter_HandleLook, "HandleLook" }, // 3852004594
		{ &Z_Construct_UFunction_AMyCharacter_HandleMove, "HandleMove" }, // 1955031087
		{ &Z_Construct_UFunction_AMyCharacter_HandleStartInteract, "HandleStartInteract" }, // 619881959
		{ &Z_Construct_UFunction_AMyCharacter_HandleStopInteract, "HandleStopInteract" }, // 2294414853
		{ &Z_Construct_UFunction_AMyCharacter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 3963964311
		{ &Z_Construct_UFunction_AMyCharacter_SetCurrentHealth, "SetCurrentHealth" }, // 3089064192
		{ &Z_Construct_UFunction_AMyCharacter_StartFire, "StartFire" }, // 2949074692
		{ &Z_Construct_UFunction_AMyCharacter_StopFire, "StopFire" }, // 840451391
		{ &Z_Construct_UFunction_AMyCharacter_SwitchToMeleeWeapon, "SwitchToMeleeWeapon" }, // 2177762629
		{ &Z_Construct_UFunction_AMyCharacter_SwitchToPrimaryWeapon, "SwitchToPrimaryWeapon" }, // 1794549942
		{ &Z_Construct_UFunction_AMyCharacter_SwitchToSecondaryWeapon, "SwitchToSecondaryWeapon" }, // 1026397298
		{ &Z_Construct_UFunction_AMyCharacter_SwitchToThrowableWeapon, "SwitchToThrowableWeapon" }, // 796148523
		{ &Z_Construct_UFunction_AMyCharacter_TakeDamage, "TakeDamage" }, // 4105059204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyInputComponent = { "MyInputComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MyInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyInputComponent_MetaData), NewProp_MyInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyController = { "MyController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MyController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyController_MetaData), NewProp_MyController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_ADSAction = { "ADSAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, ADSAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSAction_MetaData), NewProp_ADSAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_PrimaryWeaponAction = { "PrimaryWeaponAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, PrimaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryWeaponAction_MetaData), NewProp_PrimaryWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SecondaryWeaponAction = { "SecondaryWeaponAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, SecondaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryWeaponAction_MetaData), NewProp_SecondaryWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MeleeWeaponAction = { "MeleeWeaponAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MeleeWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeWeaponAction_MetaData), NewProp_MeleeWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_ThrowableWeaponAction = { "ThrowableWeaponAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, ThrowableWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableWeaponAction_MetaData), NewProp_ThrowableWeaponAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DropWeaponAction = { "DropWeaponAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DropWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropWeaponAction_MetaData), NewProp_DropWeaponAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTypes_MetaData), NewProp_TraceObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_WeaponToSpawn = { "WeaponToSpawn", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, WeaponToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponToSpawn_MetaData), NewProp_WeaponToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_WeaponThrowForce = { "WeaponThrowForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, WeaponThrowForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponThrowForce_MetaData), NewProp_WeaponThrowForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRadius_MetaData), NewProp_InteractionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractionSphereRadius = { "InteractionSphereRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, InteractionSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphereRadius_MetaData), NewProp_InteractionSphereRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathMontage_MetaData), NewProp_DeathMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_HitMontage = { "HitMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitMontage_MetaData), NewProp_HitMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_ADSMontage = { "ADSMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, ADSMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ADSMontage_MetaData), NewProp_ADSMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, EquippedWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeaponSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeaponSlotType = { "EquippedWeaponSlotType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, EquippedWeaponSlotType), Z_Construct_UEnum_FPSGame_EWeaponSlotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeaponSlotType_MetaData), NewProp_EquippedWeaponSlotType_MetaData) }; // 3061419087
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MeleeSlotWeapon = { "MeleeSlotWeapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MeleeSlotWeapon), Z_Construct_UClass_AMeleeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeSlotWeapon_MetaData), NewProp_MeleeSlotWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_PrimarySlotWeapon = { "PrimarySlotWeapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, PrimarySlotWeapon), Z_Construct_UClass_AFirearmBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySlotWeapon_MetaData), NewProp_PrimarySlotWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SecondarySlotWeapon = { "SecondarySlotWeapon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, SecondarySlotWeapon), Z_Construct_UClass_AFirearmBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondarySlotWeapon_MetaData), NewProp_SecondarySlotWeapon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaRotation_MetaData), NewProp_DeltaRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSway = { "MovementSway", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MovementSway), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSway_MetaData), NewProp_MovementSway_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MouseSwayX = { "MouseSwayX", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MouseSwayX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSwayX_MetaData), NewProp_MouseSwayX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MouseSwayY = { "MouseSwayY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, MouseSwayY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSwayY_MetaData), NewProp_MouseSwayY_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsADS_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->bIsADS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsADS = { "bIsADS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsADS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsADS_MetaData), NewProp_bIsADS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingActor_MetaData), NewProp_InteractingActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_ADSAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_PrimaryWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SecondaryWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MeleeWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_ThrowableWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DropWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_TraceObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_TraceObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_WeaponToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_WeaponThrowForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractionSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeathMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_HitMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_ADSMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeaponSlotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_EquippedWeaponSlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MeleeSlotWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_PrimarySlotWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SecondarySlotWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_DeltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MovementSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MouseSwayX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MouseSwayY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_InteractingActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNativeInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AMyCharacter, INativeInteractionInterface), false },  // 2228524037
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<AMyCharacter>()
{
	return AMyCharacter::StaticClass();
}
void AMyCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// End Class AMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Character_MyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 531342752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Character_MyCharacter_h_1818058270(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Character_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Character_MyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
