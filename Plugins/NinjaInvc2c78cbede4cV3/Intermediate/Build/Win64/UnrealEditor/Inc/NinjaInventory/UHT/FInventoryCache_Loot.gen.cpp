// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryCache_Loot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryCache_Loot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryCachedLoot();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryCachedLoot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryCachedLoot;
class UScriptStruct* FInventoryCachedLoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryCachedLoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryCachedLoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryCachedLoot, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryCachedLoot"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryCachedLoot.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryCachedLoot>()
{
	return FInventoryCachedLoot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores selected loot that can be used later.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryCache_Loot.h" },
		{ "ToolTip", "Stores selected loot that can be used later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequesterActor_MetaData[] = {
		{ "Category", "Cached Loot" },
		{ "Comment", "/** Actor that owns the Inventory Manager that requested the loot. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryCache_Loot.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Actor that owns the Inventory Manager that requested the loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoot_MetaData[] = {
		{ "Category", "Cached Loot" },
		{ "Comment", "/** All loot that was pre-selected. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryCache_Loot.h" },
		{ "ToolTip", "All loot that was pre-selected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RequesterActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLoot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryCachedLoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_RequesterActor = { "RequesterActor", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryCachedLoot, RequesterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequesterActor_MetaData), NewProp_RequesterActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_SelectedLoot_Inner = { "SelectedLoot", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_SelectedLoot = { "SelectedLoot", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryCachedLoot, SelectedLoot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLoot_MetaData), NewProp_SelectedLoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_RequesterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_SelectedLoot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewProp_SelectedLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryCachedLoot",
	Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::PropPointers),
	sizeof(FInventoryCachedLoot),
	alignof(FInventoryCachedLoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryCachedLoot()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryCachedLoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryCachedLoot.InnerSingleton, Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryCachedLoot.InnerSingleton;
}
// End ScriptStruct FInventoryCachedLoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryCache_Loot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryCachedLoot::StaticStruct, Z_Construct_UScriptStruct_FInventoryCachedLoot_Statics::NewStructOps, TEXT("InventoryCachedLoot"), &Z_Registration_Info_UScriptStruct_InventoryCachedLoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryCachedLoot), 460436642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryCache_Loot_h_1189932890(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryCache_Loot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryCache_Loot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
