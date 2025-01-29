// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/Widgets/NarrativeInventoryItemButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeInventoryItemButton() {}

// Begin Cross Module References
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonButtonBase();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryItemButton();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryItemButton_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UNarrativeInventoryItemButton
void UNarrativeInventoryItemButton::StaticRegisterNativesUNarrativeInventoryItemButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInventoryItemButton);
UClass* Z_Construct_UClass_UNarrativeInventoryItemButton_NoRegister()
{
	return UNarrativeInventoryItemButton::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInventoryItemButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for items in the inventory. Typically we don't use C++ bases but we want to enable easily supporting multiple button types which BindWidget handles nicely. \n */" },
		{ "IncludePath", "Widgets/NarrativeInventoryItemButton.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeInventoryItemButton.h" },
		{ "ToolTip", "Base class for items in the inventory. Typically we don't use C++ bases but we want to enable easily supporting multiple button types which BindWidget handles nicely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Button Text" },
		{ "Comment", "//The item that this inventory button has been created for \n" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeInventoryItemButton.h" },
		{ "ToolTip", "The item that this inventory button has been created for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "Category", "Button Text" },
		{ "Comment", "//The inventory widget that we're a child of \n" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeInventoryItemButton.h" },
		{ "ToolTip", "The inventory widget that we're a child of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Quantity_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Button Text" },
		{ "Comment", "//Text block showing the quantity of the item \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeInventoryItemButton.h" },
		{ "ToolTip", "Text block showing the quantity of the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Weight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Button Text" },
		{ "Comment", "//Text block showing the weight of the item \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeInventoryItemButton.h" },
		{ "ToolTip", "Text block showing the weight of the item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Quantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInventoryItemButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x011500000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryItemButton, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x011500000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryItemButton, OwnerWidget), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_TextBlock_Quantity = { "TextBlock_Quantity", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryItemButton, TextBlock_Quantity), Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Quantity_MetaData), NewProp_TextBlock_Quantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_TextBlock_Weight = { "TextBlock_Weight", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryItemButton, TextBlock_Weight), Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Weight_MetaData), NewProp_TextBlock_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_TextBlock_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::NewProp_TextBlock_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::ClassParams = {
	&UNarrativeInventoryItemButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInventoryItemButton()
{
	if (!Z_Registration_Info_UClass_UNarrativeInventoryItemButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInventoryItemButton.OuterSingleton, Z_Construct_UClass_UNarrativeInventoryItemButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInventoryItemButton.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UNarrativeInventoryItemButton>()
{
	return UNarrativeInventoryItemButton::StaticClass();
}
UNarrativeInventoryItemButton::UNarrativeInventoryItemButton() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInventoryItemButton);
UNarrativeInventoryItemButton::~UNarrativeInventoryItemButton() {}
// End Class UNarrativeInventoryItemButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_NarrativeInventoryItemButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInventoryItemButton, UNarrativeInventoryItemButton::StaticClass, TEXT("UNarrativeInventoryItemButton"), &Z_Registration_Info_UClass_UNarrativeInventoryItemButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInventoryItemButton), 4123718322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_NarrativeInventoryItemButton_h_4045471824(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_NarrativeInventoryItemButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_NarrativeInventoryItemButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
