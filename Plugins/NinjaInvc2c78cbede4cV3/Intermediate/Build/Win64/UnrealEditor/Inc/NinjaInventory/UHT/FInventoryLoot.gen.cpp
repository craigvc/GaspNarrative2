// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryLoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryLoot() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryLoot();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryLoot
static_assert(std::is_polymorphic<FInventoryLoot>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryLoot cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryLoot;
class UScriptStruct* FInventoryLoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryLoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryLoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryLoot, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryLoot"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryLoot.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryLoot>()
{
	return FInventoryLoot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Table Structure for available loot.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryLoot.h" },
		{ "ToolTip", "Table Structure for available loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Item Data, containing a Loot Fragment. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryLoot.h" },
		{ "ToolTip", "Item Data, containing a Loot Fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryLoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryLoot_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryLoot, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryLoot_Statics::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryLoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryLoot",
	Z_Construct_UScriptStruct_FInventoryLoot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryLoot_Statics::PropPointers),
	sizeof(FInventoryLoot),
	alignof(FInventoryLoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryLoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryLoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryLoot()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryLoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryLoot.InnerSingleton, Z_Construct_UScriptStruct_FInventoryLoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryLoot.InnerSingleton;
}
// End ScriptStruct FInventoryLoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryLoot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryLoot::StaticStruct, Z_Construct_UScriptStruct_FInventoryLoot_Statics::NewStructOps, TEXT("InventoryLoot"), &Z_Registration_Info_UScriptStruct_InventoryLoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryLoot), 2400410246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryLoot_h_348319661(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryLoot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryLoot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
