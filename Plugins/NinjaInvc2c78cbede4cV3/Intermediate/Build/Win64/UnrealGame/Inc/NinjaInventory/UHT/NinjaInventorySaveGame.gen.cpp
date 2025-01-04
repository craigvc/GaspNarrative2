// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Serialization/NinjaInventorySaveGame.h"
#include "NinjaInventory/Public/Serialization/FInventorySerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventorySaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySaveGame();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySaveGame_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryManagerRecord();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventorySaveGame Function LoadInventory
struct Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics
{
	struct NinjaInventorySaveGame_eventLoadInventory_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Save Game" },
		{ "Comment", "/**\n\x09 * Loads a saved game into an Inventory Manager.\n\x09 * \n\x09 * If the target inventory is already initialized, it might reset it and override\n\x09 * any current data with the one obtained from the saved game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaInventorySaveGame.h" },
		{ "ToolTip", "Loads a saved game into an Inventory Manager.\n\nIf the target inventory is already initialized, it might reset it and override\nany current data with the one obtained from the saved game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySaveGame_eventLoadInventory_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySaveGame, nullptr, "LoadInventory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::NinjaInventorySaveGame_eventLoadInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::NinjaInventorySaveGame_eventLoadInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySaveGame::execLoadInventory)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadInventory(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventorySaveGame Function LoadInventory

// Begin Class UNinjaInventorySaveGame Function SaveInventory
struct Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics
{
	struct NinjaInventorySaveGame_eventSaveInventory_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Save Game" },
		{ "Comment", "/**\n\x09 * Retrieves the Inventory Manager's data and saves it. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaInventorySaveGame.h" },
		{ "ToolTip", "Retrieves the Inventory Manager's data and saves it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySaveGame_eventSaveInventory_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySaveGame, nullptr, "SaveInventory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::NinjaInventorySaveGame_eventSaveInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::NinjaInventorySaveGame_eventSaveInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySaveGame::execSaveInventory)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveInventory(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventorySaveGame Function SaveInventory

// Begin Class UNinjaInventorySaveGame
void UNinjaInventorySaveGame::StaticRegisterNativesUNinjaInventorySaveGame()
{
	UClass* Class = UNinjaInventorySaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadInventory", &UNinjaInventorySaveGame::execLoadInventory },
		{ "SaveInventory", &UNinjaInventorySaveGame::execSaveInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventorySaveGame);
UClass* Z_Construct_UClass_UNinjaInventorySaveGame_NoRegister()
{
	return UNinjaInventorySaveGame::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventorySaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Save Game representation for the Inventory Manager.\n */" },
		{ "IncludePath", "Serialization/NinjaInventorySaveGame.h" },
		{ "ModuleRelativePath", "Public/Serialization/NinjaInventorySaveGame.h" },
		{ "ToolTip", "Save Game representation for the Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/NinjaInventorySaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventorySaveGame_LoadInventory, "LoadInventory" }, // 18144425
		{ &Z_Construct_UFunction_UNinjaInventorySaveGame_SaveInventory, "SaveInventory" }, // 1982454586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventorySaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventorySaveGame_Statics::NewProp_InventoryRecord = { "InventoryRecord", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySaveGame, InventoryRecord), Z_Construct_UScriptStruct_FInventoryManagerRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryRecord_MetaData), NewProp_InventoryRecord_MetaData) }; // 1373499037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventorySaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySaveGame_Statics::NewProp_InventoryRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventorySaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventorySaveGame_Statics::ClassParams = {
	&UNinjaInventorySaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventorySaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventorySaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventorySaveGame()
{
	if (!Z_Registration_Info_UClass_UNinjaInventorySaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventorySaveGame.OuterSingleton, Z_Construct_UClass_UNinjaInventorySaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventorySaveGame.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventorySaveGame>()
{
	return UNinjaInventorySaveGame::StaticClass();
}
UNinjaInventorySaveGame::UNinjaInventorySaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventorySaveGame);
UNinjaInventorySaveGame::~UNinjaInventorySaveGame() {}
// End Class UNinjaInventorySaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_NinjaInventorySaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventorySaveGame, UNinjaInventorySaveGame::StaticClass, TEXT("UNinjaInventorySaveGame"), &Z_Registration_Info_UClass_UNinjaInventorySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventorySaveGame), 2659498957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_NinjaInventorySaveGame_h_1781252921(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_NinjaInventorySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_NinjaInventorySaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
