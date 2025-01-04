// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/Calculations/CombatCalculation_LastStandHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCalculation_LastStandHealth() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatCalculation_LastStandHealth();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatCalculation_LastStandHealth_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatCalculation_LastStandHealth
void UCombatCalculation_LastStandHealth::StaticRegisterNativesUCombatCalculation_LastStandHealth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatCalculation_LastStandHealth);
UClass* Z_Construct_UClass_UCombatCalculation_LastStandHealth_NoRegister()
{
	return UCombatCalculation_LastStandHealth::StaticClass();
}
struct Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Calculates how much health should be granted when a Last Stand happens.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/Calculations/CombatCalculation_LastStandHealth.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Calculations/CombatCalculation_LastStandHealth.h" },
		{ "ToolTip", "Calculates how much health should be granted when a Last Stand happens." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatCalculation_LastStandHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::ClassParams = {
	&UCombatCalculation_LastStandHealth::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatCalculation_LastStandHealth()
{
	if (!Z_Registration_Info_UClass_UCombatCalculation_LastStandHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatCalculation_LastStandHealth.OuterSingleton, Z_Construct_UClass_UCombatCalculation_LastStandHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatCalculation_LastStandHealth.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatCalculation_LastStandHealth>()
{
	return UCombatCalculation_LastStandHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCalculation_LastStandHealth);
UCombatCalculation_LastStandHealth::~UCombatCalculation_LastStandHealth() {}
// End Class UCombatCalculation_LastStandHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Calculations_CombatCalculation_LastStandHealth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatCalculation_LastStandHealth, UCombatCalculation_LastStandHealth::StaticClass, TEXT("UCombatCalculation_LastStandHealth"), &Z_Registration_Info_UClass_UCombatCalculation_LastStandHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatCalculation_LastStandHealth), 1512219178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Calculations_CombatCalculation_LastStandHealth_h_1777800657(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Calculations_CombatCalculation_LastStandHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Calculations_CombatCalculation_LastStandHealth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
