// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItem.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryDefaultItem() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItem();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryDefaultItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryDefaultItem;
class UScriptStruct* FInventoryDefaultItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryDefaultItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryDefaultItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryDefaultItem, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryDefaultItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryDefaultItem.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryDefaultItem>()
{
	return FInventoryDefaultItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A default item that can be assigned to an inventory.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItem.h" },
		{ "ToolTip", "A default item that can be assigned to an inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Default Item" },
		{ "Comment", "/** Definition of the item being granted. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItem.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Definition of the item being granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFragmentData_MetaData[] = {
		{ "Category", "Default Item" },
		{ "Comment", "/** Initial values for fragment memories. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItem.h" },
		{ "ToolTip", "Initial values for fragment memories." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialFragmentData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialFragmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryDefaultItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDefaultItem, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_InitialFragmentData_Inner = { "InitialFragmentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_InitialFragmentData = { "InitialFragmentData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDefaultItem, InitialFragmentData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFragmentData_MetaData), NewProp_InitialFragmentData_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_InitialFragmentData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewProp_InitialFragmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryDefaultItem",
	Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::PropPointers),
	sizeof(FInventoryDefaultItem),
	alignof(FInventoryDefaultItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItem()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryDefaultItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryDefaultItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryDefaultItem.InnerSingleton;
}
// End ScriptStruct FInventoryDefaultItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryDefaultItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryDefaultItem_Statics::NewStructOps, TEXT("InventoryDefaultItem"), &Z_Registration_Info_UScriptStruct_InventoryDefaultItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryDefaultItem), 3037943603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItem_h_3020194968(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
