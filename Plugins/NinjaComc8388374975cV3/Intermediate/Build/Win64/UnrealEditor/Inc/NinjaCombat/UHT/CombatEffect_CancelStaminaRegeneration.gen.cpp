// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_CancelStaminaRegeneration() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_CancelStaminaRegeneration
void UCombatEffect_CancelStaminaRegeneration::StaticRegisterNativesUCombatEffect_CancelStaminaRegeneration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_CancelStaminaRegeneration);
UClass* Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_NoRegister()
{
	return UCombatEffect_CancelStaminaRegeneration::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cancels stamina regeneration for a certain amount of time.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Cancels stamina regeneration for a certain amount of time." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_CancelStaminaRegeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::ClassParams = {
	&UCombatEffect_CancelStaminaRegeneration::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_CancelStaminaRegeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_CancelStaminaRegeneration.OuterSingleton, Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_CancelStaminaRegeneration.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_CancelStaminaRegeneration>()
{
	return UCombatEffect_CancelStaminaRegeneration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_CancelStaminaRegeneration);
UCombatEffect_CancelStaminaRegeneration::~UCombatEffect_CancelStaminaRegeneration() {}
// End Class UCombatEffect_CancelStaminaRegeneration

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelStaminaRegeneration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_CancelStaminaRegeneration, UCombatEffect_CancelStaminaRegeneration::StaticClass, TEXT("UCombatEffect_CancelStaminaRegeneration"), &Z_Registration_Info_UClass_UCombatEffect_CancelStaminaRegeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_CancelStaminaRegeneration), 199949254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelStaminaRegeneration_h_1503874254(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelStaminaRegeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelStaminaRegeneration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
