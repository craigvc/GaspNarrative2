// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/Requirements/CombatRequirement_Stagger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatRequirement_Stagger() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRequirement_Stagger();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRequirement_Stagger_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatRequirement_Stagger
void UCombatRequirement_Stagger::StaticRegisterNativesUCombatRequirement_Stagger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatRequirement_Stagger);
UClass* Z_Construct_UClass_UCombatRequirement_Stagger_NoRegister()
{
	return UCombatRequirement_Stagger::StaticClass();
}
struct Z_Construct_UClass_UCombatRequirement_Stagger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Checks the conditions necessary to apply the Stagger effect (usually, this means poise damage == poise).\n */" },
		{ "IncludePath", "AbilitySystem/Effects/Requirements/CombatRequirement_Stagger.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Requirements/CombatRequirement_Stagger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Checks the conditions necessary to apply the Stagger effect (usually, this means poise damage == poise)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatRequirement_Stagger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatRequirement_Stagger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRequirement_Stagger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatRequirement_Stagger_Statics::ClassParams = {
	&UCombatRequirement_Stagger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRequirement_Stagger_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatRequirement_Stagger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatRequirement_Stagger()
{
	if (!Z_Registration_Info_UClass_UCombatRequirement_Stagger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatRequirement_Stagger.OuterSingleton, Z_Construct_UClass_UCombatRequirement_Stagger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatRequirement_Stagger.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatRequirement_Stagger>()
{
	return UCombatRequirement_Stagger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatRequirement_Stagger);
UCombatRequirement_Stagger::~UCombatRequirement_Stagger() {}
// End Class UCombatRequirement_Stagger

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Stagger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatRequirement_Stagger, UCombatRequirement_Stagger::StaticClass, TEXT("UCombatRequirement_Stagger"), &Z_Registration_Info_UClass_UCombatRequirement_Stagger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatRequirement_Stagger), 1485827308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Stagger_h_1462652579(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Stagger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Stagger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
