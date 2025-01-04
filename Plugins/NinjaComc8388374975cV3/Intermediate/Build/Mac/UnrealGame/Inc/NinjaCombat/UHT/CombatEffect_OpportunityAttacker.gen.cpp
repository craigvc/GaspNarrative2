// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_OpportunityAttacker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_OpportunityAttacker() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_OpportunityAttacker();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_OpportunityAttacker_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_OpportunityAttacker
void UCombatEffect_OpportunityAttacker::StaticRegisterNativesUCombatEffect_OpportunityAttacker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_OpportunityAttacker);
UClass* Z_Construct_UClass_UCombatEffect_OpportunityAttacker_NoRegister()
{
	return UCombatEffect_OpportunityAttacker::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the Attacker role, in an Opportunity Attack.\n * Applies the Invulnerability Effect by default.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_OpportunityAttacker.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_OpportunityAttacker.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Represents the Attacker role, in an Opportunity Attack.\nApplies the Invulnerability Effect by default." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_OpportunityAttacker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::ClassParams = {
	&UCombatEffect_OpportunityAttacker::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_OpportunityAttacker()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_OpportunityAttacker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_OpportunityAttacker.OuterSingleton, Z_Construct_UClass_UCombatEffect_OpportunityAttacker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_OpportunityAttacker.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_OpportunityAttacker>()
{
	return UCombatEffect_OpportunityAttacker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_OpportunityAttacker);
UCombatEffect_OpportunityAttacker::~UCombatEffect_OpportunityAttacker() {}
// End Class UCombatEffect_OpportunityAttacker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityAttacker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_OpportunityAttacker, UCombatEffect_OpportunityAttacker::StaticClass, TEXT("UCombatEffect_OpportunityAttacker"), &Z_Registration_Info_UClass_UCombatEffect_OpportunityAttacker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_OpportunityAttacker), 4083844521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityAttacker_h_2245744557(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityAttacker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_OpportunityAttacker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
