// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/StartupData/BaseStartupData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStartupData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FPSGAME_API UClass* Z_Construct_UClass_UBaseStartupData();
FPSGAME_API UClass* Z_Construct_UClass_UBaseStartupData_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UBaseStartupData
void UBaseStartupData::StaticRegisterNativesUBaseStartupData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseStartupData);
UClass* Z_Construct_UClass_UBaseStartupData_NoRegister()
{
	return UBaseStartupData::StaticClass();
}
struct Z_Construct_UClass_UBaseStartupData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StartupData/BaseStartupData.h" },
		{ "ModuleRelativePath", "Public/StartupData/BaseStartupData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStartupData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseStartupData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStartupData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseStartupData_Statics::ClassParams = {
	&UBaseStartupData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStartupData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseStartupData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseStartupData()
{
	if (!Z_Registration_Info_UClass_UBaseStartupData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseStartupData.OuterSingleton, Z_Construct_UClass_UBaseStartupData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseStartupData.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UBaseStartupData>()
{
	return UBaseStartupData::StaticClass();
}
UBaseStartupData::UBaseStartupData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStartupData);
UBaseStartupData::~UBaseStartupData() {}
// End Class UBaseStartupData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseStartupData, UBaseStartupData::StaticClass, TEXT("UBaseStartupData"), &Z_Registration_Info_UClass_UBaseStartupData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseStartupData), 3846927543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_1690142932(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
