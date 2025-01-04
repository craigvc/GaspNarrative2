// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/Executions/CombatExecution_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatExecution_Damage() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatExecution_Damage();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatExecution_Damage_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatExecution_Damage
void UCombatExecution_Damage::StaticRegisterNativesUCombatExecution_Damage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatExecution_Damage);
UClass* Z_Construct_UClass_UCombatExecution_Damage_NoRegister()
{
	return UCombatExecution_Damage::StaticClass();
}
struct Z_Construct_UClass_UCombatExecution_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Calculates the damage to apply, considering the source's critical modifier and the target's damage mitigation.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/Executions/CombatExecution_Damage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Executions/CombatExecution_Damage.h" },
		{ "ToolTip", "Calculates the damage to apply, considering the source's critical modifier and the target's damage mitigation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatExecution_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatExecution_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatExecution_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatExecution_Damage_Statics::ClassParams = {
	&UCombatExecution_Damage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatExecution_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatExecution_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatExecution_Damage()
{
	if (!Z_Registration_Info_UClass_UCombatExecution_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatExecution_Damage.OuterSingleton, Z_Construct_UClass_UCombatExecution_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatExecution_Damage.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatExecution_Damage>()
{
	return UCombatExecution_Damage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatExecution_Damage);
UCombatExecution_Damage::~UCombatExecution_Damage() {}
// End Class UCombatExecution_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Executions_CombatExecution_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatExecution_Damage, UCombatExecution_Damage::StaticClass, TEXT("UCombatExecution_Damage"), &Z_Registration_Info_UClass_UCombatExecution_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatExecution_Damage), 2716176112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Executions_CombatExecution_Damage_h_697080081(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Executions_CombatExecution_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Executions_CombatExecution_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
