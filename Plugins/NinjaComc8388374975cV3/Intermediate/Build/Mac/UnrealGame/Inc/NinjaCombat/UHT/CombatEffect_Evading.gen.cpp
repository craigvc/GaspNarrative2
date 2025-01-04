// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_Evading.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_Evading() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Evading();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Evading_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_Evading
void UCombatEffect_Evading::StaticRegisterNativesUCombatEffect_Evading()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_Evading);
UClass* Z_Construct_UClass_UCombatEffect_Evading_NoRegister()
{
	return UCombatEffect_Evading::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_Evading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds the evading state, which can be used for things like blocking stamina regeneration.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_Evading.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Evading.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Adds the evading state, which can be used for things like blocking stamina regeneration." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_Evading>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_Evading_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Evading_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_Evading_Statics::ClassParams = {
	&UCombatEffect_Evading::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Evading_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_Evading_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_Evading()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_Evading.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_Evading.OuterSingleton, Z_Construct_UClass_UCombatEffect_Evading_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_Evading.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_Evading>()
{
	return UCombatEffect_Evading::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_Evading);
UCombatEffect_Evading::~UCombatEffect_Evading() {}
// End Class UCombatEffect_Evading

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Evading_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_Evading, UCombatEffect_Evading::StaticClass, TEXT("UCombatEffect_Evading"), &Z_Registration_Info_UClass_UCombatEffect_Evading, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_Evading), 2184899572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Evading_h_661825481(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Evading_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Evading_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
