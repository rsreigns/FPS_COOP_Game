// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/PlayerGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_PlayerGameplayAbility_generated_h
#error "PlayerGameplayAbility.generated.h already included, missing '#pragma once' in PlayerGameplayAbility.h"
#endif
#define FPSGAME_PlayerGameplayAbility_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerGameplayAbility(); \
	friend struct Z_Construct_UClass_UPlayerGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UPlayerGameplayAbility, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UPlayerGameplayAbility)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerGameplayAbility(UPlayerGameplayAbility&&); \
	UPlayerGameplayAbility(const UPlayerGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerGameplayAbility) \
	NO_API virtual ~UPlayerGameplayAbility();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_12_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UPlayerGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_AbilitySystem_Abilities_PlayerGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
