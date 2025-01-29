// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/Widgets/NarrativeComboBoxString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeComboBoxString() {}

// Begin Cross Module References
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeComboBoxString();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeComboBoxString
void UNarrativeComboBoxString::StaticRegisterNativesUNarrativeComboBoxString()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeComboBoxString);
UClass* Z_Construct_UClass_UNarrativeComboBoxString_NoRegister()
{
	return UNarrativeComboBoxString::StaticClass();
}
struct Z_Construct_UClass_UNarrativeComboBoxString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Narrative Common Widgets" },
		{ "Comment", "/**\n * Base class for a string combo box in Narrative - \n */" },
		{ "IncludePath", "Widgets/NarrativeComboBoxString.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeComboBoxString.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a string combo box in Narrative -" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeComboBoxString>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeComboBoxString_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UComboBoxString,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComboBoxString_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeComboBoxString_Statics::ClassParams = {
	&UNarrativeComboBoxString::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComboBoxString_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeComboBoxString_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeComboBoxString()
{
	if (!Z_Registration_Info_UClass_UNarrativeComboBoxString.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeComboBoxString.OuterSingleton, Z_Construct_UClass_UNarrativeComboBoxString_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeComboBoxString.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeComboBoxString>()
{
	return UNarrativeComboBoxString::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeComboBoxString);
UNarrativeComboBoxString::~UNarrativeComboBoxString() {}
// End Class UNarrativeComboBoxString

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeComboBoxString_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeComboBoxString, UNarrativeComboBoxString::StaticClass, TEXT("UNarrativeComboBoxString"), &Z_Registration_Info_UClass_UNarrativeComboBoxString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeComboBoxString), 2887346703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeComboBoxString_h_3255918048(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeComboBoxString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeComboBoxString_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
