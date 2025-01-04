// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryContainerWidget.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainerWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerViewInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryContainerWidget Function HandleContainerAdded
struct Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics
{
	struct NinjaInventoryContainerWidget_eventHandleContainerAdded_Parms
	{
		UNinjaInventoryContainer* NewContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::NewProp_NewContainer = { "NewContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerWidget_eventHandleContainerAdded_Parms, NewContainer), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::NewProp_NewContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerWidget, nullptr, "HandleContainerAdded", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::NinjaInventoryContainerWidget_eventHandleContainerAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::NinjaInventoryContainerWidget_eventHandleContainerAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerWidget::execHandleContainerAdded)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_NewContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleContainerAdded(Z_Param_NewContainer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerWidget Function HandleContainerAdded

// Begin Class UNinjaInventoryContainerWidget Function InitializeViewModels
struct Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Broadcasts the Inventory Manager to all inventory view models. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "Broadcasts the Inventory Manager to all inventory view models." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerWidget, nullptr, "InitializeViewModels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerWidget::execInitializeViewModels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeViewModels();
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerWidget Function InitializeViewModels

// Begin Class UNinjaInventoryContainerWidget Function RefreshItems
struct Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics
{
	struct NinjaInventoryContainerWidget_eventRefreshItems_Parms
	{
		TArray<FNinjaInventoryItemView> Items;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * A viewmodel-friendly function that can set items in the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "A viewmodel-friendly function that can set items in the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNinjaInventoryItemView, METADATA_PARAMS(0, nullptr) }; // 1671698782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerWidget_eventRefreshItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1671698782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerWidget, nullptr, "RefreshItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NinjaInventoryContainerWidget_eventRefreshItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::NinjaInventoryContainerWidget_eventRefreshItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerWidget::execRefreshItems)
{
	P_GET_TARRAY_REF(FNinjaInventoryItemView,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshItems(Z_Param_Out_Items);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerWidget Function RefreshItems

// Begin Class UNinjaInventoryContainerWidget
void UNinjaInventoryContainerWidget::StaticRegisterNativesUNinjaInventoryContainerWidget()
{
	UClass* Class = UNinjaInventoryContainerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleContainerAdded", &UNinjaInventoryContainerWidget::execHandleContainerAdded },
		{ "InitializeViewModels", &UNinjaInventoryContainerWidget::execInitializeViewModels },
		{ "RefreshItems", &UNinjaInventoryContainerWidget::execRefreshItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainerWidget);
UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister()
{
	return UNinjaInventoryContainerWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base widget for any container representation.\n *\n * It's responsible for managing the View Model and receiving events from it.\n * These events are properly broadcast to any actual view added to the named\n * slot available in this widget.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "Base widget for any container representation.\n\nIt's responsible for managing the View Model and receiving events from it.\nThese events are properly broadcast to any actual view added to the named\nslot available in this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "Category", "Inventory Container" },
		{ "Comment", "/** The container represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "The container represented by this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidgetClass_MetaData[] = {
		{ "Category", "Inventory Container" },
		{ "Comment", "/** Widget instantiated to represent an item in this container. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "MustImplement", "/Script/NinjaInventoryUI.InventoryItemViewInterface" },
		{ "ToolTip", "Widget instantiated to represent an item in this container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerViewSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Container" },
		{ "Comment", "/** The Slot containing the actual container view. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "The Slot containing the actual container view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTooltipWidget_MetaData[] = {
		{ "Comment", "/** Reusable tooltip widget that can be assigned to children. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "Reusable tooltip widget that can be assigned to children." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Comment", "/** The container represented by this widget. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerWidget.h" },
		{ "ToolTip", "The container represented by this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerViewSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemTooltipWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryContainerWidget_HandleContainerAdded, "HandleContainerAdded" }, // 697593401
		{ &Z_Construct_UFunction_UNinjaInventoryContainerWidget_InitializeViewModels, "InitializeViewModels" }, // 4074507175
		{ &Z_Construct_UFunction_UNinjaInventoryContainerWidget_RefreshItems, "RefreshItems" }, // 4089552560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerWidget, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ItemWidgetClass = { "ItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerWidget, ItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidgetClass_MetaData), NewProp_ItemWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ContainerViewSlot = { "ContainerViewSlot", nullptr, (EPropertyFlags)0x012408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerWidget, ContainerViewSlot), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerViewSlot_MetaData), NewProp_ContainerViewSlot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ItemTooltipWidget = { "ItemTooltipWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerWidget, ItemTooltipWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTooltipWidget_MetaData), NewProp_ItemTooltipWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerWidget, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ItemWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ContainerViewSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_ItemTooltipWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCommonWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryContainerViewInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryContainerWidget, IInventoryContainerViewInterface), false },  // 1194738476
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::ClassParams = {
	&UNinjaInventoryContainerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainerWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainerWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryContainerWidget>()
{
	return UNinjaInventoryContainerWidget::StaticClass();
}
UNinjaInventoryContainerWidget::UNinjaInventoryContainerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainerWidget);
UNinjaInventoryContainerWidget::~UNinjaInventoryContainerWidget() {}
// End Class UNinjaInventoryContainerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainerWidget, UNinjaInventoryContainerWidget::StaticClass, TEXT("UNinjaInventoryContainerWidget"), &Z_Registration_Info_UClass_UNinjaInventoryContainerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainerWidget), 3979105182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerWidget_h_1309055964(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
