// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryLoot.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLoot() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryLoot Function GetContainerData
struct Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics
{
	struct NinjaInventoryLoot_eventGetContainerData_Parms
	{
		const UNinjaInventoryContainerDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Provides the container where the loot was previously stored.\n\x09 * Might be relevant for some scenarios (like player drops).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Provides the container where the loot was previously stored.\nMight be relevant for some scenarios (like player drops)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventGetContainerData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "GetContainerData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::NinjaInventoryLoot_eventGetContainerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::NinjaInventoryLoot_eventGetContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execGetContainerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryContainerDataAsset**)Z_Param__Result=P_THIS->GetContainerData();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function GetContainerData

// Begin Class UNinjaInventoryLoot Function GetDefaultMemories
struct Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics
{
	struct NinjaInventoryLoot_eventGetDefaultMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Creates any default memories needed to support this loot.\n\x09 * Most common case is creating stack memories for the quantity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Creates any default memories needed to support this loot.\nMost common case is creating stack memories for the quantity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventGetDefaultMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "GetDefaultMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NinjaInventoryLoot_eventGetDefaultMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::NinjaInventoryLoot_eventGetDefaultMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execGetDefaultMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryDefaultItemMemory>*)Z_Param__Result=P_THIS->GetDefaultMemories();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function GetDefaultMemories

// Begin Class UNinjaInventoryLoot Function GetItemData
struct Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics
{
	struct NinjaInventoryLoot_eventGetItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Provides the item data for the loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Provides the item data for the loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::NinjaInventoryLoot_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::NinjaInventoryLoot_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItemDataAsset**)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function GetItemData

// Begin Class UNinjaInventoryLoot Function GetQuantity
struct Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics
{
	struct NinjaInventoryLoot_eventGetQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Provides the quantity assigned to this loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Provides the quantity assigned to this loot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "GetQuantity", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::NinjaInventoryLoot_eventGetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::NinjaInventoryLoot_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execGetQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetQuantity();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function GetQuantity

// Begin Class UNinjaInventoryLoot Function GetSource
struct Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics
{
	struct NinjaInventoryLoot_eventGetSource_Parms
	{
		UNinjaInventoryLootComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Provides the Loot Component that generated this loot.\n\x09 * It might be null in some cases, if the owner has been destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Provides the Loot Component that generated this loot.\nIt might be null in some cases, if the owner has been destroyed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "GetSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::NinjaInventoryLoot_eventGetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::NinjaInventoryLoot_eventGetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_GetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_GetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execGetSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryLootComponent**)Z_Param__Result=P_THIS->GetSource();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function GetSource

// Begin Class UNinjaInventoryLoot Function SetContainerData
struct Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics
{
	struct NinjaInventoryLoot_eventSetContainerData_Parms
	{
		const UNinjaInventoryContainerDataAsset* NewContainerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Sets the new Container Data assigned to the loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Sets the new Container Data assigned to the loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContainerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::NewProp_NewContainerData = { "NewContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventSetContainerData_Parms, NewContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewContainerData_MetaData), NewProp_NewContainerData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::NewProp_NewContainerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "SetContainerData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::NinjaInventoryLoot_eventSetContainerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::NinjaInventoryLoot_eventSetContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execSetContainerData)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_NewContainerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContainerData(Z_Param_NewContainerData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function SetContainerData

// Begin Class UNinjaInventoryLoot Function SetItemData
struct Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics
{
	struct NinjaInventoryLoot_eventSetItemData_Parms
	{
		UNinjaInventoryItemDataAsset* NewItemData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Sets the new Item Data assigned to the loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Sets the new Item Data assigned to the loot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventSetItemData_Parms, NewItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::NewProp_NewItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "SetItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::NinjaInventoryLoot_eventSetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::NinjaInventoryLoot_eventSetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execSetItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_NewItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemData(Z_Param_NewItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function SetItemData

// Begin Class UNinjaInventoryLoot Function SetQuantity
struct Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics
{
	struct NinjaInventoryLoot_eventSetQuantity_Parms
	{
		int32 NewQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Sets the new quantity assigned to the loot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Sets the new quantity assigned to the loot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::NewProp_NewQuantity = { "NewQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventSetQuantity_Parms, NewQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::NewProp_NewQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "SetQuantity", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::NinjaInventoryLoot_eventSetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::NinjaInventoryLoot_eventSetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execSetQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuantity(Z_Param_NewQuantity);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function SetQuantity

// Begin Class UNinjaInventoryLoot Function SetSource
struct Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics
{
	struct NinjaInventoryLoot_eventSetSource_Parms
	{
		UNinjaInventoryLootComponent* NewSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Loot" },
		{ "Comment", "/**\n\x09 * Sets the new Loot Component assigned to this loot. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Sets the new Loot Component assigned to this loot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryLoot_eventSetSource_Parms, NewSource), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSource_MetaData), NewProp_NewSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::NewProp_NewSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLoot, nullptr, "SetSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::NinjaInventoryLoot_eventSetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::NinjaInventoryLoot_eventSetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLoot_SetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLoot_SetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLoot::execSetSource)
{
	P_GET_OBJECT(UNinjaInventoryLootComponent,Z_Param_NewSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSource(Z_Param_NewSource);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLoot Function SetSource

// Begin Class UNinjaInventoryLoot
void UNinjaInventoryLoot::StaticRegisterNativesUNinjaInventoryLoot()
{
	UClass* Class = UNinjaInventoryLoot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContainerData", &UNinjaInventoryLoot::execGetContainerData },
		{ "GetDefaultMemories", &UNinjaInventoryLoot::execGetDefaultMemories },
		{ "GetItemData", &UNinjaInventoryLoot::execGetItemData },
		{ "GetQuantity", &UNinjaInventoryLoot::execGetQuantity },
		{ "GetSource", &UNinjaInventoryLoot::execGetSource },
		{ "SetContainerData", &UNinjaInventoryLoot::execSetContainerData },
		{ "SetItemData", &UNinjaInventoryLoot::execSetItemData },
		{ "SetQuantity", &UNinjaInventoryLoot::execSetQuantity },
		{ "SetSource", &UNinjaInventoryLoot::execSetSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLoot);
UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister()
{
	return UNinjaInventoryLoot::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores information about loot that has been selected for a requester.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryLoot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Stores information about loot that has been selected for a requester." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Container data where the loot was stored. Might be null. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Container data where the loot was stored. Might be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Item data for the loot. Always present. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Item data for the loot. Always present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Loot" },
		{ "Comment", "/** Amount looted for the item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "Amount looted for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source that generated this loot. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryLoot.h" },
		{ "ToolTip", "The source that generated this loot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_GetContainerData, "GetContainerData" }, // 2232042270
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_GetDefaultMemories, "GetDefaultMemories" }, // 4126604740
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_GetItemData, "GetItemData" }, // 1134912102
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_GetQuantity, "GetQuantity" }, // 1227882343
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_GetSource, "GetSource" }, // 4233682618
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_SetContainerData, "SetContainerData" }, // 1843251346
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_SetItemData, "SetItemData" }, // 3898477156
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_SetQuantity, "SetQuantity" }, // 2925155129
		{ &Z_Construct_UFunction_UNinjaInventoryLoot_SetSource, "SetSource" }, // 1618514423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLoot, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLoot, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLoot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLoot, SourceComponent), Z_Construct_UClass_UNinjaInventoryLootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLoot_Statics::NewProp_SourceComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLoot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryLoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLoot_Statics::ClassParams = {
	&UNinjaInventoryLoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryLoot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLoot_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLoot()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLoot.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLoot.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryLoot>()
{
	return UNinjaInventoryLoot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLoot);
UNinjaInventoryLoot::~UNinjaInventoryLoot() {}
// End Class UNinjaInventoryLoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLoot, UNinjaInventoryLoot::StaticClass, TEXT("UNinjaInventoryLoot"), &Z_Registration_Info_UClass_UNinjaInventoryLoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLoot), 2836449871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_3105065972(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
