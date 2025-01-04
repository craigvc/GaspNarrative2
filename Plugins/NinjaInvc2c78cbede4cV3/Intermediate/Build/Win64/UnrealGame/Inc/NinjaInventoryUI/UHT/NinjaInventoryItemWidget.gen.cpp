// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryItemViewInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryLootViewInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDragWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryItemWidget Function CreateDragWidget
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics
{
	struct NinjaInventoryItemWidget_eventCreateDragWidget_Parms
	{
		UNinjaInventoryItemDragWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Creates the Drag Widget used by this item representation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Creates the Drag Widget used by this item representation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemWidget_eventCreateDragWidget_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemDragWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "CreateDragWidget", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::NinjaInventoryItemWidget_eventCreateDragWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::NinjaInventoryItemWidget_eventCreateDragWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execCreateDragWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemDragWidget**)Z_Param__Result=P_THIS->CreateDragWidget();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function CreateDragWidget

// Begin Class UNinjaInventoryItemWidget Function GetTooltipWidget
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics
{
	struct NinjaInventoryItemWidget_eventGetTooltipWidget_Parms
	{
		UNinjaInventoryTooltipWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Gets the appropriate tooltip widget from the Inventory Window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Gets the appropriate tooltip widget from the Inventory Window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemWidget_eventGetTooltipWidget_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "GetTooltipWidget", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::NinjaInventoryItemWidget_eventGetTooltipWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::NinjaInventoryItemWidget_eventGetTooltipWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execGetTooltipWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryTooltipWidget**)Z_Param__Result=P_THIS->GetTooltipWidget();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function GetTooltipWidget

// Begin Class UNinjaInventoryItemWidget Function IsSupportedDragOperation
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics
{
	struct NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms
	{
		const UNinjaInventoryDragDropOperation* InOperation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Checks if a given drag operation is compatible between two item slots.\n\x09 *\n\x09 * By default, compatibility is determined by the Container receiving the Item Instance.\n\x09 * This happens on the TARGET ITEM WIDGET, meaning it has to access a valid parent container\n\x09 * that can execute the compatibility check against the SOURCE ITEM WIDGET's instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Checks if a given drag operation is compatible between two item slots.\n\nBy default, compatibility is determined by the Container receiving the Item Instance.\nThis happens on the TARGET ITEM WIDGET, meaning it has to access a valid parent container\nthat can execute the compatibility check against the SOURCE ITEM WIDGET's instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOperation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOperation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_InOperation = { "InOperation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms, InOperation), Z_Construct_UClass_UNinjaInventoryDragDropOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOperation_MetaData), NewProp_InOperation_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms), &Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_InOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "IsSupportedDragOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::NinjaInventoryItemWidget_eventIsSupportedDragOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execIsSupportedDragOperation)
{
	P_GET_OBJECT(UNinjaInventoryDragDropOperation,Z_Param_InOperation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSupportedDragOperation(Z_Param_InOperation);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function IsSupportedDragOperation

// Begin Class UNinjaInventoryItemWidget Function RefreshFocusFromDropOperation
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Refreshes focus when an item or loot as set, after a drop operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Refreshes focus when an item or loot as set, after a drop operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "RefreshFocusFromDropOperation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execRefreshFocusFromDropOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFocusFromDropOperation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function RefreshFocusFromDropOperation

// Begin Class UNinjaInventoryItemWidget Function RefreshItemTooltip
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Refreshes the tooltips used by this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Refreshes the tooltips used by this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "RefreshItemTooltip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execRefreshItemTooltip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshItemTooltip();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function RefreshItemTooltip

// Begin Class UNinjaInventoryItemWidget Function RefreshItemViewModels
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Refreshes the item view models, checking if the view extension is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Refreshes the item view models, checking if the view extension is valid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "RefreshItemViewModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execRefreshItemViewModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshItemViewModels();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function RefreshItemViewModels

// Begin Class UNinjaInventoryItemWidget Function RefreshLootViewModels
struct Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Refreshes the loot view models, checking if the view extension is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Refreshes the loot view models, checking if the view extension is valid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemWidget, nullptr, "RefreshLootViewModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemWidget::execRefreshLootViewModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshLootViewModels();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemWidget Function RefreshLootViewModels

// Begin Class UNinjaInventoryItemWidget
void UNinjaInventoryItemWidget::StaticRegisterNativesUNinjaInventoryItemWidget()
{
	UClass* Class = UNinjaInventoryItemWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDragWidget", &UNinjaInventoryItemWidget::execCreateDragWidget },
		{ "GetTooltipWidget", &UNinjaInventoryItemWidget::execGetTooltipWidget },
		{ "IsSupportedDragOperation", &UNinjaInventoryItemWidget::execIsSupportedDragOperation },
		{ "RefreshFocusFromDropOperation", &UNinjaInventoryItemWidget::execRefreshFocusFromDropOperation },
		{ "RefreshItemTooltip", &UNinjaInventoryItemWidget::execRefreshItemTooltip },
		{ "RefreshItemViewModels", &UNinjaInventoryItemWidget::execRefreshItemViewModels },
		{ "RefreshLootViewModels", &UNinjaInventoryItemWidget::execRefreshLootViewModels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemWidget);
UClass* Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister()
{
	return UNinjaInventoryItemWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an Inventory Item Instance in the User Interface.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Represents an Inventory Item Instance in the User Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDragOperation_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "Comment", "/** Determines if this widget supports drag and drop operations. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Determines if this widget supports drag and drop operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragWidgetClass_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "Comment", "/** Widget class used for the drag operation. */" },
		{ "EditCondition", "bSupportsDragOperation" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Widget class used for the drag operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Comment", "/** The item instance represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "The item instance represented by this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Comment", "/** The item data represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The item data represented by this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Comment", "/** Container holding this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Container holding this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loot_MetaData[] = {
		{ "Comment", "/** Loot represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Loot represented by this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTooltipWidget_MetaData[] = {
		{ "Comment", "/** Current tooltip widget for this item. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemWidget.h" },
		{ "ToolTip", "Current tooltip widget for this item." },
	};
#endif // WITH_METADATA
	static void NewProp_bSupportsDragOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDragOperation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Loot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTooltipWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_CreateDragWidget, "CreateDragWidget" }, // 2949266745
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_GetTooltipWidget, "GetTooltipWidget" }, // 2277196382
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_IsSupportedDragOperation, "IsSupportedDragOperation" }, // 4007974550
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshFocusFromDropOperation, "RefreshFocusFromDropOperation" }, // 4070742685
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemTooltip, "RefreshItemTooltip" }, // 3512093085
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshItemViewModels, "RefreshItemViewModels" }, // 1062774903
		{ &Z_Construct_UFunction_UNinjaInventoryItemWidget_RefreshLootViewModels, "RefreshLootViewModels" }, // 1477782309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_bSupportsDragOperation_SetBit(void* Obj)
{
	((UNinjaInventoryItemWidget*)Obj)->bSupportsDragOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_bSupportsDragOperation = { "bSupportsDragOperation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryItemWidget), &Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_bSupportsDragOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsDragOperation_MetaData), NewProp_bSupportsDragOperation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_DragWidgetClass = { "DragWidgetClass", nullptr, (EPropertyFlags)0x0024080002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, DragWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemDragWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragWidgetClass_MetaData), NewProp_DragWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Loot = { "Loot", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, Loot), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loot_MetaData), NewProp_Loot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_ItemTooltipWidget = { "ItemTooltipWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemWidget, ItemTooltipWidget), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTooltipWidget_MetaData), NewProp_ItemTooltipWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_bSupportsDragOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_DragWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_Loot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::NewProp_ItemTooltipWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCommonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItemWidget, IUserObjectListEntry), false },  // 228470651
	{ Z_Construct_UClass_UInventoryItemViewInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItemWidget, IInventoryItemViewInterface), false },  // 2460705847
	{ Z_Construct_UClass_UInventoryLootViewInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItemWidget, IInventoryLootViewInterface), false },  // 3675546065
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::ClassParams = {
	&UNinjaInventoryItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryItemWidget>()
{
	return UNinjaInventoryItemWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemWidget);
UNinjaInventoryItemWidget::~UNinjaInventoryItemWidget() {}
// End Class UNinjaInventoryItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemWidget, UNinjaInventoryItemWidget::StaticClass, TEXT("UNinjaInventoryItemWidget"), &Z_Registration_Info_UClass_UNinjaInventoryItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemWidget), 2417675917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_674076100(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
