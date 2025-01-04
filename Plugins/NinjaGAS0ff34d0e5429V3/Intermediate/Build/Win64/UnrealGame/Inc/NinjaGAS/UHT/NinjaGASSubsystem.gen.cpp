// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/NinjaGASSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASSubsystem();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UNinjaGASSubsystem
void UNinjaGASSubsystem::StaticRegisterNativesUNinjaGASSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASSubsystem);
UClass* Z_Construct_UClass_UNinjaGASSubsystem_NoRegister()
{
	return UNinjaGASSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides game instance-level functionalities for the Ability System.\n */" },
		{ "IncludePath", "NinjaGASSubsystem.h" },
		{ "ModuleRelativePath", "Public/NinjaGASSubsystem.h" },
		{ "ToolTip", "Provides game instance-level functionalities for the Ability System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaGASSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASSubsystem_Statics::ClassParams = {
	&UNinjaGASSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASSubsystem()
{
	if (!Z_Registration_Info_UClass_UNinjaGASSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASSubsystem.OuterSingleton, Z_Construct_UClass_UNinjaGASSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASSubsystem.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASSubsystem>()
{
	return UNinjaGASSubsystem::StaticClass();
}
UNinjaGASSubsystem::UNinjaGASSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASSubsystem);
UNinjaGASSubsystem::~UNinjaGASSubsystem() {}
// End Class UNinjaGASSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASSubsystem, UNinjaGASSubsystem::StaticClass, TEXT("UNinjaGASSubsystem"), &Z_Registration_Info_UClass_UNinjaGASSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASSubsystem), 991178637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASSubsystem_h_4101505549(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
