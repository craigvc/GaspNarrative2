// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/DialogueAsset.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UDialogueAsset
void UDialogueAsset::StaticRegisterNativesUDialogueAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAsset);
UClass* Z_Construct_UClass_UDialogueAsset_NoRegister()
{
	return UDialogueAsset::StaticClass();
}
struct Z_Construct_UClass_UDialogueAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Legacy dialogue asset, still included so users of previous versions can right click and convert these into DialogueBlueprints \n */" },
		{ "IncludePath", "Tales/DialogueAsset.h" },
		{ "ModuleRelativePath", "Public/Tales/DialogueAsset.h" },
		{ "ToolTip", "Legacy dialogue asset, still included so users of previous versions can right click and convert these into DialogueBlueprints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/DialogueAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[] = {
		{ "Comment", "/** Graph for quest asset */" },
		{ "ModuleRelativePath", "Public/Tales/DialogueAsset.h" },
		{ "ToolTip", "Graph for quest asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Info about the graphs we last edited */" },
		{ "ModuleRelativePath", "Public/Tales/DialogueAsset.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph = { "DialogueGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, DialogueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueGraph_MetaData), NewProp_DialogueGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 1045714291
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAsset, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEditedDocuments_MetaData), NewProp_LastEditedDocuments_MetaData) }; // 1045714291
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_Dialogue,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_DialogueGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAsset_Statics::NewProp_LastEditedDocuments,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAsset_Statics::ClassParams = {
	&UDialogueAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueAsset()
{
	if (!Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton, Z_Construct_UClass_UDialogueAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueAsset.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UDialogueAsset>()
{
	return UDialogueAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAsset);
UDialogueAsset::~UDialogueAsset() {}
// End Class UDialogueAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAsset, UDialogueAsset::StaticClass, TEXT("UDialogueAsset"), &Z_Registration_Info_UClass_UDialogueAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAsset), 3681448571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueAsset_h_2387891253(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
