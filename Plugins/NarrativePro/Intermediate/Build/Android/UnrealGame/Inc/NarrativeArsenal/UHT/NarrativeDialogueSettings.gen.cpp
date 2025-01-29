// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeDialogueSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDialogueSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeDialogueSettings
void UNarrativeDialogueSettings::StaticRegisterNativesUNarrativeDialogueSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDialogueSettings);
UClass* Z_Construct_UClass_UNarrativeDialogueSettings_NoRegister()
{
	return UNarrativeDialogueSettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeDialogueSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime dialogue settings for narrative \n */" },
		{ "IncludePath", "Tales/NarrativeDialogueSettings.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Runtime dialogue settings for narrative" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLineAudioSilence_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//Optional buffer of silence added to the end of dialogue lines\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Optional buffer of silence added to the end of dialogue lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDialogueTextDisplayTime_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "//How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "How long should the text be displayed for at a minimum? Since default letters per minute is 25 this prevents a reply like \"no\" from being played too quickly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LettersPerSecondLineDuration_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "//If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "If a dialogue doesn't have audio supplied, how long should the text be displayed on the screen for? Lower letters per minute means player gets more time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSelectSingleResponse_MetaData[] = {
		{ "Category", "Dialogue Settings" },
		{ "Comment", "//If there is only one player response available, should we autoselect it, regardless of whether bAutoSelect is checked?\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "If there is only one player response available, should we autoselect it, regardless of whether bAutoSelect is checked?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVerticalWiring_MetaData[] = {
		{ "Category", "Graph Options" },
		{ "Comment", "//Expiremental - won't autoarrange old dialogues, and you'll need to move your nodes into the correct position yourself. \n//Also makes dialogue nodes sort themselves from left to right instead of top to bottom\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Expiremental - won't autoarrange old dialogues, and you'll need to move your nodes into the correct position yourself.\nAlso makes dialogue nodes sort themselves from left to right instead of top to bottom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerColors_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "Comment", "//Default speaker colors\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSettings.h" },
		{ "ToolTip", "Default speaker colors" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueLineAudioSilence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDialogueTextDisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LettersPerSecondLineDuration;
	static void NewProp_bAutoSelectSingleResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSelectSingleResponse;
	static void NewProp_bEnableVerticalWiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVerticalWiring;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDialogueSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence = { "DialogueLineAudioSilence", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, DialogueLineAudioSilence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLineAudioSilence_MetaData), NewProp_DialogueLineAudioSilence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime = { "MinDialogueTextDisplayTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, MinDialogueTextDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDialogueTextDisplayTime_MetaData), NewProp_MinDialogueTextDisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration = { "LettersPerSecondLineDuration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, LettersPerSecondLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LettersPerSecondLineDuration_MetaData), NewProp_LettersPerSecondLineDuration_MetaData) };
void Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_SetBit(void* Obj)
{
	((UNarrativeDialogueSettings*)Obj)->bAutoSelectSingleResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse = { "bAutoSelectSingleResponse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSettings), &Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSelectSingleResponse_MetaData), NewProp_bAutoSelectSingleResponse_MetaData) };
void Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_SetBit(void* Obj)
{
	((UNarrativeDialogueSettings*)Obj)->bEnableVerticalWiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring = { "bEnableVerticalWiring", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSettings), &Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVerticalWiring_MetaData), NewProp_bEnableVerticalWiring_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_Inner = { "SpeakerColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors = { "SpeakerColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSettings, SpeakerColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerColors_MetaData), NewProp_SpeakerColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_DialogueLineAudioSilence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_MinDialogueTextDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_LettersPerSecondLineDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bAutoSelectSingleResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_bEnableVerticalWiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSettings_Statics::NewProp_SpeakerColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeDialogueSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams = {
	&UNarrativeDialogueSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDialogueSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeDialogueSettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton, Z_Construct_UClass_UNarrativeDialogueSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeDialogueSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeDialogueSettings>()
{
	return UNarrativeDialogueSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDialogueSettings);
UNarrativeDialogueSettings::~UNarrativeDialogueSettings() {}
// End Class UNarrativeDialogueSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDialogueSettings, UNarrativeDialogueSettings::StaticClass, TEXT("UNarrativeDialogueSettings"), &Z_Registration_Info_UClass_UNarrativeDialogueSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDialogueSettings), 535639367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSettings_h_244733043(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
