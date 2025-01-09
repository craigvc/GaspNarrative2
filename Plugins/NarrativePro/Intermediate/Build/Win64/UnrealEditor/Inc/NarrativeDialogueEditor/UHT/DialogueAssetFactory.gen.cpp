// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeDialogueEditor/Private/DialogueAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAssetFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueAsset_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueAssetFactory();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueAssetFactory_NoRegister();
NARRATIVEDIALOGUEEDITOR_API UClass* Z_Construct_UClass_UDialogueBlueprint_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeDialogueEditor();
// End Cross Module References

// Begin Class UDialogueAssetFactory
void UDialogueAssetFactory::StaticRegisterNativesUDialogueAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAssetFactory);
UClass* Z_Construct_UClass_UDialogueAssetFactory_NoRegister()
{
	return UDialogueAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UDialogueAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueAssetFactory.h" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "Category", "Dialogue Asset" },
		{ "Comment", "// End of UFactory interface\n" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
		{ "ToolTip", "End of UFactory interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegacyAsset_MetaData[] = {
		{ "Comment", "//If set, the factory will use this legacy asset as a template for the new asset\n" },
		{ "ModuleRelativePath", "Private/DialogueAssetFactory.h" },
		{ "ToolTip", "If set, the factory will use this legacy asset as a template for the new asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegacyAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAssetFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset = { "LegacyAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueAssetFactory, LegacyAsset), Z_Construct_UClass_UDialogueAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegacyAsset_MetaData), NewProp_LegacyAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAssetFactory_Statics::NewProp_LegacyAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeDialogueEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAssetFactory_Statics::ClassParams = {
	&UDialogueAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueAssetFactory()
{
	if (!Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton, Z_Construct_UClass_UDialogueAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueAssetFactory.OuterSingleton;
}
template<> NARRATIVEDIALOGUEEDITOR_API UClass* StaticClass<UDialogueAssetFactory>()
{
	return UDialogueAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAssetFactory);
UDialogueAssetFactory::~UDialogueAssetFactory() {}
// End Class UDialogueAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAssetFactory, UDialogueAssetFactory::StaticClass, TEXT("UDialogueAssetFactory"), &Z_Registration_Info_UClass_UDialogueAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAssetFactory), 2409064144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_3743140947(TEXT("/Script/NarrativeDialogueEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeDialogueEditor_Private_DialogueAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
