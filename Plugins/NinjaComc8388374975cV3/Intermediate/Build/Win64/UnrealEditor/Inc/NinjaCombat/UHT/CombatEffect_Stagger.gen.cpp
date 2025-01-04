// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_Stagger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_Stagger() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Stagger();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Stagger_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_Stagger
void UCombatEffect_Stagger::StaticRegisterNativesUCombatEffect_Stagger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_Stagger);
UClass* Z_Construct_UClass_UCombatEffect_Stagger_NoRegister()
{
	return UCombatEffect_Stagger::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_Stagger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the Stagger state, which can be used to activate the Stagger Ability.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_Stagger.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Stagger.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Represents the Stagger state, which can be used to activate the Stagger Ability." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_Stagger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_Stagger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Stagger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_Stagger_Statics::ClassParams = {
	&UCombatEffect_Stagger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Stagger_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_Stagger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_Stagger()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_Stagger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_Stagger.OuterSingleton, Z_Construct_UClass_UCombatEffect_Stagger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_Stagger.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_Stagger>()
{
	return UCombatEffect_Stagger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_Stagger);
UCombatEffect_Stagger::~UCombatEffect_Stagger() {}
// End Class UCombatEffect_Stagger

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Stagger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_Stagger, UCombatEffect_Stagger::StaticClass, TEXT("UCombatEffect_Stagger"), &Z_Registration_Info_UClass_UCombatEffect_Stagger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_Stagger), 10600463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Stagger_h_2858938100(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Stagger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Stagger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
