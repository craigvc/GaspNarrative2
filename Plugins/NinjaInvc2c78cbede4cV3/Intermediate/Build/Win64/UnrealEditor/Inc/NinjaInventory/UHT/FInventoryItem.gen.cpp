// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryItem.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemList();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryItemEntry
static_assert(std::is_polymorphic<FInventoryItemEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInventoryItemEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemEntry;
class UScriptStruct* FInventoryItemEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemEntry, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemEntry.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemEntry>()
{
	return FInventoryItemEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Representation of an item stored in the inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
		{ "ToolTip", "Representation of an item stored in the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Unique ID assigned to this Item. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
		{ "ToolTip", "Unique ID assigned to this Item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Instance spawned for this item entry. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
		{ "ToolTip", "Instance spawned for this item entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFragmentData_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Initial values for fragment memories. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
		{ "ToolTip", "Initial values for fragment memories." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialFragmentData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialFragmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemEntry, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemEntry, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_InitialFragmentData_Inner = { "InitialFragmentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_InitialFragmentData = { "InitialFragmentData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemEntry, InitialFragmentData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFragmentData_MetaData), NewProp_InitialFragmentData_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_InitialFragmentData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewProp_InitialFragmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"InventoryItemEntry",
	Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::PropPointers),
	sizeof(FInventoryItemEntry),
	alignof(FInventoryItemEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemEntry.InnerSingleton;
}
// End ScriptStruct FInventoryItemEntry

// Begin ScriptStruct FInventoryItemList
static_assert(std::is_polymorphic<FInventoryItemList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryItemList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemList;
class UScriptStruct* FInventoryItemList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemList, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemList.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemList>()
{
	return FInventoryItemList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInventoryItemList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryItemList);
#endif
struct Z_Construct_UScriptStruct_FInventoryItemList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of items stored in an inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
		{ "ToolTip", "List of items stored in an inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FInventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemList, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemEntry, METADATA_PARAMS(0, nullptr) }; // 4243978691
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 4243978691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"InventoryItemList",
	Z_Construct_UScriptStruct_FInventoryItemList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemList_Statics::PropPointers),
	sizeof(FInventoryItemList),
	alignof(FInventoryItemList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemList()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemList.InnerSingleton;
}
// End ScriptStruct FInventoryItemList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemEntry_Statics::NewStructOps, TEXT("InventoryItemEntry"), &Z_Registration_Info_UScriptStruct_InventoryItemEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemEntry), 4243978691U) },
		{ FInventoryItemList::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemList_Statics::NewStructOps, TEXT("InventoryItemList"), &Z_Registration_Info_UScriptStruct_InventoryItemList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemList), 3187808380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItem_h_3041450960(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
