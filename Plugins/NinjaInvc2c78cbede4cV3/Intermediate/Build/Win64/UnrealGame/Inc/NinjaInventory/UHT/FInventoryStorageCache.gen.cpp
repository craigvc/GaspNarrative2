// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryStorageCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryStorageCache() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStorageCache();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryStorageCache
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryStorageCache;
class UScriptStruct* FInventoryStorageCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStorageCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryStorageCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStorageCache, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryStorageCache"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryStorageCache.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryStorageCache>()
{
	return FInventoryStorageCache::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryStorageCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Caches storage information about items and their storage.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStorageCache.h" },
		{ "ToolTip", "Caches storage information about items and their storage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Container Cache" },
		{ "Comment", "/** Item owning this storage information. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStorageCache.h" },
		{ "ToolTip", "Item owning this storage information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Container Cache" },
		{ "Comment", "/** Primary Container where the item is stored. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStorageCache.h" },
		{ "ToolTip", "Primary Container where the item is stored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryContainer_MetaData[] = {
		{ "Category", "Container Cache" },
		{ "Comment", "/** Informs if this is the primary container for the item. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStorageCache.h" },
		{ "ToolTip", "Informs if this is the primary container for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Container Cache" },
		{ "Comment", "/** Position the item is in the container. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStorageCache.h" },
		{ "ToolTip", "Position the item is in the container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_bIsPrimaryContainer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryContainer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStorageCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStorageCache, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStorageCache, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_bIsPrimaryContainer_SetBit(void* Obj)
{
	((FInventoryStorageCache*)Obj)->bIsPrimaryContainer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_bIsPrimaryContainer = { "bIsPrimaryContainer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryStorageCache), &Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_bIsPrimaryContainer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrimaryContainer_MetaData), NewProp_bIsPrimaryContainer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStorageCache, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_bIsPrimaryContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryStorageCache",
	Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::PropPointers),
	sizeof(FInventoryStorageCache),
	alignof(FInventoryStorageCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryStorageCache()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStorageCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryStorageCache.InnerSingleton, Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryStorageCache.InnerSingleton;
}
// End ScriptStruct FInventoryStorageCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStorageCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryStorageCache::StaticStruct, Z_Construct_UScriptStruct_FInventoryStorageCache_Statics::NewStructOps, TEXT("InventoryStorageCache"), &Z_Registration_Info_UScriptStruct_InventoryStorageCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryStorageCache), 1485139525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStorageCache_h_2170291425(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStorageCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStorageCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
