// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSystem/NativeInteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_NativeInteractionInterface_generated_h
#error "NativeInteractionInterface.generated.h already included, missing '#pragma once' in NativeInteractionInterface.h"
#endif
#define FPSGAME_NativeInteractionInterface_generated_h

#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSGAME_API UNativeInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNativeInteractionInterface(UNativeInteractionInterface&&); \
	UNativeInteractionInterface(const UNativeInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSGAME_API, UNativeInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeInteractionInterface) \
	FPSGAME_API virtual ~UNativeInteractionInterface();


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNativeInteractionInterface(); \
	friend struct Z_Construct_UClass_UNativeInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UNativeInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSGame"), FPSGAME_API) \
	DECLARE_SERIALIZER(UNativeInteractionInterface)


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INativeInteractionInterface() {} \
public: \
	typedef UNativeInteractionInterface UClassType; \
	typedef INativeInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_10_PROLOG
#define FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class UNativeInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPSGame_Source_FPSGame_Public_InteractionSystem_NativeInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
