// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_RecoverPoiseImmediately.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_RecoverPoiseImmediately() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_RecoverPoiseImmediately
void UCombatEffect_RecoverPoiseImmediately::StaticRegisterNativesUCombatEffect_RecoverPoiseImmediately()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_RecoverPoiseImmediately);
UClass* Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_NoRegister()
{
	return UCombatEffect_RecoverPoiseImmediately::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Recovers poise immediately, usually after a stagger effect ends.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_RecoverPoiseImmediately.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_RecoverPoiseImmediately.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Recovers poise immediately, usually after a stagger effect ends." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_RecoverPoiseImmediately>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::ClassParams = {
	&UCombatEffect_RecoverPoiseImmediately::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_RecoverPoiseImmediately.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_RecoverPoiseImmediately.OuterSingleton, Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_RecoverPoiseImmediately.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_RecoverPoiseImmediately>()
{
	return UCombatEffect_RecoverPoiseImmediately::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_RecoverPoiseImmediately);
UCombatEffect_RecoverPoiseImmediately::~UCombatEffect_RecoverPoiseImmediately() {}
// End Class UCombatEffect_RecoverPoiseImmediately

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoiseImmediately_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_RecoverPoiseImmediately, UCombatEffect_RecoverPoiseImmediately::StaticClass, TEXT("UCombatEffect_RecoverPoiseImmediately"), &Z_Registration_Info_UClass_UCombatEffect_RecoverPoiseImmediately, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_RecoverPoiseImmediately), 2330227126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoiseImmediately_h_175581884(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoiseImmediately_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_RecoverPoiseImmediately_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
