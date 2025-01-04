// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryItemContext.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryItemContext() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UEnum* Z_Construct_UEnum_NinjaInventory_EInventoryContextState();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContext();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContextEntry();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Enum EInventoryContextState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryContextState;
static UEnum* EInventoryContextState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryContextState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryContextState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInventory_EInventoryContextState, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("EInventoryContextState"));
	}
	return Z_Registration_Info_UEnum_EInventoryContextState.OuterSingleton;
}
template<> NINJAINVENTORY_API UEnum* StaticEnum<EInventoryContextState>()
{
	return EInventoryContextState_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Possible states for an item context.\n */" },
		{ "Empty.Comment", "/** The context is empty. */" },
		{ "Empty.Name", "EInventoryContextState::Empty" },
		{ "Empty.ToolTip", "The context is empty." },
		{ "Failed.Comment", "/** The context has been executed and all items were dropped. */" },
		{ "Failed.Name", "EInventoryContextState::Failed" },
		{ "Failed.ToolTip", "The context has been executed and all items were dropped." },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "NotExecuted.Comment", "/** The context has an item to process but has not been executed. */" },
		{ "NotExecuted.Name", "EInventoryContextState::NotExecuted" },
		{ "NotExecuted.ToolTip", "The context has an item to process but has not been executed." },
		{ "PartiallySucceeded.Comment", "/** The context has been executed, but some items were dropped. */" },
		{ "PartiallySucceeded.Name", "EInventoryContextState::PartiallySucceeded" },
		{ "PartiallySucceeded.ToolTip", "The context has been executed, but some items were dropped." },
		{ "Succeeded.Comment", "/** The context has been executed and items were created or updated. */" },
		{ "Succeeded.Name", "EInventoryContextState::Succeeded" },
		{ "Succeeded.ToolTip", "The context has been executed and items were created or updated." },
		{ "ToolTip", "Possible states for an item context." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInventoryContextState::Empty", (int64)EInventoryContextState::Empty },
		{ "EInventoryContextState::NotExecuted", (int64)EInventoryContextState::NotExecuted },
		{ "EInventoryContextState::Succeeded", (int64)EInventoryContextState::Succeeded },
		{ "EInventoryContextState::PartiallySucceeded", (int64)EInventoryContextState::PartiallySucceeded },
		{ "EInventoryContextState::Failed", (int64)EInventoryContextState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	"EInventoryContextState",
	"EInventoryContextState",
	Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInventory_EInventoryContextState()
{
	if (!Z_Registration_Info_UEnum_EInventoryContextState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryContextState.InnerSingleton, Z_Construct_UEnum_NinjaInventory_EInventoryContextState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryContextState.InnerSingleton;
}
// End Enum EInventoryContextState

// Begin ScriptStruct FInventoryItemContextEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemContextEntry;
class UScriptStruct* FInventoryItemContextEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemContextEntry, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemContextEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemContextEntry>()
{
	return FInventoryItemContextEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "Item Context Entry" },
		{ "Comment", "/** An optional id that can be used for the item. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "An optional id that can be used for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Category", "Item Context Entry" },
		{ "Comment", "/** Inventory Manager owning this context. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Inventory Manager owning this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item Context Entry" },
		{ "Comment", "/** Actual item that was created or obtained from the inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Actual item that was created or obtained from the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Item Context Entry" },
		{ "Comment", "/** Item data that will generate an instance. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Item data that will generate an instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentMemories_MetaData[] = {
		{ "Category", "Item Context Entry" },
		{ "Comment", "/** Initial memory added to the new item (or items if multiple are created). */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Initial memory added to the new item (or items if multiple are created)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FragmentMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemContextEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContextEntry, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContextEntry, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContextEntry, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContextEntry, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_FragmentMemories_Inner = { "FragmentMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_FragmentMemories = { "FragmentMemories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContextEntry, FragmentMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentMemories_MetaData), NewProp_FragmentMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_FragmentMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewProp_FragmentMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryItemContextEntry",
	Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::PropPointers),
	sizeof(FInventoryItemContextEntry),
	alignof(FInventoryItemContextEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContextEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemContextEntry.InnerSingleton;
}
// End ScriptStruct FInventoryItemContextEntry

// Begin ScriptStruct FInventoryItemContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemContext;
class UScriptStruct* FInventoryItemContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemContext, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemContext"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemContext.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemContext>()
{
	return FInventoryItemContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A context used to add an Item to the Inventory.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "A context used to add an Item to the Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Inventory Manager owning this context. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Inventory Manager owning this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** The initial request that will be processed. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "The initial request that will be processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToAdd_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Items meant to be added to the inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Items meant to be added to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToUpdate_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Items already stored requiring modification. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Items already stored requiring modification." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToDrop_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Items that could not be added and should be dropped. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Items that could not be added and should be dropped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedItems_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Items that were created and added to the inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Items that were created and added to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedItems_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Items that already existed and were modified. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Items that already existed and were modified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroppedItemsCount_MetaData[] = {
		{ "Category", "Item Context" },
		{ "Comment", "/** Amount of items dropped from the original collection. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemContext.h" },
		{ "ToolTip", "Amount of items dropped from the original collection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToAdd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToUpdate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToDrop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToDrop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DroppedItemsCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, Request), Z_Construct_UScriptStruct_FInventoryItemContextEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1537086081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToAdd_Inner = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemContextEntry, METADATA_PARAMS(0, nullptr) }; // 1537086081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToAdd = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, ItemsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToAdd_MetaData), NewProp_ItemsToAdd_MetaData) }; // 1537086081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToUpdate_Inner = { "ItemsToUpdate", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemContextEntry, METADATA_PARAMS(0, nullptr) }; // 1537086081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToUpdate = { "ItemsToUpdate", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, ItemsToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToUpdate_MetaData), NewProp_ItemsToUpdate_MetaData) }; // 1537086081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToDrop_Inner = { "ItemsToDrop", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemContextEntry, METADATA_PARAMS(0, nullptr) }; // 1537086081
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToDrop = { "ItemsToDrop", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, ItemsToDrop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToDrop_MetaData), NewProp_ItemsToDrop_MetaData) }; // 1537086081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_CreatedItems_Inner = { "CreatedItems", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_CreatedItems = { "CreatedItems", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, CreatedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedItems_MetaData), NewProp_CreatedItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_UpdatedItems_Inner = { "UpdatedItems", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_UpdatedItems = { "UpdatedItems", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, UpdatedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedItems_MetaData), NewProp_UpdatedItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_DroppedItemsCount = { "DroppedItemsCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemContext, DroppedItemsCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroppedItemsCount_MetaData), NewProp_DroppedItemsCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToAdd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToUpdate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToDrop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_ItemsToDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_CreatedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_CreatedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_UpdatedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_UpdatedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewProp_DroppedItemsCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryItemContext",
	Z_Construct_UScriptStruct_FInventoryItemContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContext_Statics::PropPointers),
	sizeof(FInventoryItemContext),
	alignof(FInventoryItemContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContext()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemContext.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemContext.InnerSingleton;
}
// End ScriptStruct FInventoryItemContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventoryContextState_StaticEnum, TEXT("EInventoryContextState"), &Z_Registration_Info_UEnum_EInventoryContextState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3442089183U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemContextEntry::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics::NewStructOps, TEXT("InventoryItemContextEntry"), &Z_Registration_Info_UScriptStruct_InventoryItemContextEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemContextEntry), 1537086081U) },
		{ FInventoryItemContext::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemContext_Statics::NewStructOps, TEXT("InventoryItemContext"), &Z_Registration_Info_UScriptStruct_InventoryItemContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemContext), 305387301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_1370540080(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
