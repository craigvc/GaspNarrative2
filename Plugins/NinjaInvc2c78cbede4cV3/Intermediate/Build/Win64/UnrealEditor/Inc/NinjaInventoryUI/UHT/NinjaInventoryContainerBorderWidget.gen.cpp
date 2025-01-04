// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryContainerBorderWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainerBorderWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerBorderWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryContainerBorderWidget
void UNinjaInventoryContainerBorderWidget::StaticRegisterNativesUNinjaInventoryContainerBorderWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainerBorderWidget);
UClass* Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_NoRegister()
{
	return UNinjaInventoryContainerBorderWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n * A border used to represent a container meant to display Equipment Instances.\n * \n * Since Equipment Containers are set to have one slot, this widget is configured to only support\n * a single element (bCanHaveMultipleChildren = false), meaning either a pre-defined widget added\n * in design-time or a dynamic widget, instantiated in code.\n *\n * Since equipment pieces will usually occupy specific areas of the inventory UI, and also commonly\n * display something like \"empty icons\", this border is designed to support already having a child widget.\n *\n * However, if you design your UI that way, then MAKE SURE that your child widget implements the Inventory\n * Item View Interface and that it properly switches between empty and occupied states, defined when\n * the Inventory Item instance is null or set, respectively (Has Inventory Item function).\n */" },
		{ "DisplayName", "Inventory Container Border" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryContainerBorderWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBorderWidget.h" },
		{ "ToolTip", "A border used to represent a container meant to display Equipment Instances.\n\nSince Equipment Containers are set to have one slot, this widget is configured to only support\na single element (bCanHaveMultipleChildren = false), meaning either a pre-defined widget added\nin design-time or a dynamic widget, instantiated in code.\n\nSince equipment pieces will usually occupy specific areas of the inventory UI, and also commonly\ndisplay something like \"empty icons\", this border is designed to support already having a child widget.\n\nHowever, if you design your UI that way, then MAKE SURE that your child widget implements the Inventory\nItem View Interface and that it properly switches between empty and occupied states, defined when\nthe Inventory Item instance is null or set, respectively (Has Inventory Item function)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySlots_MetaData[] = {
		{ "Category", "Inventory Container Border" },
		{ "Comment", "/** Determines if the container renders empty slots or only slots occupied by items. */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBorderWidget.h" },
		{ "ToolTip", "Determines if the container renders empty slots or only slots occupied by items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentContainerView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBorderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryContainerBorderWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFillEmptySlots_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentContainerView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainerBorderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_bFillEmptySlots_SetBit(void* Obj)
{
	((UNinjaInventoryContainerBorderWidget*)Obj)->bFillEmptySlots = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_bFillEmptySlots = { "bFillEmptySlots", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryContainerBorderWidget), &Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_bFillEmptySlots_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillEmptySlots_MetaData), NewProp_bFillEmptySlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_CurrentContainerView = { "CurrentContainerView", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerBorderWidget, CurrentContainerView), Z_Construct_UClass_UNinjaInventoryContainerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentContainerView_MetaData), NewProp_CurrentContainerView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerBorderWidget, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_bFillEmptySlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_CurrentContainerView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonBorder,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryContainerBorderWidget, IInventoryContainerSlotInterface), false },  // 2513712811
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::ClassParams = {
	&UNinjaInventoryContainerBorderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainerBorderWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainerBorderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainerBorderWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainerBorderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainerBorderWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryContainerBorderWidget>()
{
	return UNinjaInventoryContainerBorderWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainerBorderWidget);
UNinjaInventoryContainerBorderWidget::~UNinjaInventoryContainerBorderWidget() {}
// End Class UNinjaInventoryContainerBorderWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBorderWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainerBorderWidget, UNinjaInventoryContainerBorderWidget::StaticClass, TEXT("UNinjaInventoryContainerBorderWidget"), &Z_Registration_Info_UClass_UNinjaInventoryContainerBorderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainerBorderWidget), 2750838165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBorderWidget_h_108704917(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBorderWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryContainerBorderWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
