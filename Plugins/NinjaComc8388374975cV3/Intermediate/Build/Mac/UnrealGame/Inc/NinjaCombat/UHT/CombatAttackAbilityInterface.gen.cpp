// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatAttackAbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAttackAbilityInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAttackAbilityInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAttackAbilityInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatAttackAbilityInterface
void UCombatAttackAbilityInterface::StaticRegisterNativesUCombatAttackAbilityInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAttackAbilityInterface);
UClass* Z_Construct_UClass_UCombatAttackAbilityInterface_NoRegister()
{
	return UCombatAttackAbilityInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatAttackAbilityInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatAttackAbilityInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatAttackAbilityInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::ClassParams = {
	&UCombatAttackAbilityInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAttackAbilityInterface()
{
	if (!Z_Registration_Info_UClass_UCombatAttackAbilityInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAttackAbilityInterface.OuterSingleton, Z_Construct_UClass_UCombatAttackAbilityInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAttackAbilityInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAttackAbilityInterface>()
{
	return UCombatAttackAbilityInterface::StaticClass();
}
UCombatAttackAbilityInterface::UCombatAttackAbilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAttackAbilityInterface);
UCombatAttackAbilityInterface::~UCombatAttackAbilityInterface() {}
// End Interface UCombatAttackAbilityInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAttackAbilityInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAttackAbilityInterface, UCombatAttackAbilityInterface::StaticClass, TEXT("UCombatAttackAbilityInterface"), &Z_Registration_Info_UClass_UCombatAttackAbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAttackAbilityInterface), 3718420546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAttackAbilityInterface_h_2556396380(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAttackAbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAttackAbilityInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
