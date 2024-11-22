// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StartupData/BaseStartupData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_BaseStartupData_generated_h
#error "BaseStartupData.generated.h already included, missing '#pragma once' in BaseStartupData.h"
#endif
#define FPSGAME_BaseStartupData_generated_h

#define FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseStartupData(); \
	friend struct Z_Construct_UClass_UBaseStartupData_Statics; \
public: \
	DECLARE_CLASS(UBaseStartupData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UBaseStartupData)


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseStartupData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseStartupData(UBaseStartupData&&); \
	UBaseStartupData(const UBaseStartupData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStartupData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStartupData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseStartupData) \
	NO_API virtual ~UBaseStartupData();


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_11_PROLOG
#define FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UBaseStartupData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPSGame_Source_FPSGame_Public_StartupData_BaseStartupData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
