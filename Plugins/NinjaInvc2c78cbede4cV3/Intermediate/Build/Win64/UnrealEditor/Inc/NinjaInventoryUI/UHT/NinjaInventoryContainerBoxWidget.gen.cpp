// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainerBoxWidget() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerBoxWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UMG_API UClass* Z_Construct_UClass_UWrapBox();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryContainerBoxWidget Function AddOrUpdateItem
struct NinjaInventoryContainerBoxWidget_eventAddOrUpdateItem_Parms
{
	FNinjaInventoryItemView ItemView;
};
static const FName NAME_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem = FName(TEXT("AddOrUpdateItem"));
void UNinjaInventoryContainerBoxWidget::AddOrUpdateItem(FNinjaInventoryItemView const& ItemView)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryContainerBoxWidget_eventAddOrUpdateItem_Parms Parms;
		Parms.ItemView=ItemView;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AddOrUpdateItem_Implementation(ItemView);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container Box" },
		{ "Comment", "/**\n\x09 * Adds an item to this container at the desired position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
		{ "ToolTip", "Adds an item to this container at the desired position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemView_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::NewProp_ItemView = { "ItemView", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerBoxWidget_eventAddOrUpdateItem_Parms, ItemView), Z_Construct_UScriptStruct_FNinjaInventoryItemView, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemView_MetaData), NewProp_ItemView_MetaData) }; // 1671698782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::NewProp_ItemView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerBoxWidget, nullptr, "AddOrUpdateItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::PropPointers), sizeof(NinjaInventoryContainerBoxWidget_eventAddOrUpdateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryContainerBoxWidget_eventAddOrUpdateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerBoxWidget::execAddOrUpdateItem)
{
	P_GET_STRUCT_REF(FNinjaInventoryItemView,Z_Param_Out_ItemView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateItem_Implementation(Z_Param_Out_ItemView);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerBoxWidget Function AddOrUpdateItem

// Begin Class UNinjaInventoryContainerBoxWidget
void UNinjaInventoryContainerBoxWidget::StaticRegisterNativesUNinjaInventoryContainerBoxWidget()
{
	UClass* Class = UNinjaInventoryContainerBoxWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateItem", &UNinjaInventoryContainerBoxWidget::execAddOrUpdateItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainerBoxWidget);
UClass* Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_NoRegister()
{
	return UNinjaInventoryContainerBoxWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n * Represents a container, in a wrap-box format.\n */" },
		{ "DisplayName", "Inventory Container Box" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
		{ "ToolTip", "Represents a container, in a wrap-box format." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySlots_MetaData[] = {
		{ "Category", "Inventory Container Box" },
		{ "Comment", "/** Determines if the container renders empty slots or only slots occupied by items. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
		{ "ToolTip", "Determines if the container renders empty slots or only slots occupied by items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContainerView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBoxWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFillEmptySlots_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentContainerView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryContainerBoxWidget_AddOrUpdateItem, "AddOrUpdateItem" }, // 4254524977
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainerBoxWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_bFillEmptySlots_SetBit(void* Obj)
{
	((UNinjaInventoryContainerBoxWidget*)Obj)->bFillEmptySlots = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_bFillEmptySlots = { "bFillEmptySlots", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryContainerBoxWidget), &Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_bFillEmptySlots_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillEmptySlots_MetaData), NewProp_bFillEmptySlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_CurrentContainerView = { "CurrentContainerView", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerBoxWidget, CurrentContainerView), Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentContainerView_MetaData), NewProp_CurrentContainerView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerBoxWidget, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_bFillEmptySlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_CurrentContainerView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWrapBox,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryContainerBoxWidget, IInventoryContainerSlotInterface), false },  // 2513712811
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::ClassParams = {
	&UNinjaInventoryContainerBoxWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainerBoxWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainerBoxWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainerBoxWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainerBoxWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainerBoxWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryContainerBoxWidget>()
{
	return UNinjaInventoryContainerBoxWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainerBoxWidget);
UNinjaInventoryContainerBoxWidget::~UNinjaInventoryContainerBoxWidget() {}
// End Class UNinjaInventoryContainerBoxWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBoxWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainerBoxWidget, UNinjaInventoryContainerBoxWidget::StaticClass, TEXT("UNinjaInventoryContainerBoxWidget"), &Z_Registration_Info_UClass_UNinjaInventoryContainerBoxWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainerBoxWidget), 3715011435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBoxWidget_h_292220366(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBoxWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBoxWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
