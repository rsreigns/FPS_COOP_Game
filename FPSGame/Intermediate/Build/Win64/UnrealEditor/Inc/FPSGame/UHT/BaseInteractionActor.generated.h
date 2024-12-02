// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSystem/BaseInteractionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSGAME_BaseInteractionActor_generated_h
#error "BaseInteractionActor.generated.h already included, missing '#pragma once' in BaseInteractionActor.h"
#endif
#define FPSGAME_BaseInteractionActor_generated_h

#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseInteractionActor(); \
	friend struct Z_Construct_UClass_ABaseInteractionActor_Statics; \
public: \
	DECLARE_CLASS(ABaseInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseInteractionActor) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseInteractionActor*>(this); }


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseInteractionActor(ABaseInteractionActor&&); \
	ABaseInteractionActor(const ABaseInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseInteractionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseInteractionActor) \
	NO_API virtual ~ABaseInteractionActor();


#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_27_PROLOG
#define FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class ABaseInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h


#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::Equipment) \
	op(EInteractionType::Trigger) 

enum class EInteractionType : uint8;
template<> struct TIsUEnumClass<EInteractionType> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EInteractionType>();

#define FOREACH_ENUM_EEQUIPMENTTYPE(op) \
	op(EEquipmentType::Weapon) \
	op(EEquipmentType::InventoryItem) 

enum class EEquipmentType : uint8;
template<> struct TIsUEnumClass<EEquipmentType> { enum { Value = true }; };
template<> FPSGAME_API UEnum* StaticEnum<EEquipmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
