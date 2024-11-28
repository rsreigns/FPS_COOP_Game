// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/InteractionSystem/NativeInteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FPSGAME_API UClass* Z_Construct_UClass_UNativeInteractionInterface();
FPSGAME_API UClass* Z_Construct_UClass_UNativeInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Interface UNativeInteractionInterface
void UNativeInteractionInterface::StaticRegisterNativesUNativeInteractionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNativeInteractionInterface);
UClass* Z_Construct_UClass_UNativeInteractionInterface_NoRegister()
{
	return UNativeInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UNativeInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionSystem/NativeInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INativeInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNativeInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNativeInteractionInterface_Statics::ClassParams = {
	&UNativeInteractionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNativeInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNativeInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UNativeInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNativeInteractionInterface.OuterSingleton, Z_Construct_UClass_UNativeInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNativeInteractionInterface.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UNativeInteractionInterface>()
{
	return UNativeInteractionInterface::StaticClass();
}
UNativeInteractionInterface::UNativeInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeInteractionInterface);
UNativeInteractionInterface::~UNativeInteractionInterface() {}
// End Interface UNativeInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNativeInteractionInterface, UNativeInteractionInterface::StaticClass, TEXT("UNativeInteractionInterface"), &Z_Registration_Info_UClass_UNativeInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNativeInteractionInterface), 2228524037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_4240601413(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
