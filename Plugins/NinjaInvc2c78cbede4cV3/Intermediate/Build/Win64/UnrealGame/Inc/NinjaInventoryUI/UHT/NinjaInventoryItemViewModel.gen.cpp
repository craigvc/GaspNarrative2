// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/NinjaInventoryItemViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemViewModel() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryItemViewModel Function BindToItem
struct NinjaInventoryItemViewModel_eventBindToItem_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemViewModel_BindToItem = FName(TEXT("BindToItem"));
void UNinjaInventoryItemViewModel::BindToItem(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemViewModel_BindToItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemViewModel_eventBindToItem_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BindToItem_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/**\n\x09 * Allows View Models to bind to delegates from an item and/or its fragments. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Allows View Models to bind to delegates from an item and/or its fragments." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventBindToItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "BindToItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::PropPointers), sizeof(NinjaInventoryItemViewModel_eventBindToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemViewModel_eventBindToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execBindToItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function BindToItem

// Begin Class UNinjaInventoryItemViewModel Function GetItem
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics
{
	struct NinjaInventoryItemViewModel_eventGetItem_Parms
	{
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Provides the current item set to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Provides the current item set to this view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::NinjaInventoryItemViewModel_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::NinjaInventoryItemViewModel_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function GetItem

// Begin Class UNinjaInventoryItemViewModel Function HandleItemAdded
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics
{
	struct NinjaInventoryItemViewModel_eventHandleItemAdded_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventHandleItemAdded_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "HandleItemAdded", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::NinjaInventoryItemViewModel_eventHandleItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::NinjaInventoryItemViewModel_eventHandleItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execHandleItemAdded)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemAdded(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function HandleItemAdded

// Begin Class UNinjaInventoryItemViewModel Function HandleItemRemoved
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics
{
	struct NinjaInventoryItemViewModel_eventHandleItemRemoved_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventHandleItemRemoved_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "HandleItemRemoved", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::NinjaInventoryItemViewModel_eventHandleItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::NinjaInventoryItemViewModel_eventHandleItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execHandleItemRemoved)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemRemoved(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function HandleItemRemoved

// Begin Class UNinjaInventoryItemViewModel Function IsSameItem
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics
{
	struct NinjaInventoryItemViewModel_eventIsSameItem_Parms
	{
		const UNinjaInventoryItem* OtherItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Checks if the provided item matches the one assigned to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Checks if the provided item matches the one assigned to this view model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_OtherItem = { "OtherItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventIsSameItem_Parms, OtherItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherItem_MetaData), NewProp_OtherItem_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemViewModel_eventIsSameItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemViewModel_eventIsSameItem_Parms), &Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_OtherItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "IsSameItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NinjaInventoryItemViewModel_eventIsSameItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::NinjaInventoryItemViewModel_eventIsSameItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execIsSameItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_OtherItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSameItem(Z_Param_OtherItem);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function IsSameItem

// Begin Class UNinjaInventoryItemViewModel Function SetItem
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics
{
	struct NinjaInventoryItemViewModel_eventSetItem_Parms
	{
		UNinjaInventoryItem* NewItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Sets or clear the item assigned to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Sets or clear the item assigned to this view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventSetItem_Parms, NewItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::NinjaInventoryItemViewModel_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::NinjaInventoryItemViewModel_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execSetItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_NewItem);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function SetItem

// Begin Class UNinjaInventoryItemViewModel Function UnbindFromItem
struct NinjaInventoryItemViewModel_eventUnbindFromItem_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemViewModel_UnbindFromItem = FName(TEXT("UnbindFromItem"));
void UNinjaInventoryItemViewModel::UnbindFromItem(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemViewModel_UnbindFromItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemViewModel_eventUnbindFromItem_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UnbindFromItem_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/**\n\x09 * Allows view Models to unbind from delegates from an Item and/or its fragments. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Allows view Models to unbind from delegates from an Item and/or its fragments." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemViewModel_eventUnbindFromItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemViewModel, nullptr, "UnbindFromItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::PropPointers), sizeof(NinjaInventoryItemViewModel_eventUnbindFromItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemViewModel_eventUnbindFromItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemViewModel::execUnbindFromItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemViewModel Function UnbindFromItem

// Begin Class UNinjaInventoryItemViewModel
void UNinjaInventoryItemViewModel::StaticRegisterNativesUNinjaInventoryItemViewModel()
{
	UClass* Class = UNinjaInventoryItemViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToItem", &UNinjaInventoryItemViewModel::execBindToItem },
		{ "GetItem", &UNinjaInventoryItemViewModel::execGetItem },
		{ "HandleItemAdded", &UNinjaInventoryItemViewModel::execHandleItemAdded },
		{ "HandleItemRemoved", &UNinjaInventoryItemViewModel::execHandleItemRemoved },
		{ "IsSameItem", &UNinjaInventoryItemViewModel::execIsSameItem },
		{ "SetItem", &UNinjaInventoryItemViewModel::execSetItem },
		{ "UnbindFromItem", &UNinjaInventoryItemViewModel::execUnbindFromItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemViewModel);
UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel_NoRegister()
{
	return UNinjaInventoryItemViewModel::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for view models exposing aspects of items. \n */" },
		{ "IncludePath", "UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Base class for view models exposing aspects of items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasItem_MetaData[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/** Informs if this view model has an item assigned to it. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemViewModel.h" },
		{ "ToolTip", "Informs if this view model has an item assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_BindToItem, "BindToItem" }, // 4200003856
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_GetItem, "GetItem" }, // 4071393604
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemAdded, "HandleItemAdded" }, // 2639714729
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_HandleItemRemoved, "HandleItemRemoved" }, // 3207970389
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_IsSameItem, "IsSameItem" }, // 3209539309
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_SetItem, "SetItem" }, // 1135300520
		{ &Z_Construct_UFunction_UNinjaInventoryItemViewModel_UnbindFromItem, "UnbindFromItem" }, // 3440238719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::NewProp_bHasItem_SetBit(void* Obj)
{
	((UNinjaInventoryItemViewModel*)Obj)->bHasItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryItemViewModel), &Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasItem_MetaData), NewProp_bHasItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::NewProp_bHasItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::ClassParams = {
	&UNinjaInventoryItemViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemViewModel.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemViewModel.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryItemViewModel>()
{
	return UNinjaInventoryItemViewModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemViewModel);
UNinjaInventoryItemViewModel::~UNinjaInventoryItemViewModel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UNinjaInventoryItemViewModel, bHasItem)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UNinjaInventoryItemViewModel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UNinjaInventoryItemViewModel, bHasItem)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UNinjaInventoryItemViewModel);
// End Class UNinjaInventoryItemViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemViewModel, UNinjaInventoryItemViewModel::StaticClass, TEXT("UNinjaInventoryItemViewModel"), &Z_Registration_Info_UClass_UNinjaInventoryItemViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemViewModel), 3040607938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_1601783854(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
