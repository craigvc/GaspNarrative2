// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryWindowWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryWindowWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryWindowWidget Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics
{
	struct NinjaInventoryWindowWidget_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager represented by this window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Provides the Inventory Manager represented by this window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryWindowWidget_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryWindowWidget, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::NinjaInventoryWindowWidget_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::NinjaInventoryWindowWidget_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryWindowWidget::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryWindowWidget Function GetInventoryManager

// Begin Class UNinjaInventoryWindowWidget Function GetTooltipController
struct Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics
{
	struct NinjaInventoryWindowWidget_eventGetTooltipController_Parms
	{
		UNinjaInventoryTooltipController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Tooltip Controller available to this window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Provides the Tooltip Controller available to this window." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryWindowWidget_eventGetTooltipController_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryWindowWidget, nullptr, "GetTooltipController", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::NinjaInventoryWindowWidget_eventGetTooltipController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::NinjaInventoryWindowWidget_eventGetTooltipController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryWindowWidget::execGetTooltipController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryTooltipController**)Z_Param__Result=P_THIS->GetTooltipController();
	P_NATIVE_END;
}
// End Class UNinjaInventoryWindowWidget Function GetTooltipController

// Begin Class UNinjaInventoryWindowWidget Function InitializeInventory
struct Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Initializes the connection with the Inventory Manager backing this Inventory Window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Initializes the connection with the Inventory Manager backing this Inventory Window." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryWindowWidget, nullptr, "InitializeInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryWindowWidget::execInitializeInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInventory();
	P_NATIVE_END;
}
// End Class UNinjaInventoryWindowWidget Function InitializeInventory

// Begin Class UNinjaInventoryWindowWidget Function RequestTooltip
struct Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics
{
	struct NinjaInventoryWindowWidget_eventRequestTooltip_Parms
	{
		UUserWidget* RequestingWidget;
		UNinjaInventoryTooltipWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Requests the tooltip for the requesting widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Requests the tooltip for the requesting widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestingWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NewProp_RequestingWidget = { "RequestingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryWindowWidget_eventRequestTooltip_Parms, RequestingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestingWidget_MetaData), NewProp_RequestingWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryWindowWidget_eventRequestTooltip_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NewProp_RequestingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryWindowWidget, nullptr, "RequestTooltip", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NinjaInventoryWindowWidget_eventRequestTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::NinjaInventoryWindowWidget_eventRequestTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryWindowWidget::execRequestTooltip)
{
	P_GET_OBJECT(UUserWidget,Z_Param_RequestingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryTooltipWidget**)Z_Param__Result=P_THIS->RequestTooltip(Z_Param_RequestingWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryWindowWidget Function RequestTooltip

// Begin Class UNinjaInventoryWindowWidget Function TryConnectToInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Attempts to connect to an Inventory Manager already available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Attempts to connect to an Inventory Manager already available." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryWindowWidget, nullptr, "TryConnectToInventoryManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryWindowWidget::execTryConnectToInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryConnectToInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryWindowWidget Function TryConnectToInventoryManager

// Begin Class UNinjaInventoryWindowWidget
void UNinjaInventoryWindowWidget::StaticRegisterNativesUNinjaInventoryWindowWidget()
{
	UClass* Class = UNinjaInventoryWindowWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryManager", &UNinjaInventoryWindowWidget::execGetInventoryManager },
		{ "GetTooltipController", &UNinjaInventoryWindowWidget::execGetTooltipController },
		{ "InitializeInventory", &UNinjaInventoryWindowWidget::execInitializeInventory },
		{ "RequestTooltip", &UNinjaInventoryWindowWidget::execRequestTooltip },
		{ "TryConnectToInventoryManager", &UNinjaInventoryWindowWidget::execTryConnectToInventoryManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryWindowWidget);
UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister()
{
	return UNinjaInventoryWindowWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A root widget for the Inventory view.\n *\n * It connects to the Inventory and Equipment system, so it will react to their events\n * and potentially forward such events to other widgets slotted into this one.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "A root widget for the Inventory view.\n\nIt connects to the Inventory and Equipment system, so it will react to their events\nand potentially forward such events to other widgets slotted into this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipControllerClass_MetaData[] = {
		{ "Category", "Inventory Window" },
		{ "Comment", "/**\n\x09 * Class that will manage tooltips for Inventory Items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "Class that will manage tooltips for Inventory Items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManagerPoolInterval_MetaData[] = {
		{ "Category", "Inventory Window" },
		{ "Comment", "/**\n\x09 * How fast the widget will try to retrieve the Inventory Manager Component from the owner.\n\x09 * This only happens during the Widget Initialization, when the Inventory must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
		{ "ToolTip", "How fast the widget will try to retrieve the Inventory Manager Component from the owner.\nThis only happens during the Widget Initialization, when the Inventory must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TooltipController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManagerAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryWindowWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipControllerClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryManagerPoolInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TooltipController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManagerAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetInventoryManager, "GetInventoryManager" }, // 2206199877
		{ &Z_Construct_UFunction_UNinjaInventoryWindowWidget_GetTooltipController, "GetTooltipController" }, // 3396171051
		{ &Z_Construct_UFunction_UNinjaInventoryWindowWidget_InitializeInventory, "InitializeInventory" }, // 3219434839
		{ &Z_Construct_UFunction_UNinjaInventoryWindowWidget_RequestTooltip, "RequestTooltip" }, // 772507849
		{ &Z_Construct_UFunction_UNinjaInventoryWindowWidget_TryConnectToInventoryManager, "TryConnectToInventoryManager" }, // 1114051780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryWindowWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryWindowWidget, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_TooltipControllerClass = { "TooltipControllerClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryWindowWidget, TooltipControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipControllerClass_MetaData), NewProp_TooltipControllerClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManagerPoolInterval = { "InventoryManagerPoolInterval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryWindowWidget, InventoryManagerPoolInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManagerPoolInterval_MetaData), NewProp_InventoryManagerPoolInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_TooltipController = { "TooltipController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryWindowWidget, TooltipController), Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TooltipController_MetaData), NewProp_TooltipController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManagerAction = { "InventoryManagerAction", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryWindowWidget, InventoryManagerAction), Z_Construct_UClass_UNinjaInventoryAction_WaitForInventorySystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManagerAction_MetaData), NewProp_InventoryManagerAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_TooltipControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManagerPoolInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_TooltipController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::NewProp_InventoryManagerAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::ClassParams = {
	&UNinjaInventoryWindowWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryWindowWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryWindowWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryWindowWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryWindowWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryWindowWidget>()
{
	return UNinjaInventoryWindowWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryWindowWidget);
UNinjaInventoryWindowWidget::~UNinjaInventoryWindowWidget() {}
// End Class UNinjaInventoryWindowWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryWindowWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryWindowWidget, UNinjaInventoryWindowWidget::StaticClass, TEXT("UNinjaInventoryWindowWidget"), &Z_Registration_Info_UClass_UNinjaInventoryWindowWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryWindowWidget), 2935073366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryWindowWidget_h_3078263366(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryWindowWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryWindowWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
