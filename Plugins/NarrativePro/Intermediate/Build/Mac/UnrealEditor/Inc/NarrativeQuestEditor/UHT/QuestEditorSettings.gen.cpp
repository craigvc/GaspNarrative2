// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorSettings();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestNodeUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestEditorSettings
void UQuestEditorSettings::StaticRegisterNativesUQuestEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestEditorSettings);
UClass* Z_Construct_UClass_UQuestEditorSettings_NoRegister()
{
	return UQuestEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UQuestEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestEditorSettings.h" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskSearchPaths_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//All the folders the quest editor searches in to find your quest tasks. \n" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "All the folders the quest editor searches in to find your quest tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentTasksNodeColor_MetaData[] = {
		{ "Category", "Graph Style" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestClass_MetaData[] = {
		{ "Category", "Quests" },
		{ "MetaClass", "/Script/NarrativeArsenal.Quest" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestBranch_MetaData[] = {
		{ "Category", "Quests" },
		{ "MetaClass", "/Script/NarrativeArsenal.QuestBranch" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestState_MetaData[] = {
		{ "Category", "Quests" },
		{ "MetaClass", "/Script/NarrativeArsenal.QuestState" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestWidgetClass_MetaData[] = {
		{ "Category", "Graph Defaults" },
		{ "MetaClass", "/Script/NarrativeQuestEditor.QuestNodeUserWidget" },
		{ "ModuleRelativePath", "Private/QuestEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestTaskSearchPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestTaskSearchPaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentTasksNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQuestClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQuestBranch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQuestState;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultQuestWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestTaskSearchPaths_Inner = { "QuestTaskSearchPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestTaskSearchPaths = { "QuestTaskSearchPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, QuestTaskSearchPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTaskSearchPaths_MetaData), NewProp_QuestTaskSearchPaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor = { "FailedNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, FailedNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedNodeColor_MetaData), NewProp_FailedNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor = { "SuccessNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, SuccessNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessNodeColor_MetaData), NewProp_SuccessNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor = { "StateNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, StateNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateNodeColor_MetaData), NewProp_StateNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodeColor_MetaData), NewProp_RootNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor = { "TaskNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, TaskNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeColor_MetaData), NewProp_TaskNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor = { "PersistentTasksNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, PersistentTasksNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentTasksNodeColor_MetaData), NewProp_PersistentTasksNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestClass = { "DefaultQuestClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestClass_MetaData), NewProp_DefaultQuestClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch = { "DefaultQuestBranch", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestBranch), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestBranch_MetaData), NewProp_DefaultQuestBranch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState = { "DefaultQuestState", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestState), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestState_MetaData), NewProp_DefaultQuestState_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestWidgetClass = { "DefaultQuestWidgetClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestEditorSettings, DefaultQuestWidgetClass), Z_Construct_UClass_UQuestNodeUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestWidgetClass_MetaData), NewProp_DefaultQuestWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestTaskSearchPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_QuestTaskSearchPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_FailedNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_SuccessNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_StateNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_RootNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_TaskNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_PersistentTasksNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestEditorSettings_Statics::NewProp_DefaultQuestWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams = {
	&UQuestEditorSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestEditorSettings()
{
	if (!Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton, Z_Construct_UClass_UQuestEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestEditorSettings.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestEditorSettings>()
{
	return UQuestEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestEditorSettings);
UQuestEditorSettings::~UQuestEditorSettings() {}
// End Class UQuestEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestEditorSettings, UQuestEditorSettings::StaticClass, TEXT("UQuestEditorSettings"), &Z_Registration_Info_UClass_UQuestEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestEditorSettings), 4073452712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_3073108377(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
