// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/Widgets/ItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UItemWidget();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UItemWidget
void UItemWidget::StaticRegisterNativesUItemWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemWidget);
UClass* Z_Construct_UClass_UItemWidget_NoRegister()
{
	return UItemWidget::StaticClass();
}
struct Z_Construct_UClass_UItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for items in the inventory. This is mostly C++ based so we can make use of BindWidget, in order to have different inventory widget styles.\n */" },
		{ "IncludePath", "Widgets/ItemWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
		{ "ToolTip", "Base class for items in the inventory. This is mostly C++ based so we can make use of BindWidget, in order to have different inventory widget styles." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemWidget_Statics::ClassParams = {
	&UItemWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemWidget()
{
	if (!Z_Registration_Info_UClass_UItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemWidget.OuterSingleton, Z_Construct_UClass_UItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemWidget.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UItemWidget>()
{
	return UItemWidget::StaticClass();
}
UItemWidget::UItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemWidget);
UItemWidget::~UItemWidget() {}
// End Class UItemWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemWidget, UItemWidget::StaticClass, TEXT("UItemWidget"), &Z_Registration_Info_UClass_UItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemWidget), 3597677421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_4234578887(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
