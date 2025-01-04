// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Blueprints/NinjaFactionDatabaseBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionDatabaseBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabaseBlueprint();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionDatabaseBlueprint
void UNinjaFactionDatabaseBlueprint::StaticRegisterNativesUNinjaFactionDatabaseBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionDatabaseBlueprint);
UClass* Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_NoRegister()
{
	return UNinjaFactionDatabaseBlueprint::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Faction Database determines the strategy to Factions from specific sources, such as a list of assets or a server.\n */" },
		{ "IncludePath", "Blueprints/NinjaFactionDatabaseBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/NinjaFactionDatabaseBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Faction Database determines the strategy to Factions from specific sources, such as a list of assets or a server." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionDatabaseBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::ClassParams = {
	&UNinjaFactionDatabaseBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x019000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionDatabaseBlueprint()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionDatabaseBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionDatabaseBlueprint.OuterSingleton, Z_Construct_UClass_UNinjaFactionDatabaseBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionDatabaseBlueprint.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionDatabaseBlueprint>()
{
	return UNinjaFactionDatabaseBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionDatabaseBlueprint);
UNinjaFactionDatabaseBlueprint::~UNinjaFactionDatabaseBlueprint() {}
// End Class UNinjaFactionDatabaseBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionDatabaseBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionDatabaseBlueprint, UNinjaFactionDatabaseBlueprint::StaticClass, TEXT("UNinjaFactionDatabaseBlueprint"), &Z_Registration_Info_UClass_UNinjaFactionDatabaseBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionDatabaseBlueprint), 2178948125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionDatabaseBlueprint_h_763188155(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionDatabaseBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionDatabaseBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
