// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/InteractionSystem/BaseInteractionActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInteractionActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FPSGAME_API UClass* Z_Construct_UClass_ABaseInteractionActor();
FPSGAME_API UClass* Z_Construct_UClass_ABaseInteractionActor_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_UNativeInteractionInterface_NoRegister();
FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EEquipmentType();
FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EInteractionType();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Enum EInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionType;
static UEnum* EInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EInteractionType, (UObject*)Z_Construct_UPackage__Script_FPSGame(), TEXT("EInteractionType"));
	}
	return Z_Registration_Info_UEnum_EInteractionType.OuterSingleton;
}
template<> FPSGAME_API UEnum* StaticEnum<EInteractionType>()
{
	return EInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_FPSGame_EInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equipment.Name", "EInteractionType::Equipment" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
		{ "Trigger.Name", "EInteractionType::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractionType::Equipment", (int64)EInteractionType::Equipment },
		{ "EInteractionType::Trigger", (int64)EInteractionType::Trigger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSGame_EInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
	nullptr,
	"EInteractionType",
	"EInteractionType",
	Z_Construct_UEnum_FPSGame_EInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSGame_EInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FPSGame_EInteractionType()
{
	if (!Z_Registration_Info_UEnum_EInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionType.InnerSingleton, Z_Construct_UEnum_FPSGame_EInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractionType.InnerSingleton;
}
// End Enum EInteractionType

// Begin Enum EEquipmentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentType;
static UEnum* EEquipmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EEquipmentType, (UObject*)Z_Construct_UPackage__Script_FPSGame(), TEXT("EEquipmentType"));
	}
	return Z_Registration_Info_UEnum_EEquipmentType.OuterSingleton;
}
template<> FPSGAME_API UEnum* StaticEnum<EEquipmentType>()
{
	return EEquipmentType_StaticEnum();
}
struct Z_Construct_UEnum_FPSGame_EEquipmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InventoryItem.Name", "EEquipmentType::InventoryItem" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
		{ "Weapon.Name", "EEquipmentType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentType::Weapon", (int64)EEquipmentType::Weapon },
		{ "EEquipmentType::InventoryItem", (int64)EEquipmentType::InventoryItem },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
	nullptr,
	"EEquipmentType",
	"EEquipmentType",
	Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FPSGame_EEquipmentType()
{
	if (!Z_Registration_Info_UEnum_EEquipmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentType.InnerSingleton, Z_Construct_UEnum_FPSGame_EEquipmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentType.InnerSingleton;
}
// End Enum EEquipmentType

// Begin Class ABaseInteractionActor Function OnBeginOverlap
struct Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics
{
	struct BaseInteractionActor_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BaseInteractionActor_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInteractionActor_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseInteractionActor, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::BaseInteractionActor_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::BaseInteractionActor_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseInteractionActor::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABaseInteractionActor Function OnBeginOverlap

// Begin Class ABaseInteractionActor Function OnEndOverlap
struct Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics
{
	struct BaseInteractionActor_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInteractionActor_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseInteractionActor, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::BaseInteractionActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::BaseInteractionActor_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseInteractionActor::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ABaseInteractionActor Function OnEndOverlap

// Begin Class ABaseInteractionActor
void ABaseInteractionActor::StaticRegisterNativesABaseInteractionActor()
{
	UClass* Class = ABaseInteractionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &ABaseInteractionActor::execOnBeginOverlap },
		{ "OnEndOverlap", &ABaseInteractionActor::execOnEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseInteractionActor);
UClass* Z_Construct_UClass_ABaseInteractionActor_NoRegister()
{
	return ABaseInteractionActor::StaticClass();
}
struct Z_Construct_UClass_ABaseInteractionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionSystem/BaseInteractionActor.h" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSwitcherOverlap_MetaData[] = {
		{ "Category", "Interaction|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category=\"Interaction|Components\")\n\x09USkeletalMeshComponent* ActorMesh;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category=\"Interaction|Components\")\n       USkeletalMeshComponent* ActorMesh;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "Interaction|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionHelper_MetaData[] = {
		{ "Category", "Interaction|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditCondition", "InteractionType == EInteractionType::Equipment" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditCondition", "EquipmentType == EEquipmentType::Weapon && InteractionType == EInteractionType::Equipment" },
		{ "EditConditionHides", "TRUE" },
		{ "ModuleRelativePath", "Public/InteractionSystem/BaseInteractionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetSwitcherOverlap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionHelper;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseInteractionActor_OnBeginOverlap, "OnBeginOverlap" }, // 1763344590
		{ &Z_Construct_UFunction_ABaseInteractionActor_OnEndOverlap, "OnEndOverlap" }, // 1975274538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseInteractionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WidgetSwitcherOverlap = { "WidgetSwitcherOverlap", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, WidgetSwitcherOverlap), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSwitcherOverlap_MetaData), NewProp_WidgetSwitcherOverlap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionHelper = { "InteractionHelper", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, InteractionHelper), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionHelper_MetaData), NewProp_InteractionHelper_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, InteractionType), Z_Construct_UEnum_FPSGame_EInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionType_MetaData), NewProp_InteractionType_MetaData) }; // 256735114
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, EquipmentType), Z_Construct_UEnum_FPSGame_EEquipmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) }; // 3940067518
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseInteractionActor, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseInteractionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WidgetSwitcherOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_InteractionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_EquipmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_EquipmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseInteractionActor_Statics::NewProp_WeaponClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseInteractionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseInteractionActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNativeInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseInteractionActor, INativeInteractionInterface), false },  // 2228524037
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseInteractionActor_Statics::ClassParams = {
	&ABaseInteractionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseInteractionActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractionActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseInteractionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseInteractionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseInteractionActor()
{
	if (!Z_Registration_Info_UClass_ABaseInteractionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseInteractionActor.OuterSingleton, Z_Construct_UClass_ABaseInteractionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseInteractionActor.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<ABaseInteractionActor>()
{
	return ABaseInteractionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseInteractionActor);
ABaseInteractionActor::~ABaseInteractionActor() {}
// End Class ABaseInteractionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInteractionType_StaticEnum, TEXT("EInteractionType"), &Z_Registration_Info_UEnum_EInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 256735114U) },
		{ EEquipmentType_StaticEnum, TEXT("EEquipmentType"), &Z_Registration_Info_UEnum_EEquipmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3940067518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseInteractionActor, ABaseInteractionActor::StaticClass, TEXT("ABaseInteractionActor"), &Z_Registration_Info_UClass_ABaseInteractionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseInteractionActor), 826619747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_3170086207(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_InteractionSystem_BaseInteractionActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
