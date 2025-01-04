// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_LastStand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_LastStand() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_LastStand();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_LastStand_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_LastStand
void UCombatEffect_LastStand::StaticRegisterNativesUCombatEffect_LastStand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_LastStand);
UClass* Z_Construct_UClass_UCombatEffect_LastStand_NoRegister()
{
	return UCombatEffect_LastStand::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_LastStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Decreases the Last Stand Count and updates the Current Health.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_LastStand.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_LastStand.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Decreases the Last Stand Count and updates the Current Health." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_LastStand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_LastStand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_LastStand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_LastStand_Statics::ClassParams = {
	&UCombatEffect_LastStand::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_LastStand_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_LastStand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_LastStand()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_LastStand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_LastStand.OuterSingleton, Z_Construct_UClass_UCombatEffect_LastStand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_LastStand.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_LastStand>()
{
	return UCombatEffect_LastStand::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_LastStand);
UCombatEffect_LastStand::~UCombatEffect_LastStand() {}
// End Class UCombatEffect_LastStand

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LastStand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_LastStand, UCombatEffect_LastStand::StaticClass, TEXT("UCombatEffect_LastStand"), &Z_Registration_Info_UClass_UCombatEffect_LastStand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_LastStand), 4136205880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LastStand_h_1502503903(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LastStand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LastStand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
