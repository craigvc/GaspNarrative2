// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventoryEditor/Private/NarrativeItemBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeItemBlueprintFactory() {}

// Begin Cross Module References
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UItemCollectionFactory();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UItemCollectionFactory_NoRegister();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeInventoryEditor();
// End Cross Module References

// Begin Class UNarrativeItemBlueprintFactory
void UNarrativeItemBlueprintFactory::StaticRegisterNativesUNarrativeItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeItemBlueprintFactory);
UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory_NoRegister()
{
	return UNarrativeItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new NarrativeItemBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NarrativeItemBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/NarrativeItemBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new NarrativeItemBlueprint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::ClassParams = {
	&UNarrativeItemBlueprintFactory::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEINVENTORYEDITOR_API UClass* StaticClass<UNarrativeItemBlueprintFactory>()
{
	return UNarrativeItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeItemBlueprintFactory);
UNarrativeItemBlueprintFactory::~UNarrativeItemBlueprintFactory() {}
// End Class UNarrativeItemBlueprintFactory

// Begin Class UItemCollectionFactory
void UItemCollectionFactory::StaticRegisterNativesUItemCollectionFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemCollectionFactory);
UClass* Z_Construct_UClass_UItemCollectionFactory_NoRegister()
{
	return UItemCollectionFactory::StaticClass();
}
struct Z_Construct_UClass_UItemCollectionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NarrativeItemBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/NarrativeItemBlueprintFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemCollectionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemCollectionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollectionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemCollectionFactory_Statics::ClassParams = {
	&UItemCollectionFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemCollectionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemCollectionFactory()
{
	if (!Z_Registration_Info_UClass_UItemCollectionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemCollectionFactory.OuterSingleton, Z_Construct_UClass_UItemCollectionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemCollectionFactory.OuterSingleton;
}
template<> NARRATIVEINVENTORYEDITOR_API UClass* StaticClass<UItemCollectionFactory>()
{
	return UItemCollectionFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemCollectionFactory);
UItemCollectionFactory::~UItemCollectionFactory() {}
// End Class UItemCollectionFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeItemBlueprintFactory, UNarrativeItemBlueprintFactory::StaticClass, TEXT("UNarrativeItemBlueprintFactory"), &Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeItemBlueprintFactory), 2003338654U) },
		{ Z_Construct_UClass_UItemCollectionFactory, UItemCollectionFactory::StaticClass, TEXT("UItemCollectionFactory"), &Z_Registration_Info_UClass_UItemCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemCollectionFactory), 2132167162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_3809241155(TEXT("/Script/NarrativeInventoryEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
