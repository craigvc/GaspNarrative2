// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_MeleeHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_MeleeHit() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_DamagePoise();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_MeleeHit();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_MeleeHit_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_MeleeHit
void UCombatEffect_MeleeHit::StaticRegisterNativesUCombatEffect_MeleeHit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_MeleeHit);
UClass* Z_Construct_UClass_UCombatEffect_MeleeHit_NoRegister()
{
	return UCombatEffect_MeleeHit::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_MeleeHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Gameplay Effect that can be used for Melee Damage.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_MeleeHit.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_MeleeHit.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Base Gameplay Effect that can be used for Melee Damage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_MeleeHit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombatEffect_DamagePoise,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::ClassParams = {
	&UCombatEffect_MeleeHit::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_MeleeHit()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_MeleeHit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_MeleeHit.OuterSingleton, Z_Construct_UClass_UCombatEffect_MeleeHit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_MeleeHit.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_MeleeHit>()
{
	return UCombatEffect_MeleeHit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_MeleeHit);
UCombatEffect_MeleeHit::~UCombatEffect_MeleeHit() {}
// End Class UCombatEffect_MeleeHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_MeleeHit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_MeleeHit, UCombatEffect_MeleeHit::StaticClass, TEXT("UCombatEffect_MeleeHit"), &Z_Registration_Info_UClass_UCombatEffect_MeleeHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_MeleeHit), 1345324725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_MeleeHit_h_1795783207(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_MeleeHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_MeleeHit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
