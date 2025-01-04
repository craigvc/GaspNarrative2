// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_EvadeCooldown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_EvadeCooldown() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_EvadeCooldown();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_EvadeCooldown_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_EvadeCooldown
void UCombatEffect_EvadeCooldown::StaticRegisterNativesUCombatEffect_EvadeCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_EvadeCooldown);
UClass* Z_Construct_UClass_UCombatEffect_EvadeCooldown_NoRegister()
{
	return UCombatEffect_EvadeCooldown::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies the cooldown for an evade, based on the backing attribute.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_EvadeCooldown.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_EvadeCooldown.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Applies the cooldown for an evade, based on the backing attribute." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_EvadeCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::ClassParams = {
	&UCombatEffect_EvadeCooldown::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_EvadeCooldown()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_EvadeCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_EvadeCooldown.OuterSingleton, Z_Construct_UClass_UCombatEffect_EvadeCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_EvadeCooldown.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_EvadeCooldown>()
{
	return UCombatEffect_EvadeCooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_EvadeCooldown);
UCombatEffect_EvadeCooldown::~UCombatEffect_EvadeCooldown() {}
// End Class UCombatEffect_EvadeCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_EvadeCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_EvadeCooldown, UCombatEffect_EvadeCooldown::StaticClass, TEXT("UCombatEffect_EvadeCooldown"), &Z_Registration_Info_UClass_UCombatEffect_EvadeCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_EvadeCooldown), 2838314463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_EvadeCooldown_h_2274682047(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_EvadeCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_EvadeCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
