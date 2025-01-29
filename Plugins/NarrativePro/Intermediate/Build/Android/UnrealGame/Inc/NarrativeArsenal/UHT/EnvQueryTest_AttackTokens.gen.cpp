// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/EnvQueryTest_AttackTokens.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_AttackTokens() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_AttackTokens();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_AttackTokens_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UEnvQueryTest_AttackTokens
void UEnvQueryTest_AttackTokens::StaticRegisterNativesUEnvQueryTest_AttackTokens()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_AttackTokens);
UClass* Z_Construct_UClass_UEnvQueryTest_AttackTokens_NoRegister()
{
	return UEnvQueryTest_AttackTokens::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An EQS test that scores actors based on how many free attack tokens they have \n */" },
		{ "IncludePath", "AI/EnvQueryTest_AttackTokens.h" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_AttackTokens.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An EQS test that scores actors based on how many free attack tokens they have" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckGrantedTokens_MetaData[] = {
		{ "Category", "Tokens" },
		{ "Comment", "//If true we'll check how many tokens we've granted have rather than how many are available\n" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_AttackTokens.h" },
		{ "ToolTip", "If true we'll check how many tokens we've granted have rather than how many are available" },
	};
#endif // WITH_METADATA
	static void NewProp_bCheckGrantedTokens_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckGrantedTokens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_AttackTokens>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::NewProp_bCheckGrantedTokens_SetBit(void* Obj)
{
	((UEnvQueryTest_AttackTokens*)Obj)->bCheckGrantedTokens = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::NewProp_bCheckGrantedTokens = { "bCheckGrantedTokens", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_AttackTokens), &Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::NewProp_bCheckGrantedTokens_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckGrantedTokens_MetaData), NewProp_bCheckGrantedTokens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::NewProp_bCheckGrantedTokens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::ClassParams = {
	&UEnvQueryTest_AttackTokens::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_AttackTokens()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_AttackTokens.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_AttackTokens.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_AttackTokens_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_AttackTokens.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEnvQueryTest_AttackTokens>()
{
	return UEnvQueryTest_AttackTokens::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_AttackTokens);
UEnvQueryTest_AttackTokens::~UEnvQueryTest_AttackTokens() {}
// End Class UEnvQueryTest_AttackTokens

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackTokens_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_AttackTokens, UEnvQueryTest_AttackTokens::StaticClass, TEXT("UEnvQueryTest_AttackTokens"), &Z_Registration_Info_UClass_UEnvQueryTest_AttackTokens, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_AttackTokens), 3865437148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackTokens_h_3963546760(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackTokens_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackTokens_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
