// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MyHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define FPSGAME_MyHUD_generated_h

#define FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyHUD(); \
	friend struct Z_Construct_UClass_AMyHUD_Statics; \
public: \
	DECLARE_CLASS(AMyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AMyHUD)


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyHUD(AMyHUD&&); \
	AMyHUD(const AMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyHUD) \
	NO_API virtual ~AMyHUD();


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_11_PROLOG
#define FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPSGame_Source_FPSGame_Public_UI_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
