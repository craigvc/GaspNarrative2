// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Root() {}

// Begin Cross Module References
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_NPC();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Root();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Root_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueGraphNode_Root
void UDialogueGraphNode_Root::StaticRegisterNativesUDialogueGraphNode_Root()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_Root);
UClass* Z_Construct_UClass_UDialogueGraphNode_Root_NoRegister()
{
	return UDialogueGraphNode_Root::StaticClass();
}
struct Z_Construct_UClass_UDialogueGraphNode_Root_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode_Root.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Root>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Root_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode_NPC,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Root_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Root_Statics::ClassParams = {
	&UDialogueGraphNode_Root::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphNode_Root_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphNode_Root()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphNode_Root.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Root.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Root_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode_Root.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphNode_Root>()
{
	return UDialogueGraphNode_Root::StaticClass();
}
UDialogueGraphNode_Root::UDialogueGraphNode_Root(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Root);
UDialogueGraphNode_Root::~UDialogueGraphNode_Root() {}
// End Class UDialogueGraphNode_Root

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Root_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Root, UDialogueGraphNode_Root::StaticClass, TEXT("UDialogueGraphNode_Root"), &Z_Registration_Info_UClass_UDialogueGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Root), 3441400658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Root_h_1714075453(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Root_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
