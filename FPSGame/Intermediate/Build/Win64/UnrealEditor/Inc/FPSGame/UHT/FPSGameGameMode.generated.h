// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSGameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSGameGameMode_generated_h
#error "FPSGameGameMode.generated.h already included, missing '#pragma once' in FPSGameGameMode.h"
#endif
#define FPSGAME_FPSGameGameMode_generated_h

#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BroadcastGravityChange_Implementation(FVector NewGravityDirection); \
	DECLARE_FUNCTION(execBroadcastGravityChange);


#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_CALLBACK_WRAPPERS
#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameGameMode(); \
	friend struct Z_Construct_UClass_AFPSGameGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), FPSGAME_API) \
	DECLARE_SERIALIZER(AFPSGameGameMode)


#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSGameGameMode(AFPSGameGameMode&&); \
	AFPSGameGameMode(const AFPSGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSGAME_API, AFPSGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSGameGameMode) \
	FPSGAME_API virtual ~AFPSGameGameMode();


#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_9_PROLOG
#define FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_CALLBACK_WRAPPERS \
	FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPSGame_Source_FPSGame_FPSGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
