// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/AbilitySystem/BaseAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilitySystemComponent() {}

// Begin Cross Module References
FPSGAME_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class UBaseAbilitySystemComponent
void UBaseAbilitySystemComponent::StaticRegisterNativesUBaseAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAbilitySystemComponent);
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams = {
	&UBaseAbilitySystemComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<UBaseAbilitySystemComponent>()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
UBaseAbilitySystemComponent::UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbilitySystemComponent);
UBaseAbilitySystemComponent::~UBaseAbilitySystemComponent() {}
// End Class UBaseAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbilitySystemComponent, UBaseAbilitySystemComponent::StaticClass, TEXT("UBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbilitySystemComponent), 1959497735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_3404867161(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
