// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueEditorTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorTypes();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueEditorTypes_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueEditorTypes
void UDialogueEditorTypes::StaticRegisterNativesUDialogueEditorTypes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueEditorTypes);
UClass* Z_Construct_UClass_UDialogueEditorTypes_NoRegister()
{
	return UDialogueEditorTypes::StaticClass();
}
struct Z_Construct_UClass_UDialogueEditorTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueEditorTypes.h" },
		{ "ModuleRelativePath", "Private/DialogueEditorTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueEditorTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueEditorTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueEditorTypes_Statics::ClassParams = {
	&UDialogueEditorTypes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueEditorTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueEditorTypes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueEditorTypes()
{
	if (!Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton, Z_Construct_UClass_UDialogueEditorTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueEditorTypes.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueEditorTypes>()
{
	return UDialogueEditorTypes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEditorTypes);
UDialogueEditorTypes::~UDialogueEditorTypes() {}
// End Class UDialogueEditorTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueEditorTypes, UDialogueEditorTypes::StaticClass, TEXT("UDialogueEditorTypes"), &Z_Registration_Info_UClass_UDialogueEditorTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueEditorTypes), 4074863185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_2951464353(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueEditorTypes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
