// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_BlockCooldown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_BlockCooldown() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_BlockCooldown();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_BlockCooldown_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_BlockCooldown
void UCombatEffect_BlockCooldown::StaticRegisterNativesUCombatEffect_BlockCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_BlockCooldown);
UClass* Z_Construct_UClass_UCombatEffect_BlockCooldown_NoRegister()
{
	return UCombatEffect_BlockCooldown::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies the cooldown for blocking, based on the backing attribute.\n * This usually applies as a penalty from a breaker hit.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_BlockCooldown.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_BlockCooldown.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Applies the cooldown for blocking, based on the backing attribute.\nThis usually applies as a penalty from a breaker hit." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_BlockCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::ClassParams = {
	&UCombatEffect_BlockCooldown::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_BlockCooldown()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_BlockCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_BlockCooldown.OuterSingleton, Z_Construct_UClass_UCombatEffect_BlockCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_BlockCooldown.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_BlockCooldown>()
{
	return UCombatEffect_BlockCooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_BlockCooldown);
UCombatEffect_BlockCooldown::~UCombatEffect_BlockCooldown() {}
// End Class UCombatEffect_BlockCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_BlockCooldown, UCombatEffect_BlockCooldown::StaticClass, TEXT("UCombatEffect_BlockCooldown"), &Z_Registration_Info_UClass_UCombatEffect_BlockCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_BlockCooldown), 4240065104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCooldown_h_1496763923(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_BlockCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
