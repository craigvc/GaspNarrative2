// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAbilitySystemGlobals() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAbilitySystemGlobals
void UNinjaCombatAbilitySystemGlobals::StaticRegisterNativesUNinjaCombatAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAbilitySystemGlobals);
UClass* Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_NoRegister()
{
	return UNinjaCombatAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extended Ability Globals for the combat system.\n *\n * This must be added to the project's configuration class, in the DefaultGame.ini file.\n * <pre>\n * [/Script/GameplayAbilities.AbilitySystemGlobals]\n * AbilitySystemGlobalsClassName=\"/Script/NinjaCombat.NinjaCombatAbilitySystemGlobals\"\n * </pre>\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAbilitySystemGlobals.h" },
		{ "ToolTip", "Extended Ability Globals for the combat system.\n\nThis must be added to the project's configuration class, in the DefaultGame.ini file.\n<pre>\n[/Script/GameplayAbilities.AbilitySystemGlobals]\nAbilitySystemGlobalsClassName=\"/Script/NinjaCombat.NinjaCombatAbilitySystemGlobals\"\n</pre>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::ClassParams = {
	&UNinjaCombatAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAbilitySystemGlobals.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAbilitySystemGlobals>()
{
	return UNinjaCombatAbilitySystemGlobals::StaticClass();
}
UNinjaCombatAbilitySystemGlobals::UNinjaCombatAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAbilitySystemGlobals);
UNinjaCombatAbilitySystemGlobals::~UNinjaCombatAbilitySystemGlobals() {}
// End Class UNinjaCombatAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAbilitySystemGlobals, UNinjaCombatAbilitySystemGlobals::StaticClass, TEXT("UNinjaCombatAbilitySystemGlobals"), &Z_Registration_Info_UClass_UNinjaCombatAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAbilitySystemGlobals), 2058778242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAbilitySystemGlobals_h_1583934789(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
