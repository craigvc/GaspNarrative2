// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/NinjaInventorySubsystem.h"
#include "NinjaInventory/Public/Types/FInventoryItemQualityMappingTableRow.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventorySubsystem() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySubsystem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySubsystem_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventorySubsystem Function DropItemDefinition
struct Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics
{
	struct NinjaInventorySubsystem_eventDropItemDefinition_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
		const UNinjaInventoryItemDataAsset* ItemDefinition;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Drops a default item instance, generated from the provided definition.\n\x09 *\n\x09 * It will use the Placement Query to find a proper location around the inventory's avatar.\n\x09 *\n\x09 * @param InventoryManager\x09\x09Inventory Manager performing this request.\n\x09 * @param ItemDefinition\x09\x09""Definition used for the item.\n\x09 * @param Amount\x09\x09\x09\x09Initial stack size for the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ReturnDisplayName", "Item Instance" },
		{ "ToolTip", "Drops a default item instance, generated from the provided definition.\n\nIt will use the Placement Query to find a proper location around the inventory's avatar.\n\n@param InventoryManager              Inventory Manager performing this request.\n@param ItemDefinition                Definition used for the item.\n@param Amount                                Initial stack size for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDefinition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemDefinition_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_ItemDefinition = { "ItemDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemDefinition_Parms, ItemDefinition), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefinition_MetaData), NewProp_ItemDefinition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemDefinition_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_ItemDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "DropItemDefinition", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NinjaInventorySubsystem_eventDropItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::NinjaInventorySubsystem_eventDropItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execDropItemDefinition)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemDefinition);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemDefinition(Z_Param_InventoryManager,Z_Param_ItemDefinition,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function DropItemDefinition

// Begin Class UNinjaInventorySubsystem Function DropItemInstance
struct Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics
{
	struct NinjaInventorySubsystem_eventDropItemInstance_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
		UNinjaInventoryItem* ItemInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Drops an item instance.\n\x09 *\n\x09 * It will use the Placement Query to find a proper location around the inventory's avatar.\n\x09 *\n\x09 * @param InventoryManager\x09\x09Inventory Manager performing this request.\n\x09 * @param ItemInstance\x09\x09\x09Item Instance to drop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ReturnDisplayName", "Item Instance" },
		{ "ToolTip", "Drops an item instance.\n\nIt will use the Placement Query to find a proper location around the inventory's avatar.\n\n@param InventoryManager              Inventory Manager performing this request.\n@param ItemInstance                  Item Instance to drop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemInstance_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemInstance_Parms, ItemInstance), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NewProp_ItemInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "DropItemInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NinjaInventorySubsystem_eventDropItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::NinjaInventorySubsystem_eventDropItemInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execDropItemInstance)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemInstance(Z_Param_InventoryManager,Z_Param_ItemInstance);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function DropItemInstance

// Begin Class UNinjaInventorySubsystem Function DropItemInstances
struct Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics
{
	struct NinjaInventorySubsystem_eventDropItemInstances_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
		TArray<UNinjaInventoryItem*> ItemInstances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Drops an array of item instances.\n\x09 *\n\x09 * It will group all instances in one actor or drop multiple actors based on the global setting\n\x09 * \"bGroupDroppedItemInstances\", in the Ninja Inventory settings page.\n\x09 *\n\x09 * @param InventoryManager\x09\x09Inventory Manager performing this request.\n\x09 * @param ItemInstances\x09\x09\x09Item Instances to drop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ReturnDisplayName", "Item Instance" },
		{ "ToolTip", "Drops an array of item instances.\n\nIt will group all instances in one actor or drop multiple actors based on the global setting\n\"bGroupDroppedItemInstances\", in the Ninja Inventory settings page.\n\n@param InventoryManager              Inventory Manager performing this request.\n@param ItemInstances                 Item Instances to drop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemInstances_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_ItemInstances_Inner = { "ItemInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_ItemInstances = { "ItemInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventDropItemInstances_Parms, ItemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_ItemInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NewProp_ItemInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "DropItemInstances", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NinjaInventorySubsystem_eventDropItemInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::NinjaInventorySubsystem_eventDropItemInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execDropItemInstances)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_TARRAY(UNinjaInventoryItem*,Z_Param_ItemInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemInstances(Z_Param_InventoryManager,Z_Param_ItemInstances);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function DropItemInstances

// Begin Class UNinjaInventorySubsystem Function ExecuteItemPlacementQuery
struct Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics
{
	struct NinjaInventorySubsystem_eventExecuteItemPlacementQuery_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Executes the Item Placement Query and returns results to the requester.\n\x09 *\n\x09 * The method \"Instantiate Loot Actor From Query Results\" is used to provide the Placement results\n\x09 * from the Environment Query, once it finishes executing.\n\x09 * \n\x09 * @param InventoryManager\x09\x09Object requesting the locations.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Query ID that can be used to identify this request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ReturnDisplayName", "Query ID" },
		{ "ToolTip", "Executes the Item Placement Query and returns results to the requester.\n\nThe method \"Instantiate Loot Actor From Query Results\" is used to provide the Placement results\nfrom the Environment Query, once it finishes executing.\n\n@param InventoryManager              Object requesting the locations.\n@return                                              The Query ID that can be used to identify this request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventExecuteItemPlacementQuery_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventExecuteItemPlacementQuery_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "ExecuteItemPlacementQuery", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NinjaInventorySubsystem_eventExecuteItemPlacementQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::NinjaInventorySubsystem_eventExecuteItemPlacementQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execExecuteItemPlacementQuery)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ExecuteItemPlacementQuery(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function ExecuteItemPlacementQuery

// Begin Class UNinjaInventorySubsystem Function GetQualityMapping
struct Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics
{
	struct NinjaInventorySubsystem_eventGetQualityMapping_Parms
	{
		FInventoryItemQualityMappingTableRow OutRow;
		FGameplayTag QualityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides Quality information for a given Gameplay Tag.\n\x09 *\n\x09 * @param OutRow\x09\x09Row containing the Quality Information.\n\x09 * @param QualityTag\x09Gameplay Tag representing the quality.\n\x09 * @return\x09\x09\x09\x09True if the Quality Mapping was found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ReturnDisplayName", "Found?" },
		{ "ToolTip", "Provides Quality information for a given Gameplay Tag.\n\n@param OutRow                Row containing the Quality Information.\n@param QualityTag    Gameplay Tag representing the quality.\n@return                              True if the Quality Mapping was found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityTag_MetaData[] = {
		{ "Categories", "Inventory.Quality" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventGetQualityMapping_Parms, OutRow), Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow, METADATA_PARAMS(0, nullptr) }; // 3472914665
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_QualityTag = { "QualityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventGetQualityMapping_Parms, QualityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityTag_MetaData), NewProp_QualityTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventorySubsystem_eventGetQualityMapping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventorySubsystem_eventGetQualityMapping_Parms), &Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_QualityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "GetQualityMapping", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NinjaInventorySubsystem_eventGetQualityMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::NinjaInventorySubsystem_eventGetQualityMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execGetQualityMapping)
{
	P_GET_STRUCT_REF(FInventoryItemQualityMappingTableRow,Z_Param_Out_OutRow);
	P_GET_STRUCT(FGameplayTag,Z_Param_QualityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetQualityMapping(Z_Param_Out_OutRow,Z_Param_QualityTag);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function GetQualityMapping

// Begin Class UNinjaInventorySubsystem Function GetRandomFloatInRange
struct Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics
{
	struct NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms
	{
		float Min;
		float Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a random float value within a given range.\n\x09 *\n\x09 * The float will be retrieved from an internal seed initialized along with the Subsystem, meaning\n\x09 * it will have a far more accurate distribution than simple floats from the Math Library or from\n\x09 * un-initialized/different seeds.\n\x09 *\n\x09 * @param Min\x09\x09\x09Minimum value for the range, inclusive.\n\x09 * @param Max\x09\x09\x09Maximum value for the range, inclusive.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A randomly generated float, withing the determined range, created\n\x09 *\x09\x09using an internal seed for better distribution.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ToolTip", "Provides a random float value within a given range.\n\nThe float will be retrieved from an internal seed initialized along with the Subsystem, meaning\nit will have a far more accurate distribution than simple floats from the Math Library or from\nun-initialized/different seeds.\n\n@param Min                   Minimum value for the range, inclusive.\n@param Max                   Maximum value for the range, inclusive.\n\n@return\n             A randomly generated float, withing the determined range, created\n             using an internal seed for better distribution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms, Min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventorySubsystem, nullptr, "GetRandomFloatInRange", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::NinjaInventorySubsystem_eventGetRandomFloatInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventorySubsystem::execGetRandomFloatInRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRandomFloatInRange(Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// End Class UNinjaInventorySubsystem Function GetRandomFloatInRange

// Begin Class UNinjaInventorySubsystem
void UNinjaInventorySubsystem::StaticRegisterNativesUNinjaInventorySubsystem()
{
	UClass* Class = UNinjaInventorySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItemDefinition", &UNinjaInventorySubsystem::execDropItemDefinition },
		{ "DropItemInstance", &UNinjaInventorySubsystem::execDropItemInstance },
		{ "DropItemInstances", &UNinjaInventorySubsystem::execDropItemInstances },
		{ "ExecuteItemPlacementQuery", &UNinjaInventorySubsystem::execExecuteItemPlacementQuery },
		{ "GetQualityMapping", &UNinjaInventorySubsystem::execGetQualityMapping },
		{ "GetRandomFloatInRange", &UNinjaInventorySubsystem::execGetRandomFloatInRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventorySubsystem);
UClass* Z_Construct_UClass_UNinjaInventorySubsystem_NoRegister()
{
	return UNinjaInventorySubsystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventorySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiple core functionalities related to the Inventory System.\n */" },
		{ "IncludePath", "NinjaInventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ToolTip", "Multiple core functionalities related to the Inventory System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityMappingTable_MetaData[] = {
		{ "Comment", "/** Quality table obtained from settings and fully loaded. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ToolTip", "Quality table obtained from settings and fully loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPlacementQuery_MetaData[] = {
		{ "Comment", "/** Placement query obtained from settings and fully loaded. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySubsystem.h" },
		{ "ToolTip", "Placement query obtained from settings and fully loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QualityMappingTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemPlacementQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemDefinition, "DropItemDefinition" }, // 3560960794
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstance, "DropItemInstance" }, // 2210625439
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_DropItemInstances, "DropItemInstances" }, // 654550074
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_ExecuteItemPlacementQuery, "ExecuteItemPlacementQuery" }, // 540107848
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_GetQualityMapping, "GetQualityMapping" }, // 3251760637
		{ &Z_Construct_UFunction_UNinjaInventorySubsystem_GetRandomFloatInRange, "GetRandomFloatInRange" }, // 4064980333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventorySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventorySubsystem_Statics::NewProp_QualityMappingTable = { "QualityMappingTable", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySubsystem, QualityMappingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityMappingTable_MetaData), NewProp_QualityMappingTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventorySubsystem_Statics::NewProp_ItemPlacementQuery = { "ItemPlacementQuery", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySubsystem, ItemPlacementQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPlacementQuery_MetaData), NewProp_ItemPlacementQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventorySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySubsystem_Statics::NewProp_QualityMappingTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySubsystem_Statics::NewProp_ItemPlacementQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventorySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventorySubsystem_Statics::ClassParams = {
	&UNinjaInventorySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventorySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventorySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventorySubsystem()
{
	if (!Z_Registration_Info_UClass_UNinjaInventorySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventorySubsystem.OuterSingleton, Z_Construct_UClass_UNinjaInventorySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventorySubsystem.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventorySubsystem>()
{
	return UNinjaInventorySubsystem::StaticClass();
}
UNinjaInventorySubsystem::UNinjaInventorySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventorySubsystem);
UNinjaInventorySubsystem::~UNinjaInventorySubsystem() {}
// End Class UNinjaInventorySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventorySubsystem, UNinjaInventorySubsystem::StaticClass, TEXT("UNinjaInventorySubsystem"), &Z_Registration_Info_UClass_UNinjaInventorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventorySubsystem), 3359186984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_4236062164(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
