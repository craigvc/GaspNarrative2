// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Serialization/FInventorySerialization.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventorySerialization() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerRecord();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemRecord();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryManagerRecord();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryContainerRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryContainerRecord;
class UScriptStruct* FInventoryContainerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryContainerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryContainerRecord, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryContainerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerRecord.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryContainerRecord>()
{
	return FInventoryContainerRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a serialized container that can be used when saving/loading the game.\n * \n * These containers are usually created from the Default Setup, since item-related\n * containers are re-initialized when the owning item is deserialized into the manager.\n */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Represents a serialized container that can be used when saving/loading the game.\n\nThese containers are usually created from the Default Setup, since item-related\ncontainers are re-initialized when the owning item is deserialized into the manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "Category", "Container Record" },
		{ "Comment", "/** The unique ID that was assigned to this container. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "The unique ID that was assigned to this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningItemId_MetaData[] = {
		{ "Category", "Container Record" },
		{ "Comment", "/** The unique ID of the item that owns this container. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "The unique ID of the item that owns this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Category", "Container Record" },
		{ "Comment", "/** Name assigned to the Container instance. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Name assigned to the Container instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetPath_MetaData[] = {
		{ "Category", "Container Record" },
		{ "Comment", "/** Asset Path to the Container Data Asset. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Asset Path to the Container Data Asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwningItemId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryContainerRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerRecord, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_OwningItemId = { "OwningItemId", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerRecord, OwningItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningItemId_MetaData), NewProp_OwningItemId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerRecord, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_DataAssetPath = { "DataAssetPath", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerRecord, DataAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetPath_MetaData), NewProp_DataAssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_OwningItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewProp_DataAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryContainerRecord",
	Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::PropPointers),
	sizeof(FInventoryContainerRecord),
	alignof(FInventoryContainerRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerRecord()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryContainerRecord.InnerSingleton, Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerRecord.InnerSingleton;
}
// End ScriptStruct FInventoryContainerRecord

// Begin ScriptStruct FInventoryItemRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemRecord;
class UScriptStruct* FInventoryItemRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemRecord, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemRecord"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemRecord.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemRecord>()
{
	return FInventoryItemRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a serialized item that can be used when saving/loading the game.\n */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Represents a serialized item that can be used when saving/loading the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Item Record" },
		{ "Comment", "/** The unique ID that was assigned to this item. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "The unique ID that was assigned to this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Category", "Item Record" },
		{ "Comment", "/** Name assigned to the Item instance. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Name assigned to the Item instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetPath_MetaData[] = {
		{ "Category", "Item Record" },
		{ "Comment", "/** Asset Path to the Item Data Asset. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Asset Path to the Item Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[] = {
		{ "Category", "Item Record" },
		{ "Comment", "/** Memories assigned to the item. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Memories assigned to the item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataAssetPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemRecord, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemRecord, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_DataAssetPath = { "DataAssetPath", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemRecord, DataAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetPath_MetaData), NewProp_DataAssetPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_Memories_Inner = { "Memories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemRecord, Memories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memories_MetaData), NewProp_Memories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_DataAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_Memories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewProp_Memories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryItemRecord",
	Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::PropPointers),
	sizeof(FInventoryItemRecord),
	alignof(FInventoryItemRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemRecord()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemRecord.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemRecord.InnerSingleton;
}
// End ScriptStruct FInventoryItemRecord

// Begin ScriptStruct FInventoryManagerRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryManagerRecord;
class UScriptStruct* FInventoryManagerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryManagerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryManagerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryManagerRecord, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryManagerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryManagerRecord.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryManagerRecord>()
{
	return FInventoryManagerRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a serialized manager that can be used when saving/loading the game.\n */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Represents a serialized manager that can be used when saving/loading the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetPath_MetaData[] = {
		{ "Category", "Manager Record" },
		{ "Comment", "/** Asset Path to the Layout Data Asset. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "Asset Path to the Layout Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerRecords_MetaData[] = {
		{ "Category", "Manager Record" },
		{ "Comment", "/** All containers assigned to the inventory. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "All containers assigned to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRecords_MetaData[] = {
		{ "Category", "Manager Record" },
		{ "Comment", "/** All items assigned to the inventory. */" },
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
		{ "ToolTip", "All items assigned to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/FInventorySerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataAssetPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContainerRecords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRecords;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryManagerRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_DataAssetPath = { "DataAssetPath", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryManagerRecord, DataAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetPath_MetaData), NewProp_DataAssetPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ContainerRecords_Inner = { "ContainerRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryContainerRecord, METADATA_PARAMS(0, nullptr) }; // 2315677879
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ContainerRecords = { "ContainerRecords", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryManagerRecord, ContainerRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerRecords_MetaData), NewProp_ContainerRecords_MetaData) }; // 2315677879
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ItemRecords_Inner = { "ItemRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemRecord, METADATA_PARAMS(0, nullptr) }; // 3343316390
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ItemRecords = { "ItemRecords", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryManagerRecord, ItemRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRecords_MetaData), NewProp_ItemRecords_MetaData) }; // 3343316390
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryManagerRecord, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_DataAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ContainerRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ContainerRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ItemRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_ItemRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryManagerRecord",
	Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::PropPointers),
	sizeof(FInventoryManagerRecord),
	alignof(FInventoryManagerRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryManagerRecord()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryManagerRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryManagerRecord.InnerSingleton, Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryManagerRecord.InnerSingleton;
}
// End ScriptStruct FInventoryManagerRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_FInventorySerialization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryContainerRecord::StaticStruct, Z_Construct_UScriptStruct_FInventoryContainerRecord_Statics::NewStructOps, TEXT("InventoryContainerRecord"), &Z_Registration_Info_UScriptStruct_InventoryContainerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryContainerRecord), 2315677879U) },
		{ FInventoryItemRecord::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemRecord_Statics::NewStructOps, TEXT("InventoryItemRecord"), &Z_Registration_Info_UScriptStruct_InventoryItemRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemRecord), 3343316390U) },
		{ FInventoryManagerRecord::StaticStruct, Z_Construct_UScriptStruct_FInventoryManagerRecord_Statics::NewStructOps, TEXT("InventoryManagerRecord"), &Z_Registration_Info_UScriptStruct_InventoryManagerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryManagerRecord), 1373499037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_FInventorySerialization_h_3811985539(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_FInventorySerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_FInventorySerialization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
