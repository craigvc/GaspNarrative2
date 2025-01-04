// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryTooltipWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryTooltipWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryTooltipWidget Function GetItemWidget
struct Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics
{
	struct NinjaInventoryTooltipWidget_eventGetItemWidget_Parms
	{
		const UNinjaInventoryItemWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Item Widget that is using this tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryTooltipWidget.h" },
		{ "ToolTip", "Provides the Item Widget that is using this tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipWidget_eventGetItemWidget_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipWidget, nullptr, "GetItemWidget", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::NinjaInventoryTooltipWidget_eventGetItemWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::NinjaInventoryTooltipWidget_eventGetItemWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipWidget::execGetItemWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItemWidget**)Z_Param__Result=P_THIS->GetItemWidget();
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipWidget Function GetItemWidget

// Begin Class UNinjaInventoryTooltipWidget Function UpdateFromSource
struct NinjaInventoryTooltipWidget_eventUpdateFromSource_Parms
{
	const UNinjaInventoryItemWidget* ItemWidget;
};
static const FName NAME_UNinjaInventoryTooltipWidget_UpdateFromSource = FName(TEXT("UpdateFromSource"));
void UNinjaInventoryTooltipWidget::UpdateFromSource(const UNinjaInventoryItemWidget* ItemWidget)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryTooltipWidget_UpdateFromSource);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryTooltipWidget_eventUpdateFromSource_Parms Parms;
		Parms.ItemWidget=ItemWidget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateFromSource_Implementation(ItemWidget);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tooltip Widget" },
		{ "Comment", "/**\n\x09 * Performs steps to update this tooltip from a source.\n\x09 *\n\x09 * @param ItemWidget\n\x09 *\x09\x09Source widget that is using this tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryTooltipWidget.h" },
		{ "ToolTip", "Performs steps to update this tooltip from a source.\n\n@param ItemWidget\n             Source widget that is using this tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::NewProp_ItemWidget = { "ItemWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipWidget_eventUpdateFromSource_Parms, ItemWidget), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidget_MetaData), NewProp_ItemWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::NewProp_ItemWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipWidget, nullptr, "UpdateFromSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::PropPointers), sizeof(NinjaInventoryTooltipWidget_eventUpdateFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryTooltipWidget_eventUpdateFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipWidget::execUpdateFromSource)
{
	P_GET_OBJECT(UNinjaInventoryItemWidget,Z_Param_ItemWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFromSource_Implementation(Z_Param_ItemWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipWidget Function UpdateFromSource

// Begin Class UNinjaInventoryTooltipWidget Function UpdateTooltip
struct Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics
{
	struct NinjaInventoryTooltipWidget_eventUpdateTooltip_Parms
	{
		const UNinjaInventoryItemWidget* ItemWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Updates this tooltip widget based on the item widget that is using it.\n\x09 * \n\x09 * @param ItemWidget\n\x09 *\x09\x09Source widget that is using this tooltip.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryTooltipWidget.h" },
		{ "ToolTip", "Updates this tooltip widget based on the item widget that is using it.\n\n@param ItemWidget\n             Source widget that is using this tooltip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::NewProp_ItemWidget = { "ItemWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryTooltipWidget_eventUpdateTooltip_Parms, ItemWidget), Z_Construct_UClass_UNinjaInventoryItemWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidget_MetaData), NewProp_ItemWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::NewProp_ItemWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipWidget, nullptr, "UpdateTooltip", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::NinjaInventoryTooltipWidget_eventUpdateTooltip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::NinjaInventoryTooltipWidget_eventUpdateTooltip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipWidget::execUpdateTooltip)
{
	P_GET_OBJECT(UNinjaInventoryItemWidget,Z_Param_ItemWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTooltip(Z_Param_ItemWidget);
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipWidget Function UpdateTooltip

// Begin Class UNinjaInventoryTooltipWidget Function UpdateViewModels
struct Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryTooltipWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryTooltipWidget, nullptr, "UpdateViewModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryTooltipWidget::execUpdateViewModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateViewModels();
	P_NATIVE_END;
}
// End Class UNinjaInventoryTooltipWidget Function UpdateViewModels

// Begin Class UNinjaInventoryTooltipWidget
void UNinjaInventoryTooltipWidget::StaticRegisterNativesUNinjaInventoryTooltipWidget()
{
	UClass* Class = UNinjaInventoryTooltipWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemWidget", &UNinjaInventoryTooltipWidget::execGetItemWidget },
		{ "UpdateFromSource", &UNinjaInventoryTooltipWidget::execUpdateFromSource },
		{ "UpdateTooltip", &UNinjaInventoryTooltipWidget::execUpdateTooltip },
		{ "UpdateViewModels", &UNinjaInventoryTooltipWidget::execUpdateViewModels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryTooltipWidget);
UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget_NoRegister()
{
	return UNinjaInventoryTooltipWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryTooltipWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipWidget_GetItemWidget, "GetItemWidget" }, // 150208277
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateFromSource, "UpdateFromSource" }, // 3791967680
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateTooltip, "UpdateTooltip" }, // 488605654
		{ &Z_Construct_UFunction_UNinjaInventoryTooltipWidget_UpdateViewModels, "UpdateViewModels" }, // 57652717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryTooltipWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::ClassParams = {
	&UNinjaInventoryTooltipWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryTooltipWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryTooltipWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryTooltipWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryTooltipWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryTooltipWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryTooltipWidget>()
{
	return UNinjaInventoryTooltipWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryTooltipWidget);
UNinjaInventoryTooltipWidget::~UNinjaInventoryTooltipWidget() {}
// End Class UNinjaInventoryTooltipWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryTooltipWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryTooltipWidget, UNinjaInventoryTooltipWidget::StaticClass, TEXT("UNinjaInventoryTooltipWidget"), &Z_Registration_Info_UClass_UNinjaInventoryTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryTooltipWidget), 1506323198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryTooltipWidget_h_3424112385(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryTooltipWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryTooltipWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
