// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_CameraManager_generated_h
#error "CameraManager.generated.h already included, missing '#pragma once' in CameraManager.h"
#endif
#define FPSGAME_CameraManager_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraManager(); \
	friend struct Z_Construct_UClass_ACameraManager_Statics; \
public: \
	DECLARE_CLASS(ACameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ACameraManager)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraManager(ACameraManager&&); \
	ACameraManager(const ACameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraManager) \
	NO_API virtual ~ACameraManager();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_12_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ACameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Camera_CameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
