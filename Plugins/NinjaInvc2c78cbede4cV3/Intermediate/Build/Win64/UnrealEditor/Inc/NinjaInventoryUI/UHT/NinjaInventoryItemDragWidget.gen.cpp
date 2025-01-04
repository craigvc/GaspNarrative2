// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryItemDragWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemDragWidget() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLoot_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDragWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDragWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryItemDragWidget Function DisplayIncompatibleDragOperation
struct NinjaInventoryItemDragWidget_eventDisplayIncompatibleDragOperation_Parms
{
	UDragDropOperation* DragOperation;
};
static const FName NAME_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation = FName(TEXT("DisplayIncompatibleDragOperation"));
void UNinjaInventoryItemDragWidget::DisplayIncompatibleDragOperation(UDragDropOperation* DragOperation)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemDragWidget_eventDisplayIncompatibleDragOperation_Parms Parms;
		Parms.DragOperation=DragOperation;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DisplayIncompatibleDragOperation_Implementation(DragOperation);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Drag Widget" },
		{ "Comment", "/**\n\x09 * Allows this widget to inform about an invalid drag operation.\n\x09 *\n\x09 * @param DragOperation\x09\x09""Details about the Drag operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Allows this widget to inform about an invalid drag operation.\n\n@param DragOperation         Details about the Drag operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventDisplayIncompatibleDragOperation_Parms, DragOperation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::NewProp_DragOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "DisplayIncompatibleDragOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::PropPointers), sizeof(NinjaInventoryItemDragWidget_eventDisplayIncompatibleDragOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemDragWidget_eventDisplayIncompatibleDragOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execDisplayIncompatibleDragOperation)
{
	P_GET_OBJECT(UDragDropOperation,Z_Param_DragOperation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayIncompatibleDragOperation_Implementation(Z_Param_DragOperation);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function DisplayIncompatibleDragOperation

// Begin Class UNinjaInventoryItemDragWidget Function GetItem
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics
{
	struct NinjaInventoryItemDragWidget_eventGetItem_Parms
	{
		UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the item represented by this drag widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Provides the item represented by this drag widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::NinjaInventoryItemDragWidget_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::NinjaInventoryItemDragWidget_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function GetItem

// Begin Class UNinjaInventoryItemDragWidget Function GetLoot
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics
{
	struct NinjaInventoryItemDragWidget_eventGetLoot_Parms
	{
		UNinjaInventoryLoot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the loot represented by this drag widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Provides the loot represented by this drag widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventGetLoot_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "GetLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::NinjaInventoryItemDragWidget_eventGetLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::NinjaInventoryItemDragWidget_eventGetLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execGetLoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryLoot**)Z_Param__Result=P_THIS->GetLoot();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function GetLoot

// Begin Class UNinjaInventoryItemDragWidget Function HandleItemSet
static const FName NAME_UNinjaInventoryItemDragWidget_HandleItemSet = FName(TEXT("HandleItemSet"));
void UNinjaInventoryItemDragWidget::HandleItemSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDragWidget_HandleItemSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleItemSet_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Drag Widget" },
		{ "Comment", "/**\n\x09 * Notifies an item that has been set to this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Notifies an item that has been set to this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "HandleItemSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execHandleItemSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemSet_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function HandleItemSet

// Begin Class UNinjaInventoryItemDragWidget Function HandleLootSet
static const FName NAME_UNinjaInventoryItemDragWidget_HandleLootSet = FName(TEXT("HandleLootSet"));
void UNinjaInventoryItemDragWidget::HandleLootSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDragWidget_HandleLootSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleLootSet_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Drag Widget" },
		{ "Comment", "/**\n\x09 * Notifies a loot that has been set to this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Notifies a loot that has been set to this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "HandleLootSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execHandleLootSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLootSet_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function HandleLootSet

// Begin Class UNinjaInventoryItemDragWidget Function RevertIncompatibleDragOperation
struct NinjaInventoryItemDragWidget_eventRevertIncompatibleDragOperation_Parms
{
	UDragDropOperation* DragOperation;
};
static const FName NAME_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation = FName(TEXT("RevertIncompatibleDragOperation"));
void UNinjaInventoryItemDragWidget::RevertIncompatibleDragOperation(UDragDropOperation* DragOperation)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemDragWidget_eventRevertIncompatibleDragOperation_Parms Parms;
		Parms.DragOperation=DragOperation;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RevertIncompatibleDragOperation_Implementation(DragOperation);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Drag Widget" },
		{ "Comment", "/**\n\x09 * Allows this widget to inform about an invalid drag operation.\n\x09 *\n\x09 * @param DragOperation\x09\x09""Details about the Drag operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Allows this widget to inform about an invalid drag operation.\n\n@param DragOperation         Details about the Drag operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventRevertIncompatibleDragOperation_Parms, DragOperation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::NewProp_DragOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "RevertIncompatibleDragOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::PropPointers), sizeof(NinjaInventoryItemDragWidget_eventRevertIncompatibleDragOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemDragWidget_eventRevertIncompatibleDragOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execRevertIncompatibleDragOperation)
{
	P_GET_OBJECT(UDragDropOperation,Z_Param_DragOperation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertIncompatibleDragOperation_Implementation(Z_Param_DragOperation);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function RevertIncompatibleDragOperation

// Begin Class UNinjaInventoryItemDragWidget Function SetItem
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics
{
	struct NinjaInventoryItemDragWidget_eventSetItem_Parms
	{
		UNinjaInventoryItem* NewItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Sets the item represented by this drag widget.\n\x09 *\n\x09 * It will allow the widget to use the item internally and also broadcast the item\n\x09 * to View Models that have bindings with this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Sets the item represented by this drag widget.\n\nIt will allow the widget to use the item internally and also broadcast the item\nto View Models that have bindings with this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventSetItem_Parms, NewItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::NinjaInventoryItemDragWidget_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::NinjaInventoryItemDragWidget_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execSetItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_NewItem);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function SetItem

// Begin Class UNinjaInventoryItemDragWidget Function SetLoot
struct Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics
{
	struct NinjaInventoryItemDragWidget_eventSetLoot_Parms
	{
		UNinjaInventoryLoot* NewILoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Sets the loot represented by this drag widget.\n\x09 *\n\x09 * It will allow the widget to use the loot's data internally and also broadcast the item\n\x09 * to View Models that have bindings with this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Sets the loot represented by this drag widget.\n\nIt will allow the widget to use the loot's data internally and also broadcast the item\nto View Models that have bindings with this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewILoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::NewProp_NewILoot = { "NewILoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDragWidget_eventSetLoot_Parms, NewILoot), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::NewProp_NewILoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDragWidget, nullptr, "SetLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::NinjaInventoryItemDragWidget_eventSetLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::NinjaInventoryItemDragWidget_eventSetLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDragWidget::execSetLoot)
{
	P_GET_OBJECT(UNinjaInventoryLoot,Z_Param_NewILoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLoot(Z_Param_NewILoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDragWidget Function SetLoot

// Begin Class UNinjaInventoryItemDragWidget
void UNinjaInventoryItemDragWidget::StaticRegisterNativesUNinjaInventoryItemDragWidget()
{
	UClass* Class = UNinjaInventoryItemDragWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisplayIncompatibleDragOperation", &UNinjaInventoryItemDragWidget::execDisplayIncompatibleDragOperation },
		{ "GetItem", &UNinjaInventoryItemDragWidget::execGetItem },
		{ "GetLoot", &UNinjaInventoryItemDragWidget::execGetLoot },
		{ "HandleItemSet", &UNinjaInventoryItemDragWidget::execHandleItemSet },
		{ "HandleLootSet", &UNinjaInventoryItemDragWidget::execHandleLootSet },
		{ "RevertIncompatibleDragOperation", &UNinjaInventoryItemDragWidget::execRevertIncompatibleDragOperation },
		{ "SetItem", &UNinjaInventoryItemDragWidget::execSetItem },
		{ "SetLoot", &UNinjaInventoryItemDragWidget::execSetLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemDragWidget);
UClass* Z_Construct_UClass_UNinjaInventoryItemDragWidget_NoRegister()
{
	return UNinjaInventoryItemDragWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Comment", "/** Item represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Item represented by this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loot_MetaData[] = {
		{ "Comment", "/** Item represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryItemDragWidget.h" },
		{ "ToolTip", "Item represented by this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Loot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_DisplayIncompatibleDragOperation, "DisplayIncompatibleDragOperation" }, // 2784469558
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetItem, "GetItem" }, // 2426325291
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_GetLoot, "GetLoot" }, // 4211180822
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleItemSet, "HandleItemSet" }, // 2676642376
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_HandleLootSet, "HandleLootSet" }, // 2158337848
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_RevertIncompatibleDragOperation, "RevertIncompatibleDragOperation" }, // 3926444326
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetItem, "SetItem" }, // 3533832476
		{ &Z_Construct_UFunction_UNinjaInventoryItemDragWidget_SetLoot, "SetLoot" }, // 1117188568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemDragWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDragWidget, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::NewProp_Loot = { "Loot", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDragWidget, Loot), Z_Construct_UClass_UNinjaInventoryLoot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loot_MetaData), NewProp_Loot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::NewProp_Loot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::ClassParams = {
	&UNinjaInventoryItemDragWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemDragWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemDragWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemDragWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemDragWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemDragWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryItemDragWidget>()
{
	return UNinjaInventoryItemDragWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemDragWidget);
UNinjaInventoryItemDragWidget::~UNinjaInventoryItemDragWidget() {}
// End Class UNinjaInventoryItemDragWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemDragWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemDragWidget, UNinjaInventoryItemDragWidget::StaticClass, TEXT("UNinjaInventoryItemDragWidget"), &Z_Registration_Info_UClass_UNinjaInventoryItemDragWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemDragWidget), 1617275410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemDragWidget_h_2058774620(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemDragWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemDragWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
