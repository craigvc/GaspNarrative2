// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_ParryWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_ParryWindow() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ParryWindow();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ParryWindow_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_ParryWindow
void UCombatEffect_ParryWindow::StaticRegisterNativesUCombatEffect_ParryWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_ParryWindow);
UClass* Z_Construct_UClass_UCombatEffect_ParryWindow_NoRegister()
{
	return UCombatEffect_ParryWindow::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_ParryWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Determines that the owner has a Parry Window open.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_ParryWindow.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_ParryWindow.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Determines that the owner has a Parry Window open." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_ParryWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::ClassParams = {
	&UCombatEffect_ParryWindow::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_ParryWindow()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_ParryWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_ParryWindow.OuterSingleton, Z_Construct_UClass_UCombatEffect_ParryWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_ParryWindow.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_ParryWindow>()
{
	return UCombatEffect_ParryWindow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_ParryWindow);
UCombatEffect_ParryWindow::~UCombatEffect_ParryWindow() {}
// End Class UCombatEffect_ParryWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ParryWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_ParryWindow, UCombatEffect_ParryWindow::StaticClass, TEXT("UCombatEffect_ParryWindow"), &Z_Registration_Info_UClass_UCombatEffect_ParryWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_ParryWindow), 799762980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ParryWindow_h_2739116134(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ParryWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ParryWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
