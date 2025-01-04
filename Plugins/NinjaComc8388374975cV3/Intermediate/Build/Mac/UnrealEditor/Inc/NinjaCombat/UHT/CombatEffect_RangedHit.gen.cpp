// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_RangedHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_RangedHit() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_DamagePoise();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RangedHit();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RangedHit_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_RangedHit
void UCombatEffect_RangedHit::StaticRegisterNativesUCombatEffect_RangedHit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_RangedHit);
UClass* Z_Construct_UClass_UCombatEffect_RangedHit_NoRegister()
{
	return UCombatEffect_RangedHit::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_RangedHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Gameplay Effect that can be used for Ranged Damage.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_RangedHit.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_RangedHit.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Base Gameplay Effect that can be used for Ranged Damage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_RangedHit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_RangedHit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombatEffect_DamagePoise,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RangedHit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_RangedHit_Statics::ClassParams = {
	&UCombatEffect_RangedHit::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RangedHit_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_RangedHit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_RangedHit()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_RangedHit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_RangedHit.OuterSingleton, Z_Construct_UClass_UCombatEffect_RangedHit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_RangedHit.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_RangedHit>()
{
	return UCombatEffect_RangedHit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_RangedHit);
UCombatEffect_RangedHit::~UCombatEffect_RangedHit() {}
// End Class UCombatEffect_RangedHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RangedHit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_RangedHit, UCombatEffect_RangedHit::StaticClass, TEXT("UCombatEffect_RangedHit"), &Z_Registration_Info_UClass_UCombatEffect_RangedHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_RangedHit), 562168526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RangedHit_h_1072753893(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RangedHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RangedHit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
