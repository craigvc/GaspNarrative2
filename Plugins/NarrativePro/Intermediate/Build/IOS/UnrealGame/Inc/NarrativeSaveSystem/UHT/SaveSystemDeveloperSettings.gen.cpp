// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/SaveSystemDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSystemDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemDeveloperSettings();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Class USaveSystemDeveloperSettings
void USaveSystemDeveloperSettings::StaticRegisterNativesUSaveSystemDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSystemDeveloperSettings);
UClass* Z_Construct_UClass_USaveSystemDeveloperSettings_NoRegister()
{
	return USaveSystemDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_USaveSystemDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for configuring the Narrative Save System. \n */" },
		{ "DisplayName", "Narrative - Save System" },
		{ "IncludePath", "SaveSystemDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/SaveSystemDeveloperSettings.h" },
		{ "ToolTip", "Settings for configuring the Narrative Save System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadFirstSaveInEditor_MetaData[] = {
		{ "Category", "Narrative Pro|Save System" },
		{ "Comment", "/** If true, Narrative will automatically load the save in slot 1, provided you have a game saved in that slot.\n\x09This is great for QA testing - it saves you having to open the pause menu and load your game every time you load in. */" },
		{ "ModuleRelativePath", "Public/SaveSystemDeveloperSettings.h" },
		{ "ToolTip", "If true, Narrative will automatically load the save in slot 1, provided you have a game saved in that slot.\n      This is great for QA testing - it saves you having to open the pause menu and load your game every time you load in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "Narrative Pro|Save System" },
		{ "Comment", "/** The class to use when instantiating the transient GameInstance class */" },
		{ "MetaClass", "/Script/NarrativeSaveSystem.NarrativeSave" },
		{ "ModuleRelativePath", "Public/SaveSystemDeveloperSettings.h" },
		{ "ToolTip", "The class to use when instantiating the transient GameInstance class" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoLoadFirstSaveInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadFirstSaveInEditor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSystemDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_bAutoLoadFirstSaveInEditor_SetBit(void* Obj)
{
	((USaveSystemDeveloperSettings*)Obj)->bAutoLoadFirstSaveInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_bAutoLoadFirstSaveInEditor = { "bAutoLoadFirstSaveInEditor", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSystemDeveloperSettings), &Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_bAutoLoadFirstSaveInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLoadFirstSaveInEditor_MetaData), NewProp_bAutoLoadFirstSaveInEditor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSystemDeveloperSettings, SaveGameClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameClass_MetaData), NewProp_SaveGameClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_bAutoLoadFirstSaveInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::NewProp_SaveGameClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::ClassParams = {
	&USaveSystemDeveloperSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSystemDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_USaveSystemDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSystemDeveloperSettings.OuterSingleton, Z_Construct_UClass_USaveSystemDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSystemDeveloperSettings.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<USaveSystemDeveloperSettings>()
{
	return USaveSystemDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSystemDeveloperSettings);
USaveSystemDeveloperSettings::~USaveSystemDeveloperSettings() {}
// End Class USaveSystemDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSystemDeveloperSettings, USaveSystemDeveloperSettings::StaticClass, TEXT("USaveSystemDeveloperSettings"), &Z_Registration_Info_UClass_USaveSystemDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSystemDeveloperSettings), 2225066077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemDeveloperSettings_h_642333802(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_SaveSystemDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
