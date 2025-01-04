// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_RecoverPoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_RecoverPoise() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RecoverPoise();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RecoverPoise_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_RecoverPoise
void UCombatEffect_RecoverPoise::StaticRegisterNativesUCombatEffect_RecoverPoise()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_RecoverPoise);
UClass* Z_Construct_UClass_UCombatEffect_RecoverPoise_NoRegister()
{
	return UCombatEffect_RecoverPoise::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Recovers poise, removing current stagger progress.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_RecoverPoise.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_RecoverPoise.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Recovers poise, removing current stagger progress." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_RecoverPoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::ClassParams = {
	&UCombatEffect_RecoverPoise::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_RecoverPoise()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_RecoverPoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_RecoverPoise.OuterSingleton, Z_Construct_UClass_UCombatEffect_RecoverPoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_RecoverPoise.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_RecoverPoise>()
{
	return UCombatEffect_RecoverPoise::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_RecoverPoise);
UCombatEffect_RecoverPoise::~UCombatEffect_RecoverPoise() {}
// End Class UCombatEffect_RecoverPoise

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoise_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_RecoverPoise, UCombatEffect_RecoverPoise::StaticClass, TEXT("UCombatEffect_RecoverPoise"), &Z_Registration_Info_UClass_UCombatEffect_RecoverPoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_RecoverPoise), 1377523959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoise_h_121731658(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoise_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
