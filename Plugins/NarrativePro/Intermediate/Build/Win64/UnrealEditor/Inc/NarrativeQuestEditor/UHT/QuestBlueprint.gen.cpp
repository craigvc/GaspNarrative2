// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Public/QuestBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestBlueprint();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestBlueprint
void UQuestBlueprint::StaticRegisterNativesUQuestBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBlueprint);
UClass* Z_Construct_UClass_UQuestBlueprint_NoRegister()
{
	return UQuestBlueprint::StaticClass();
}
struct Z_Construct_UClass_UQuestBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A special type of blueprint that includes a node based quest editor.\n */" },
		{ "IncludePath", "QuestBlueprint.h" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
		{ "ToolTip", "A special type of blueprint that includes a node based quest editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestGraph_MetaData[] = {
		{ "Comment", "/** Graph for quest asset */" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
		{ "ToolTip", "Graph for quest asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTemplate_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph = { "QuestGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprint, QuestGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestGraph_MetaData), NewProp_QuestGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate = { "QuestTemplate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprint, QuestTemplate), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTemplate_MetaData), NewProp_QuestTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprint_Statics::NewProp_QuestTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBlueprint_Statics::ClassParams = {
	&UQuestBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestBlueprint()
{
	if (!Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton, Z_Construct_UClass_UQuestBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestBlueprint.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestBlueprint>()
{
	return UQuestBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBlueprint);
UQuestBlueprint::~UQuestBlueprint() {}
// End Class UQuestBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestBlueprint, UQuestBlueprint::StaticClass, TEXT("UQuestBlueprint"), &Z_Registration_Info_UClass_UQuestBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBlueprint), 1350486039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_2722549366(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Public_QuestBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
