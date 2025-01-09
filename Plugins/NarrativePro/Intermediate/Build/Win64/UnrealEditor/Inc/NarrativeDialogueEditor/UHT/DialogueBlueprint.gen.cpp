// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Public/DialogueBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueBlueprint
void UDialogueBlueprint::StaticRegisterNativesUDialogueBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBlueprint);
UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister()
{
	return UDialogueBlueprint::StaticClass();
}
struct Z_Construct_UClass_UDialogueBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A special type of blueprint that includes a node based dialogue editor.\n */" },
		{ "IncludePath", "DialogueBlueprint.h" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "A special type of blueprint that includes a node based dialogue editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[] = {
		{ "Comment", "/** Graph for dialogue asset */" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "Graph for dialogue asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTemplate_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegacyAsset_MetaData[] = {
		{ "Comment", "//If set, the factory will use this legacy asset as a template for the new asset\n" },
		{ "ModuleRelativePath", "Public/DialogueBlueprint.h" },
		{ "ToolTip", "If set, the factory will use this legacy asset as a template for the new asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegacyAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph = { "DialogueGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, DialogueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueGraph_MetaData), NewProp_DialogueGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate = { "DialogueTemplate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, DialogueTemplate), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTemplate_MetaData), NewProp_DialogueTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset = { "LegacyAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprint, LegacyAsset), Z_Construct_UClass_UDialogueAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegacyAsset_MetaData), NewProp_LegacyAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_DialogueTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprint_Statics::NewProp_LegacyAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBlueprint_Statics::ClassParams = {
	&UDialogueBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBlueprint()
{
	if (!Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton, Z_Construct_UClass_UDialogueBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBlueprint.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueBlueprint>()
{
	return UDialogueBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBlueprint);
UDialogueBlueprint::~UDialogueBlueprint() {}
// End Class UDialogueBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBlueprint, UDialogueBlueprint::StaticClass, TEXT("UDialogueBlueprint"), &Z_Registration_Info_UClass_UDialogueBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBlueprint), 4008376030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_4160497405(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Public_DialogueBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
