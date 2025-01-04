// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/CombatEffect_ComboWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffect_ComboWindow() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ComboWindow();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffect_ComboWindow_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatEffect_ComboWindow
void UCombatEffect_ComboWindow::StaticRegisterNativesUCombatEffect_ComboWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffect_ComboWindow);
UClass* Z_Construct_UClass_UCombatEffect_ComboWindow_NoRegister()
{
	return UCombatEffect_ComboWindow::StaticClass();
}
struct Z_Construct_UClass_UCombatEffect_ComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Determines that the owner has a Combo Window open.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/CombatEffect_ComboWindow.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/CombatEffect_ComboWindow.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "Determines that the owner has a Combo Window open." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatEffect_ComboWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::ClassParams = {
	&UCombatEffect_ComboWindow::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffect_ComboWindow()
{
	if (!Z_Registration_Info_UClass_UCombatEffect_ComboWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffect_ComboWindow.OuterSingleton, Z_Construct_UClass_UCombatEffect_ComboWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffect_ComboWindow.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffect_ComboWindow>()
{
	return UCombatEffect_ComboWindow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffect_ComboWindow);
UCombatEffect_ComboWindow::~UCombatEffect_ComboWindow() {}
// End Class UCombatEffect_ComboWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ComboWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffect_ComboWindow, UCombatEffect_ComboWindow::StaticClass, TEXT("UCombatEffect_ComboWindow"), &Z_Registration_Info_UClass_UCombatEffect_ComboWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffect_ComboWindow), 151355488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ComboWindow_h_2196973375(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ComboWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_CombatEffect_ComboWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
