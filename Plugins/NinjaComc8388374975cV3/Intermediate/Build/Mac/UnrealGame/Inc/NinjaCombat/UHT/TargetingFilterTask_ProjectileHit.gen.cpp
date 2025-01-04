// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_ProjectileHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_ProjectileHit() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_ProjectileHit();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingFilterTask_ProjectileHit
void UTargetingFilterTask_ProjectileHit::StaticRegisterNativesUTargetingFilterTask_ProjectileHit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_ProjectileHit);
UClass* Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_NoRegister()
{
	return UTargetingFilterTask_ProjectileHit::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters any targets already hit by the owning projectile.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_ProjectileHit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_ProjectileHit.h" },
		{ "ToolTip", "Filters any targets already hit by the owning projectile." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_ProjectileHit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::ClassParams = {
	&UTargetingFilterTask_ProjectileHit::StaticClass,
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
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_ProjectileHit()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_ProjectileHit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_ProjectileHit.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_ProjectileHit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_ProjectileHit.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_ProjectileHit>()
{
	return UTargetingFilterTask_ProjectileHit::StaticClass();
}
UTargetingFilterTask_ProjectileHit::UTargetingFilterTask_ProjectileHit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_ProjectileHit);
UTargetingFilterTask_ProjectileHit::~UTargetingFilterTask_ProjectileHit() {}
// End Class UTargetingFilterTask_ProjectileHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_ProjectileHit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_ProjectileHit, UTargetingFilterTask_ProjectileHit::StaticClass, TEXT("UTargetingFilterTask_ProjectileHit"), &Z_Registration_Info_UClass_UTargetingFilterTask_ProjectileHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_ProjectileHit), 1564166635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_ProjectileHit_h_3812310845(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_ProjectileHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_ProjectileHit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
