// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_Damage() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Damage();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Damage_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_Damage
void UCombatEffect_Damage::StaticRegisterNativesUCombatEffect_Damage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_Damage);
UClass* Z_Construct_UClass_UCombatEffect_Damage_NoRegister()
{
	return UCombatEffect_Damage::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Damages poise and applies the effect to break recovery.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_Damage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Damage.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Damages poise and applies the effect to break recovery." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "Comment", "/** Component containing tags available to this asset. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Damage.h" },
		{ "ToolTip", "Component containing tags available to this asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalEffects_MetaData[] = {
		{ "Comment", "/** Adds other effects along with this one. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Damage.h" },
		{ "ToolTip", "Adds other effects along with this one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEffect_Damage_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEffect_Damage, AssetTags), Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEffect_Damage_Statics::NewProp_AdditionalEffects = { "AdditionalEffects", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEffect_Damage, AdditionalEffects), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalEffects_MetaData), NewProp_AdditionalEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatEffect_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEffect_Damage_Statics::NewProp_AssetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEffect_Damage_Statics::NewProp_AdditionalEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Damage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatEffect_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_Damage_Statics::ClassParams = {
	&UCombatEffect_Damage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatEffect_Damage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Damage_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_Damage()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_Damage.OuterSingleton, Z_Construct_UClass_UCombatEffect_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_Damage.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_Damage>()
{
	return UCombatEffect_Damage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_Damage);
UCombatEffect_Damage::~UCombatEffect_Damage() {}
// End Class UCombatEffect_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_Damage, UCombatEffect_Damage::StaticClass, TEXT("UCombatEffect_Damage"), &Z_Registration_Info_UClass_UCombatEffect_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_Damage), 1723471277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Damage_h_3654653598(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
