// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_DamagePoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_DamagePoise() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Damage();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_DamagePoise();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_DamagePoise_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_DamagePoise
void UCombatEffect_DamagePoise::StaticRegisterNativesUCombatEffect_DamagePoise()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_DamagePoise);
UClass* Z_Construct_UClass_UCombatEffect_DamagePoise_NoRegister()
{
	return UCombatEffect_DamagePoise::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_DamagePoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Damages poise and applies the effect to break recovery.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_DamagePoise.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_DamagePoise.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Damages poise and applies the effect to break recovery." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_DamagePoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombatEffect_Damage,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::ClassParams = {
	&UCombatEffect_DamagePoise::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_DamagePoise()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_DamagePoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_DamagePoise.OuterSingleton, Z_Construct_UClass_UCombatEffect_DamagePoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_DamagePoise.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_DamagePoise>()
{
	return UCombatEffect_DamagePoise::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_DamagePoise);
UCombatEffect_DamagePoise::~UCombatEffect_DamagePoise() {}
// End Class UCombatEffect_DamagePoise

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_DamagePoise_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_DamagePoise, UCombatEffect_DamagePoise::StaticClass, TEXT("UCombatEffect_DamagePoise"), &Z_Registration_Info_UClass_UCombatEffect_DamagePoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_DamagePoise), 3705117120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_DamagePoise_h_4114079206(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_DamagePoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_DamagePoise_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
