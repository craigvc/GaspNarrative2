// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_BlockCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_BlockCost() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_BlockCost();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_BlockCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_BlockCost
void UCombatEffect_BlockCost::StaticRegisterNativesUCombatEffect_BlockCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_BlockCost);
UClass* Z_Construct_UClass_UCombatEffect_BlockCost_NoRegister()
{
	return UCombatEffect_BlockCost::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_BlockCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Minimum cost to start blocking.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_BlockCost.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_BlockCost.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Minimum cost to start blocking." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_BlockCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_BlockCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_BlockCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_BlockCost_Statics::ClassParams = {
	&UCombatEffect_BlockCost::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_BlockCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_BlockCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_BlockCost()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_BlockCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_BlockCost.OuterSingleton, Z_Construct_UClass_UCombatEffect_BlockCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_BlockCost.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_BlockCost>()
{
	return UCombatEffect_BlockCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_BlockCost);
UCombatEffect_BlockCost::~UCombatEffect_BlockCost() {}
// End Class UCombatEffect_BlockCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_BlockCost, UCombatEffect_BlockCost::StaticClass, TEXT("UCombatEffect_BlockCost"), &Z_Registration_Info_UClass_UCombatEffect_BlockCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_BlockCost), 3729456672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCost_h_312271399(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
