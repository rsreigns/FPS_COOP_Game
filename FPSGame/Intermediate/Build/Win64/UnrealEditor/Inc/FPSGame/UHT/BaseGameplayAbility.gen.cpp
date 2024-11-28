// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/AbilitySystem/Abilities/BaseGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameplayAbility() {}

// Begin Cross Module References
FPSGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
FPSGAME_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UBaseGameplayAbility Function GetBaseASC
struct Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics
{
	struct BaseGameplayAbility_eventGetBaseASC_Parms
	{
		UBaseAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BaseGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventGetBaseASC_Parms, ReturnValue), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "GetBaseASC", nullptr, nullptr, Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::BaseGameplayAbility_eventGetBaseASC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::BaseGameplayAbility_eventGetBaseASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execGetBaseASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseAbilitySystemComponent**)Z_Param__Result=P_THIS->GetBaseASC();
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function GetBaseASC

// Begin Class UBaseGameplayAbility Function GetOwningCharacter
struct Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics
{
	struct BaseGameplayAbility_eventGetOwningCharacter_Parms
	{
		ABaseCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BaseGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventGetOwningCharacter_Parms, ReturnValue), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "GetOwningCharacter", nullptr, nullptr, Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::BaseGameplayAbility_eventGetOwningCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::BaseGameplayAbility_eventGetOwningCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execGetOwningCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABaseCharacter**)Z_Param__Result=P_THIS->GetOwningCharacter();
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function GetOwningCharacter

// Begin Class UBaseGameplayAbility
void UBaseGameplayAbility::StaticRegisterNativesUBaseGameplayAbility()
{
	UClass* Class = UBaseGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBaseASC", &UBaseGameplayAbility::execGetBaseASC },
		{ "GetOwningCharacter", &UBaseGameplayAbility::execGetOwningCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseGameplayAbility);
UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister()
{
	return UBaseGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBaseGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/BaseGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/BaseGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGameplayAbility_GetBaseASC, "GetBaseASC" }, // 1364049672
		{ &Z_Construct_UFunction_UBaseGameplayAbility_GetOwningCharacter, "GetOwningCharacter" }, // 3712538062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams = {
	&UBaseGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton, Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UBaseGameplayAbility>()
{
	return UBaseGameplayAbility::StaticClass();
}
UBaseGameplayAbility::UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameplayAbility);
UBaseGameplayAbility::~UBaseGameplayAbility() {}
// End Class UBaseGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_BaseGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameplayAbility, UBaseGameplayAbility::StaticClass, TEXT("UBaseGameplayAbility"), &Z_Registration_Info_UClass_UBaseGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameplayAbility), 894184559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_BaseGameplayAbility_h_2426613660(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_BaseGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_BaseGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
