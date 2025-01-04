// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_CancelPoiseRecovery() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_CancelPoiseRecovery
void UCombatEffect_CancelPoiseRecovery::StaticRegisterNativesUCombatEffect_CancelPoiseRecovery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_CancelPoiseRecovery);
UClass* Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_NoRegister()
{
	return UCombatEffect_CancelPoiseRecovery::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Temporarily cancels Poise regeneration. \n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_CancelPoiseRecovery.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Temporarily cancels Poise regeneration." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_CancelPoiseRecovery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::ClassParams = {
	&UCombatEffect_CancelPoiseRecovery::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_CancelPoiseRecovery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_CancelPoiseRecovery.OuterSingleton, Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_CancelPoiseRecovery.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_CancelPoiseRecovery>()
{
	return UCombatEffect_CancelPoiseRecovery::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_CancelPoiseRecovery);
UCombatEffect_CancelPoiseRecovery::~UCombatEffect_CancelPoiseRecovery() {}
// End Class UCombatEffect_CancelPoiseRecovery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelPoiseRecovery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_CancelPoiseRecovery, UCombatEffect_CancelPoiseRecovery::StaticClass, TEXT("UCombatEffect_CancelPoiseRecovery"), &Z_Registration_Info_UClass_UCombatEffect_CancelPoiseRecovery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_CancelPoiseRecovery), 2693400251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelPoiseRecovery_h_2585040014(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelPoiseRecovery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelPoiseRecovery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
