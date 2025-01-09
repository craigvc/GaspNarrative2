// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphNode_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_NPC() {}

// Begin Cross Module References
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NPC();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueGraphNode_NPC
void UDialogueGraphNode_NPC::StaticRegisterNativesUDialogueGraphNode_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_NPC);
UClass* Z_Construct_UClass_UDialogueGraphNode_NPC_NoRegister()
{
	return UDialogueGraphNode_NPC::StaticClass();
}
struct Z_Construct_UClass_UDialogueGraphNode_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphNode_NPC.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode_NPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::ClassParams = {
	&UDialogueGraphNode_NPC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphNode_NPC()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode_NPC.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphNode_NPC>()
{
	return UDialogueGraphNode_NPC::StaticClass();
}
UDialogueGraphNode_NPC::UDialogueGraphNode_NPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_NPC);
UDialogueGraphNode_NPC::~UDialogueGraphNode_NPC() {}
// End Class UDialogueGraphNode_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_NPC, UDialogueGraphNode_NPC::StaticClass, TEXT("UDialogueGraphNode_NPC"), &Z_Registration_Info_UClass_UDialogueGraphNode_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_NPC), 2387725368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_2790318629(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
