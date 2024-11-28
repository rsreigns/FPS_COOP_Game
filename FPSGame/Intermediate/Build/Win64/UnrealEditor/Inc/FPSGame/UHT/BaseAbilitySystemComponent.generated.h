// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_BaseAbilitySystemComponent_generated_h
#error "BaseAbilitySystemComponent.generated.h already included, missing '#pragma once' in BaseAbilitySystemComponent.h"
#endif
#define FPSGAME_BaseAbilitySystemComponent_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UBaseAbilitySystemComponent)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseAbilitySystemComponent(UBaseAbilitySystemComponent&&); \
	UBaseAbilitySystemComponent(const UBaseAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAbilitySystemComponent) \
	NO_API virtual ~UBaseAbilitySystemComponent();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_12_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UBaseAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_BaseAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
