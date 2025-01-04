// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_CancelMagicRegeneration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_CancelMagicRegeneration() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_CancelMagicRegeneration
void UCombatEffect_CancelMagicRegeneration::StaticRegisterNativesUCombatEffect_CancelMagicRegeneration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_CancelMagicRegeneration);
UClass* Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_NoRegister()
{
	return UCombatEffect_CancelMagicRegeneration::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cancels magic regeneration for a certain amount of time.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_CancelMagicRegeneration.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_CancelMagicRegeneration.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Cancels magic regeneration for a certain amount of time." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_CancelMagicRegeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::ClassParams = {
	&UCombatEffect_CancelMagicRegeneration::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_CancelMagicRegeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_CancelMagicRegeneration.OuterSingleton, Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_CancelMagicRegeneration.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_CancelMagicRegeneration>()
{
	return UCombatEffect_CancelMagicRegeneration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_CancelMagicRegeneration);
UCombatEffect_CancelMagicRegeneration::~UCombatEffect_CancelMagicRegeneration() {}
// End Class UCombatEffect_CancelMagicRegeneration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelMagicRegeneration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_CancelMagicRegeneration, UCombatEffect_CancelMagicRegeneration::StaticClass, TEXT("UCombatEffect_CancelMagicRegeneration"), &Z_Registration_Info_UClass_UCombatEffect_CancelMagicRegeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_CancelMagicRegeneration), 3453975249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelMagicRegeneration_h_1156425981(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelMagicRegeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_CancelMagicRegeneration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
