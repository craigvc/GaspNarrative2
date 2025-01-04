// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/Requirements/CombatRequirement_Dead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatRequirement_Dead() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRequirement_Dead();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRequirement_Dead_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatRequirement_Dead
void UCombatRequirement_Dead::StaticRegisterNativesUCombatRequirement_Dead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatRequirement_Dead);
UClass* Z_Construct_UClass_UCombatRequirement_Dead_NoRegister()
{
	return UCombatRequirement_Dead::StaticClass();
}
struct Z_Construct_UClass_UCombatRequirement_Dead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Checks the conditions necessary to apply the Dead effect (usually, this means health == 0).\n */" },
		{ "IncludePath", "AbilitySystem/Effects/Requirements/CombatRequirement_Dead.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Requirements/CombatRequirement_Dead.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Checks the conditions necessary to apply the Dead effect (usually, this means health == 0)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatRequirement_Dead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatRequirement_Dead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRequirement_Dead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatRequirement_Dead_Statics::ClassParams = {
	&UCombatRequirement_Dead::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatRequirement_Dead_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatRequirement_Dead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatRequirement_Dead()
{
	if (!Z_Registration_Info_UClass_UCombatRequirement_Dead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatRequirement_Dead.OuterSingleton, Z_Construct_UClass_UCombatRequirement_Dead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatRequirement_Dead.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatRequirement_Dead>()
{
	return UCombatRequirement_Dead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatRequirement_Dead);
UCombatRequirement_Dead::~UCombatRequirement_Dead() {}
// End Class UCombatRequirement_Dead

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Dead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatRequirement_Dead, UCombatRequirement_Dead::StaticClass, TEXT("UCombatRequirement_Dead"), &Z_Registration_Info_UClass_UCombatRequirement_Dead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatRequirement_Dead), 3611768963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Dead_h_3461474460(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Dead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Requirements_CombatRequirement_Dead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
