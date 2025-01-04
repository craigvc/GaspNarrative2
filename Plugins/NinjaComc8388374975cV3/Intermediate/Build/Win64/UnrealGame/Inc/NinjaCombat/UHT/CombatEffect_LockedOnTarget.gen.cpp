// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_LockedOnTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_LockedOnTarget() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_LockedOnTarget();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_LockedOnTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_LockedOnTarget
void UCombatEffect_LockedOnTarget::StaticRegisterNativesUCombatEffect_LockedOnTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_LockedOnTarget);
UClass* Z_Construct_UClass_UCombatEffect_LockedOnTarget_NoRegister()
{
	return UCombatEffect_LockedOnTarget::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds the locked on target state.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_LockedOnTarget.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_LockedOnTarget.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Adds the locked on target state." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_LockedOnTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::ClassParams = {
	&UCombatEffect_LockedOnTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_LockedOnTarget()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_LockedOnTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_LockedOnTarget.OuterSingleton, Z_Construct_UClass_UCombatEffect_LockedOnTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_LockedOnTarget.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_LockedOnTarget>()
{
	return UCombatEffect_LockedOnTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_LockedOnTarget);
UCombatEffect_LockedOnTarget::~UCombatEffect_LockedOnTarget() {}
// End Class UCombatEffect_LockedOnTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LockedOnTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_LockedOnTarget, UCombatEffect_LockedOnTarget::StaticClass, TEXT("UCombatEffect_LockedOnTarget"), &Z_Registration_Info_UClass_UCombatEffect_LockedOnTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_LockedOnTarget), 1083845586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LockedOnTarget_h_3463234497(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LockedOnTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_LockedOnTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
