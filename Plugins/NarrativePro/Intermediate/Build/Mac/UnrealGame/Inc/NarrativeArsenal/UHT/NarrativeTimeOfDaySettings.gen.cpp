// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settings/NarrativeTimeOfDaySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTimeOfDaySettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeTimeOfDaySettings
void UNarrativeTimeOfDaySettings::StaticRegisterNativesUNarrativeTimeOfDaySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTimeOfDaySettings);
UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister()
{
	return UNarrativeTimeOfDaySettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Narrative time of day system in the game state. \n */" },
		{ "DisplayName", "Narrative Time Of Day Settings" },
		{ "IncludePath", "Settings/NarrativeTimeOfDaySettings.h" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "Settings for the Narrative time of day system in the game state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicTimeOfDay_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "Comment", "/** If true the time of day will be updated on tick using the Day/NightLengthMinutes values */" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "If true the time of day will be updated on tick using the Day/NightLengthMinutes values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeOfDay_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "ClampMax", "2400.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Default time of day we'll start the time at when the game state is initialized.  */" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "Default time of day we'll start the time at when the game state is initialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLengthMinutes_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Day length in minutes, if a BP_NarrativeSky is in the level. */" },
		{ "EditCondition", "bDynamicTimeOfDay" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "Day length in minutes, if a BP_NarrativeSky is in the level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NightLengthMinutes_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Night length in minutes, if a BP_NarrativeSky is in the level. */" },
		{ "EditCondition", "bDynamicTimeOfDay" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "Night length in minutes, if a BP_NarrativeSky is in the level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunriseTime_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "ClampMax", "1200" },
		{ "ClampMin", "400" },
		{ "Comment", "/** The time the sun should rise - if you have a Narrative sky in the level it will use this */" },
		{ "EditCondition", "bDynamicTimeOfDay" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "The time the sun should rise - if you have a Narrative sky in the level it will use this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunsetTime_MetaData[] = {
		{ "Category", "Narrative Pro|Narrative Sky" },
		{ "ClampMax", "2400" },
		{ "ClampMin", "1300" },
		{ "Comment", "/** The time the sun should set - if you have a Narrative sky in the level it will use this */" },
		{ "EditCondition", "bDynamicTimeOfDay" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Settings/NarrativeTimeOfDaySettings.h" },
		{ "ToolTip", "The time the sun should set - if you have a Narrative sky in the level it will use this" },
	};
#endif // WITH_METADATA
	static void NewProp_bDynamicTimeOfDay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicTimeOfDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeOfDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLengthMinutes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NightLengthMinutes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SunriseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SunsetTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTimeOfDaySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_bDynamicTimeOfDay_SetBit(void* Obj)
{
	((UNarrativeTimeOfDaySettings*)Obj)->bDynamicTimeOfDay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_bDynamicTimeOfDay = { "bDynamicTimeOfDay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTimeOfDaySettings), &Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_bDynamicTimeOfDay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicTimeOfDay_MetaData), NewProp_bDynamicTimeOfDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_DefaultTimeOfDay = { "DefaultTimeOfDay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTimeOfDaySettings, DefaultTimeOfDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTimeOfDay_MetaData), NewProp_DefaultTimeOfDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_DayLengthMinutes = { "DayLengthMinutes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTimeOfDaySettings, DayLengthMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLengthMinutes_MetaData), NewProp_DayLengthMinutes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_NightLengthMinutes = { "NightLengthMinutes", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTimeOfDaySettings, NightLengthMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NightLengthMinutes_MetaData), NewProp_NightLengthMinutes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_SunriseTime = { "SunriseTime", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTimeOfDaySettings, SunriseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunriseTime_MetaData), NewProp_SunriseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_SunsetTime = { "SunsetTime", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTimeOfDaySettings, SunsetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunsetTime_MetaData), NewProp_SunsetTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_bDynamicTimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_DefaultTimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_DayLengthMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_NightLengthMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_SunriseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::NewProp_SunsetTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::ClassParams = {
	&UNarrativeTimeOfDaySettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeTimeOfDaySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTimeOfDaySettings.OuterSingleton, Z_Construct_UClass_UNarrativeTimeOfDaySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTimeOfDaySettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTimeOfDaySettings>()
{
	return UNarrativeTimeOfDaySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTimeOfDaySettings);
UNarrativeTimeOfDaySettings::~UNarrativeTimeOfDaySettings() {}
// End Class UNarrativeTimeOfDaySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeTimeOfDaySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTimeOfDaySettings, UNarrativeTimeOfDaySettings::StaticClass, TEXT("UNarrativeTimeOfDaySettings"), &Z_Registration_Info_UClass_UNarrativeTimeOfDaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTimeOfDaySettings), 2003784653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeTimeOfDaySettings_h_2226552566(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeTimeOfDaySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settings_NarrativeTimeOfDaySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
