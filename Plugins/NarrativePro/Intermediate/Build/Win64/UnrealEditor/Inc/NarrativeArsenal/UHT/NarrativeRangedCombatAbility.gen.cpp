// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeRangedCombatAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeRangedCombatAbility() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeRangedCombatAbility();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeRangedCombatAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeRangedCombatAbility
void UNarrativeRangedCombatAbility::StaticRegisterNativesUNarrativeRangedCombatAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeRangedCombatAbility);
UClass* Z_Construct_UClass_UNarrativeRangedCombatAbility_NoRegister()
{
	return UNarrativeRangedCombatAbility::StaticClass();
}
struct Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS/NarrativeRangedCombatAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeRangedCombatAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeRangedCombatAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeCombatAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::ClassParams = {
	&UNarrativeRangedCombatAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeRangedCombatAbility()
{
	if (!Z_Registration_Info_UClass_UNarrativeRangedCombatAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeRangedCombatAbility.OuterSingleton, Z_Construct_UClass_UNarrativeRangedCombatAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeRangedCombatAbility.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeRangedCombatAbility>()
{
	return UNarrativeRangedCombatAbility::StaticClass();
}
UNarrativeRangedCombatAbility::UNarrativeRangedCombatAbility() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeRangedCombatAbility);
UNarrativeRangedCombatAbility::~UNarrativeRangedCombatAbility() {}
// End Class UNarrativeRangedCombatAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeRangedCombatAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeRangedCombatAbility, UNarrativeRangedCombatAbility::StaticClass, TEXT("UNarrativeRangedCombatAbility"), &Z_Registration_Info_UClass_UNarrativeRangedCombatAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeRangedCombatAbility), 156255471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeRangedCombatAbility_h_2244112314(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeRangedCombatAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeRangedCombatAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
