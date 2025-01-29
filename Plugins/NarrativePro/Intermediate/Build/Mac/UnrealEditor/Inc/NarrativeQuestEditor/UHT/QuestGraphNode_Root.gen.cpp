// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGraphNode_Root() {}

// Begin Cross Module References
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Root();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_Root_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestGraphNode_State();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestGraphNode_Root
void UQuestGraphNode_Root::StaticRegisterNativesUQuestGraphNode_Root()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGraphNode_Root);
UClass* Z_Construct_UClass_UQuestGraphNode_Root_NoRegister()
{
	return UQuestGraphNode_Root::StaticClass();
}
struct Z_Construct_UClass_UQuestGraphNode_Root_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/QuestGraphNode_Root.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphNode_Root>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestGraphNode_Root_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestGraphNode_State,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Root_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphNode_Root_Statics::ClassParams = {
	&UQuestGraphNode_Root::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphNode_Root_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphNode_Root()
{
	if (!Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton, Z_Construct_UClass_UQuestGraphNode_Root_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphNode_Root.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestGraphNode_Root>()
{
	return UQuestGraphNode_Root::StaticClass();
}
UQuestGraphNode_Root::UQuestGraphNode_Root(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphNode_Root);
UQuestGraphNode_Root::~UQuestGraphNode_Root() {}
// End Class UQuestGraphNode_Root

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphNode_Root, UQuestGraphNode_Root::StaticClass, TEXT("UQuestGraphNode_Root"), &Z_Registration_Info_UClass_UQuestGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphNode_Root), 1405666289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_1389673144(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestGraphNode_Root_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
