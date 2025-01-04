// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatEffectContextProxyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffectContextProxyInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffectContextProxyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatEffectContextProxyInterface
void UCombatEffectContextProxyInterface::StaticRegisterNativesUCombatEffectContextProxyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatEffectContextProxyInterface);
UClass* Z_Construct_UClass_UCombatEffectContextProxyInterface_NoRegister()
{
	return UCombatEffectContextProxyInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatEffectContextProxyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatEffectContextProxyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::ClassParams = {
	&UCombatEffectContextProxyInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatEffectContextProxyInterface()
{
	if (!Z_Registration_Info_UClass_UCombatEffectContextProxyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatEffectContextProxyInterface.OuterSingleton, Z_Construct_UClass_UCombatEffectContextProxyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatEffectContextProxyInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatEffectContextProxyInterface>()
{
	return UCombatEffectContextProxyInterface::StaticClass();
}
UCombatEffectContextProxyInterface::UCombatEffectContextProxyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatEffectContextProxyInterface);
UCombatEffectContextProxyInterface::~UCombatEffectContextProxyInterface() {}
// End Interface UCombatEffectContextProxyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatEffectContextProxyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatEffectContextProxyInterface, UCombatEffectContextProxyInterface::StaticClass, TEXT("UCombatEffectContextProxyInterface"), &Z_Registration_Info_UClass_UCombatEffectContextProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatEffectContextProxyInterface), 1437709107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatEffectContextProxyInterface_h_2179828626(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatEffectContextProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatEffectContextProxyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
