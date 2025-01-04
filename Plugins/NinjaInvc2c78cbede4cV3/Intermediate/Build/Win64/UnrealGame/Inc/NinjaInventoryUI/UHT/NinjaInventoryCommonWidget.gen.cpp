// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryCommonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryCommonWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryWindowAwareInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryCommonWidget Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics
{
	struct NinjaInventoryCommonWidget_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager assigned to the Inventory Window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryCommonWidget.h" },
		{ "ToolTip", "Provides the Inventory Manager assigned to the Inventory Window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryCommonWidget_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryCommonWidget, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::NinjaInventoryCommonWidget_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::NinjaInventoryCommonWidget_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryCommonWidget::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryCommonWidget Function GetInventoryManager

// Begin Class UNinjaInventoryCommonWidget Function GetInventoryWindow
struct Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics
{
	struct NinjaInventoryCommonWidget_eventGetInventoryWindow_Parms
	{
		UNinjaInventoryWindowWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Window hosting this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryCommonWidget.h" },
		{ "ToolTip", "Provides the Inventory Window hosting this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryCommonWidget_eventGetInventoryWindow_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryCommonWidget, nullptr, "GetInventoryWindow", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::NinjaInventoryCommonWidget_eventGetInventoryWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::NinjaInventoryCommonWidget_eventGetInventoryWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryCommonWidget::execGetInventoryWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryWindowWidget**)Z_Param__Result=P_THIS->GetInventoryWindow();
	P_NATIVE_END;
}
// End Class UNinjaInventoryCommonWidget Function GetInventoryWindow

// Begin Class UNinjaInventoryCommonWidget Function HandleInventoryWindowSet
static const FName NAME_UNinjaInventoryCommonWidget_HandleInventoryWindowSet = FName(TEXT("HandleInventoryWindowSet"));
void UNinjaInventoryCommonWidget::HandleInventoryWindowSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryCommonWidget_HandleInventoryWindowSet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleInventoryWindowSet_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Common Widget" },
		{ "Comment", "/**\n\x09 * Informs this widget that an Inventory Window has been set. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryCommonWidget.h" },
		{ "ToolTip", "Informs this widget that an Inventory Window has been set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryCommonWidget, nullptr, "HandleInventoryWindowSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryCommonWidget::execHandleInventoryWindowSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInventoryWindowSet_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryCommonWidget Function HandleInventoryWindowSet

// Begin Class UNinjaInventoryCommonWidget
void UNinjaInventoryCommonWidget::StaticRegisterNativesUNinjaInventoryCommonWidget()
{
	UClass* Class = UNinjaInventoryCommonWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryManager", &UNinjaInventoryCommonWidget::execGetInventoryManager },
		{ "GetInventoryWindow", &UNinjaInventoryCommonWidget::execGetInventoryWindow },
		{ "HandleInventoryWindowSet", &UNinjaInventoryCommonWidget::execHandleInventoryWindowSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryCommonWidget);
UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget_NoRegister()
{
	return UNinjaInventoryCommonWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base widget with basic Common UI elements.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryCommonWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryCommonWidget.h" },
		{ "ToolTip", "Base widget with basic Common UI elements." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryManager, "GetInventoryManager" }, // 2608812806
		{ &Z_Construct_UFunction_UNinjaInventoryCommonWidget_GetInventoryWindow, "GetInventoryWindow" }, // 653196412
		{ &Z_Construct_UFunction_UNinjaInventoryCommonWidget_HandleInventoryWindowSet, "HandleInventoryWindowSet" }, // 4146629835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryCommonWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryWindowAwareInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryCommonWidget, IInventoryWindowAwareInterface), false },  // 328116427
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::ClassParams = {
	&UNinjaInventoryCommonWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryCommonWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryCommonWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryCommonWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryCommonWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryCommonWidget>()
{
	return UNinjaInventoryCommonWidget::StaticClass();
}
UNinjaInventoryCommonWidget::UNinjaInventoryCommonWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryCommonWidget);
UNinjaInventoryCommonWidget::~UNinjaInventoryCommonWidget() {}
// End Class UNinjaInventoryCommonWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryCommonWidget, UNinjaInventoryCommonWidget::StaticClass, TEXT("UNinjaInventoryCommonWidget"), &Z_Registration_Info_UClass_UNinjaInventoryCommonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryCommonWidget), 3745591656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonWidget_h_798506559(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
