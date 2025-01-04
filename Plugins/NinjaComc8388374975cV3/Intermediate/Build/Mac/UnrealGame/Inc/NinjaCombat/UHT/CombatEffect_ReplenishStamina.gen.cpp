// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_ReplenishStamina.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_ReplenishStamina() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ReplenishStamina();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ReplenishStamina_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_ReplenishStamina
void UCombatEffect_ReplenishStamina::StaticRegisterNativesUCombatEffect_ReplenishStamina()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_ReplenishStamina);
UClass* Z_Construct_UClass_UCombatEffect_ReplenishStamina_NoRegister()
{
	return UCombatEffect_ReplenishStamina::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replenishes Stamina based on the backing attribute.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_ReplenishStamina.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_ReplenishStamina.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Replenishes Stamina based on the backing attribute." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_ReplenishStamina>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::ClassParams = {
	&UCombatEffect_ReplenishStamina::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_ReplenishStamina()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_ReplenishStamina.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_ReplenishStamina.OuterSingleton, Z_Construct_UClass_UCombatEffect_ReplenishStamina_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_ReplenishStamina.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_ReplenishStamina>()
{
	return UCombatEffect_ReplenishStamina::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_ReplenishStamina);
UCombatEffect_ReplenishStamina::~UCombatEffect_ReplenishStamina() {}
// End Class UCombatEffect_ReplenishStamina

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishStamina_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_ReplenishStamina, UCombatEffect_ReplenishStamina::StaticClass, TEXT("UCombatEffect_ReplenishStamina"), &Z_Registration_Info_UClass_UCombatEffect_ReplenishStamina, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_ReplenishStamina), 385215488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishStamina_h_2694945030(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishStamina_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ReplenishStamina_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
