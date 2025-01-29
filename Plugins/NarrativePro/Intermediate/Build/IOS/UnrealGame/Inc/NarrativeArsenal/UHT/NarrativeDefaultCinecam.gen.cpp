// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeDefaultCinecam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDefaultCinecam() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeDefaultCinecam();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeDefaultCinecam_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeDefaultCinecam
void ANarrativeDefaultCinecam::StaticRegisterNativesANarrativeDefaultCinecam()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeDefaultCinecam);
UClass* Z_Construct_UClass_ANarrativeDefaultCinecam_NoRegister()
{
	return ANarrativeDefaultCinecam::StaticClass();
}
struct Z_Construct_UClass_ANarrativeDefaultCinecam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "Tales/NarrativeDefaultCinecam.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDefaultCinecam.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeDefaultCinecam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::ClassParams = {
	&ANarrativeDefaultCinecam::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeDefaultCinecam()
{
	if (!Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton, Z_Construct_UClass_ANarrativeDefaultCinecam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeDefaultCinecam.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeDefaultCinecam>()
{
	return ANarrativeDefaultCinecam::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeDefaultCinecam);
ANarrativeDefaultCinecam::~ANarrativeDefaultCinecam() {}
// End Class ANarrativeDefaultCinecam

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDefaultCinecam_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeDefaultCinecam, ANarrativeDefaultCinecam::StaticClass, TEXT("ANarrativeDefaultCinecam"), &Z_Registration_Info_UClass_ANarrativeDefaultCinecam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeDefaultCinecam), 1847002947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDefaultCinecam_h_2933801300(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDefaultCinecam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDefaultCinecam_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
