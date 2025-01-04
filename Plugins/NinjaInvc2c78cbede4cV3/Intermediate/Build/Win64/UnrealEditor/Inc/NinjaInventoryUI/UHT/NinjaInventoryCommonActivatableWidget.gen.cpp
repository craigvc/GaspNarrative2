// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryCommonActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryCommonActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryCommonActivatableWidget
void UNinjaInventoryCommonActivatableWidget::StaticRegisterNativesUNinjaInventoryCommonActivatableWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryCommonActivatableWidget);
UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_NoRegister()
{
	return UNinjaInventoryCommonActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base activatable widget with basic Common UI elements.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryCommonActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryCommonActivatableWidget.h" },
		{ "ToolTip", "Base activatable widget with basic Common UI elements." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryCommonActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::ClassParams = {
	&UNinjaInventoryCommonActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryCommonActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryCommonActivatableWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryCommonActivatableWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryCommonActivatableWidget>()
{
	return UNinjaInventoryCommonActivatableWidget::StaticClass();
}
UNinjaInventoryCommonActivatableWidget::UNinjaInventoryCommonActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryCommonActivatableWidget);
UNinjaInventoryCommonActivatableWidget::~UNinjaInventoryCommonActivatableWidget() {}
// End Class UNinjaInventoryCommonActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonActivatableWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget, UNinjaInventoryCommonActivatableWidget::StaticClass, TEXT("UNinjaInventoryCommonActivatableWidget"), &Z_Registration_Info_UClass_UNinjaInventoryCommonActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryCommonActivatableWidget), 3316766398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonActivatableWidget_h_3380302842(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryCommonActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
