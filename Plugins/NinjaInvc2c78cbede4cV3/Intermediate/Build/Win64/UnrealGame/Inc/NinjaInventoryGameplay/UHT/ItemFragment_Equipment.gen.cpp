// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Equipment.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Equipment() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UEquipableItemInterface_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Equipment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Equipment_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_Equipment Function GetEquipment
struct Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics
{
	struct ItemFragment_Equipment_eventGetEquipment_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the equipment representing a given item, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Provides the equipment representing a given item, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventGetEquipment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventGetEquipment_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "GetEquipment", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::ItemFragment_Equipment_eventGetEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::ItemFragment_Equipment_eventGetEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execGetEquipment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=P_THIS->GetEquipment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function GetEquipment

// Begin Class UItemFragment_Equipment Function GetEquipmentDataAsset
struct Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics
{
	struct ItemFragment_Equipment_eventGetEquipmentDataAsset_Parms
	{
		const UNinjaEquipmentDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Data Asset that configures the equipment representing this item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Provides the Data Asset that configures the equipment representing this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventGetEquipmentDataAsset_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "GetEquipmentDataAsset", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::ItemFragment_Equipment_eventGetEquipmentDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::ItemFragment_Equipment_eventGetEquipmentDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execGetEquipmentDataAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaEquipmentDataAsset**)Z_Param__Result=P_THIS->GetEquipmentDataAsset();
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function GetEquipmentDataAsset

// Begin Class UItemFragment_Equipment Function GetEquipmentState
struct Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics
{
	struct ItemFragment_Equipment_eventGetEquipmentState_Parms
	{
		const UNinjaInventoryItem* Item;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the equipment state for the current item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Provides the equipment state for the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventGetEquipmentState_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventGetEquipmentState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "GetEquipmentState", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::ItemFragment_Equipment_eventGetEquipmentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::ItemFragment_Equipment_eventGetEquipmentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execGetEquipmentState)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetEquipmentState(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function GetEquipmentState

// Begin Class UItemFragment_Equipment Function HandleEquipmentState
struct Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics
{
	struct ItemFragment_Equipment_eventHandleEquipmentState_Parms
	{
		UNinjaEquipmentManagerComponent* EquipmentManager;
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Handles a given state for the equipment backing the item.\n\x09 *\n\x09 * @param EquipmentManager\x09\x09""Equipment Manager owning the equipment.\n\x09 * @param Item\x09\x09\x09\x09\x09Item backing the equipment, or used to create a new one.\n\x09 * @param Container\x09\x09\x09\x09""Container where the item is stored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Handles a given state for the equipment backing the item.\n\n@param EquipmentManager              Equipment Manager owning the equipment.\n@param Item                                  Item backing the equipment, or used to create a new one.\n@param Container                             Container where the item is stored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_EquipmentManager = { "EquipmentManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventHandleEquipmentState_Parms, EquipmentManager), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentManager_MetaData), NewProp_EquipmentManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventHandleEquipmentState_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventHandleEquipmentState_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_EquipmentManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "HandleEquipmentState", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::ItemFragment_Equipment_eventHandleEquipmentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::ItemFragment_Equipment_eventHandleEquipmentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execHandleEquipmentState)
{
	P_GET_OBJECT(UNinjaEquipmentManagerComponent,Z_Param_EquipmentManager);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipmentState(Z_Param_EquipmentManager,Z_Param_Item,Z_Param_Container);
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function HandleEquipmentState

// Begin Class UItemFragment_Equipment Function RemoveEquipment
struct Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics
{
	struct ItemFragment_Equipment_eventRemoveEquipment_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Removes the Equipment Instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Removes the Equipment Instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventRemoveEquipment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "RemoveEquipment", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::ItemFragment_Equipment_eventRemoveEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::ItemFragment_Equipment_eventRemoveEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execRemoveEquipment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEquipment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function RemoveEquipment

// Begin Class UItemFragment_Equipment Function SynchronizeEquipment
struct Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics
{
	struct ItemFragment_Equipment_eventSynchronizeEquipment_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Synchronizes the equipment with the current item and container.\n\x09 * \n\x09 * @param Item\x09\x09\x09\x09\x09Item that has changed to another container.\n\x09 * @param Container\x09\x09\x09\x09New container for the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Synchronizes the equipment with the current item and container.\n\n@param Item                                  Item that has changed to another container.\n@param Container                             New container for the item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventSynchronizeEquipment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Equipment_eventSynchronizeEquipment_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Equipment, nullptr, "SynchronizeEquipment", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::ItemFragment_Equipment_eventSynchronizeEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::ItemFragment_Equipment_eventSynchronizeEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Equipment::execSynchronizeEquipment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeEquipment(Z_Param_Item,Z_Param_Container);
	P_NATIVE_END;
}
// End Class UItemFragment_Equipment Function SynchronizeEquipment

// Begin Class UItemFragment_Equipment
void UItemFragment_Equipment::StaticRegisterNativesUItemFragment_Equipment()
{
	UClass* Class = UItemFragment_Equipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipment", &UItemFragment_Equipment::execGetEquipment },
		{ "GetEquipmentDataAsset", &UItemFragment_Equipment::execGetEquipmentDataAsset },
		{ "GetEquipmentState", &UItemFragment_Equipment::execGetEquipmentState },
		{ "HandleEquipmentState", &UItemFragment_Equipment::execHandleEquipmentState },
		{ "RemoveEquipment", &UItemFragment_Equipment::execRemoveEquipment },
		{ "SynchronizeEquipment", &UItemFragment_Equipment::execSynchronizeEquipment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Equipment);
UClass* Z_Construct_UClass_UItemFragment_Equipment_NoRegister()
{
	return UItemFragment_Equipment::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Equipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines an Equipment, which is a physical representation of an Inventory Item in the world.\n */" },
		{ "DisplayName", "Equipment" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "ToolTip", "Defines an Equipment, which is a physical representation of an Inventory Item in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Definition for the asset, bundling all related assets. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Equipment.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Definition for the asset, bundling all related assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Equipment_GetEquipment, "GetEquipment" }, // 693404486
		{ &Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentDataAsset, "GetEquipmentDataAsset" }, // 2060120846
		{ &Z_Construct_UFunction_UItemFragment_Equipment_GetEquipmentState, "GetEquipmentState" }, // 3669653869
		{ &Z_Construct_UFunction_UItemFragment_Equipment_HandleEquipmentState, "HandleEquipmentState" }, // 1771958407
		{ &Z_Construct_UFunction_UItemFragment_Equipment_RemoveEquipment, "RemoveEquipment" }, // 1857460681
		{ &Z_Construct_UFunction_UItemFragment_Equipment_SynchronizeEquipment, "SynchronizeEquipment" }, // 1096358382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Equipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFragment_Equipment_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Equipment, EquipmentData), Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentData_MetaData), NewProp_EquipmentData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Equipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Equipment_Statics::NewProp_EquipmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Equipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Equipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Equipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Equipment_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEquipableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Equipment, IEquipableItemInterface), false },  // 3327420789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Equipment_Statics::ClassParams = {
	&UItemFragment_Equipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Equipment_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Equipment_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Equipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Equipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Equipment()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Equipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Equipment.OuterSingleton, Z_Construct_UClass_UItemFragment_Equipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Equipment.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Equipment>()
{
	return UItemFragment_Equipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Equipment);
UItemFragment_Equipment::~UItemFragment_Equipment() {}
// End Class UItemFragment_Equipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Equipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Equipment, UItemFragment_Equipment::StaticClass, TEXT("UItemFragment_Equipment"), &Z_Registration_Info_UClass_UItemFragment_Equipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Equipment), 1547811029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Equipment_h_2563363909(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Equipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Equipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
