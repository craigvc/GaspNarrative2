// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeQuestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeQuestSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeQuestSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeQuestSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeQuestSettings
void UNarrativeQuestSettings::StaticRegisterNativesUNarrativeQuestSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeQuestSettings);
UClass* Z_Construct_UClass_UNarrativeQuestSettings_NoRegister()
{
	return UNarrativeQuestSettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeQuestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime quest settings for narrative\n */" },
		{ "IncludePath", "Tales/NarrativeQuestSettings.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeQuestSettings.h" },
		{ "ToolTip", "Runtime quest settings for narrative" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTasksWhenCompleted_MetaData[] = {
		{ "Category", "Quest Settings" },
		{ "Comment", "//When you complete a task, should its progress be reset after you complete it? This means you can design quests where you can come back to previously completed steps and re-complete them.\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeQuestSettings.h" },
		{ "ToolTip", "When you complete a task, should its progress be reset after you complete it? This means you can design quests where you can come back to previously completed steps and re-complete them." },
	};
#endif // WITH_METADATA
	static void NewProp_bResetTasksWhenCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTasksWhenCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeQuestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_SetBit(void* Obj)
{
	((UNarrativeQuestSettings*)Obj)->bResetTasksWhenCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted = { "bResetTasksWhenCompleted", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeQuestSettings), &Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTasksWhenCompleted_MetaData), NewProp_bResetTasksWhenCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeQuestSettings_Statics::NewProp_bResetTasksWhenCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeQuestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeQuestSettings_Statics::ClassParams = {
	&UNarrativeQuestSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeQuestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeQuestSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeQuestSettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton, Z_Construct_UClass_UNarrativeQuestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeQuestSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeQuestSettings>()
{
	return UNarrativeQuestSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeQuestSettings);
UNarrativeQuestSettings::~UNarrativeQuestSettings() {}
// End Class UNarrativeQuestSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeQuestSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeQuestSettings, UNarrativeQuestSettings::StaticClass, TEXT("UNarrativeQuestSettings"), &Z_Registration_Info_UClass_UNarrativeQuestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeQuestSettings), 395670509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeQuestSettings_h_3434377073(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeQuestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeQuestSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
