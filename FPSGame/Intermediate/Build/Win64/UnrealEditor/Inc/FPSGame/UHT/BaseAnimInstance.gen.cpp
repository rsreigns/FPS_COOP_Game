// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Animation/BaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UBaseAnimInstance
void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAnimInstance);
UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
{
	return UBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Animation|Locomotion" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZVelocity_MetaData[] = {
		{ "Category", "Animation|Locomotion" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Animation|Locomotion" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Animation|Locomotion" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "Animation|Character" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacterMovement_MetaData[] = {
		{ "Category", "Animation|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZVelocity;
	static void NewProp_bIsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacterMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_ZVelocity = { "ZVelocity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, ZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZVelocity_MetaData), NewProp_ZVelocity_MetaData) };
void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
{
	((UBaseAnimInstance*)Obj)->bIsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoving_MetaData), NewProp_bIsMoving_MetaData) };
void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UBaseAnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, OwningCharacter), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacter_MetaData), NewProp_OwningCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharacterMovement = { "OwningCharacterMovement", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, OwningCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacterMovement_MetaData), NewProp_OwningCharacterMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_ZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharacterMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
	&UBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UBaseAnimInstance>()
{
	return UBaseAnimInstance::StaticClass();
}
UBaseAnimInstance::UBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
UBaseAnimInstance::~UBaseAnimInstance() {}
// End Class UBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_BaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAnimInstance, UBaseAnimInstance::StaticClass, TEXT("UBaseAnimInstance"), &Z_Registration_Info_UClass_UBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAnimInstance), 3702818732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_BaseAnimInstance_h_624871084(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_BaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_BaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
