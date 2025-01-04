// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/InventoryItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemWidget() {}

// Begin Cross Module References
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UInventoryItemWidget();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UInventoryItemWidget
void UInventoryItemWidget::StaticRegisterNativesUInventoryItemWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemWidget);
UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister()
{
	return UInventoryItemWidget::StaticClass();
}
struct Z_Construct_UClass_UInventoryItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryItemWidget.h" },
		{ "ModuleRelativePath", "Public/InventoryItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Inventory Item Widget" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/InventoryItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x001100000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemWidget, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemWidget_Statics::ClassParams = {
	&UInventoryItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryItemWidget()
{
	if (!Z_Registration_Info_UClass_UInventoryItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemWidget.OuterSingleton, Z_Construct_UClass_UInventoryItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryItemWidget.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UInventoryItemWidget>()
{
	return UInventoryItemWidget::StaticClass();
}
UInventoryItemWidget::UInventoryItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemWidget);
UInventoryItemWidget::~UInventoryItemWidget() {}
// End Class UInventoryItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemWidget, UInventoryItemWidget::StaticClass, TEXT("UInventoryItemWidget"), &Z_Registration_Info_UClass_UInventoryItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemWidget), 1772639967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_132147881(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
