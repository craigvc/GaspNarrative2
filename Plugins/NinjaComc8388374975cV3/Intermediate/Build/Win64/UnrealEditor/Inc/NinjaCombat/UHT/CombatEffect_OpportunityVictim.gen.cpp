// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_OpportunityVictim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_OpportunityVictim() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_OpportunityVictim();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_OpportunityVictim_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_OpportunityVictim
void UCombatEffect_OpportunityVictim::StaticRegisterNativesUCombatEffect_OpportunityVictim()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_OpportunityVictim);
UClass* Z_Construct_UClass_UCombatEffect_OpportunityVictim_NoRegister()
{
	return UCombatEffect_OpportunityVictim::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the Victim role, in an Opportunity Attack. \n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_OpportunityVictim.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_OpportunityVictim.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Represents the Victim role, in an Opportunity Attack." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_OpportunityVictim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::ClassParams = {
	&UCombatEffect_OpportunityVictim::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_OpportunityVictim()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_OpportunityVictim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_OpportunityVictim.OuterSingleton, Z_Construct_UClass_UCombatEffect_OpportunityVictim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_OpportunityVictim.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_OpportunityVictim>()
{
	return UCombatEffect_OpportunityVictim::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_OpportunityVictim);
UCombatEffect_OpportunityVictim::~UCombatEffect_OpportunityVictim() {}
// End Class UCombatEffect_OpportunityVictim

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityVictim_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_OpportunityVictim, UCombatEffect_OpportunityVictim::StaticClass, TEXT("UCombatEffect_OpportunityVictim"), &Z_Registration_Info_UClass_UCombatEffect_OpportunityVictim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_OpportunityVictim), 3346974053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityVictim_h_451673140(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityVictim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityVictim_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
