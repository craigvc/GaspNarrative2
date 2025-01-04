// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Weight.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Weight() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextValidatorInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UWeightableItemInterface_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_GameplayEffect();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Weight();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Weight_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemWeightChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Weight_eventItemWeightChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		float Weight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventItemWeightChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventItemWeightChangedSignature_Parms, Weight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Weight, nullptr, "ItemWeightChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::ItemFragment_Weight_eventItemWeightChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::ItemFragment_Weight_eventItemWeightChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Weight::FItemWeightChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemWeightChangedSignature, UNinjaInventoryItem* Item, float Weight)
{
	struct ItemFragment_Weight_eventItemWeightChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		float Weight;
	};
	ItemFragment_Weight_eventItemWeightChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Weight=Weight;
	ItemWeightChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemWeightChangedSignature

// Begin Class UItemFragment_Weight Function CanAddWeight
struct Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics
{
	struct ItemFragment_Weight_eventCanAddWeight_Parms
	{
		const UNinjaInventoryManagerComponent* InventoryManager;
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if an Inventory Manager can receive an item's weight.\n\x09 *\n\x09 * @param InventoryManager\x09\x09Inventory Manager receiving the item.\n\x09 * @param Item\x09\x09\x09\x09\x09Item to be tested.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Checks if an Inventory Manager can receive an item's weight.\n\n@param InventoryManager              Inventory Manager receiving the item.\n@param Item                                  Item to be tested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventCanAddWeight_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventCanAddWeight_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Weight_eventCanAddWeight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Weight_eventCanAddWeight_Parms), &Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Weight, nullptr, "CanAddWeight", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::ItemFragment_Weight_eventCanAddWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::ItemFragment_Weight_eventCanAddWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Weight::execCanAddWeight)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddWeight(Z_Param_InventoryManager,Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Weight Function CanAddWeight

// Begin Class UItemFragment_Weight Function GetTotalWeight
struct Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics
{
	struct ItemFragment_Weight_eventGetTotalWeight_Parms
	{
		const UNinjaInventoryItem* Item;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the total weight of a given item, considering the stack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Provides the total weight of a given item, considering the stack." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventGetTotalWeight_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventGetTotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Weight, nullptr, "GetTotalWeight", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::ItemFragment_Weight_eventGetTotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::ItemFragment_Weight_eventGetTotalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Weight::execGetTotalWeight)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalWeight(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Weight Function GetTotalWeight

// Begin Class UItemFragment_Weight Function GetWeight
struct Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics
{
	struct ItemFragment_Weight_eventGetWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the individual weight of a given item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Provides the individual weight of a given item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Weight, nullptr, "GetWeight", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::ItemFragment_Weight_eventGetWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::ItemFragment_Weight_eventGetWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Weight_GetWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Weight_GetWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Weight::execGetWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeight();
	P_NATIVE_END;
}
// End Class UItemFragment_Weight Function GetWeight

// Begin Class UItemFragment_Weight Function HandleStackSizeChanged
struct Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics
{
	struct ItemFragment_Weight_eventHandleStackSizeChanged_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to a change in the stack size, so we can update the weight.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Reacts to a change in the stack size, so we can update the weight." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventHandleStackSizeChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Weight_eventHandleStackSizeChanged_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::NewProp_StackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Weight, nullptr, "HandleStackSizeChanged", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::ItemFragment_Weight_eventHandleStackSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::ItemFragment_Weight_eventHandleStackSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Weight::execHandleStackSizeChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStackSizeChanged(Z_Param_Item,Z_Param_StackSize);
	P_NATIVE_END;
}
// End Class UItemFragment_Weight Function HandleStackSizeChanged

// Begin Class UItemFragment_Weight
void UItemFragment_Weight::StaticRegisterNativesUItemFragment_Weight()
{
	UClass* Class = UItemFragment_Weight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAddWeight", &UItemFragment_Weight::execCanAddWeight },
		{ "GetTotalWeight", &UItemFragment_Weight::execGetTotalWeight },
		{ "GetWeight", &UItemFragment_Weight::execGetWeight },
		{ "HandleStackSizeChanged", &UItemFragment_Weight::execHandleStackSizeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Weight);
UClass* Z_Construct_UClass_UItemFragment_Weight_NoRegister()
{
	return UItemFragment_Weight::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Weight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the weight that an item has, so it contributes to encumbrance.\n */" },
		{ "DisplayName", "Weight" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Represents the weight that an item has, so it contributes to encumbrance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeightChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the weight changes, which is usually consequence of changing the stack. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Broadcasts when the weight changes, which is usually consequence of changing the stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * An arbitrary number that expresses the item's weight in either Kilograms or Pounds.\n\x09 *\n\x09 * This is assigned to the adequate Gameplay Effect that affects the Encumbrance, after being\n\x09 * multiplied by the item's Stack Size, which generates the total weight.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "An arbitrary number that expresses the item's weight in either Kilograms or Pounds.\n\nThis is assigned to the adequate Gameplay Effect that affects the Encumbrance, after being\nmultiplied by the item's Stack Size, which generates the total weight." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncumbranceAttribute_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Gameplay Attribute used to store the current encumbrance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Gameplay Attribute used to store the current encumbrance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightLimitAttribute_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Gameplay Attribute used to track the maximum weight allowed by the inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Weight.h" },
		{ "ToolTip", "Gameplay Attribute used to track the maximum weight allowed by the inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeightChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EncumbranceAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightLimitAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Weight_CanAddWeight, "CanAddWeight" }, // 1967841729
		{ &Z_Construct_UFunction_UItemFragment_Weight_GetTotalWeight, "GetTotalWeight" }, // 1309272844
		{ &Z_Construct_UFunction_UItemFragment_Weight_GetWeight, "GetWeight" }, // 4020028057
		{ &Z_Construct_UFunction_UItemFragment_Weight_HandleStackSizeChanged, "HandleStackSizeChanged" }, // 2423171195
		{ &Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature, "ItemWeightChangedSignature__DelegateSignature" }, // 4232935628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Weight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_OnWeightChanged = { "OnWeightChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Weight, OnWeightChanged), Z_Construct_UDelegateFunction_UItemFragment_Weight_ItemWeightChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeightChanged_MetaData), NewProp_OnWeightChanged_MetaData) }; // 4232935628
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Weight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_EncumbranceAttribute = { "EncumbranceAttribute", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Weight, EncumbranceAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncumbranceAttribute_MetaData), NewProp_EncumbranceAttribute_MetaData) }; // 2792951819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_WeightLimitAttribute = { "WeightLimitAttribute", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Weight, WeightLimitAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightLimitAttribute_MetaData), NewProp_WeightLimitAttribute_MetaData) }; // 2792951819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Weight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_OnWeightChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_EncumbranceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Weight_Statics::NewProp_WeightLimitAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Weight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Weight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemFragment_GameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Weight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Weight_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UWeightableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Weight, IWeightableItemInterface), false },  // 4172510744
	{ Z_Construct_UClass_UItemContextValidatorInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Weight, IItemContextValidatorInterface), false },  // 4259915807
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Weight_Statics::ClassParams = {
	&UItemFragment_Weight::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Weight_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Weight_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Weight_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Weight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Weight()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Weight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Weight.OuterSingleton, Z_Construct_UClass_UItemFragment_Weight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Weight.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Weight>()
{
	return UItemFragment_Weight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Weight);
UItemFragment_Weight::~UItemFragment_Weight() {}
// End Class UItemFragment_Weight

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Weight, UItemFragment_Weight::StaticClass, TEXT("UItemFragment_Weight"), &Z_Registration_Info_UClass_UItemFragment_Weight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Weight), 4040430876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_4250281774(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
