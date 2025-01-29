// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeUIDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeUIDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeUIDeveloperSettings
void UNarrativeUIDeveloperSettings::StaticRegisterNativesUNarrativeUIDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeUIDeveloperSettings);
UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister()
{
	return UNarrativeUIDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for Narrative UI settings, like global styling, etc. \n */" },
		{ "DisplayName", "Narrative - CommonUI Settings" },
		{ "IncludePath", "NarrativeUIDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/NarrativeUIDeveloperSettings.h" },
		{ "ToolTip", "Base class for Narrative UI settings, like global styling, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIPrimaryColor_MetaData[] = {
		{ "Category", "Narrative Pro|User Interface" },
		{ "Comment", "/** Primary color UI elements will set themselves to.  */" },
		{ "ModuleRelativePath", "Public/NarrativeUIDeveloperSettings.h" },
		{ "ToolTip", "Primary color UI elements will set themselves to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIInvertColor_MetaData[] = {
		{ "Category", "Narrative Pro|User Interface" },
		{ "Comment", "/** Invert color UI elements will set themselves to.  */" },
		{ "ModuleRelativePath", "Public/NarrativeUIDeveloperSettings.h" },
		{ "ToolTip", "Invert color UI elements will set themselves to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIInvertAccentColor_MetaData[] = {
		{ "Category", "Narrative Pro|User Interface" },
		{ "Comment", "/** Invert Accent color UI elements will set themselves to.  */" },
		{ "ModuleRelativePath", "Public/NarrativeUIDeveloperSettings.h" },
		{ "ToolTip", "Invert Accent color UI elements will set themselves to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UIPrimaryColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UIInvertColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UIInvertAccentColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeUIDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIPrimaryColor = { "UIPrimaryColor", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeUIDeveloperSettings, UIPrimaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIPrimaryColor_MetaData), NewProp_UIPrimaryColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIInvertColor = { "UIInvertColor", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeUIDeveloperSettings, UIInvertColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIInvertColor_MetaData), NewProp_UIInvertColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIInvertAccentColor = { "UIInvertAccentColor", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeUIDeveloperSettings, UIInvertAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIInvertAccentColor_MetaData), NewProp_UIInvertAccentColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIPrimaryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIInvertColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::NewProp_UIInvertAccentColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::ClassParams = {
	&UNarrativeUIDeveloperSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeUIDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeUIDeveloperSettings.OuterSingleton, Z_Construct_UClass_UNarrativeUIDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeUIDeveloperSettings.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeUIDeveloperSettings>()
{
	return UNarrativeUIDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeUIDeveloperSettings);
UNarrativeUIDeveloperSettings::~UNarrativeUIDeveloperSettings() {}
// End Class UNarrativeUIDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeUIDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeUIDeveloperSettings, UNarrativeUIDeveloperSettings::StaticClass, TEXT("UNarrativeUIDeveloperSettings"), &Z_Registration_Info_UClass_UNarrativeUIDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeUIDeveloperSettings), 1428534150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeUIDeveloperSettings_h_3655269090(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeUIDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeUIDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
