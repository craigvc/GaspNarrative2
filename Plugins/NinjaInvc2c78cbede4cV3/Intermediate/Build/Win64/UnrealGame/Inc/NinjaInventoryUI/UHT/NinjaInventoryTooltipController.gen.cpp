// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/NinjaInventoryTooltipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryTooltipController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipController();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryTooltipController Function GetTooltipHolder
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics
{
	struct NinjaInventoryTooltipController_eventGetTooltipHolder_Parms
	{
		UNinjaInventoryItemWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the current Item Widget holding the tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Provides the current Item Widget holding the tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventGetTooltipHolder_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "GetTooltipHolder", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::NinjaInventoryTooltipController_eventGetTooltipHolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::NinjaInventoryTooltipController_eventGetTooltipHolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execGetTooltipHolder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemWidget**)Z_Param__Result=P_THIS->GetTooltipHolder();
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function GetTooltipHolder

// Begin Class UNinjaInventoryTooltipController Function Initialize
struct NinjaInventoryTooltipController_eventInitialize_Parms
{
	APlayerController* OwningPlayer;
};
static const FName NAME_UNinjaInventoryTooltipController_Initialize = FName(TEXT("Initialize"));
void UNinjaInventoryTooltipController::Initialize(APlayerController* OwningPlayer)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryTooltipController_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryTooltipController_eventInitialize_Parms Parms;
		Parms.OwningPlayer=OwningPlayer;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Initialize_Implementation(OwningPlayer);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tooltip Controller" },
		{ "Comment", "/**\n\x09 * Initializes the tooltip widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Initializes the tooltip widgets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventInitialize_Parms, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::NewProp_OwningPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::PropPointers), sizeof(NinjaInventoryTooltipController_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryTooltipController_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execInitialize)
{
	P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation(Z_Param_OwningPlayer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function Initialize

// Begin Class UNinjaInventoryTooltipController Function RequestTooltip
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics
{
	struct NinjaInventoryTooltipController_eventRequestTooltip_Parms
	{
		UUserWidget* RequestingWidget;
		UNinjaInventoryTooltipWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Requests the tooltip for the requesting widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NewProp_RequestingWidget = { "RequestingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventRequestTooltip_Parms, RequestingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestingWidget_MetaData), NewProp_RequestingWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventRequestTooltip_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NewProp_RequestingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "RequestTooltip", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NinjaInventoryTooltipController_eventRequestTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::NinjaInventoryTooltipController_eventRequestTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execRequestTooltip)
{
	P_GET_OBJECT(UUserWidget,Z_Param_RequestingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryTooltipWidget**)Z_Param__Result=P_THIS->RequestTooltip(Z_Param_RequestingWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function RequestTooltip

// Begin Class UNinjaInventoryTooltipController Function SafelyUpdateTooltip
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics
{
	struct NinjaInventoryTooltipController_eventSafelyUpdateTooltip_Parms
	{
		UNinjaInventoryTooltipWidget* Tooltip;
		const UNinjaInventoryItemWidget* ItemWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Safely updates a tooltip widget with the provided item widget.\n\x09 *\n\x09 * @param Tooltip\x09\x09\x09Tooltip widget to receive new data.\n\x09 * @param ItemWidget\x09\x09Widget containing data for the tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Safely updates a tooltip widget with the provided item widget.\n\n@param Tooltip                       Tooltip widget to receive new data.\n@param ItemWidget            Widget containing data for the tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventSafelyUpdateTooltip_Parms, Tooltip), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NewProp_ItemWidget = { "ItemWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventSafelyUpdateTooltip_Parms, ItemWidget), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidget_MetaData), NewProp_ItemWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NewProp_ItemWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "SafelyUpdateTooltip", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NinjaInventoryTooltipController_eventSafelyUpdateTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::NinjaInventoryTooltipController_eventSafelyUpdateTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execSafelyUpdateTooltip)
{
	P_GET_OBJECT(UNinjaInventoryTooltipWidget,Z_Param_Tooltip);
	P_GET_OBJECT(UNinjaInventoryItemWidget,Z_Param_ItemWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaInventoryTooltipController::SafelyUpdateTooltip(Z_Param_Tooltip,Z_Param_ItemWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function SafelyUpdateTooltip

// Begin Class UNinjaInventoryTooltipController Function SelectTooltip
struct NinjaInventoryTooltipController_eventSelectTooltip_Parms
{
	UNinjaInventoryItemWidget* ItemWidget;
	UNinjaInventoryTooltipWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryTooltipController_eventSelectTooltip_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaInventoryTooltipController_SelectTooltip = FName(TEXT("SelectTooltip"));
UNinjaInventoryTooltipWidget* UNinjaInventoryTooltipController::SelectTooltip(UNinjaInventoryItemWidget* ItemWidget)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryTooltipController_SelectTooltip);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryTooltipController_eventSelectTooltip_Parms Parms;
		Parms.ItemWidget=ItemWidget;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return SelectTooltip_Implementation(ItemWidget);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tooltip Controller" },
		{ "Comment", "/**\n\x09 * Selects the appropriate tooltip widget for the requesting item widget.\n\x09 * \n\x09 * You can decide on your needs if you need to call super/parent or fully re-implement\n\x09 * this function to perform a completely new logic to select your tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Selects the appropriate tooltip widget for the requesting item widget.\n\nYou can decide on your needs if you need to call super/parent or fully re-implement\nthis function to perform a completely new logic to select your tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::NewProp_ItemWidget = { "ItemWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventSelectTooltip_Parms, ItemWidget), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidget_MetaData), NewProp_ItemWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventSelectTooltip_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::NewProp_ItemWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "SelectTooltip", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::PropPointers), sizeof(NinjaInventoryTooltipController_eventSelectTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryTooltipController_eventSelectTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execSelectTooltip)
{
	P_GET_OBJECT(UNinjaInventoryItemWidget,Z_Param_ItemWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryTooltipWidget**)Z_Param__Result=P_THIS->SelectTooltip_Implementation(Z_Param_ItemWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function SelectTooltip

// Begin Class UNinjaInventoryTooltipController Function Tick
struct NinjaInventoryTooltipController_eventTick_Parms
{
	float DeltaTime;
};
static const FName NAME_UNinjaInventoryTooltipController_Tick = FName(TEXT("Tick"));
void UNinjaInventoryTooltipController::Tick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryTooltipController_Tick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryTooltipController_eventTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Tick_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tooltip Controller" },
		{ "Comment", "/**\n\x09 * Ticks this controller, aligned with the Inventory Window's tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Ticks this controller, aligned with the Inventory Window's tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipController_eventTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipController, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::PropPointers), sizeof(NinjaInventoryTooltipController_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryTooltipController_eventTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipController::execTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipController Function Tick

// Begin Class UNinjaInventoryTooltipController
void UNinjaInventoryTooltipController::StaticRegisterNativesUNinjaInventoryTooltipController()
{
	UClass* Class = UNinjaInventoryTooltipController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTooltipHolder", &UNinjaInventoryTooltipController::execGetTooltipHolder },
		{ "Initialize", &UNinjaInventoryTooltipController::execInitialize },
		{ "RequestTooltip", &UNinjaInventoryTooltipController::execRequestTooltip },
		{ "SafelyUpdateTooltip", &UNinjaInventoryTooltipController::execSafelyUpdateTooltip },
		{ "SelectTooltip", &UNinjaInventoryTooltipController::execSelectTooltip },
		{ "Tick", &UNinjaInventoryTooltipController::execTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryTooltipController);
UClass* Z_Construct_UClass_UNinjaInventoryTooltipController_NoRegister()
{
	return UNinjaInventoryTooltipController::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryTooltipController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Controls the widget instances and which ones are provided for certain scenarios.\n *\n * By default, this controller will provide a classic tooltip for items that are currently\n * being focused in the UI, with an Inventory Item assigned to them.\n *\n * You can extend this component to provide tooltips to other scenarios, such as empty item\n * widgets, representing Equipment Slots, where the Container name should be displayed.\n *\n * Furthermore, this controller uses the Unreal Engine's Widget Tooltip system, but you can\n * also opt out of that and create your own full tooltip system. For that, keep in mind that\n * you have access to the Tick function, routed from the Inventory Window.\n */" },
		{ "IncludePath", "UI/NinjaInventoryTooltipController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Controls the widget instances and which ones are provided for certain scenarios.\n\nBy default, this controller will provide a classic tooltip for items that are currently\nbeing focused in the UI, with an Inventory Item assigned to them.\n\nYou can extend this component to provide tooltips to other scenarios, such as empty item\nwidgets, representing Equipment Slots, where the Container name should be displayed.\n\nFurthermore, this controller uses the Unreal Engine's Widget Tooltip system, but you can\nalso opt out of that and create your own full tooltip system. For that, keep in mind that\nyou have access to the Tick function, routed from the Inventory Window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTooltipWidgetClass_MetaData[] = {
		{ "Category", "Tooltip Controller" },
		{ "Comment", "/** Widget class used for tooltips representing any items. */" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Widget class used for tooltips representing any items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTooltipWidget_MetaData[] = {
		{ "Comment", "/** Reusable widget for items that are being focused. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NinjaInventoryTooltipController.h" },
		{ "ToolTip", "Reusable widget for items that are being focused." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemTooltipWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTooltipWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_GetTooltipHolder, "GetTooltipHolder" }, // 1264444560
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_Initialize, "Initialize" }, // 776041888
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_RequestTooltip, "RequestTooltip" }, // 3119555961
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_SafelyUpdateTooltip, "SafelyUpdateTooltip" }, // 1722750932
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_SelectTooltip, "SelectTooltip" }, // 3400434422
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipController_Tick, "Tick" }, // 3427436860
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryTooltipController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::NewProp_ItemTooltipWidgetClass = { "ItemTooltipWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryTooltipController, ItemTooltipWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTooltipWidgetClass_MetaData), NewProp_ItemTooltipWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::NewProp_ItemTooltipWidget = { "ItemTooltipWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryTooltipController, ItemTooltipWidget), Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTooltipWidget_MetaData), NewProp_ItemTooltipWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::NewProp_ItemTooltipWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::NewProp_ItemTooltipWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::ClassParams = {
	&UNinjaInventoryTooltipController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryTooltipController()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryTooltipController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryTooltipController.OuterSingleton, Z_Construct_UClass_UNinjaInventoryTooltipController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryTooltipController.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryTooltipController>()
{
	return UNinjaInventoryTooltipController::StaticClass();
}
UNinjaInventoryTooltipController::UNinjaInventoryTooltipController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryTooltipController);
UNinjaInventoryTooltipController::~UNinjaInventoryTooltipController() {}
// End Class UNinjaInventoryTooltipController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryTooltipController, UNinjaInventoryTooltipController::StaticClass, TEXT("UNinjaInventoryTooltipController"), &Z_Registration_Info_UClass_UNinjaInventoryTooltipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryTooltipController), 2858901198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_2744630868(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
