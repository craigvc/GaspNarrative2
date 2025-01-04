// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/NinjaInventoryDragDropOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryDragDropOperation() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryDragDropOperation Function ClearUnsupportedOperation
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Clears the current unsupported operation status.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Clears the current unsupported operation status." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "ClearUnsupportedOperation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execClearUnsupportedOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearUnsupportedOperation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function ClearUnsupportedOperation

// Begin Class UNinjaInventoryDragDropOperation Function CreateItemOperation
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics
{
	struct NinjaInventoryDragDropOperation_eventCreateItemOperation_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Creates a Drag and Drop Operation configured for the provided Item.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09The Item instance added to the payload.\n\x09 * @return\x09\x09\x09\x09\x09\x09Instance configured with the proper objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Creates a Drag and Drop Operation configured for the provided Item.\n\n@param Item                                  The Item instance added to the payload.\n@return                                              Instance configured with the proper objects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventCreateItemOperation_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventCreateItemOperation_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "CreateItemOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NinjaInventoryDragDropOperation_eventCreateItemOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::NinjaInventoryDragDropOperation_eventCreateItemOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execCreateItemOperation)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryDragDropOperation**)Z_Param__Result=UNinjaInventoryDragDropOperation::CreateItemOperation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function CreateItemOperation

// Begin Class UNinjaInventoryDragDropOperation Function CreateLootOperation
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics
{
	struct NinjaInventoryDragDropOperation_eventCreateLootOperation_Parms
	{
		UNinjaInventoryLoot* Loot;
		UNinjaInventoryDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Creates a Drag and Drop operation configured for the provided Loot.\n\x09 *\n\x09 * @param Loot\x09\x09\x09\x09\x09The Loot Entry added to the payload.\n\x09 * @return\x09\x09\x09\x09\x09\x09Instance configured with the proper objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Creates a Drag and Drop operation configured for the provided Loot.\n\n@param Loot                                  The Loot Entry added to the payload.\n@return                                              Instance configured with the proper objects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Loot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NewProp_Loot = { "Loot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventCreateLootOperation_Parms, Loot), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventCreateLootOperation_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NewProp_Loot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "CreateLootOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NinjaInventoryDragDropOperation_eventCreateLootOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::NinjaInventoryDragDropOperation_eventCreateLootOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execCreateLootOperation)
{
	P_GET_OBJECT(UNinjaInventoryLoot,Z_Param_Loot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryDragDropOperation**)Z_Param__Result=UNinjaInventoryDragDropOperation::CreateLootOperation(Z_Param_Loot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function CreateLootOperation

// Begin Class UNinjaInventoryDragDropOperation Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics
{
	struct NinjaInventoryDragDropOperation_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager that originated this operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Provides the Inventory Manager that originated this operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::NinjaInventoryDragDropOperation_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::NinjaInventoryDragDropOperation_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function GetInventoryManager

// Begin Class UNinjaInventoryDragDropOperation Function GetItem
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics
{
	struct NinjaInventoryDragDropOperation_eventGetItem_Parms
	{
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Provides the Item stored in this operation. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Provides the Item stored in this operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::NinjaInventoryDragDropOperation_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::NinjaInventoryDragDropOperation_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function GetItem

// Begin Class UNinjaInventoryDragDropOperation Function GetLoot
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics
{
	struct NinjaInventoryDragDropOperation_eventGetLoot_Parms
	{
		UNinjaInventoryLoot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/** Provides the Loot stored in this operation. */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Provides the Loot stored in this operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventGetLoot_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "GetLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::NinjaInventoryDragDropOperation_eventGetLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::NinjaInventoryDragDropOperation_eventGetLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execGetLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryLoot**)Z_Param__Result=P_THIS->GetLoot();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function GetLoot

// Begin Class UNinjaInventoryDragDropOperation Function GetLootManager
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics
{
	struct NinjaInventoryDragDropOperation_eventGetLootManager_Parms
	{
		UNinjaInventoryLootComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Provides the Loot Manager that originated this operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Provides the Loot Manager that originated this operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventGetLootManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "GetLootManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::NinjaInventoryDragDropOperation_eventGetLootManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::NinjaInventoryDragDropOperation_eventGetLootManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execGetLootManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryLootComponent**)Z_Param__Result=P_THIS->GetLootManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function GetLootManager

// Begin Class UNinjaInventoryDragDropOperation Function HasItem
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics
{
	struct NinjaInventoryDragDropOperation_eventHasItem_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Informs if this payload has an item assigned to it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Informs if this payload has an item assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryDragDropOperation_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryDragDropOperation_eventHasItem_Parms), &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NinjaInventoryDragDropOperation_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::NinjaInventoryDragDropOperation_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execHasItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function HasItem

// Begin Class UNinjaInventoryDragDropOperation Function HasLoot
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics
{
	struct NinjaInventoryDragDropOperation_eventHasLoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Informs if this payload has loot assigned to it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Informs if this payload has loot assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryDragDropOperation_eventHasLoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryDragDropOperation_eventHasLoot_Parms), &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "HasLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NinjaInventoryDragDropOperation_eventHasLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::NinjaInventoryDragDropOperation_eventHasLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execHasLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLoot();
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function HasLoot

// Begin Class UNinjaInventoryDragDropOperation Function IsSourceForUnsupportedOperation
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics
{
	struct NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms
	{
		UUserWidget* Source;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Checks if a given widget is the source for the current unsupported status.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Checks if a given widget is the source for the current unsupported status." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms, Source), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms), &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "IsSourceForUnsupportedOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::NinjaInventoryDragDropOperation_eventIsSourceForUnsupportedOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execIsSourceForUnsupportedOperation)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSourceForUnsupportedOperation(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function IsSourceForUnsupportedOperation

// Begin Class UNinjaInventoryDragDropOperation Function MarkUnsupportedOperation
struct Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics
{
	struct NinjaInventoryDragDropOperation_eventMarkUnsupportedOperation_Parms
	{
		UUserWidget* Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Marks an unsupported operation from an incompatible drag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Marks an unsupported operation from an incompatible drag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryDragDropOperation_eventMarkUnsupportedOperation_Parms, Source), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryDragDropOperation, nullptr, "MarkUnsupportedOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::NinjaInventoryDragDropOperation_eventMarkUnsupportedOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::NinjaInventoryDragDropOperation_eventMarkUnsupportedOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryDragDropOperation::execMarkUnsupportedOperation)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkUnsupportedOperation(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UNinjaInventoryDragDropOperation Function MarkUnsupportedOperation

// Begin Class UNinjaInventoryDragDropOperation
void UNinjaInventoryDragDropOperation::StaticRegisterNativesUNinjaInventoryDragDropOperation()
{
	UClass* Class = UNinjaInventoryDragDropOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearUnsupportedOperation", &UNinjaInventoryDragDropOperation::execClearUnsupportedOperation },
		{ "CreateItemOperation", &UNinjaInventoryDragDropOperation::execCreateItemOperation },
		{ "CreateLootOperation", &UNinjaInventoryDragDropOperation::execCreateLootOperation },
		{ "GetInventoryManager", &UNinjaInventoryDragDropOperation::execGetInventoryManager },
		{ "GetItem", &UNinjaInventoryDragDropOperation::execGetItem },
		{ "GetLoot", &UNinjaInventoryDragDropOperation::execGetLoot },
		{ "GetLootManager", &UNinjaInventoryDragDropOperation::execGetLootManager },
		{ "HasItem", &UNinjaInventoryDragDropOperation::execHasItem },
		{ "HasLoot", &UNinjaInventoryDragDropOperation::execHasLoot },
		{ "IsSourceForUnsupportedOperation", &UNinjaInventoryDragDropOperation::execIsSourceForUnsupportedOperation },
		{ "MarkUnsupportedOperation", &UNinjaInventoryDragDropOperation::execMarkUnsupportedOperation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryDragDropOperation);
UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister()
{
	return UNinjaInventoryDragDropOperation::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized Drag and Drop operation that handles Inventory Items.\n */" },
		{ "IncludePath", "UI/NinjaInventoryDragDropOperation.h" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
		{ "ToolTip", "Specialized Drag and Drop operation that handles Inventory Items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsupportedDragSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnsupportedDragSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_ClearUnsupportedOperation, "ClearUnsupportedOperation" }, // 861193407
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateItemOperation, "CreateItemOperation" }, // 1640593860
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_CreateLootOperation, "CreateLootOperation" }, // 144600745
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetInventoryManager, "GetInventoryManager" }, // 3187848575
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetItem, "GetItem" }, // 3787910648
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLoot, "GetLoot" }, // 2465735816
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_GetLootManager, "GetLootManager" }, // 3260492928
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasItem, "HasItem" }, // 946424320
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_HasLoot, "HasLoot" }, // 2830876588
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_IsSourceForUnsupportedOperation, "IsSourceForUnsupportedOperation" }, // 214620247
		{ &Z_Construct_UFunction_UNinjaInventoryDragDropOperation_MarkUnsupportedOperation, "MarkUnsupportedOperation" }, // 3607971451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryDragDropOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::NewProp_UnsupportedDragSource = { "UnsupportedDragSource", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryDragDropOperation, UnsupportedDragSource), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsupportedDragSource_MetaData), NewProp_UnsupportedDragSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::NewProp_UnsupportedDragSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::ClassParams = {
	&UNinjaInventoryDragDropOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryDragDropOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryDragDropOperation.OuterSingleton, Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryDragDropOperation.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryDragDropOperation>()
{
	return UNinjaInventoryDragDropOperation::StaticClass();
}
UNinjaInventoryDragDropOperation::UNinjaInventoryDragDropOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryDragDropOperation);
UNinjaInventoryDragDropOperation::~UNinjaInventoryDragDropOperation() {}
// End Class UNinjaInventoryDragDropOperation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryDragDropOperation, UNinjaInventoryDragDropOperation::StaticClass, TEXT("UNinjaInventoryDragDropOperation"), &Z_Registration_Info_UClass_UNinjaInventoryDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryDragDropOperation), 1939404650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_471777132(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
