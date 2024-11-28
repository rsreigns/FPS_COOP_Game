// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MyBaseAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_MyBaseAnimInstance_generated_h
#error "MyBaseAnimInstance.generated.h already included, missing '#pragma once' in MyBaseAnimInstance.h"
#endif
#define FPSGAME_MyBaseAnimInstance_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UMyBaseAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyBaseAnimInstance, UBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(UMyBaseAnimInstance)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyBaseAnimInstance(UMyBaseAnimInstance&&); \
	UMyBaseAnimInstance(const UMyBaseAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBaseAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBaseAnimInstance) \
	NO_API virtual ~UMyBaseAnimInstance();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_11_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_14_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UMyBaseAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Animation_MyBaseAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
