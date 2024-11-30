// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Camera/CameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPSGAME_API UClass* Z_Construct_UClass_ACameraManager();
FPSGAME_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class ACameraManager
void ACameraManager::StaticRegisterNativesACameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraManager);
UClass* Z_Construct_UClass_ACameraManager_NoRegister()
{
	return ACameraManager::StaticClass();
}
struct Z_Construct_UClass_ACameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Camera/CameraManager.h" },
		{ "ModuleRelativePath", "Public/Camera/CameraManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraManager_Statics::ClassParams = {
	&ACameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraManager()
{
	if (!Z_Registration_Info_UClass_ACameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraManager.OuterSingleton, Z_Construct_UClass_ACameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraManager.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<ACameraManager>()
{
	return ACameraManager::StaticClass();
}
ACameraManager::ACameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraManager);
ACameraManager::~ACameraManager() {}
// End Class ACameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraManager, ACameraManager::StaticClass, TEXT("ACameraManager"), &Z_Registration_Info_UClass_ACameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraManager), 3504631045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_326268605(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
