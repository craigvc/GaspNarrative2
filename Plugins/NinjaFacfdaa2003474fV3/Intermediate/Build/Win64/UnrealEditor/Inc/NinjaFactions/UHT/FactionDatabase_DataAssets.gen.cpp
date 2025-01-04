// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/FactionDatabases/FactionDatabase_DataAssets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionDatabase_DataAssets() {}

// Begin Cross Module References
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionDatabase_DataAssets();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionDatabase_DataAssets_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UFactionDatabase_DataAssets
void UFactionDatabase_DataAssets::StaticRegisterNativesUFactionDatabase_DataAssets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionDatabase_DataAssets);
UClass* Z_Construct_UClass_UFactionDatabase_DataAssets_NoRegister()
{
	return UFactionDatabase_DataAssets::StaticClass();
}
struct Z_Construct_UClass_UFactionDatabase_DataAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Faction Database based on the Asset Manager.\n *\n * It will automatically add all Faction Data Assets to the collection. For this to work properly,\n * make sure that the Primary Data Asset for Factions is properly configured in the Asset Manager.\n */" },
		{ "DisplayName", "Faction Database: Data Assets" },
		{ "IncludePath", "GameFramework/FactionDatabases/FactionDatabase_DataAssets.h" },
		{ "ModuleRelativePath", "Public/GameFramework/FactionDatabases/FactionDatabase_DataAssets.h" },
		{ "ToolTip", "Faction Database based on the Asset Manager.\n\nIt will automatically add all Faction Data Assets to the collection. For this to work properly,\nmake sure that the Primary Data Asset for Factions is properly configured in the Asset Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Comment", "/** All Factions loaded into this database. */" },
		{ "ModuleRelativePath", "Public/GameFramework/FactionDatabases/FactionDatabase_DataAssets.h" },
		{ "ToolTip", "All Factions loaded into this database." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionDatabase_DataAssets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::NewProp_Factions_Inner = { "Factions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactionDatabase_DataAssets, Factions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::NewProp_Factions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::NewProp_Factions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaFactionDatabase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::ClassParams = {
	&UFactionDatabase_DataAssets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionDatabase_DataAssets()
{
	if (!Z_Registration_Info_UClass_UFactionDatabase_DataAssets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionDatabase_DataAssets.OuterSingleton, Z_Construct_UClass_UFactionDatabase_DataAssets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionDatabase_DataAssets.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UFactionDatabase_DataAssets>()
{
	return UFactionDatabase_DataAssets::StaticClass();
}
UFactionDatabase_DataAssets::UFactionDatabase_DataAssets() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionDatabase_DataAssets);
UFactionDatabase_DataAssets::~UFactionDatabase_DataAssets() {}
// End Class UFactionDatabase_DataAssets

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionDatabases_FactionDatabase_DataAssets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionDatabase_DataAssets, UFactionDatabase_DataAssets::StaticClass, TEXT("UFactionDatabase_DataAssets"), &Z_Registration_Info_UClass_UFactionDatabase_DataAssets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionDatabase_DataAssets), 3460083179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionDatabases_FactionDatabase_DataAssets_h_2817562969(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionDatabases_FactionDatabase_DataAssets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionDatabases_FactionDatabase_DataAssets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
