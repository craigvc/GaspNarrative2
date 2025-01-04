// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Proxies/NinjaCombatAbilityActorInfoProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAbilityActorInfoProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatActorInfoProxyInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAbilityActorInfoProxy
void UNinjaCombatAbilityActorInfoProxy::StaticRegisterNativesUNinjaCombatAbilityActorInfoProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAbilityActorInfoProxy);
UClass* Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_NoRegister()
{
	return UNinjaCombatAbilityActorInfoProxy::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Proxy for an Ability Actor Info.\n */" },
		{ "IncludePath", "AbilitySystem/Proxies/NinjaCombatAbilityActorInfoProxy.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Proxies/NinjaCombatAbilityActorInfoProxy.h" },
		{ "ToolTip", "Default Proxy for an Ability Actor Info." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAbilityActorInfoProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatActorInfoProxyInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatAbilityActorInfoProxy, ICombatActorInfoProxyInterface), false },  // 3900409891
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::ClassParams = {
	&UNinjaCombatAbilityActorInfoProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAbilityActorInfoProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAbilityActorInfoProxy.OuterSingleton, Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAbilityActorInfoProxy.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAbilityActorInfoProxy>()
{
	return UNinjaCombatAbilityActorInfoProxy::StaticClass();
}
UNinjaCombatAbilityActorInfoProxy::UNinjaCombatAbilityActorInfoProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAbilityActorInfoProxy);
UNinjaCombatAbilityActorInfoProxy::~UNinjaCombatAbilityActorInfoProxy() {}
// End Class UNinjaCombatAbilityActorInfoProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatAbilityActorInfoProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAbilityActorInfoProxy, UNinjaCombatAbilityActorInfoProxy::StaticClass, TEXT("UNinjaCombatAbilityActorInfoProxy"), &Z_Registration_Info_UClass_UNinjaCombatAbilityActorInfoProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAbilityActorInfoProxy), 2587750499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatAbilityActorInfoProxy_h_2460814681(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatAbilityActorInfoProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatAbilityActorInfoProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
