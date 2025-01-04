// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/NinjaCombatAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAnimNotify
void UNinjaCombatAnimNotify::StaticRegisterNativesUNinjaCombatAnimNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAnimNotify);
UClass* Z_Construct_UClass_UNinjaCombatAnimNotify_NoRegister()
{
	return UNinjaCombatAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Notify that facilitates retrieving combat components.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NinjaCombatAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimNotify.h" },
		{ "ToolTip", "Base Notify that facilitates retrieving combat components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::ClassParams = {
	&UNinjaCombatAnimNotify::StaticClass,
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
	0x001120A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAnimNotify()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAnimNotify.OuterSingleton, Z_Construct_UClass_UNinjaCombatAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAnimNotify.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAnimNotify>()
{
	return UNinjaCombatAnimNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAnimNotify);
UNinjaCombatAnimNotify::~UNinjaCombatAnimNotify() {}
// End Class UNinjaCombatAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAnimNotify, UNinjaCombatAnimNotify::StaticClass, TEXT("UNinjaCombatAnimNotify"), &Z_Registration_Info_UClass_UNinjaCombatAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAnimNotify), 2943160327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotify_h_3229828552(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
