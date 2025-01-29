// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeDamageExecCalc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDamageExecCalc() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDamageExecCalc();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDamageExecCalc_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeDamageExecCalc
void UNarrativeDamageExecCalc::StaticRegisterNativesUNarrativeDamageExecCalc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDamageExecCalc);
UClass* Z_Construct_UClass_UNarrativeDamageExecCalc_NoRegister()
{
	return UNarrativeDamageExecCalc::StaticClass();
}
struct Z_Construct_UClass_UNarrativeDamageExecCalc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS/NarrativeDamageExecCalc.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeDamageExecCalc.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDamageExecCalc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::ClassParams = {
	&UNarrativeDamageExecCalc::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeDamageExecCalc()
{
	if (!Z_Registration_Info_UClass_UNarrativeDamageExecCalc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDamageExecCalc.OuterSingleton, Z_Construct_UClass_UNarrativeDamageExecCalc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeDamageExecCalc.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeDamageExecCalc>()
{
	return UNarrativeDamageExecCalc::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDamageExecCalc);
UNarrativeDamageExecCalc::~UNarrativeDamageExecCalc() {}
// End Class UNarrativeDamageExecCalc

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeDamageExecCalc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDamageExecCalc, UNarrativeDamageExecCalc::StaticClass, TEXT("UNarrativeDamageExecCalc"), &Z_Registration_Info_UClass_UNarrativeDamageExecCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDamageExecCalc), 1657689337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeDamageExecCalc_h_419728503(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeDamageExecCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeDamageExecCalc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
