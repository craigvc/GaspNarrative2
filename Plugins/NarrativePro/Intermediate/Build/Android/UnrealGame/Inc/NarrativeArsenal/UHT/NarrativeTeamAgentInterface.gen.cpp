// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Teams/NarrativeTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeTeamAgentInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Interface UNarrativeTeamAgentInterface
void UNarrativeTeamAgentInterface::StaticRegisterNativesUNarrativeTeamAgentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTeamAgentInterface);
UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister()
{
	return UNarrativeTeamAgentInterface::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Teams/NarrativeTeamAgentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INarrativeTeamAgentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenericTeamAgentInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::ClassParams = {
	&UNarrativeTeamAgentInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface()
{
	if (!Z_Registration_Info_UClass_UNarrativeTeamAgentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTeamAgentInterface.OuterSingleton, Z_Construct_UClass_UNarrativeTeamAgentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTeamAgentInterface.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTeamAgentInterface>()
{
	return UNarrativeTeamAgentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTeamAgentInterface);
UNarrativeTeamAgentInterface::~UNarrativeTeamAgentInterface() {}
// End Interface UNarrativeTeamAgentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_NarrativeTeamAgentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTeamAgentInterface, UNarrativeTeamAgentInterface::StaticClass, TEXT("UNarrativeTeamAgentInterface"), &Z_Registration_Info_UClass_UNarrativeTeamAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTeamAgentInterface), 1836146804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_NarrativeTeamAgentInterface_h_2902240306(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_NarrativeTeamAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_NarrativeTeamAgentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
