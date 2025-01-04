// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatActorInfoProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatActorInfoProxyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatActorInfoProxyInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatActorInfoProxyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatActorInfoProxyInterface
void UCombatActorInfoProxyInterface::StaticRegisterNativesUCombatActorInfoProxyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatActorInfoProxyInterface);
UClass* Z_Construct_UClass_UCombatActorInfoProxyInterface_NoRegister()
{
	return UCombatActorInfoProxyInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatActorInfoProxyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatActorInfoProxyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::ClassParams = {
	&UCombatActorInfoProxyInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatActorInfoProxyInterface()
{
	if (!Z_Registration_Info_UClass_UCombatActorInfoProxyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatActorInfoProxyInterface.OuterSingleton, Z_Construct_UClass_UCombatActorInfoProxyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatActorInfoProxyInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatActorInfoProxyInterface>()
{
	return UCombatActorInfoProxyInterface::StaticClass();
}
UCombatActorInfoProxyInterface::UCombatActorInfoProxyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatActorInfoProxyInterface);
UCombatActorInfoProxyInterface::~UCombatActorInfoProxyInterface() {}
// End Interface UCombatActorInfoProxyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatActorInfoProxyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatActorInfoProxyInterface, UCombatActorInfoProxyInterface::StaticClass, TEXT("UCombatActorInfoProxyInterface"), &Z_Registration_Info_UClass_UCombatActorInfoProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatActorInfoProxyInterface), 3900409891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatActorInfoProxyInterface_h_3189956229(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatActorInfoProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatActorInfoProxyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
