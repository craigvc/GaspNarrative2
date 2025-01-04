// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryContainer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerList();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryContainerEntry
static_assert(std::is_polymorphic<FInventoryContainerEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInventoryContainerEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryContainerEntry;
class UScriptStruct* FInventoryContainerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryContainerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryContainerEntry, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryContainerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerEntry.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryContainerEntry>()
{
	return FInventoryContainerEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a container in the inventory.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Represents a container in the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "Category", "Container" },
		{ "Comment", "/** Unique ID assigned to this container. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Unique ID assigned to this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Container" },
		{ "Comment", "/** Instance spawned for this container entry. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Instance spawned for this container entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningItem_MetaData[] = {
		{ "Category", "Container" },
		{ "Comment", "/** Item that granted/represents this container. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Item that granted/represents this container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryContainerEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerEntry, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerEntry, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_OwningItem = { "OwningItem", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerEntry, OwningItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningItem_MetaData), NewProp_OwningItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewProp_OwningItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"InventoryContainerEntry",
	Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::PropPointers),
	sizeof(FInventoryContainerEntry),
	alignof(FInventoryContainerEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryContainerEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerEntry.InnerSingleton;
}
// End ScriptStruct FInventoryContainerEntry

// Begin ScriptStruct FInventoryContainerList
static_assert(std::is_polymorphic<FInventoryContainerList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryContainerList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryContainerList;
class UScriptStruct* FInventoryContainerList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryContainerList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryContainerList, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryContainerList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerList.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryContainerList>()
{
	return FInventoryContainerList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInventoryContainerList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryContainerList);
#endif
struct Z_Construct_UScriptStruct_FInventoryContainerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of containers available in an inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "List of containers available in an inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/** Replicated list of stored inventory items. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Replicated list of stored inventory items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Comment", "/** Inventory component that owns this list. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainer.h" },
		{ "ToolTip", "Inventory component that owns this list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryContainerList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryContainerEntry, METADATA_PARAMS(0, nullptr) }; // 4060665194
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 4060665194
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerList, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryContainerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryContainerList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"InventoryContainerList",
	Z_Construct_UScriptStruct_FInventoryContainerList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerList_Statics::PropPointers),
	sizeof(FInventoryContainerList),
	alignof(FInventoryContainerList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryContainerList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerList()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryContainerList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryContainerList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerList.InnerSingleton;
}
// End ScriptStruct FInventoryContainerList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryContainerEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryContainerEntry_Statics::NewStructOps, TEXT("InventoryContainerEntry"), &Z_Registration_Info_UScriptStruct_InventoryContainerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryContainerEntry), 4060665194U) },
		{ FInventoryContainerList::StaticStruct, Z_Construct_UScriptStruct_FInventoryContainerList_Statics::NewStructOps, TEXT("InventoryContainerList"), &Z_Registration_Info_UScriptStruct_InventoryContainerList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryContainerList), 3823888135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainer_h_4046544384(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
