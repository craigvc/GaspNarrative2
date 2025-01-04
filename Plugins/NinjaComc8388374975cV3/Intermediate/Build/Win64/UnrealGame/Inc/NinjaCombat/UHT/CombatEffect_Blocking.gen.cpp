// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_Blocking.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_Blocking() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Blocking();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Blocking_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_Blocking
void UCombatEffect_Blocking::StaticRegisterNativesUCombatEffect_Blocking()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_Blocking);
UClass* Z_Construct_UClass_UCombatEffect_Blocking_NoRegister()
{
	return UCombatEffect_Blocking::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_Blocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds the blocking state.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_Blocking.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Blocking.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Adds the blocking state." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_Blocking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_Blocking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Blocking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_Blocking_Statics::ClassParams = {
	&UCombatEffect_Blocking::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Blocking_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_Blocking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_Blocking()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_Blocking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_Blocking.OuterSingleton, Z_Construct_UClass_UCombatEffect_Blocking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_Blocking.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_Blocking>()
{
	return UCombatEffect_Blocking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_Blocking);
UCombatEffect_Blocking::~UCombatEffect_Blocking() {}
// End Class UCombatEffect_Blocking

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Blocking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_Blocking, UCombatEffect_Blocking::StaticClass, TEXT("UCombatEffect_Blocking"), &Z_Registration_Info_UClass_UCombatEffect_Blocking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_Blocking), 1276436513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Blocking_h_3138553165(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Blocking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Blocking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
