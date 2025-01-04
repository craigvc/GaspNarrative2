// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryStoredFragmentMemory.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryStoredFragmentMemory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryStoredFragmentMemoryEntry
static_assert(std::is_polymorphic<FInventoryStoredFragmentMemoryEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInventoryStoredFragmentMemoryEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry;
class UScriptStruct* FInventoryStoredFragmentMemoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryStoredFragmentMemoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryStoredFragmentMemoryEntry>()
{
	return FInventoryStoredFragmentMemoryEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores the memory of a fragment, for a given Item Instance.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "Stores the memory of a fragment, for a given Item Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "Comment", "/** The fragment that owns this memory. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "The fragment that owns this memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
		{ "Comment", "/** The generic struct used as memory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "The generic struct used as memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryTimestamp_MetaData[] = {
		{ "Comment", "/** Last time this item's memory was changed. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "Last time this item's memory was changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastReplicatedMemoryTimestamp_MetaData[] = {
		{ "Comment", "/** Last Memory Timestamp that was replicated. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "Last Memory Timestamp that was replicated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MemoryTimestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastReplicatedMemoryTimestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStoredFragmentMemoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryEntry, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryEntry, Memory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) }; // 111383296
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_MemoryTimestamp = { "MemoryTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryEntry, MemoryTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryTimestamp_MetaData), NewProp_MemoryTimestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_LastReplicatedMemoryTimestamp = { "LastReplicatedMemoryTimestamp", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryEntry, LastReplicatedMemoryTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastReplicatedMemoryTimestamp_MetaData), NewProp_LastReplicatedMemoryTimestamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_Memory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_MemoryTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewProp_LastReplicatedMemoryTimestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"InventoryStoredFragmentMemoryEntry",
	Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::PropPointers),
	sizeof(FInventoryStoredFragmentMemoryEntry),
	alignof(FInventoryStoredFragmentMemoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry.InnerSingleton;
}
// End ScriptStruct FInventoryStoredFragmentMemoryEntry

// Begin ScriptStruct FInventoryStoredFragmentMemoryList
static_assert(std::is_polymorphic<FInventoryStoredFragmentMemoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryStoredFragmentMemoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList;
class UScriptStruct* FInventoryStoredFragmentMemoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryStoredFragmentMemoryList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryStoredFragmentMemoryList>()
{
	return FInventoryStoredFragmentMemoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInventoryStoredFragmentMemoryList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryStoredFragmentMemoryList);
#endif
struct Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * List of Fragment Memories stored for an Item Instance.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "List of Fragment Memories stored for an Item Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClassMap_MetaData[] = {
		{ "Comment", "/** Cached view of entries, to allow O(1) access. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryStoredFragmentMemory.h" },
		{ "ToolTip", "Cached view of entries, to allow O(1) access." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FragmentClassMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClassMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FragmentClassMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStoredFragmentMemoryList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_ItemOwner = { "ItemOwner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryList, ItemOwner), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemOwner_MetaData), NewProp_ItemOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry, METADATA_PARAMS(0, nullptr) }; // 3588972970
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3588972970
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap_ValueProp = { "FragmentClassMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap_Key_KeyProp = { "FragmentClassMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap = { "FragmentClassMap", nullptr, (EPropertyFlags)0x0040000080002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStoredFragmentMemoryList, FragmentClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClassMap_MetaData), NewProp_FragmentClassMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_ItemOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewProp_FragmentClassMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"InventoryStoredFragmentMemoryList",
	Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::PropPointers),
	sizeof(FInventoryStoredFragmentMemoryList),
	alignof(FInventoryStoredFragmentMemoryList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList.InnerSingleton;
}
// End ScriptStruct FInventoryStoredFragmentMemoryList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStoredFragmentMemory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryStoredFragmentMemoryEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryEntry_Statics::NewStructOps, TEXT("InventoryStoredFragmentMemoryEntry"), &Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryStoredFragmentMemoryEntry), 3588972970U) },
		{ FInventoryStoredFragmentMemoryList::StaticStruct, Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList_Statics::NewStructOps, TEXT("InventoryStoredFragmentMemoryList"), &Z_Registration_Info_UScriptStruct_InventoryStoredFragmentMemoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryStoredFragmentMemoryList), 1657798941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStoredFragmentMemory_h_290154302(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStoredFragmentMemory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryStoredFragmentMemory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
