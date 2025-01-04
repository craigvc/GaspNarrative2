// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Serialization/NinjaFactionSaveGame.h"
#include "NinjaFactions/Public/Serialization/FFactionSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSaveGame();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSaveGame_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionManagerRecord();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionSaveGame Function LoadFactions
struct Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics
{
	struct NinjaFactionSaveGame_eventLoadFactions_Parms
	{
		UNinjaFactionComponent* FactionComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Faction|Save Game" },
		{ "Comment", "/**\n\x09 * Loads a saved game into a Faction Manager.\n\x09 * \n\x09 * If the target faction manager is already initialized, it might reset it and override\n\x09 * any current data with the one obtained from the saved game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaFactionSaveGame.h" },
		{ "ToolTip", "Loads a saved game into a Faction Manager.\n\nIf the target faction manager is already initialized, it might reset it and override\nany current data with the one obtained from the saved game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSaveGame_eventLoadFactions_Parms, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::NewProp_FactionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSaveGame, nullptr, "LoadFactions", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::NinjaFactionSaveGame_eventLoadFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::NinjaFactionSaveGame_eventLoadFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSaveGame::execLoadFactions)
{
	P_GET_OBJECT(UNinjaFactionComponent,Z_Param_FactionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFactions(Z_Param_FactionComponent);
	P_NATIVE_END;
}
// End Class UNinjaFactionSaveGame Function LoadFactions

// Begin Class UNinjaFactionSaveGame Function SaveFactions
struct Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics
{
	struct NinjaFactionSaveGame_eventSaveFactions_Parms
	{
		UNinjaFactionComponent* FactionComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Faction|Save Game" },
		{ "Comment", "/**\n\x09 * Retrieves the Faction Manager's data and saves it. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaFactionSaveGame.h" },
		{ "ToolTip", "Retrieves the Faction Manager's data and saves it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSaveGame_eventSaveFactions_Parms, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::NewProp_FactionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSaveGame, nullptr, "SaveFactions", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::NinjaFactionSaveGame_eventSaveFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::NinjaFactionSaveGame_eventSaveFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSaveGame::execSaveFactions)
{
	P_GET_OBJECT(UNinjaFactionComponent,Z_Param_FactionComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveFactions(Z_Param_FactionComponent);
	P_NATIVE_END;
}
// End Class UNinjaFactionSaveGame Function SaveFactions

// Begin Class UNinjaFactionSaveGame
void UNinjaFactionSaveGame::StaticRegisterNativesUNinjaFactionSaveGame()
{
	UClass* Class = UNinjaFactionSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadFactions", &UNinjaFactionSaveGame::execLoadFactions },
		{ "SaveFactions", &UNinjaFactionSaveGame::execSaveFactions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionSaveGame);
UClass* Z_Construct_UClass_UNinjaFactionSaveGame_NoRegister()
{
	return UNinjaFactionSaveGame::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Save Game representation for the Faction Manager.\n */" },
		{ "IncludePath", "Serialization/NinjaFactionSaveGame.h" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaFactionSaveGame.h" },
		{ "ToolTip", "Save Game representation for the Faction Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionManagerRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/NinjaFactionSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionManagerRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionSaveGame_LoadFactions, "LoadFactions" }, // 1793109150
		{ &Z_Construct_UFunction_UNinjaFactionSaveGame_SaveFactions, "SaveFactions" }, // 706441175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionSaveGame_Statics::NewProp_FactionManagerRecord = { "FactionManagerRecord", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSaveGame, FactionManagerRecord), Z_Construct_UScriptStruct_FFactionManagerRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionManagerRecord_MetaData), NewProp_FactionManagerRecord_MetaData) }; // 940632695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSaveGame_Statics::NewProp_FactionManagerRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionSaveGame_Statics::ClassParams = {
	&UNinjaFactionSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaFactionSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionSaveGame()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionSaveGame.OuterSingleton, Z_Construct_UClass_UNinjaFactionSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionSaveGame.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionSaveGame>()
{
	return UNinjaFactionSaveGame::StaticClass();
}
UNinjaFactionSaveGame::UNinjaFactionSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionSaveGame);
UNinjaFactionSaveGame::~UNinjaFactionSaveGame() {}
// End Class UNinjaFactionSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionSaveGame, UNinjaFactionSaveGame::StaticClass, TEXT("UNinjaFactionSaveGame"), &Z_Registration_Info_UClass_UNinjaFactionSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionSaveGame), 650624702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_2409459164(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
