// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Container.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Container() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextModifierInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextValidatorInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UStorableItemInterface_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Container();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Container_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemContainerChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Container_eventItemContainerChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventItemContainerChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventItemContainerChangedSignature_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "ItemContainerChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::ItemFragment_Container_eventItemContainerChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::ItemFragment_Container_eventItemContainerChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Container::FItemContainerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemContainerChangedSignature, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container)
{
	struct ItemFragment_Container_eventItemContainerChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
	ItemFragment_Container_eventItemContainerChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Container=Container;
	ItemContainerChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemContainerChangedSignature

// Begin Delegate FItemPositionChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Container_eventItemPositionChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventItemPositionChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventItemPositionChangedSignature_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "ItemPositionChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::ItemFragment_Container_eventItemPositionChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::ItemFragment_Container_eventItemPositionChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Container::FItemPositionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemPositionChangedSignature, UNinjaInventoryItem* Item, int32 Position)
{
	struct ItemFragment_Container_eventItemPositionChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Position;
	};
	ItemFragment_Container_eventItemPositionChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Position=Position;
	ItemPositionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemPositionChangedSignature

// Begin Class UItemFragment_Container Function CanMoveItem
struct Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics
{
	struct ItemFragment_Container_eventCanMoveItem_Parms
	{
		const UNinjaInventoryItem* Item;
		const UNinjaInventoryContainer* Container;
		int32 Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if an item can be moved to a container and position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Checks if an item can be moved to a container and position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCanMoveItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCanMoveItem_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCanMoveItem_Parms, Position), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Container_eventCanMoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Container_eventCanMoveItem_Parms), &Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "CanMoveItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::ItemFragment_Container_eventCanMoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::ItemFragment_Container_eventCanMoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_CanMoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_CanMoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execCanMoveItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveItem(Z_Param_Item,Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function CanMoveItem

// Begin Class UItemFragment_Container Function CanSwapItems
struct Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics
{
	struct ItemFragment_Container_eventCanSwapItems_Parms
	{
		const UNinjaInventoryItem* Item;
		const UNinjaInventoryItem* ItemToSwap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if two item can be swapped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Checks if two item can be swapped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToSwap;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCanSwapItems_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ItemToSwap = { "ItemToSwap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCanSwapItems_Parms, ItemToSwap), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToSwap_MetaData), NewProp_ItemToSwap_MetaData) };
void Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Container_eventCanSwapItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Container_eventCanSwapItems_Parms), &Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ItemToSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "CanSwapItems", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::ItemFragment_Container_eventCanSwapItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::ItemFragment_Container_eventCanSwapItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_CanSwapItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_CanSwapItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execCanSwapItems)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemToSwap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSwapItems(Z_Param_Item,Z_Param_ItemToSwap);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function CanSwapItems

// Begin Class UItemFragment_Container Function CreateDefaultMemory
struct Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics
{
	struct ItemFragment_Container_eventCreateDefaultMemory_Parms
	{
		UNinjaInventoryContainer* Container;
		int32 Position;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Creates a default memory compatible with the storage details.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Creates a default memory compatible with the storage details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCreateDefaultMemory_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCreateDefaultMemory_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventCreateDefaultMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "CreateDefaultMemory", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::ItemFragment_Container_eventCreateDefaultMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::ItemFragment_Container_eventCreateDefaultMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execCreateDefaultMemory)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=P_THIS->CreateDefaultMemory(Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function CreateDefaultMemory

// Begin Class UItemFragment_Container Function FindBestContainerForItem
struct Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics
{
	struct ItemFragment_Container_eventFindBestContainerForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Finds the best container for an Item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Finds the best container for an Item." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventFindBestContainerForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventFindBestContainerForItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "FindBestContainerForItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::ItemFragment_Container_eventFindBestContainerForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::ItemFragment_Container_eventFindBestContainerForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execFindBestContainerForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->FindBestContainerForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function FindBestContainerForItem

// Begin Class UItemFragment_Container Function FindBestPositionForItem
struct Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics
{
	struct ItemFragment_Container_eventFindBestPositionForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Finds the best position for an Item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Finds the best position for an Item." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventFindBestPositionForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventFindBestPositionForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "FindBestPositionForItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::ItemFragment_Container_eventFindBestPositionForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::ItemFragment_Container_eventFindBestPositionForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execFindBestPositionForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindBestPositionForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function FindBestPositionForItem

// Begin Class UItemFragment_Container Function GetPosition
struct Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics
{
	struct ItemFragment_Container_eventGetPosition_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the position the item occupies in a container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Provides the position the item occupies in a container." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventGetPosition_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::ItemFragment_Container_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::ItemFragment_Container_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execGetPosition)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPosition(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function GetPosition

// Begin Class UItemFragment_Container Function GetPrimaryContainer
struct Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics
{
	struct ItemFragment_Container_eventGetPrimaryContainer_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the primary container where an item is stored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Provides the primary container where an item is stored." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventGetPrimaryContainer_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventGetPrimaryContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "GetPrimaryContainer", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::ItemFragment_Container_eventGetPrimaryContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::ItemFragment_Container_eventGetPrimaryContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execGetPrimaryContainer)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetPrimaryContainer(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function GetPrimaryContainer

// Begin Class UItemFragment_Container Function IsPreferredContainer
struct Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics
{
	struct ItemFragment_Container_eventIsPreferredContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if a given container is this item's preferred container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Checks if a given container is this item's preferred container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventIsPreferredContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Container_eventIsPreferredContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Container_eventIsPreferredContainer_Parms), &Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "IsPreferredContainer", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::ItemFragment_Container_eventIsPreferredContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::ItemFragment_Container_eventIsPreferredContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execIsPreferredContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreferredContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function IsPreferredContainer

// Begin Class UItemFragment_Container Function IsValidPosition
struct Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics
{
	struct ItemFragment_Container_eventIsValidPosition_Parms
	{
		const UNinjaInventoryContainer* Container;
		int32 Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if a position is valid in a given container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Checks if a position is valid in a given container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventIsValidPosition_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventIsValidPosition_Parms, Position), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Container_eventIsValidPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Container_eventIsValidPosition_Parms), &Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "IsValidPosition", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::ItemFragment_Container_eventIsValidPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::ItemFragment_Container_eventIsValidPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_IsValidPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_IsValidPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execIsValidPosition)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidPosition(Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function IsValidPosition

// Begin Class UItemFragment_Container Function MoveItem
struct Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics
{
	struct ItemFragment_Container_eventMoveItem_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets a container and a position for an item, at the same time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Sets a container and a position for an item, at the same time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventMoveItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventMoveItem_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventMoveItem_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "MoveItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::ItemFragment_Container_eventMoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::ItemFragment_Container_eventMoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_MoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_MoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execMoveItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveItem(Z_Param_Item,Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function MoveItem

// Begin Class UItemFragment_Container Function SetBestContainerAndPositionForItem
struct Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics
{
	struct ItemFragment_Container_eventSetBestContainerAndPositionForItem_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets the best container and position for an item, in its assigned inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Sets the best container and position for an item, in its assigned inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSetBestContainerAndPositionForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "SetBestContainerAndPositionForItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::ItemFragment_Container_eventSetBestContainerAndPositionForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::ItemFragment_Container_eventSetBestContainerAndPositionForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execSetBestContainerAndPositionForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBestContainerAndPositionForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function SetBestContainerAndPositionForItem

// Begin Class UItemFragment_Container Function SetPosition
struct Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics
{
	struct ItemFragment_Container_eventSetPosition_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets a new position for a given item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Sets a new position for a given item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSetPosition_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSetPosition_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::ItemFragment_Container_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::ItemFragment_Container_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execSetPosition)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_Item,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function SetPosition

// Begin Class UItemFragment_Container Function SetPrimaryContainer
struct Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics
{
	struct ItemFragment_Container_eventSetPrimaryContainer_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Sets the primary container for the item instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Sets the primary container for the item instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSetPrimaryContainer_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSetPrimaryContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "SetPrimaryContainer", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::ItemFragment_Container_eventSetPrimaryContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::ItemFragment_Container_eventSetPrimaryContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execSetPrimaryContainer)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrimaryContainer(Z_Param_Item,Z_Param_Container);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function SetPrimaryContainer

// Begin Class UItemFragment_Container Function SwapItems
struct Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics
{
	struct ItemFragment_Container_eventSwapItems_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryItem* ItemToSwap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Swaps the container and position between two items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Swaps the container and position between two items." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToSwap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSwapItems_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::NewProp_ItemToSwap = { "ItemToSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Container_eventSwapItems_Parms, ItemToSwap), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::NewProp_ItemToSwap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Container, nullptr, "SwapItems", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::ItemFragment_Container_eventSwapItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::ItemFragment_Container_eventSwapItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Container_SwapItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Container_SwapItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Container::execSwapItems)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemToSwap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapItems(Z_Param_Item,Z_Param_ItemToSwap);
	P_NATIVE_END;
}
// End Class UItemFragment_Container Function SwapItems

// Begin Class UItemFragment_Container
void UItemFragment_Container::StaticRegisterNativesUItemFragment_Container()
{
	UClass* Class = UItemFragment_Container::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMoveItem", &UItemFragment_Container::execCanMoveItem },
		{ "CanSwapItems", &UItemFragment_Container::execCanSwapItems },
		{ "CreateDefaultMemory", &UItemFragment_Container::execCreateDefaultMemory },
		{ "FindBestContainerForItem", &UItemFragment_Container::execFindBestContainerForItem },
		{ "FindBestPositionForItem", &UItemFragment_Container::execFindBestPositionForItem },
		{ "GetPosition", &UItemFragment_Container::execGetPosition },
		{ "GetPrimaryContainer", &UItemFragment_Container::execGetPrimaryContainer },
		{ "IsPreferredContainer", &UItemFragment_Container::execIsPreferredContainer },
		{ "IsValidPosition", &UItemFragment_Container::execIsValidPosition },
		{ "MoveItem", &UItemFragment_Container::execMoveItem },
		{ "SetBestContainerAndPositionForItem", &UItemFragment_Container::execSetBestContainerAndPositionForItem },
		{ "SetPosition", &UItemFragment_Container::execSetPosition },
		{ "SetPrimaryContainer", &UItemFragment_Container::execSetPrimaryContainer },
		{ "SwapItems", &UItemFragment_Container::execSwapItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Container);
UClass* Z_Construct_UClass_UItemFragment_Container_NoRegister()
{
	return UItemFragment_Container::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Container_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles containers occupied and provided by an item.\n */" },
		{ "DisplayName", "Container" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Handles containers occupied and provided by an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the container changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Broadcasts when the container changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPositionChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the position changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Broadcasts when the position changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredContainerQuery_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** The preferred container(s) for this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "The preferred container(s) for this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Containers added to the owner's inventory, when this fragment is applied.\n\x09 *\n\x09 * This allows designers to create items that can also be used as storage in the Inventory\n\x09 * such as a \"pot\", \"box\" or something more elaborate like a backpack with multiple pockets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Container.h" },
		{ "ToolTip", "Containers added to the owner's inventory, when this fragment is applied.\n\nThis allows designers to create items that can also be used as storage in the Inventory\nsuch as a \"pot\", \"box\" or something more elaborate like a backpack with multiple pockets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPositionChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredContainerQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Containers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Containers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Container_CanMoveItem, "CanMoveItem" }, // 3210850052
		{ &Z_Construct_UFunction_UItemFragment_Container_CanSwapItems, "CanSwapItems" }, // 1227367334
		{ &Z_Construct_UFunction_UItemFragment_Container_CreateDefaultMemory, "CreateDefaultMemory" }, // 3208532542
		{ &Z_Construct_UFunction_UItemFragment_Container_FindBestContainerForItem, "FindBestContainerForItem" }, // 4026103432
		{ &Z_Construct_UFunction_UItemFragment_Container_FindBestPositionForItem, "FindBestPositionForItem" }, // 923783095
		{ &Z_Construct_UFunction_UItemFragment_Container_GetPosition, "GetPosition" }, // 4212481908
		{ &Z_Construct_UFunction_UItemFragment_Container_GetPrimaryContainer, "GetPrimaryContainer" }, // 942053402
		{ &Z_Construct_UFunction_UItemFragment_Container_IsPreferredContainer, "IsPreferredContainer" }, // 2579834818
		{ &Z_Construct_UFunction_UItemFragment_Container_IsValidPosition, "IsValidPosition" }, // 3638030567
		{ &Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature, "ItemContainerChangedSignature__DelegateSignature" }, // 1936772172
		{ &Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature, "ItemPositionChangedSignature__DelegateSignature" }, // 2682906737
		{ &Z_Construct_UFunction_UItemFragment_Container_MoveItem, "MoveItem" }, // 1689168942
		{ &Z_Construct_UFunction_UItemFragment_Container_SetBestContainerAndPositionForItem, "SetBestContainerAndPositionForItem" }, // 3198168048
		{ &Z_Construct_UFunction_UItemFragment_Container_SetPosition, "SetPosition" }, // 2867296247
		{ &Z_Construct_UFunction_UItemFragment_Container_SetPrimaryContainer, "SetPrimaryContainer" }, // 3930963193
		{ &Z_Construct_UFunction_UItemFragment_Container_SwapItems, "SwapItems" }, // 2165717509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Container>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_OnContainerChanged = { "OnContainerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Container, OnContainerChanged), Z_Construct_UDelegateFunction_UItemFragment_Container_ItemContainerChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContainerChanged_MetaData), NewProp_OnContainerChanged_MetaData) }; // 1936772172
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_OnPositionChanged = { "OnPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Container, OnPositionChanged), Z_Construct_UDelegateFunction_UItemFragment_Container_ItemPositionChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPositionChanged_MetaData), NewProp_OnPositionChanged_MetaData) }; // 2682906737
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_PreferredContainerQuery = { "PreferredContainerQuery", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Container, PreferredContainerQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredContainerQuery_MetaData), NewProp_PreferredContainerQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_Containers_Inner = { "Containers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Container, Containers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Containers_MetaData), NewProp_Containers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Container_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_OnContainerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_OnPositionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_PreferredContainerQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_Containers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Container_Statics::NewProp_Containers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Container_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Container_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Container_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Container_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UStorableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Container, IStorableItemInterface), false },  // 4274734036
	{ Z_Construct_UClass_UItemContextValidatorInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Container, IItemContextValidatorInterface), false },  // 4259915807
	{ Z_Construct_UClass_UItemContextModifierInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Container, IItemContextModifierInterface), false },  // 3935088781
	{ Z_Construct_UClass_UInventorySerializableFragmentInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Container, IInventorySerializableFragmentInterface), false },  // 3391732129
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Container_Statics::ClassParams = {
	&UItemFragment_Container::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Container_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Container_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Container_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Container_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Container()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Container.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Container.OuterSingleton, Z_Construct_UClass_UItemFragment_Container_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Container.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Container>()
{
	return UItemFragment_Container::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Container);
UItemFragment_Container::~UItemFragment_Container() {}
// End Class UItemFragment_Container

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Container, UItemFragment_Container::StaticClass, TEXT("UItemFragment_Container"), &Z_Registration_Info_UClass_UItemFragment_Container, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Container), 1963349580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_3638888892(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
