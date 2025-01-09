// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/CustomWaypointMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWaypointMarker() {}

// Begin Cross Module References
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UCustomWaypointMarker();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UCustomWaypointMarker_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class UCustomWaypointMarker
void UCustomWaypointMarker::StaticRegisterNativesUCustomWaypointMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomWaypointMarker);
UClass* Z_Construct_UClass_UCustomWaypointMarker_NoRegister()
{
	return UCustomWaypointMarker::StaticClass();
}
struct Z_Construct_UClass_UCustomWaypointMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomWaypointMarker.h" },
		{ "ModuleRelativePath", "Public/CustomWaypointMarker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWaypointMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomWaypointMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationMarkerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWaypointMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomWaypointMarker_Statics::ClassParams = {
	&UCustomWaypointMarker::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWaypointMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomWaypointMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomWaypointMarker()
{
	if (!Z_Registration_Info_UClass_UCustomWaypointMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomWaypointMarker.OuterSingleton, Z_Construct_UClass_UCustomWaypointMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomWaypointMarker.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UCustomWaypointMarker>()
{
	return UCustomWaypointMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWaypointMarker);
UCustomWaypointMarker::~UCustomWaypointMarker() {}
// End Class UCustomWaypointMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypointMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomWaypointMarker, UCustomWaypointMarker::StaticClass, TEXT("UCustomWaypointMarker"), &Z_Registration_Info_UClass_UCustomWaypointMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomWaypointMarker), 1009784094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypointMarker_h_2505251413(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypointMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypointMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
