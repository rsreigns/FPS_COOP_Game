// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
FPSGAME_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
FPSGAME_API UClass* Z_Construct_UClass_AWeaponBase();
FPSGAME_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EWeaponFireType();
FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EWeaponFiringMode();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Enum EWeaponFiringMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponFiringMode;
static UEnum* EWeaponFiringMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponFiringMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponFiringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EWeaponFiringMode, (UObject*)Z_Construct_UPackage__Script_FPSGame(), TEXT("EWeaponFiringMode"));
	}
	return Z_Registration_Info_UEnum_EWeaponFiringMode.OuterSingleton;
}
template<> FPSGAME_API UEnum* StaticEnum<EWeaponFiringMode>()
{
	return EWeaponFiringMode_StaticEnum();
}
struct Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Automatic.Name", "EWeaponFiringMode::Automatic" },
		{ "BlueprintType", "true" },
		{ "Burst.Name", "EWeaponFiringMode::Burst" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "Single.Name", "EWeaponFiringMode::Single" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponFiringMode::Single", (int64)EWeaponFiringMode::Single },
		{ "EWeaponFiringMode::Burst", (int64)EWeaponFiringMode::Burst },
		{ "EWeaponFiringMode::Automatic", (int64)EWeaponFiringMode::Automatic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
	nullptr,
	"EWeaponFiringMode",
	"EWeaponFiringMode",
	Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FPSGame_EWeaponFiringMode()
{
	if (!Z_Registration_Info_UEnum_EWeaponFiringMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponFiringMode.InnerSingleton, Z_Construct_UEnum_FPSGame_EWeaponFiringMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponFiringMode.InnerSingleton;
}
// End Enum EWeaponFiringMode

// Begin Enum EWeaponFireType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponFireType;
static UEnum* EWeaponFireType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponFireType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponFireType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EWeaponFireType, (UObject*)Z_Construct_UPackage__Script_FPSGame(), TEXT("EWeaponFireType"));
	}
	return Z_Registration_Info_UEnum_EWeaponFireType.OuterSingleton;
}
template<> FPSGAME_API UEnum* StaticEnum<EWeaponFireType>()
{
	return EWeaponFireType_StaticEnum();
}
struct Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "Projectile.Name", "EWeaponFireType::Projectile" },
		{ "Trace.Name", "EWeaponFireType::Trace" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponFireType::Trace", (int64)EWeaponFireType::Trace },
		{ "EWeaponFireType::Projectile", (int64)EWeaponFireType::Projectile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
	nullptr,
	"EWeaponFireType",
	"EWeaponFireType",
	Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FPSGame_EWeaponFireType()
{
	if (!Z_Registration_Info_UEnum_EWeaponFireType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponFireType.InnerSingleton, Z_Construct_UEnum_FPSGame_EWeaponFireType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponFireType.InnerSingleton;
}
// End Enum EWeaponFireType

// Begin Class AWeaponBase Function HandleFire
static const FName NAME_AWeaponBase_HandleFire = FName(TEXT("HandleFire"));
void AWeaponBase::HandleFire()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_HandleFire);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWeaponBase_HandleFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_HandleFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execHandleFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFire_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function HandleFire

// Begin Class AWeaponBase Function ReloadWeapon
static const FName NAME_AWeaponBase_ReloadWeapon = FName(TEXT("ReloadWeapon"));
void AWeaponBase::ReloadWeapon()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_ReloadWeapon);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWeaponBase_ReloadWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "ReloadWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_ReloadWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_ReloadWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponBase_ReloadWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_ReloadWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execReloadWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadWeapon_Implementation();
	P_NATIVE_END;
}
// End Class AWeaponBase Function ReloadWeapon

// Begin Class AWeaponBase
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleFire", &AWeaponBase::execHandleFire },
		{ "ReloadWeapon", &AWeaponBase::execReloadWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFiringMode_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFireType_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstFireBulletCount_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "EditCondition", "WeaponFiringMode == EWeaponFiringMode::Burst" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstFireDelay_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "EditCondition", "WeaponFiringMode == EWeaponFiringMode::Burst" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "EditCondition", "WeaponFireType == EWeaponFireType::Projectile" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireDistance_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilYaw_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPitch_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchMultiplier_MetaData[] = {
		{ "Category", "Weapon|Core" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponFiringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponFiringMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponFireType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponFireType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BurstFireBulletCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstFireDelay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamageMultiplier;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilYaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_HandleFire, "HandleFire" }, // 1291338113
		{ &Z_Construct_UFunction_AWeaponBase_ReloadWeapon, "ReloadWeapon" }, // 1826611601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTypes_MetaData), NewProp_TraceObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFiringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFiringMode = { "WeaponFiringMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponFiringMode), Z_Construct_UEnum_FPSGame_EWeaponFiringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFiringMode_MetaData), NewProp_WeaponFiringMode_MetaData) }; // 4272514377
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFireType = { "WeaponFireType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponFireType), Z_Construct_UEnum_FPSGame_EWeaponFireType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFireType_MetaData), NewProp_WeaponFireType_MetaData) }; // 3847971302
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_BurstFireBulletCount = { "BurstFireBulletCount", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, BurstFireBulletCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstFireBulletCount_MetaData), NewProp_BurstFireBulletCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_BurstFireDelay = { "BurstFireDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, BurstFireDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstFireDelay_MetaData), NewProp_BurstFireDelay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireDistance = { "FireDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, FireDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireDistance_MetaData), NewProp_FireDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDamage = { "WeaponDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponDamage_MetaData), NewProp_WeaponDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_CriticalDamageMultiplier = { "CriticalDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, CriticalDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDamageMultiplier_MetaData), NewProp_CriticalDamageMultiplier_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilYaw = { "RecoilYaw", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RecoilYaw), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilYaw_MetaData), NewProp_RecoilYaw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilPitch = { "RecoilPitch", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RecoilPitch), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilPitch_MetaData), NewProp_RecoilPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxPitchMultiplier = { "MaxPitchMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MaxPitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchMultiplier_MetaData), NewProp_MaxPitchMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OwningPlayer), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MuzzleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleLocation_MetaData), NewProp_MuzzleLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_TraceObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_TraceObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFiringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFiringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFireType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponFireType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_BurstFireBulletCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_BurstFireDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_FireDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ReloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_CriticalDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoilPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MaxPitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MuzzleLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<AWeaponBase>()
{
	return AWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// End Class AWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponFiringMode_StaticEnum, TEXT("EWeaponFiringMode"), &Z_Registration_Info_UEnum_EWeaponFiringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4272514377U) },
		{ EWeaponFireType_StaticEnum, TEXT("EWeaponFireType"), &Z_Registration_Info_UEnum_EWeaponFireType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3847971302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 1327491897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_858674637(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_Public_WeaponBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
