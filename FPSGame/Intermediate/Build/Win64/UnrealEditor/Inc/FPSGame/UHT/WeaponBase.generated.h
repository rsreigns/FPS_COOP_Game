// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPSGAME_WeaponBase_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReloadWeapon_Implementation(); \
	virtual void HandleFire_Implementation(); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execHandleFire);


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_CALLBACK_WRAPPERS
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&); \
	AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_28_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_CALLBACK_WRAPPERS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h


#define FOREACH_ENUM_EWEAPONFIRINGMODE(op) \
	op(EWeaponFiringMode::Single) \
	op(EWeaponFiringMode::Burst) \
	op(EWeaponFiringMode::Automatic) 

enum class EWeaponFiringMode : uint8;
template<> struct TIsUEnumClass<EWeaponFiringMode> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EWeaponFiringMode>();

#define FOREACH_ENUM_EWEAPONFIRETYPE(op) \
	op(EWeaponFireType::Trace) \
	op(EWeaponFireType::Projectile) 

enum class EWeaponFireType : uint8;
template<> struct TIsUEnumClass<EWeaponFireType> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EWeaponFireType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
