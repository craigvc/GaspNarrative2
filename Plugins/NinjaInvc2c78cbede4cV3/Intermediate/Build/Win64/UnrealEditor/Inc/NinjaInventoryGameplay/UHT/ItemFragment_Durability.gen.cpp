// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Durability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Durability() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Durability();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Durability_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemDurabilityChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Durability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms, Durability), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::NewProp_Durability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "ItemDurabilityChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Durability::FItemDurabilityChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemDurabilityChangedSignature, UNinjaInventoryItem* Item, int32 Durability)
{
	struct ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Durability;
	};
	ItemFragment_Durability_eventItemDurabilityChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Durability=Durability;
	ItemDurabilityChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemDurabilityChangedSignature

// Begin Class UItemFragment_Durability Function AddWear
struct Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics
{
	struct ItemFragment_Durability_eventAddWear_Parms
	{
		UNinjaInventoryItem* Item;
		int32 WearAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Adds wear to the current durability. Checks if the item is indestructible.\n\x09 *\n\x09 * @param Item\x09\x09\x09Item to apply wear.\n\x09 * @param WearAmount\x09""Amount of wear to apply, must be positive.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Adds wear to the current durability. Checks if the item is indestructible.\n\n@param Item                  Item to apply wear.\n@param WearAmount    Amount of wear to apply, must be positive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WearAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventAddWear_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::NewProp_WearAmount = { "WearAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventAddWear_Parms, WearAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::NewProp_WearAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "AddWear", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::ItemFragment_Durability_eventAddWear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::ItemFragment_Durability_eventAddWear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_AddWear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_AddWear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execAddWear)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_WearAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWear(Z_Param_Item,Z_Param_WearAmount);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function AddWear

// Begin Class UItemFragment_Durability Function CanBreak
struct Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics
{
	struct ItemFragment_Durability_eventCanBreak_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Informs if the level can be upgraded (i.e. crafting).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Informs if the level can be upgraded (i.e. crafting)." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Durability_eventCanBreak_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Durability_eventCanBreak_Parms), &Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "CanBreak", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::ItemFragment_Durability_eventCanBreak_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::ItemFragment_Durability_eventCanBreak_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_CanBreak()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_CanBreak_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execCanBreak)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBreak();
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function CanBreak

// Begin Class UItemFragment_Durability Function GetDurability
struct Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics
{
	struct ItemFragment_Durability_eventGetDurability_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the current durability for the provided item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Provides the current durability for the provided item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventGetDurability_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventGetDurability_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "GetDurability", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::ItemFragment_Durability_eventGetDurability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::ItemFragment_Durability_eventGetDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_GetDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_GetDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execGetDurability)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDurability(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function GetDurability

// Begin Class UItemFragment_Durability Function GetMaximumDurability
struct Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics
{
	struct ItemFragment_Durability_eventGetMaximumDurability_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the maximum durability for an item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Provides the maximum durability for an item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventGetMaximumDurability_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "GetMaximumDurability", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::ItemFragment_Durability_eventGetMaximumDurability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::ItemFragment_Durability_eventGetMaximumDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execGetMaximumDurability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaximumDurability();
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function GetMaximumDurability

// Begin Class UItemFragment_Durability Function IsBroken
struct Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics
{
	struct ItemFragment_Durability_eventIsBroken_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if the item is broken.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Checks if the item is broken." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventIsBroken_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Durability_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Durability_eventIsBroken_Parms), &Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "IsBroken", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::ItemFragment_Durability_eventIsBroken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::ItemFragment_Durability_eventIsBroken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_IsBroken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_IsBroken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execIsBroken)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UItemFragment_Durability::IsBroken(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function IsBroken

// Begin Class UItemFragment_Durability Function IsIndestructible
struct Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics
{
	struct ItemFragment_Durability_eventIsIndestructible_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if the item is indestructible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Checks if the item is indestructible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventIsIndestructible_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Durability_eventIsIndestructible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Durability_eventIsIndestructible_Parms), &Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "IsIndestructible", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::ItemFragment_Durability_eventIsIndestructible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::ItemFragment_Durability_eventIsIndestructible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execIsIndestructible)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UItemFragment_Durability::IsIndestructible(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function IsIndestructible

// Begin Class UItemFragment_Durability Function Repair
struct Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics
{
	struct ItemFragment_Durability_eventRepair_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Repairs the item to its original durability. Checks if the item is indestructible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Repairs the item to its original durability. Checks if the item is indestructible." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventRepair_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "Repair", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::ItemFragment_Durability_eventRepair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::ItemFragment_Durability_eventRepair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_Repair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_Repair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execRepair)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Repair(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function Repair

// Begin Class UItemFragment_Durability Function SetDurability
struct Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics
{
	struct ItemFragment_Durability_eventSetDurability_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets a new durability, overriding the current value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Sets a new durability, overriding the current value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventSetDurability_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::NewProp_NewDurability = { "NewDurability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Durability_eventSetDurability_Parms, NewDurability), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::NewProp_NewDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Durability, nullptr, "SetDurability", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::ItemFragment_Durability_eventSetDurability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::ItemFragment_Durability_eventSetDurability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Durability_SetDurability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Durability_SetDurability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Durability::execSetDurability)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDurability(Z_Param_Item,Z_Param_NewDurability);
	P_NATIVE_END;
}
// End Class UItemFragment_Durability Function SetDurability

// Begin Class UItemFragment_Durability
void UItemFragment_Durability::StaticRegisterNativesUItemFragment_Durability()
{
	UClass* Class = UItemFragment_Durability::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWear", &UItemFragment_Durability::execAddWear },
		{ "CanBreak", &UItemFragment_Durability::execCanBreak },
		{ "GetDurability", &UItemFragment_Durability::execGetDurability },
		{ "GetMaximumDurability", &UItemFragment_Durability::execGetMaximumDurability },
		{ "IsBroken", &UItemFragment_Durability::execIsBroken },
		{ "IsIndestructible", &UItemFragment_Durability::execIsIndestructible },
		{ "Repair", &UItemFragment_Durability::execRepair },
		{ "SetDurability", &UItemFragment_Durability::execSetDurability },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Durability);
UClass* Z_Construct_UClass_UItemFragment_Durability_NoRegister()
{
	return UItemFragment_Durability::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Durability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Keeps track of an item's current durability.\n */" },
		{ "DisplayName", "Durability" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Keeps track of an item's current durability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDurabilityChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the durability changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Broadcasts when the durability changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBreak_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Allows this item to wear and break. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Allows this item to wear and break." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Maximum durability points available to the item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Durability.h" },
		{ "ToolTip", "Maximum durability points available to the item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDurabilityChanged;
	static void NewProp_bCanBreak_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBreak;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Durability_AddWear, "AddWear" }, // 297168719
		{ &Z_Construct_UFunction_UItemFragment_Durability_CanBreak, "CanBreak" }, // 3540751144
		{ &Z_Construct_UFunction_UItemFragment_Durability_GetDurability, "GetDurability" }, // 234515169
		{ &Z_Construct_UFunction_UItemFragment_Durability_GetMaximumDurability, "GetMaximumDurability" }, // 1122514722
		{ &Z_Construct_UFunction_UItemFragment_Durability_IsBroken, "IsBroken" }, // 125612830
		{ &Z_Construct_UFunction_UItemFragment_Durability_IsIndestructible, "IsIndestructible" }, // 4012943541
		{ &Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature, "ItemDurabilityChangedSignature__DelegateSignature" }, // 2266087249
		{ &Z_Construct_UFunction_UItemFragment_Durability_Repair, "Repair" }, // 1516264000
		{ &Z_Construct_UFunction_UItemFragment_Durability_SetDurability, "SetDurability" }, // 3034576407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Durability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_OnDurabilityChanged = { "OnDurabilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Durability, OnDurabilityChanged), Z_Construct_UDelegateFunction_UItemFragment_Durability_ItemDurabilityChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDurabilityChanged_MetaData), NewProp_OnDurabilityChanged_MetaData) }; // 2266087249
void Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_bCanBreak_SetBit(void* Obj)
{
	((UItemFragment_Durability*)Obj)->bCanBreak = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_bCanBreak = { "bCanBreak", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Durability), &Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_bCanBreak_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBreak_MetaData), NewProp_bCanBreak_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Durability, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Durability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_OnDurabilityChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_bCanBreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Durability_Statics::NewProp_Durability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Durability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Durability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Durability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Durability_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Durability, IItemMagnitudeValueInterface), false },  // 682410900
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Durability_Statics::ClassParams = {
	&UItemFragment_Durability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Durability_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Durability_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Durability_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Durability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Durability()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Durability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Durability.OuterSingleton, Z_Construct_UClass_UItemFragment_Durability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Durability.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Durability>()
{
	return UItemFragment_Durability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Durability);
UItemFragment_Durability::~UItemFragment_Durability() {}
// End Class UItemFragment_Durability

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Durability, UItemFragment_Durability::StaticClass, TEXT("UItemFragment_Durability"), &Z_Registration_Info_UClass_UItemFragment_Durability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Durability), 2545250977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_2511296941(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
