// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_FatalDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_FatalDamage() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_FatalDamage();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_FatalDamage_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_FatalDamage
void UCombatEffect_FatalDamage::StaticRegisterNativesUCombatEffect_FatalDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_FatalDamage);
UClass* Z_Construct_UClass_UCombatEffect_FatalDamage_NoRegister()
{
	return UCombatEffect_FatalDamage::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_FatalDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A damage effect that is always fatal.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_FatalDamage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_FatalDamage.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "A damage effect that is always fatal." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_FatalDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::ClassParams = {
	&UCombatEffect_FatalDamage::StaticClass,
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
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_FatalDamage()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_FatalDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_FatalDamage.OuterSingleton, Z_Construct_UClass_UCombatEffect_FatalDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_FatalDamage.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_FatalDamage>()
{
	return UCombatEffect_FatalDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_FatalDamage);
UCombatEffect_FatalDamage::~UCombatEffect_FatalDamage() {}
// End Class UCombatEffect_FatalDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_FatalDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_FatalDamage, UCombatEffect_FatalDamage::StaticClass, TEXT("UCombatEffect_FatalDamage"), &Z_Registration_Info_UClass_UCombatEffect_FatalDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_FatalDamage), 1259822470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_FatalDamage_h_2140630561(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_FatalDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_FatalDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
