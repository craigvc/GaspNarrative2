// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_Dead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_Dead() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_URemoveOtherGameplayEffectComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Dead();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_Dead_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_Dead
void UCombatEffect_Dead::StaticRegisterNativesUCombatEffect_Dead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_Dead);
UClass* Z_Construct_UClass_UCombatEffect_Dead_NoRegister()
{
	return UCombatEffect_Dead::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_Dead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the Dead state.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_Dead.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Dead.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Represents the Dead state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedEffects_MetaData[] = {
		{ "Comment", "/** Removes other relevant effects. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_Dead.h" },
		{ "ToolTip", "Removes other relevant effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovedEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_Dead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatEffect_Dead_Statics::NewProp_RemovedEffects = { "RemovedEffects", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatEffect_Dead, RemovedEffects), Z_Construct_UClass_URemoveOtherGameplayEffectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedEffects_MetaData), NewProp_RemovedEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatEffect_Dead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatEffect_Dead_Statics::NewProp_RemovedEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Dead_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatEffect_Dead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Dead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_Dead_Statics::ClassParams = {
	&UCombatEffect_Dead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatEffect_Dead_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Dead_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_Dead_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_Dead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_Dead()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_Dead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_Dead.OuterSingleton, Z_Construct_UClass_UCombatEffect_Dead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_Dead.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_Dead>()
{
	return UCombatEffect_Dead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_Dead);
UCombatEffect_Dead::~UCombatEffect_Dead() {}
// End Class UCombatEffect_Dead

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Dead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_Dead, UCombatEffect_Dead::StaticClass, TEXT("UCombatEffect_Dead"), &Z_Registration_Info_UClass_UCombatEffect_Dead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_Dead), 1190272535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Dead_h_2586469378(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Dead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_Dead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
