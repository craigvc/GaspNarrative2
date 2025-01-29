// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_Action.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_Action() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Action();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Action_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestGraphNode_Action
void UQuestGraphNode_Action::StaticRegisterNativesUQuestGraphNode_Action()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_Action);
UClass* Z_Construct_UClass_UQuestGraphNode_Action_NoRegister()
{
	return UQuestGraphNode_Action::StaticClass();
}
struct Z_Construct_UClass_UQuestGraphNode_Action_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Should be called UQuestGraphNode_Branch, but the rename was making previous releases incompatible and ClassRedirects weren't working. \n */" },
		{ "IncludePath", "QuestGraphNode_Action.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_Action.h" },
		{ "ToolTip", "Should be called UQuestGraphNode_Branch, but the rename was making previous releases incompatible and ClassRedirects weren't working." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_Action.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_Action>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_Action_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode_Action, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGraphNode_Action_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_Action_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Action_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestGraphNode_Action_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Action_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_Action_Statics::ClassParams = {
	&UQuestGraphNode_Action::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestGraphNode_Action_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Action_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Action_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_Action_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphNode_Action()
{
	if (!Z_Registration_Info_UClass_UQuestGraphNode_Action.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_Action.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_Action_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphNode_Action.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_Action>()
{
	return UQuestGraphNode_Action::StaticClass();
}
UQuestGraphNode_Action::UQuestGraphNode_Action(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_Action);
UQuestGraphNode_Action::~UQuestGraphNode_Action() {}
// End Class UQuestGraphNode_Action

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Action_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_Action, UQuestGraphNode_Action::StaticClass, TEXT("UQuestGraphNode_Action"), &Z_Registration_Info_UClass_UQuestGraphNode_Action, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_Action), 2163842064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Action_h_2364499779(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Action_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Action_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
