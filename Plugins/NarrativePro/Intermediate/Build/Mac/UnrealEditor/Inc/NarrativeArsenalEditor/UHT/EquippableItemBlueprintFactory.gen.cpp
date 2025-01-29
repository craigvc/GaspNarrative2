// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalEditor/Private/EquippableItemBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippableItemBlueprintFactory() {}

// Begin Cross Module References
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UClothingItemBlueprintFactory();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UClothingItemBlueprintFactory_NoRegister();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UEquippableItemBlueprintFactory();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UEquippableItemBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalEditor();
// End Cross Module References

// Begin Class UEquippableItemBlueprintFactory
void UEquippableItemBlueprintFactory::StaticRegisterNativesUEquippableItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquippableItemBlueprintFactory);
UClass* Z_Construct_UClass_UEquippableItemBlueprintFactory_NoRegister()
{
	return UEquippableItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new NarrativeEquippableBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EquippableItemBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/EquippableItemBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new NarrativeEquippableBlueprint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::ClassParams = {
	&UEquippableItemBlueprintFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquippableItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UEquippableItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquippableItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UEquippableItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquippableItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UEquippableItemBlueprintFactory>()
{
	return UEquippableItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableItemBlueprintFactory);
UEquippableItemBlueprintFactory::~UEquippableItemBlueprintFactory() {}
// End Class UEquippableItemBlueprintFactory

// Begin Class UClothingItemBlueprintFactory
void UClothingItemBlueprintFactory::StaticRegisterNativesUClothingItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingItemBlueprintFactory);
UClass* Z_Construct_UClass_UClothingItemBlueprintFactory_NoRegister()
{
	return UClothingItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UClothingItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new NarrativeClothingBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EquippableItemBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/EquippableItemBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new NarrativeClothingBlueprint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::ClassParams = {
	&UClothingItemBlueprintFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UClothingItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UClothingItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UClothingItemBlueprintFactory>()
{
	return UClothingItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingItemBlueprintFactory);
UClothingItemBlueprintFactory::~UClothingItemBlueprintFactory() {}
// End Class UClothingItemBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquippableItemBlueprintFactory, UEquippableItemBlueprintFactory::StaticClass, TEXT("UEquippableItemBlueprintFactory"), &Z_Registration_Info_UClass_UEquippableItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableItemBlueprintFactory), 2699852474U) },
		{ Z_Construct_UClass_UClothingItemBlueprintFactory, UClothingItemBlueprintFactory::StaticClass, TEXT("UClothingItemBlueprintFactory"), &Z_Registration_Info_UClass_UClothingItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingItemBlueprintFactory), 797462342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprintFactory_h_959170119(TEXT("/Script/NarrativeArsenalEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Private_EquippableItemBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
