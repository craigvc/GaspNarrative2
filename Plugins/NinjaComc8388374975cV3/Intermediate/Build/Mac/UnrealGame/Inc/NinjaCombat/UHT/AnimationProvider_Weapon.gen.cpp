// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/Animation/AnimationProvider_Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationProvider_Weapon() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_Weapon();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_Weapon_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimationProvider_Weapon
void UAnimationProvider_Weapon::StaticRegisterNativesUAnimationProvider_Weapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationProvider_Weapon);
UClass* Z_Construct_UClass_UAnimationProvider_Weapon_NoRegister()
{
	return UAnimationProvider_Weapon::StaticClass();
}
struct Z_Construct_UClass_UAnimationProvider_Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows the weapon that granted the ability to override the default animation.\n * The Weapon must implement the \"CombatWeaponAnimationProviderInterface\" interface.\n */" },
		{ "DisplayName", "Weapon" },
		{ "IncludePath", "AbilitySystem/Providers/Animation/AnimationProvider_Weapon.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_Weapon.h" },
		{ "ToolTip", "Allows the weapon that granted the ability to override the default animation.\nThe Weapon must implement the \"CombatWeaponAnimationProviderInterface\" interface." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationProvider_Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimationProvider_Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationProvider_Weapon_Statics::ClassParams = {
	&UAnimationProvider_Weapon::StaticClass,
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
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationProvider_Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationProvider_Weapon()
{
	if (!Z_Registration_Info_UClass_UAnimationProvider_Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationProvider_Weapon.OuterSingleton, Z_Construct_UClass_UAnimationProvider_Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationProvider_Weapon.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimationProvider_Weapon>()
{
	return UAnimationProvider_Weapon::StaticClass();
}
UAnimationProvider_Weapon::UAnimationProvider_Weapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationProvider_Weapon);
UAnimationProvider_Weapon::~UAnimationProvider_Weapon() {}
// End Class UAnimationProvider_Weapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationProvider_Weapon, UAnimationProvider_Weapon::StaticClass, TEXT("UAnimationProvider_Weapon"), &Z_Registration_Info_UClass_UAnimationProvider_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationProvider_Weapon), 162004247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Weapon_h_430457418(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
