// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_ReplenishHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_ReplenishHealth() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ReplenishHealth();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ReplenishHealth_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_ReplenishHealth
void UCombatEffect_ReplenishHealth::StaticRegisterNativesUCombatEffect_ReplenishHealth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_ReplenishHealth);
UClass* Z_Construct_UClass_UCombatEffect_ReplenishHealth_NoRegister()
{
	return UCombatEffect_ReplenishHealth::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replenishes Health based on the backing attribute.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_ReplenishHealth.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_ReplenishHealth.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Replenishes Health based on the backing attribute." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_ReplenishHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::ClassParams = {
	&UCombatEffect_ReplenishHealth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_ReplenishHealth()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_ReplenishHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_ReplenishHealth.OuterSingleton, Z_Construct_UClass_UCombatEffect_ReplenishHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_ReplenishHealth.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_ReplenishHealth>()
{
	return UCombatEffect_ReplenishHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_ReplenishHealth);
UCombatEffect_ReplenishHealth::~UCombatEffect_ReplenishHealth() {}
// End Class UCombatEffect_ReplenishHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishHealth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_ReplenishHealth, UCombatEffect_ReplenishHealth::StaticClass, TEXT("UCombatEffect_ReplenishHealth"), &Z_Registration_Info_UClass_UCombatEffect_ReplenishHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_ReplenishHealth), 3202281915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishHealth_h_2913158936(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishHealth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
