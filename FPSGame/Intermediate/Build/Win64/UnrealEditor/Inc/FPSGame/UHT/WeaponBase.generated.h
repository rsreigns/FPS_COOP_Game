// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef FPSGAME_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPSGAME_WeaponBase_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeaponMesh);


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, ABaseInteractionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeaponBase(AWeaponBase&&); \
	AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase) \
	NO_API virtual ~AWeaponBase();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_21_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_Weapons_WeaponBase_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Firearm) \
	op(EWeaponType::Melee) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EWeaponType>();

#define FOREACH_ENUM_EWEAPONSLOTTYPE(op) \
	op(EWeaponSlotType::Melee) \
	op(EWeaponSlotType::Primary) \
	op(EWeaponSlotType::Secondary) \
	op(EWeaponSlotType::Throwable) 

enum class EWeaponSlotType : uint8;
template<> struct TIsUEnumClass<EWeaponSlotType> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EWeaponSlotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
