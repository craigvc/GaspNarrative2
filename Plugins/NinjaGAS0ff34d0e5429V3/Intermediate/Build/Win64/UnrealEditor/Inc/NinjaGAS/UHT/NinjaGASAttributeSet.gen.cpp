// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AbilitySystem/NinjaGASAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAttributeSet();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UNinjaGASAttributeSet
void UNinjaGASAttributeSet::StaticRegisterNativesUNinjaGASAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASAttributeSet);
UClass* Z_Construct_UClass_UNinjaGASAttributeSet_NoRegister()
{
	return UNinjaGASAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base Attribute Set proving base functionality and exposing certain methods to Blueprints.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaGASAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAttributeSet.h" },
		{ "ToolTip", "A base Attribute Set proving base functionality and exposing certain methods to Blueprints." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaGASAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASAttributeSet_Statics::ClassParams = {
	&UNinjaGASAttributeSet::StaticClass,
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
	0x013000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASAttributeSet()
{
	if (!Z_Registration_Info_UClass_UNinjaGASAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASAttributeSet.OuterSingleton, Z_Construct_UClass_UNinjaGASAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASAttributeSet.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASAttributeSet>()
{
	return UNinjaGASAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASAttributeSet);
UNinjaGASAttributeSet::~UNinjaGASAttributeSet() {}
// End Class UNinjaGASAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASAttributeSet, UNinjaGASAttributeSet::StaticClass, TEXT("UNinjaGASAttributeSet"), &Z_Registration_Info_UClass_UNinjaGASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASAttributeSet), 1629367565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAttributeSet_h_2690866553(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
