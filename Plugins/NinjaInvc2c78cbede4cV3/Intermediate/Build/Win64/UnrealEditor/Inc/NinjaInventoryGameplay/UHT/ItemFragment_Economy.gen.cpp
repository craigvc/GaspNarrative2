// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Economy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Economy() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Economy();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Economy_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemTotalPriceChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		float BuyPrice;
		float SellPrice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuyPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms, BuyPrice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms, SellPrice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::NewProp_SellPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "ItemTotalPriceChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Economy::FItemTotalPriceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemTotalPriceChangedSignature, UNinjaInventoryItem* Item, float BuyPrice, float SellPrice)
{
	struct ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		float BuyPrice;
		float SellPrice;
	};
	ItemFragment_Economy_eventItemTotalPriceChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.BuyPrice=BuyPrice;
	Parms.SellPrice=SellPrice;
	ItemTotalPriceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemTotalPriceChangedSignature

// Begin Class UItemFragment_Economy Function CanBeBought
struct Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics
{
	struct ItemFragment_Economy_eventCanBeBought_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if this item can be bought.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Checks if this item can be bought." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Economy_eventCanBeBought_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Economy_eventCanBeBought_Parms), &Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "CanBeBought", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::ItemFragment_Economy_eventCanBeBought_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::ItemFragment_Economy_eventCanBeBought_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_CanBeBought()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_CanBeBought_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execCanBeBought)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeBought();
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function CanBeBought

// Begin Class UItemFragment_Economy Function CanBeSold
struct Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics
{
	struct ItemFragment_Economy_eventCanBeSold_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if this item can be sold.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Checks if this item can be sold." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Economy_eventCanBeSold_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Economy_eventCanBeSold_Parms), &Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "CanBeSold", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::ItemFragment_Economy_eventCanBeSold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::ItemFragment_Economy_eventCanBeSold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_CanBeSold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_CanBeSold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execCanBeSold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeSold();
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function CanBeSold

// Begin Class UItemFragment_Economy Function GetBuyPrice
struct Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics
{
	struct ItemFragment_Economy_eventGetBuyPrice_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the individual unitary price when buying.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Provides the individual unitary price when buying." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetBuyPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "GetBuyPrice", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::ItemFragment_Economy_eventGetBuyPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::ItemFragment_Economy_eventGetBuyPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execGetBuyPrice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBuyPrice();
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function GetBuyPrice

// Begin Class UItemFragment_Economy Function GetSellPrice
struct Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics
{
	struct ItemFragment_Economy_eventGetSellPrice_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the individual unitary price when buying.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Provides the individual unitary price when buying." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetSellPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "GetSellPrice", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::ItemFragment_Economy_eventGetSellPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::ItemFragment_Economy_eventGetSellPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execGetSellPrice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSellPrice();
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function GetSellPrice

// Begin Class UItemFragment_Economy Function GetStackSize
struct Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics
{
	struct ItemFragment_Economy_eventGetStackSize_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the stack size from a stack fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Provides the stack size from a stack fragment." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetStackSize_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetStackSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "GetStackSize", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::ItemFragment_Economy_eventGetStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::ItemFragment_Economy_eventGetStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_GetStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_GetStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execGetStackSize)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UItemFragment_Economy::GetStackSize(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function GetStackSize

// Begin Class UItemFragment_Economy Function GetTotalBuyPrice
struct Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics
{
	struct ItemFragment_Economy_eventGetTotalBuyPrice_Parms
	{
		const UNinjaInventoryItem* Item;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the total buy price for an item, considering its stack.\n\x09 * If the item cannot be bought, this value is always zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Provides the total buy price for an item, considering its stack.\nIf the item cannot be bought, this value is always zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetTotalBuyPrice_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetTotalBuyPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "GetTotalBuyPrice", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::ItemFragment_Economy_eventGetTotalBuyPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::ItemFragment_Economy_eventGetTotalBuyPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execGetTotalBuyPrice)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalBuyPrice(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function GetTotalBuyPrice

// Begin Class UItemFragment_Economy Function GetTotalSellPrice
struct Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics
{
	struct ItemFragment_Economy_eventGetTotalSellPrice_Parms
	{
		const UNinjaInventoryItem* Item;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the total buy price for an item, considering its stack.\n\x09 * If the item cannot be bought, this value is always zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Provides the total buy price for an item, considering its stack.\nIf the item cannot be bought, this value is always zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetTotalSellPrice_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventGetTotalSellPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "GetTotalSellPrice", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::ItemFragment_Economy_eventGetTotalSellPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::ItemFragment_Economy_eventGetTotalSellPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execGetTotalSellPrice)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalSellPrice(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function GetTotalSellPrice

// Begin Class UItemFragment_Economy Function HandleStackSizeChanged
struct Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics
{
	struct ItemFragment_Economy_eventHandleStackSizeChanged_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to a change in the stack size, so we can update the prices.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Reacts to a change in the stack size, so we can update the prices." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventHandleStackSizeChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Economy_eventHandleStackSizeChanged_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::NewProp_StackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Economy, nullptr, "HandleStackSizeChanged", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::ItemFragment_Economy_eventHandleStackSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::ItemFragment_Economy_eventHandleStackSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Economy::execHandleStackSizeChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStackSizeChanged(Z_Param_Item,Z_Param_StackSize);
	P_NATIVE_END;
}
// End Class UItemFragment_Economy Function HandleStackSizeChanged

// Begin Class UItemFragment_Economy
void UItemFragment_Economy::StaticRegisterNativesUItemFragment_Economy()
{
	UClass* Class = UItemFragment_Economy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeBought", &UItemFragment_Economy::execCanBeBought },
		{ "CanBeSold", &UItemFragment_Economy::execCanBeSold },
		{ "GetBuyPrice", &UItemFragment_Economy::execGetBuyPrice },
		{ "GetSellPrice", &UItemFragment_Economy::execGetSellPrice },
		{ "GetStackSize", &UItemFragment_Economy::execGetStackSize },
		{ "GetTotalBuyPrice", &UItemFragment_Economy::execGetTotalBuyPrice },
		{ "GetTotalSellPrice", &UItemFragment_Economy::execGetTotalSellPrice },
		{ "HandleStackSizeChanged", &UItemFragment_Economy::execHandleStackSizeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Economy);
UClass* Z_Construct_UClass_UItemFragment_Economy_NoRegister()
{
	return UItemFragment_Economy::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Economy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines prices for when items are bought or sold.\n */" },
		{ "DisplayName", "Economy" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Defines prices for when items are bought or sold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTotalPriceChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the prices change, which is usually consequence of changing the stack. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Broadcasts when the prices change, which is usually consequence of changing the stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBought_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Determines if owners can buy this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Determines if owners can buy this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyPrice_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Price for this item when is being bought by owners. */" },
		{ "EditCondition", "bCanBeBought" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Price for this item when is being bought by owners." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSold_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Determines if owners can sell this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Determines if owners can sell this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellPrice_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Price for this item when is being sold by owners. */" },
		{ "EditCondition", "bCanBeSold" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Economy.h" },
		{ "ToolTip", "Price for this item when is being sold by owners." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTotalPriceChanged;
	static void NewProp_bCanBeBought_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBought;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuyPrice;
	static void NewProp_bCanBeSold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Economy_CanBeBought, "CanBeBought" }, // 2602656844
		{ &Z_Construct_UFunction_UItemFragment_Economy_CanBeSold, "CanBeSold" }, // 3003380027
		{ &Z_Construct_UFunction_UItemFragment_Economy_GetBuyPrice, "GetBuyPrice" }, // 332933675
		{ &Z_Construct_UFunction_UItemFragment_Economy_GetSellPrice, "GetSellPrice" }, // 2265514314
		{ &Z_Construct_UFunction_UItemFragment_Economy_GetStackSize, "GetStackSize" }, // 3409445219
		{ &Z_Construct_UFunction_UItemFragment_Economy_GetTotalBuyPrice, "GetTotalBuyPrice" }, // 1232696405
		{ &Z_Construct_UFunction_UItemFragment_Economy_GetTotalSellPrice, "GetTotalSellPrice" }, // 3040573815
		{ &Z_Construct_UFunction_UItemFragment_Economy_HandleStackSizeChanged, "HandleStackSizeChanged" }, // 1367779855
		{ &Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature, "ItemTotalPriceChangedSignature__DelegateSignature" }, // 649534000
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Economy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_OnTotalPriceChanged = { "OnTotalPriceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Economy, OnTotalPriceChanged), Z_Construct_UDelegateFunction_UItemFragment_Economy_ItemTotalPriceChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTotalPriceChanged_MetaData), NewProp_OnTotalPriceChanged_MetaData) }; // 649534000
void Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeBought_SetBit(void* Obj)
{
	((UItemFragment_Economy*)Obj)->bCanBeBought = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeBought = { "bCanBeBought", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Economy), &Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeBought_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeBought_MetaData), NewProp_bCanBeBought_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Economy, BuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyPrice_MetaData), NewProp_BuyPrice_MetaData) };
void Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeSold_SetBit(void* Obj)
{
	((UItemFragment_Economy*)Obj)->bCanBeSold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeSold = { "bCanBeSold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Economy), &Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeSold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeSold_MetaData), NewProp_bCanBeSold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Economy, SellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellPrice_MetaData), NewProp_SellPrice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Economy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_OnTotalPriceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeBought,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_bCanBeSold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Economy_Statics::NewProp_SellPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Economy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Economy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Economy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Economy_Statics::ClassParams = {
	&UItemFragment_Economy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Economy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Economy_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Economy_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Economy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Economy()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Economy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Economy.OuterSingleton, Z_Construct_UClass_UItemFragment_Economy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Economy.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Economy>()
{
	return UItemFragment_Economy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Economy);
UItemFragment_Economy::~UItemFragment_Economy() {}
// End Class UItemFragment_Economy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Economy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Economy, UItemFragment_Economy::StaticClass, TEXT("UItemFragment_Economy"), &Z_Registration_Info_UClass_UItemFragment_Economy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Economy), 2589043769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Economy_h_3172182683(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Economy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Economy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
