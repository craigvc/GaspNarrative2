// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/NinjaFactionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionSettings() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSettings();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionSettings
void UNinjaFactionSettings::StaticRegisterNativesUNinjaFactionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionSettings);
UClass* Z_Construct_UClass_UNinjaFactionSettings_NoRegister()
{
	return UNinjaFactionSettings::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Developer settings for the Ninja Factions plugin.\n */" },
		{ "DisplayName", "Ninja Factions" },
		{ "IncludePath", "NinjaFactionSettings.h" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "ToolTip", "Developer settings for the Ninja Factions plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTeam_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n     * Default Team provided by controllers when unable to obtain a proper one.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "ToolTip", "Default Team provided by controllers when unable to obtain a proper one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttitude_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n     * Default attitude used in case no resolution is possible. \n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "ToolTip", "Default attitude used in case no resolution is possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionDatabaseClass_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n     * Database class for Faction data.\n     *\n     * The Faction Database provides details about each faction that can receive members.\n     * You can either select from default implementations or create your own for specific\n     * purposes (such as a cached database from a backend server).\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "ToolTip", "Database class for Faction data.\n\nThe Faction Database provides details about each faction that can receive members.\nYou can either select from default implementations or create your own for specific\npurposes (such as a cached database from a backend server)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionSolverClass_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n     * Solver class for Faction alignments.\n     *\n     * Depending on your requirements, solving the alignment between factions can be trivial\n     * or complex. Externalizing the Faction Alignment solver allows games to have their\n     * dedicated classes, to determine proper alignment between pawns.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "ToolTip", "Solver class for Faction alignments.\n\nDepending on your requirements, solving the alignment between factions can be trivial\nor complex. Externalizing the Faction Alignment solver allows games to have their\ndedicated classes, to determine proper alignment between pawns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReputationTable_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n     * Reputation table used by solvers that require such values.\n     * Requires a table with rows of type \"FactionReputationTableRow\".\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSettings.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaFactions.FactionReputationTableRow" },
		{ "ToolTip", "Reputation table used by solvers that require such values.\nRequires a table with rows of type \"FactionReputationTableRow\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttitude;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FactionDatabaseClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FactionSolverClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReputationTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_DefaultTeam = { "DefaultTeam", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSettings, DefaultTeam), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTeam_MetaData), NewProp_DefaultTeam_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_DefaultAttitude = { "DefaultAttitude", nullptr, (EPropertyFlags)0x0010000002004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSettings, DefaultAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttitude_MetaData), NewProp_DefaultAttitude_MetaData) }; // 2991328252
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_FactionDatabaseClass = { "FactionDatabaseClass", nullptr, (EPropertyFlags)0x0014000002004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSettings, FactionDatabaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaFactionDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionDatabaseClass_MetaData), NewProp_FactionDatabaseClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_FactionSolverClass = { "FactionSolverClass", nullptr, (EPropertyFlags)0x0014000002004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSettings, FactionSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionSolverClass_MetaData), NewProp_FactionSolverClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_ReputationTable = { "ReputationTable", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSettings, ReputationTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReputationTable_MetaData), NewProp_ReputationTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_DefaultTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_DefaultAttitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_FactionDatabaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_FactionSolverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSettings_Statics::NewProp_ReputationTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionSettings_Statics::ClassParams = {
	&UNinjaFactionSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaFactionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionSettings()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionSettings.OuterSingleton, Z_Construct_UClass_UNinjaFactionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionSettings.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionSettings>()
{
	return UNinjaFactionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionSettings);
UNinjaFactionSettings::~UNinjaFactionSettings() {}
// End Class UNinjaFactionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionSettings, UNinjaFactionSettings::StaticClass, TEXT("UNinjaFactionSettings"), &Z_Registration_Info_UClass_UNinjaFactionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionSettings), 235031348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSettings_h_1015321179(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
