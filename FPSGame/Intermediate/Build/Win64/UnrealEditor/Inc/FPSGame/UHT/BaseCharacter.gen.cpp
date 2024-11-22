// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/Character/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
FPSGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
FPSGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class ABaseCharacter
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseASC_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BaseASC = { "BaseASC", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, BaseASC), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseASC_MetaData), NewProp_BaseASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BaseASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<ABaseCharacter>()
{
	return ABaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// End Class ABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Character_BaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 2963803284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Character_BaseCharacter_h_1500376818(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Character_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPSGame_Source_FPSGame_Public_Character_BaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
