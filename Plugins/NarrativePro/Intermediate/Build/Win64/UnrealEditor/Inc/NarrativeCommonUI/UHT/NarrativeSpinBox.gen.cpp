// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/Widgets/NarrativeSpinBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSpinBox() {}

// Begin Cross Module References
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeSpinBox();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeSpinBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpinBox();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeSpinBox
void UNarrativeSpinBox::StaticRegisterNativesUNarrativeSpinBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSpinBox);
UClass* Z_Construct_UClass_UNarrativeSpinBox_NoRegister()
{
	return UNarrativeSpinBox::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSpinBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Narrative Common Widgets" },
		{ "Comment", "/**\n * Base class for the narrative spin box. Will pull its style from the UIPrimary and UIInvert colors set in the plugin settings. \n */" },
		{ "IncludePath", "Widgets/NarrativeSpinBox.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeSpinBox.h" },
		{ "ToolTip", "Base class for the narrative spin box. Will pull its style from the UIPrimary and UIInvert colors set in the plugin settings." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSpinBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeSpinBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpinBox,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSpinBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSpinBox_Statics::ClassParams = {
	&UNarrativeSpinBox::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSpinBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSpinBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSpinBox()
{
	if (!Z_Registration_Info_UClass_UNarrativeSpinBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSpinBox.OuterSingleton, Z_Construct_UClass_UNarrativeSpinBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSpinBox.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeSpinBox>()
{
	return UNarrativeSpinBox::StaticClass();
}
UNarrativeSpinBox::UNarrativeSpinBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSpinBox);
UNarrativeSpinBox::~UNarrativeSpinBox() {}
// End Class UNarrativeSpinBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeSpinBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSpinBox, UNarrativeSpinBox::StaticClass, TEXT("UNarrativeSpinBox"), &Z_Registration_Info_UClass_UNarrativeSpinBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSpinBox), 2246457453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeSpinBox_h_1463296723(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeSpinBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeSpinBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
