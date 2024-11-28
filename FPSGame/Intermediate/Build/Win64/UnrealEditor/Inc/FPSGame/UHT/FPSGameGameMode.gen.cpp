// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/FPSGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPSGAME_API UClass* Z_Construct_UClass_AFPSGameGameMode();
FPSGAME_API UClass* Z_Construct_UClass_AFPSGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References

// Begin Class AFPSGameGameMode Function BroadcastGravityChange
struct FPSGameGameMode_eventBroadcastGravityChange_Parms
{
	FVector NewGravityDirection;
};
static const FName NAME_AFPSGameGameMode_BroadcastGravityChange = FName(TEXT("BroadcastGravityChange"));
void AFPSGameGameMode::BroadcastGravityChange(FVector NewGravityDirection)
{
	FPSGameGameMode_eventBroadcastGravityChange_Parms Parms;
	Parms.NewGravityDirection=NewGravityDirection;
	UFunction* Func = FindFunctionChecked(NAME_AFPSGameGameMode_BroadcastGravityChange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSGameGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameGameMode_eventBroadcastGravityChange_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::NewProp_NewGravityDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameGameMode, nullptr, "BroadcastGravityChange", nullptr, nullptr, Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::PropPointers), sizeof(FPSGameGameMode_eventBroadcastGravityChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(FPSGameGameMode_eventBroadcastGravityChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSGameGameMode::execBroadcastGravityChange)
{
	P_GET_STRUCT(FVector,Z_Param_NewGravityDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastGravityChange_Implementation(Z_Param_NewGravityDirection);
	P_NATIVE_END;
}
// End Class AFPSGameGameMode Function BroadcastGravityChange

// Begin Class AFPSGameGameMode
void AFPSGameGameMode::StaticRegisterNativesAFPSGameGameMode()
{
	UClass* Class = AFPSGameGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastGravityChange", &AFPSGameGameMode::execBroadcastGravityChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSGameGameMode);
UClass* Z_Construct_UClass_AFPSGameGameMode_NoRegister()
{
	return AFPSGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AFPSGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameGameMode.h" },
		{ "ModuleRelativePath", "FPSGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameGameMode_BroadcastGravityChange, "BroadcastGravityChange" }, // 4221002146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameGameMode_Statics::ClassParams = {
	&AFPSGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameGameMode.OuterSingleton, Z_Construct_UClass_AFPSGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameGameMode.OuterSingleton;
}
template<> FPSGAME_API UClass* StaticClass<AFPSGameGameMode>()
{
	return AFPSGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameGameMode);
AFPSGameGameMode::~AFPSGameGameMode() {}
// End Class AFPSGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_FPSGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameGameMode, AFPSGameGameMode::StaticClass, TEXT("AFPSGameGameMode"), &Z_Registration_Info_UClass_AFPSGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameGameMode), 699552720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_FPSGameGameMode_h_3150736697(TEXT("/Script/FPSGame"),
	Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_FPSGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_FPS_COOP_Game_FPSGame_Source_FPSGame_FPSGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
