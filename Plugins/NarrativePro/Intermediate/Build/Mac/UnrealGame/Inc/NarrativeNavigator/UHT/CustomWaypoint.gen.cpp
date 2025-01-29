// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/CustomWaypoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWaypoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ACustomWaypoint();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ACustomWaypoint_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UCustomWaypointMarker_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class ACustomWaypoint
void ACustomWaypoint::StaticRegisterNativesACustomWaypoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomWaypoint);
UClass* Z_Construct_UClass_ACustomWaypoint_NoRegister()
{
	return ACustomWaypoint::StaticClass();
}
struct Z_Construct_UClass_ACustomWaypoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**Custom userplaced waypoint, added to the map when double clicked */" },
		{ "IncludePath", "CustomWaypoint.h" },
		{ "ModuleRelativePath", "Public/CustomWaypoint.h" },
		{ "ToolTip", "Custom userplaced waypoint, added to the map when double clicked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Scene root \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomWaypoint.h" },
		{ "ToolTip", "Scene root" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaypointMarker_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//The map marker for the custom waypoint \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomWaypoint.h" },
		{ "ToolTip", "The map marker for the custom waypoint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaypointMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomWaypoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomWaypoint_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomWaypoint, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomWaypoint_Statics::NewProp_WaypointMarker = { "WaypointMarker", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomWaypoint, WaypointMarker), Z_Construct_UClass_UCustomWaypointMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaypointMarker_MetaData), NewProp_WaypointMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomWaypoint_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomWaypoint_Statics::NewProp_WaypointMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomWaypoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomWaypoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomWaypoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomWaypoint_Statics::ClassParams = {
	&ACustomWaypoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomWaypoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomWaypoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomWaypoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomWaypoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomWaypoint()
{
	if (!Z_Registration_Info_UClass_ACustomWaypoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomWaypoint.OuterSingleton, Z_Construct_UClass_ACustomWaypoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomWaypoint.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<ACustomWaypoint>()
{
	return ACustomWaypoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomWaypoint);
ACustomWaypoint::~ACustomWaypoint() {}
// End Class ACustomWaypoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomWaypoint, ACustomWaypoint::StaticClass, TEXT("ACustomWaypoint"), &Z_Registration_Info_UClass_ACustomWaypoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomWaypoint), 1070307101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypoint_h_1301234021(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_CustomWaypoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
