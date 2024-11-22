// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Animation/MyBaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBaseAnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
FPSGAME_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
FPSGAME_API UClass* Z_Construct_UClass_UMyBaseAnimInstance();
FPSGAME_API UClass* Z_Construct_UClass_UMyBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UMyBaseAnimInstance
void UMyBaseAnimInstance::StaticRegisterNativesUMyBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBaseAnimInstance);
UClass* Z_Construct_UClass_UMyBaseAnimInstance_NoRegister()
{
	return UMyBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/MyBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/MyBaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOwningCharacter_MetaData[] = {
		{ "Category", "Animation|Player" },
		{ "ModuleRelativePath", "Public/Animation/MyBaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRot_MetaData[] = {
		{ "Category", "Animation|Player" },
		{ "ModuleRelativePath", "Public/Animation/MyBaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerADS_MetaData[] = {
		{ "Category", "Animation|Player" },
		{ "ModuleRelativePath", "Public/Animation/MyBaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHIKTransform_MetaData[] = {
		{ "Category", "Animation|Player" },
		{ "ModuleRelativePath", "Public/Animation/MyBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOwningCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRot;
	static void NewProp_bIsPlayerADS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerADS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LHIKTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_PlayerOwningCharacter = { "PlayerOwningCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBaseAnimInstance, PlayerOwningCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerOwningCharacter_MetaData), NewProp_PlayerOwningCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_DeltaRot = { "DeltaRot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBaseAnimInstance, DeltaRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaRot_MetaData), NewProp_DeltaRot_MetaData) };
void Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_bIsPlayerADS_SetBit(void* Obj)
{
	((UMyBaseAnimInstance*)Obj)->bIsPlayerADS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_bIsPlayerADS = { "bIsPlayerADS", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBaseAnimInstance), &Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_bIsPlayerADS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerADS_MetaData), NewProp_bIsPlayerADS_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_LHIKTransform = { "LHIKTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBaseAnimInstance, LHIKTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHIKTransform_MetaData), NewProp_LHIKTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBaseAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_PlayerOwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_DeltaRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_bIsPlayerADS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBaseAnimInstance_Statics::NewProp_LHIKTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBaseAnimInstance_Statics::ClassParams = {
	&UMyBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyBaseAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UMyBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBaseAnimInstance.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UMyBaseAnimInstance>()
{
	return UMyBaseAnimInstance::StaticClass();
}
UMyBaseAnimInstance::UMyBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBaseAnimInstance);
UMyBaseAnimInstance::~UMyBaseAnimInstance() {}
// End Class UMyBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBaseAnimInstance, UMyBaseAnimInstance::StaticClass, TEXT("UMyBaseAnimInstance"), &Z_Registration_Info_UClass_UMyBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBaseAnimInstance), 713565299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_3183656781(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
