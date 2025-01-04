// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/FactionSolvers/FactionSolver_TargetReputation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionSolver_TargetReputation() {}

// Begin Cross Module References
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSolver_TargetReputation();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSolver_TargetReputation_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UFactionSolver_TargetReputation
void UFactionSolver_TargetReputation::StaticRegisterNativesUFactionSolver_TargetReputation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionSolver_TargetReputation);
UClass* Z_Construct_UClass_UFactionSolver_TargetReputation_NoRegister()
{
	return UFactionSolver_TargetReputation::StaticClass();
}
struct Z_Construct_UClass_UFactionSolver_TargetReputation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Attitude Solver that considers a target's reputation for the source's main faction.\n *\n * This considers the reputation table considered in the Faction Settings Page and whatever\n * Backing Attribute is configured for that faction on the target.\n */" },
		{ "DisplayName", "Faction Attitude Solver: Target Reputation" },
		{ "IncludePath", "GameFramework/FactionSolvers/FactionSolver_TargetReputation.h" },
		{ "ModuleRelativePath", "Public/GameFramework/FactionSolvers/FactionSolver_TargetReputation.h" },
		{ "ToolTip", "Attitude Solver that considers a target's reputation for the source's main faction.\n\nThis considers the reputation table considered in the Faction Settings Page and whatever\nBacking Attribute is configured for that faction on the target." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionSolver_TargetReputation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaFactionAttitudeSolver,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::ClassParams = {
	&UFactionSolver_TargetReputation::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionSolver_TargetReputation()
{
	if (!Z_Registration_Info_UClass_UFactionSolver_TargetReputation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionSolver_TargetReputation.OuterSingleton, Z_Construct_UClass_UFactionSolver_TargetReputation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionSolver_TargetReputation.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UFactionSolver_TargetReputation>()
{
	return UFactionSolver_TargetReputation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionSolver_TargetReputation);
UFactionSolver_TargetReputation::~UFactionSolver_TargetReputation() {}
// End Class UFactionSolver_TargetReputation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_TargetReputation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionSolver_TargetReputation, UFactionSolver_TargetReputation::StaticClass, TEXT("UFactionSolver_TargetReputation"), &Z_Registration_Info_UClass_UFactionSolver_TargetReputation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionSolver_TargetReputation), 1180457166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_TargetReputation_h_4124033012(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_TargetReputation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_FactionSolvers_FactionSolver_TargetReputation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
