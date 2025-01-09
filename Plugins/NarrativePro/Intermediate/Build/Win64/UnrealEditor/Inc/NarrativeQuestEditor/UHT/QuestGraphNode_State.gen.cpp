// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_State() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestGraphNode_State
void UQuestGraphNode_State::StaticRegisterNativesUQuestGraphNode_State()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_State);
UClass* Z_Construct_UClass_UQuestGraphNode_State_NoRegister()
{
	return UQuestGraphNode_State::StaticClass();
}
struct Z_Construct_UClass_UQuestGraphNode_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_State.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_State.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_State>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphNode_State, State), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphNode_State_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestGraphNode_State_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_State_Statics::ClassParams = {
	&UQuestGraphNode_State::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_State_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_State_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphNode_State()
{
	if (!Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_State_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphNode_State.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_State>()
{
	return UQuestGraphNode_State::StaticClass();
}
UQuestGraphNode_State::UQuestGraphNode_State(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_State);
UQuestGraphNode_State::~UQuestGraphNode_State() {}
// End Class UQuestGraphNode_State

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_State, UQuestGraphNode_State::StaticClass, TEXT("UQuestGraphNode_State"), &Z_Registration_Info_UClass_UQuestGraphNode_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_State), 3517933191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_3809005540(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_State_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
