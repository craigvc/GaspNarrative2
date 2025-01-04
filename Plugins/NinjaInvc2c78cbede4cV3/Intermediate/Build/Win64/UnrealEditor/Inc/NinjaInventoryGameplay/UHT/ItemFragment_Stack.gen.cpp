// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "NinjaInventory/Public/Types/FInventoryItemContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Stack() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextModifierInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextValidatorInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UStackableItemInterface_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContext();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Stack();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Stack_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemStackChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Stack_eventItemStackChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventItemStackChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventItemStackChangedSignature_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::NewProp_StackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "ItemStackChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::ItemFragment_Stack_eventItemStackChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::ItemFragment_Stack_eventItemStackChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Stack::FItemStackChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemStackChangedSignature, UNinjaInventoryItem* Item, int32 StackSize)
{
	struct ItemFragment_Stack_eventItemStackChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StackSize;
	};
	ItemFragment_Stack_eventItemStackChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.StackSize=StackSize;
	ItemStackChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemStackChangedSignature

// Begin Class UItemFragment_Stack Function CanAddStack
struct Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics
{
	struct ItemFragment_Stack_eventCanAddStack_Parms
	{
		const UNinjaInventoryManagerComponent* InventoryManager;
		const UNinjaInventoryItemDataAsset* ItemData;
		int32 StackSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if an item data and a base stack can be added to an Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Checks if an item data and a base stack can be added to an Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanAddStack_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanAddStack_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanAddStack_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Stack_eventCanAddStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Stack_eventCanAddStack_Parms), &Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CanAddStack", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::ItemFragment_Stack_eventCanAddStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::ItemFragment_Stack_eventCanAddStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CanAddStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CanAddStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCanAddStack)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddStack(Z_Param_InventoryManager,Z_Param_ItemData,Z_Param_StackSize);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CanAddStack

// Begin Class UItemFragment_Stack Function CanCombineStacks
struct Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics
{
	struct ItemFragment_Stack_eventCanCombineStacks_Parms
	{
		const UNinjaInventoryItem* ItemA;
		const UNinjaInventoryItem* ItemB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if two item stacks can be combined.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Checks if two item stacks can be combined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanCombineStacks_Parms, ItemA), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemA_MetaData), NewProp_ItemA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanCombineStacks_Parms, ItemB), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemB_MetaData), NewProp_ItemB_MetaData) };
void Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Stack_eventCanCombineStacks_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Stack_eventCanCombineStacks_Parms), &Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ItemB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CanCombineStacks", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::ItemFragment_Stack_eventCanCombineStacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::ItemFragment_Stack_eventCanCombineStacks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCanCombineStacks)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemA);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCombineStacks(Z_Param_ItemA,Z_Param_ItemB);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CanCombineStacks

// Begin Class UItemFragment_Stack Function CanSplitStack
struct Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics
{
	struct ItemFragment_Stack_eventCanSplitStack_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if an item can be split by the provided amount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Checks if an item can be split by the provided amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanSplitStack_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCanSplitStack_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Stack_eventCanSplitStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Stack_eventCanSplitStack_Parms), &Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CanSplitStack", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::ItemFragment_Stack_eventCanSplitStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::ItemFragment_Stack_eventCanSplitStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCanSplitStack)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSplitStack(Z_Param_Item,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CanSplitStack

// Begin Class UItemFragment_Stack Function CombineStacks
struct Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics
{
	struct ItemFragment_Stack_eventCombineStacks_Parms
	{
		UNinjaInventoryItem* ItemA;
		UNinjaInventoryItem* ItemB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Combines two item stacks, adjusting them in the Item Database.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Combines two item stacks, adjusting them in the Item Database." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCombineStacks_Parms, ItemA), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCombineStacks_Parms, ItemB), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::NewProp_ItemA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::NewProp_ItemB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CombineStacks", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::ItemFragment_Stack_eventCombineStacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::ItemFragment_Stack_eventCombineStacks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CombineStacks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CombineStacks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCombineStacks)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemA);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CombineStacks(Z_Param_ItemA,Z_Param_ItemB);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CombineStacks

// Begin Class UItemFragment_Stack Function CountTotalStackSize
struct Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics
{
	struct ItemFragment_Stack_eventCountTotalStackSize_Parms
	{
		const UNinjaInventoryManagerComponent* InventoryManager;
		const UNinjaInventoryItemDataAsset* ItemData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the total stack size of an Item type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Provides the total stack size of an Item type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCountTotalStackSize_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCountTotalStackSize_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCountTotalStackSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CountTotalStackSize", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::ItemFragment_Stack_eventCountTotalStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::ItemFragment_Stack_eventCountTotalStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCountTotalStackSize)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalStackSize(Z_Param_InventoryManager,Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CountTotalStackSize

// Begin Class UItemFragment_Stack Function CreateDefaultMemory
struct Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics
{
	struct ItemFragment_Stack_eventCreateDefaultMemory_Parms
	{
		int32 StackSize;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Creates a stack memory compatible with the stack size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Creates a stack memory compatible with the stack size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCreateDefaultMemory_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventCreateDefaultMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "CreateDefaultMemory", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::ItemFragment_Stack_eventCreateDefaultMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::ItemFragment_Stack_eventCreateDefaultMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execCreateDefaultMemory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=P_THIS->CreateDefaultMemory(Z_Param_StackSize);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function CreateDefaultMemory

// Begin Class UItemFragment_Stack Function GetMaximumLimit
struct Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics
{
	struct ItemFragment_Stack_eventGetMaximumLimit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the limit of how many items can be carried in the inventory in total.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Provides the limit of how many items can be carried in the inventory in total." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetMaximumLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "GetMaximumLimit", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::ItemFragment_Stack_eventGetMaximumLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::ItemFragment_Stack_eventGetMaximumLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execGetMaximumLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaximumLimit();
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function GetMaximumLimit

// Begin Class UItemFragment_Stack Function GetStackLimit
struct Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics
{
	struct ItemFragment_Stack_eventGetStackLimit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the maximum amount of items in a stack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Provides the maximum amount of items in a stack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetStackLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "GetStackLimit", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::ItemFragment_Stack_eventGetStackLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::ItemFragment_Stack_eventGetStackLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execGetStackLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackLimit();
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function GetStackLimit

// Begin Class UItemFragment_Stack Function GetStackSize
struct Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics
{
	struct ItemFragment_Stack_eventGetStackSize_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the current stack size for a given Item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Provides the current stack size for a given Item." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetStackSize_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetStackSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "GetStackSize", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::ItemFragment_Stack_eventGetStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::ItemFragment_Stack_eventGetStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_GetStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_GetStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execGetStackSize)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackSize(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function GetStackSize

// Begin Class UItemFragment_Stack Function GetStackSizeFromDefaultMemories
struct Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics
{
	struct ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> DefaultMemories;
		int32 OutStack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the stack size from a list of default memories.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Provides the stack size from a list of default memories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMemories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMemories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_DefaultMemories_Inner = { "DefaultMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_DefaultMemories = { "DefaultMemories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms, DefaultMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMemories_MetaData), NewProp_DefaultMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_OutStack = { "OutStack", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms, OutStack), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms), &Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_DefaultMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_DefaultMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_OutStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "GetStackSizeFromDefaultMemories", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::ItemFragment_Stack_eventGetStackSizeFromDefaultMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execGetStackSizeFromDefaultMemories)
{
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_DefaultMemories);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStackSizeFromDefaultMemories(Z_Param_Out_DefaultMemories,Z_Param_Out_OutStack);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function GetStackSizeFromDefaultMemories

// Begin Class UItemFragment_Stack Function OrganizeStacksInContext
struct Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics
{
	struct ItemFragment_Stack_eventOrganizeStacksInContext_Parms
	{
		FInventoryItemContext ItemContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Splits a stack presented in an item context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Splits a stack presented in an item context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventOrganizeStacksInContext_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::NewProp_ItemContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "OrganizeStacksInContext", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::ItemFragment_Stack_eventOrganizeStacksInContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::ItemFragment_Stack_eventOrganizeStacksInContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execOrganizeStacksInContext)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OrganizeStacksInContext(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function OrganizeStacksInContext

// Begin Class UItemFragment_Stack Function SetStackSize
struct Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics
{
	struct ItemFragment_Stack_eventSetStackSize_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewStackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets the stack size for a given Item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Sets the stack size for a given Item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventSetStackSize_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::NewProp_NewStackSize = { "NewStackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventSetStackSize_Parms, NewStackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::NewProp_NewStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "SetStackSize", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::ItemFragment_Stack_eventSetStackSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::ItemFragment_Stack_eventSetStackSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_SetStackSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_SetStackSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execSetStackSize)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStackSize(Z_Param_Item,Z_Param_NewStackSize);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function SetStackSize

// Begin Class UItemFragment_Stack Function SplitStack
struct Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics
{
	struct ItemFragment_Stack_eventSplitStack_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Splits the stack, modifying the item's current stack size and creating a new item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Splits the stack, modifying the item's current stack size and creating a new item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventSplitStack_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Stack_eventSplitStack_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Stack, nullptr, "SplitStack", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::ItemFragment_Stack_eventSplitStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::ItemFragment_Stack_eventSplitStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Stack_SplitStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Stack_SplitStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Stack::execSplitStack)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitStack(Z_Param_Item,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UItemFragment_Stack Function SplitStack

// Begin Class UItemFragment_Stack
void UItemFragment_Stack::StaticRegisterNativesUItemFragment_Stack()
{
	UClass* Class = UItemFragment_Stack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAddStack", &UItemFragment_Stack::execCanAddStack },
		{ "CanCombineStacks", &UItemFragment_Stack::execCanCombineStacks },
		{ "CanSplitStack", &UItemFragment_Stack::execCanSplitStack },
		{ "CombineStacks", &UItemFragment_Stack::execCombineStacks },
		{ "CountTotalStackSize", &UItemFragment_Stack::execCountTotalStackSize },
		{ "CreateDefaultMemory", &UItemFragment_Stack::execCreateDefaultMemory },
		{ "GetMaximumLimit", &UItemFragment_Stack::execGetMaximumLimit },
		{ "GetStackLimit", &UItemFragment_Stack::execGetStackLimit },
		{ "GetStackSize", &UItemFragment_Stack::execGetStackSize },
		{ "GetStackSizeFromDefaultMemories", &UItemFragment_Stack::execGetStackSizeFromDefaultMemories },
		{ "OrganizeStacksInContext", &UItemFragment_Stack::execOrganizeStacksInContext },
		{ "SetStackSize", &UItemFragment_Stack::execSetStackSize },
		{ "SplitStack", &UItemFragment_Stack::execSplitStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Stack);
UClass* Z_Construct_UClass_UItemFragment_Stack_NoRegister()
{
	return UItemFragment_Stack::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Stack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Determines how a certain item can be stacked.\n */" },
		{ "DisplayName", "Stack" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Determines how a certain item can be stacked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStackSizeChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the stack size changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Broadcasts when the stack size changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackLimit_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum amount of items in a stack. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Maximum amount of items in a stack." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLimit_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Limit of how many items can be carried in the inventory in total. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Limit of how many items can be carried in the inventory in total." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyMergeNewItems_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** If set to true, will try to reuse incomplete stacks before adding new items. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "If set to true, will try to reuse incomplete stacks before adding new items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformStrictStackChecks_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Defines how this fragment tests new items being added to the inventory.\n\x09 * \n\x09 * If set to true, will always check an entire stack before adding new items, so if\n\x09 * a stack of 30 items is being added, it will ensure that all 30 items can be added,\n\x09 * disregarding the possibility of breaking the stack.\n\x09 *\n\x09 * If set to false, it will add room to add at least one item from the entire stack,\n\x09 * meaning 1 item could be added/absorbed, and the remainder would be discarded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Stack.h" },
		{ "ToolTip", "Defines how this fragment tests new items being added to the inventory.\n\nIf set to true, will always check an entire stack before adding new items, so if\na stack of 30 items is being added, it will ensure that all 30 items can be added,\ndisregarding the possibility of breaking the stack.\n\nIf set to false, it will add room to add at least one item from the entire stack,\nmeaning 1 item could be added/absorbed, and the remainder would be discarded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStackSizeChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumLimit;
	static void NewProp_bAutomaticallyMergeNewItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyMergeNewItems;
	static void NewProp_bPerformStrictStackChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformStrictStackChecks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Stack_CanAddStack, "CanAddStack" }, // 1967617507
		{ &Z_Construct_UFunction_UItemFragment_Stack_CanCombineStacks, "CanCombineStacks" }, // 2987151082
		{ &Z_Construct_UFunction_UItemFragment_Stack_CanSplitStack, "CanSplitStack" }, // 1331704077
		{ &Z_Construct_UFunction_UItemFragment_Stack_CombineStacks, "CombineStacks" }, // 4004655325
		{ &Z_Construct_UFunction_UItemFragment_Stack_CountTotalStackSize, "CountTotalStackSize" }, // 4095294622
		{ &Z_Construct_UFunction_UItemFragment_Stack_CreateDefaultMemory, "CreateDefaultMemory" }, // 710253031
		{ &Z_Construct_UFunction_UItemFragment_Stack_GetMaximumLimit, "GetMaximumLimit" }, // 2123797738
		{ &Z_Construct_UFunction_UItemFragment_Stack_GetStackLimit, "GetStackLimit" }, // 2314723715
		{ &Z_Construct_UFunction_UItemFragment_Stack_GetStackSize, "GetStackSize" }, // 2284908574
		{ &Z_Construct_UFunction_UItemFragment_Stack_GetStackSizeFromDefaultMemories, "GetStackSizeFromDefaultMemories" }, // 1118616951
		{ &Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature, "ItemStackChangedSignature__DelegateSignature" }, // 1844945261
		{ &Z_Construct_UFunction_UItemFragment_Stack_OrganizeStacksInContext, "OrganizeStacksInContext" }, // 2101374767
		{ &Z_Construct_UFunction_UItemFragment_Stack_SetStackSize, "SetStackSize" }, // 930113998
		{ &Z_Construct_UFunction_UItemFragment_Stack_SplitStack, "SplitStack" }, // 2788520090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Stack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_OnStackSizeChanged = { "OnStackSizeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Stack, OnStackSizeChanged), Z_Construct_UDelegateFunction_UItemFragment_Stack_ItemStackChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStackSizeChanged_MetaData), NewProp_OnStackSizeChanged_MetaData) }; // 1844945261
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_StackLimit = { "StackLimit", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Stack, StackLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackLimit_MetaData), NewProp_StackLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_MaximumLimit = { "MaximumLimit", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Stack, MaximumLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLimit_MetaData), NewProp_MaximumLimit_MetaData) };
void Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bAutomaticallyMergeNewItems_SetBit(void* Obj)
{
	((UItemFragment_Stack*)Obj)->bAutomaticallyMergeNewItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bAutomaticallyMergeNewItems = { "bAutomaticallyMergeNewItems", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Stack), &Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bAutomaticallyMergeNewItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyMergeNewItems_MetaData), NewProp_bAutomaticallyMergeNewItems_MetaData) };
void Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bPerformStrictStackChecks_SetBit(void* Obj)
{
	((UItemFragment_Stack*)Obj)->bPerformStrictStackChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bPerformStrictStackChecks = { "bPerformStrictStackChecks", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Stack), &Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bPerformStrictStackChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformStrictStackChecks_MetaData), NewProp_bPerformStrictStackChecks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Stack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_OnStackSizeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_StackLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_MaximumLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bAutomaticallyMergeNewItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Stack_Statics::NewProp_bPerformStrictStackChecks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Stack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Stack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Stack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Stack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UStackableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Stack, IStackableItemInterface), false },  // 1478421250
	{ Z_Construct_UClass_UItemContextValidatorInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Stack, IItemContextValidatorInterface), false },  // 4259915807
	{ Z_Construct_UClass_UItemContextModifierInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Stack, IItemContextModifierInterface), false },  // 3935088781
	{ Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Stack, IInventorySerializableFragmentInterface), false },  // 3391732129
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Stack_Statics::ClassParams = {
	&UItemFragment_Stack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Stack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Stack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Stack_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Stack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Stack()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Stack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Stack.OuterSingleton, Z_Construct_UClass_UItemFragment_Stack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Stack.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Stack>()
{
	return UItemFragment_Stack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Stack);
UItemFragment_Stack::~UItemFragment_Stack() {}
// End Class UItemFragment_Stack

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Stack, UItemFragment_Stack::StaticClass, TEXT("UItemFragment_Stack"), &Z_Registration_Info_UClass_UItemFragment_Stack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Stack), 2119686108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_4188842730(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
