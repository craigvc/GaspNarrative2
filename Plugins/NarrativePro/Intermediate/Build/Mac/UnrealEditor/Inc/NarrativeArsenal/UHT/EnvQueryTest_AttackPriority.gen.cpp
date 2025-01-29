// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/EnvQueryTest_AttackPriority.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_AttackPriority() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_AttackPriority();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_AttackPriority_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UEnvQueryTest_AttackPriority
void UEnvQueryTest_AttackPriority::StaticRegisterNativesUEnvQueryTest_AttackPriority()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_AttackPriority);
UClass* Z_Construct_UClass_UEnvQueryTest_AttackPriority_NoRegister()
{
	return UEnvQueryTest_AttackPriority::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An EQS test that checks the target ASCs attack priority value \n */" },
		{ "IncludePath", "AI/EnvQueryTest_AttackPriority.h" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_AttackPriority.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An EQS test that checks the target ASCs attack priority value" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_AttackPriority>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::ClassParams = {
	&UEnvQueryTest_AttackPriority::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_AttackPriority()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_AttackPriority.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_AttackPriority.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_AttackPriority_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_AttackPriority.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEnvQueryTest_AttackPriority>()
{
	return UEnvQueryTest_AttackPriority::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_AttackPriority);
UEnvQueryTest_AttackPriority::~UEnvQueryTest_AttackPriority() {}
// End Class UEnvQueryTest_AttackPriority

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackPriority_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_AttackPriority, UEnvQueryTest_AttackPriority::StaticClass, TEXT("UEnvQueryTest_AttackPriority"), &Z_Registration_Info_UClass_UEnvQueryTest_AttackPriority, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_AttackPriority), 3182080589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackPriority_h_2075768801(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackPriority_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_AttackPriority_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
