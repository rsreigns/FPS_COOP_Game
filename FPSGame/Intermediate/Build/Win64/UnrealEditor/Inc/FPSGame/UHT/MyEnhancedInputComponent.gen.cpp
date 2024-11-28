// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Input/MyEnhancedInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnhancedInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
FPSGAME_API UClass* Z_Construct_UClass_UMyEnhancedInputComponent();
FPSGAME_API UClass* Z_Construct_UClass_UMyEnhancedInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UMyEnhancedInputComponent
void UMyEnhancedInputComponent::StaticRegisterNativesUMyEnhancedInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyEnhancedInputComponent);
UClass* Z_Construct_UClass_UMyEnhancedInputComponent_NoRegister()
{
	return UMyEnhancedInputComponent::StaticClass();
}
struct Z_Construct_UClass_UMyEnhancedInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/MyEnhancedInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/MyEnhancedInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEnhancedInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyEnhancedInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnhancedInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyEnhancedInputComponent_Statics::ClassParams = {
	&UMyEnhancedInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnhancedInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyEnhancedInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyEnhancedInputComponent()
{
	if (!Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton, Z_Construct_UClass_UMyEnhancedInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyEnhancedInputComponent.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UMyEnhancedInputComponent>()
{
	return UMyEnhancedInputComponent::StaticClass();
}
UMyEnhancedInputComponent::UMyEnhancedInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyEnhancedInputComponent);
UMyEnhancedInputComponent::~UMyEnhancedInputComponent() {}
// End Class UMyEnhancedInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Input_MyEnhancedInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyEnhancedInputComponent, UMyEnhancedInputComponent::StaticClass, TEXT("UMyEnhancedInputComponent"), &Z_Registration_Info_UClass_UMyEnhancedInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyEnhancedInputComponent), 2590117331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Input_MyEnhancedInputComponent_h_870496338(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Input_MyEnhancedInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Input_MyEnhancedInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
