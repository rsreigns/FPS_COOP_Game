// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/UI/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
FPSGAME_API UClass* Z_Construct_UClass_AMyHUD();
FPSGAME_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class AMyHUD
void AMyHUD::StaticRegisterNativesAMyHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHUD);
UClass* Z_Construct_UClass_AMyHUD_NoRegister()
{
	return AMyHUD::StaticClass();
}
struct Z_Construct_UClass_AMyHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/MyHUD.h" },
		{ "ModuleRelativePath", "Public/UI/MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetList_MetaData[] = {
		{ "Category", "MyHUD" },
		{ "ModuleRelativePath", "Public/UI/MyHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetList_Inner = { "WidgetList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetList = { "WidgetList", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyHUD, WidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetList_MetaData), NewProp_WidgetList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_WidgetList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
	&AMyHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyHUD()
{
	if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<AMyHUD>()
{
	return AMyHUD::StaticClass();
}
AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
AMyHUD::~AMyHUD() {}
// End Class AMyHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 3377232593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_1096340330(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
