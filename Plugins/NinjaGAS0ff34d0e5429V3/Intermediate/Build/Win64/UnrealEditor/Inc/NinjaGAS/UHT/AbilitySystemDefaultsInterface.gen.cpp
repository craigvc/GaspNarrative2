// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/Interfaces/AbilitySystemDefaultsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemDefaultsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAGAS_API UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface();
NINJAGAS_API UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Interface UAbilitySystemDefaultsInterface
void UAbilitySystemDefaultsInterface::StaticRegisterNativesUAbilitySystemDefaultsInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemDefaultsInterface);
UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister()
{
	return UAbilitySystemDefaultsInterface::StaticClass();
}
struct Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/AbilitySystemDefaultsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAbilitySystemDefaultsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::ClassParams = {
	&UAbilitySystemDefaultsInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface()
{
	if (!Z_Registration_Info_UClass_UAbilitySystemDefaultsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemDefaultsInterface.OuterSingleton, Z_Construct_UClass_UAbilitySystemDefaultsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitySystemDefaultsInterface.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UAbilitySystemDefaultsInterface>()
{
	return UAbilitySystemDefaultsInterface::StaticClass();
}
UAbilitySystemDefaultsInterface::UAbilitySystemDefaultsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemDefaultsInterface);
UAbilitySystemDefaultsInterface::~UAbilitySystemDefaultsInterface() {}
// End Interface UAbilitySystemDefaultsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_AbilitySystemDefaultsInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemDefaultsInterface, UAbilitySystemDefaultsInterface::StaticClass, TEXT("UAbilitySystemDefaultsInterface"), &Z_Registration_Info_UClass_UAbilitySystemDefaultsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemDefaultsInterface), 941413795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_AbilitySystemDefaultsInterface_h_4200842573(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_AbilitySystemDefaultsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_AbilitySystemDefaultsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
