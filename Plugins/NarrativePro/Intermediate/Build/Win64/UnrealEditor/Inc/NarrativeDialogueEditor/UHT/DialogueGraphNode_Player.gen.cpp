// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueGraphNode_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Player() {}

// Begin Cross Module References
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Player();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueGraphNode_Player
void UDialogueGraphNode_Player::StaticRegisterNativesUDialogueGraphNode_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueGraphNode_Player);
UClass* Z_Construct_UClass_UDialogueGraphNode_Player_NoRegister()
{
	return UDialogueGraphNode_Player::StaticClass();
}
struct Z_Construct_UClass_UDialogueGraphNode_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueGraphNode_Player.h" },
		{ "ModuleRelativePath", "Private/DialogueGraphNode_Player.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueGraphNode_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogueGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphNode_Player_Statics::ClassParams = {
	&UDialogueGraphNode_Player::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphNode_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphNode_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphNode_Player()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphNode_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Player.OuterSingleton, Z_Construct_UClass_UDialogueGraphNode_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode_Player.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueGraphNode_Player>()
{
	return UDialogueGraphNode_Player::StaticClass();
}
UDialogueGraphNode_Player::UDialogueGraphNode_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphNode_Player);
UDialogueGraphNode_Player::~UDialogueGraphNode_Player() {}
// End Class UDialogueGraphNode_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Player, UDialogueGraphNode_Player::StaticClass, TEXT("UDialogueGraphNode_Player"), &Z_Registration_Info_UClass_UDialogueGraphNode_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Player), 439046727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Player_h_2064396335(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueGraphNode_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
