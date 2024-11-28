// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Data/StructTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
FPSGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInputAbilityTagMapping();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin ScriptStruct FInputAbilityTagMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAbilityTagMapping;
class UScriptStruct* FInputAbilityTagMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAbilityTagMapping, (UObject*)Z_Construct_UPackage__Script_FPSGame(), TEXT("InputAbilityTagMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.OuterSingleton;
}
template<> FPSGAME_API UScriptStruct* StaticStruct<FInputAbilityTagMapping>()
{
	return FInputAbilityTagMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Data/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Data/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAbilityTagMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityTagMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityTagMapping, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityTagMapping, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAbilityTagMapping, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	nullptr,
	&NewStructOps,
	"InputAbilityTagMapping",
	Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::PropPointers),
	sizeof(FInputAbilityTagMapping),
	alignof(FInputAbilityTagMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAbilityTagMapping()
{
	if (!Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAbilityTagMapping.InnerSingleton;
}
// End ScriptStruct FInputAbilityTagMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Data_StructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputAbilityTagMapping::StaticStruct, Z_Construct_UScriptStruct_FInputAbilityTagMapping_Statics::NewStructOps, TEXT("InputAbilityTagMapping"), &Z_Registration_Info_UScriptStruct_InputAbilityTagMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAbilityTagMapping), 3501434190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Data_StructTypes_h_3725716770(TEXT("/Script/FPSGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Data_StructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Data_StructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
