// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatEffectContextProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatEffectContextProxyInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatEffectContextProxy();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatEffectContextProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatEffectContextProxy
void UNinjaCombatEffectContextProxy::StaticRegisterNativesUNinjaCombatEffectContextProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatEffectContextProxy);
UClass* Z_Construct_UClass_UNinjaCombatEffectContextProxy_NoRegister()
{
	return UNinjaCombatEffectContextProxy::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Proxy for an Effect Context.\n */" },
		{ "IncludePath", "AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Proxies/NinjaCombatEffectContextProxy.h" },
		{ "ToolTip", "Default Proxy for an Effect Context." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatEffectContextProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatEffectContextProxyInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatEffectContextProxy, ICombatEffectContextProxyInterface), false },  // 1437709107
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::ClassParams = {
	&UNinjaCombatEffectContextProxy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatEffectContextProxy()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatEffectContextProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatEffectContextProxy.OuterSingleton, Z_Construct_UClass_UNinjaCombatEffectContextProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatEffectContextProxy.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatEffectContextProxy>()
{
	return UNinjaCombatEffectContextProxy::StaticClass();
}
UNinjaCombatEffectContextProxy::UNinjaCombatEffectContextProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatEffectContextProxy);
UNinjaCombatEffectContextProxy::~UNinjaCombatEffectContextProxy() {}
// End Class UNinjaCombatEffectContextProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatEffectContextProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatEffectContextProxy, UNinjaCombatEffectContextProxy::StaticClass, TEXT("UNinjaCombatEffectContextProxy"), &Z_Registration_Info_UClass_UNinjaCombatEffectContextProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatEffectContextProxy), 3347182540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatEffectContextProxy_h_1983848818(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatEffectContextProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Proxies_NinjaCombatEffectContextProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
