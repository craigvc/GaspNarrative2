// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/PointOfInterest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointOfInterest() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ANavigatorPointOfInterest();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ANavigatorPointOfInterest_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UPOINavigationMarker_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class ANavigatorPointOfInterest
void ANavigatorPointOfInterest::StaticRegisterNativesANavigatorPointOfInterest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigatorPointOfInterest);
UClass* Z_Construct_UClass_ANavigatorPointOfInterest_NoRegister()
{
	return ANavigatorPointOfInterest::StaticClass();
}
struct Z_Construct_UClass_ANavigatorPointOfInterest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a point of interest that can be placed in the level. When players enter the POI sphere, their navigation components will \"discover\" this POI,\n * by adding its POI tag to their list of discovered areas. This list will saved to disk, and when load is called all POIs in the level will automatically be updated. \n */" },
		{ "IncludePath", "PointOfInterest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PointOfInterest.h" },
		{ "ToolTip", "Represents a point of interest that can be placed in the level. When players enter the POI sphere, their navigation components will \"discover\" this POI,\nby adding its POI tag to their list of discovered areas. This list will saved to disk, and when load is called all POIs in the level will automatically be updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POISphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationMarker_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointOfInterest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFastTravel_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** True if we can fast travel to this point of interest. */" },
		{ "ModuleRelativePath", "Public/PointOfInterest.h" },
		{ "ToolTip", "True if we can fast travel to this point of interest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastTravelLocation_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The location in the world we'll fast travel the player to when the POI is selected in the world map. */" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/PointOfInterest.h" },
		{ "ToolTip", "The location in the world we'll fast travel the player to when the POI is selected in the world map." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_POISphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationMarker;
	static void NewProp_bAllowFastTravel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFastTravel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FastTravelLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigatorPointOfInterest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_POISphere = { "POISphere", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigatorPointOfInterest, POISphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POISphere_MetaData), NewProp_POISphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_NavigationMarker = { "NavigationMarker", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigatorPointOfInterest, NavigationMarker), Z_Construct_UClass_UPOINavigationMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationMarker_MetaData), NewProp_NavigationMarker_MetaData) };
void Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_bAllowFastTravel_SetBit(void* Obj)
{
	((ANavigatorPointOfInterest*)Obj)->bAllowFastTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_bAllowFastTravel = { "bAllowFastTravel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavigatorPointOfInterest), &Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_bAllowFastTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFastTravel_MetaData), NewProp_bAllowFastTravel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_FastTravelLocation = { "FastTravelLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigatorPointOfInterest, FastTravelLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastTravelLocation_MetaData), NewProp_FastTravelLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigatorPointOfInterest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_POISphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_NavigationMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_bAllowFastTravel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigatorPointOfInterest_Statics::NewProp_FastTravelLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigatorPointOfInterest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigatorPointOfInterest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigatorPointOfInterest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigatorPointOfInterest_Statics::ClassParams = {
	&ANavigatorPointOfInterest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANavigatorPointOfInterest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigatorPointOfInterest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigatorPointOfInterest_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigatorPointOfInterest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigatorPointOfInterest()
{
	if (!Z_Registration_Info_UClass_ANavigatorPointOfInterest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigatorPointOfInterest.OuterSingleton, Z_Construct_UClass_ANavigatorPointOfInterest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigatorPointOfInterest.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<ANavigatorPointOfInterest>()
{
	return ANavigatorPointOfInterest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigatorPointOfInterest);
ANavigatorPointOfInterest::~ANavigatorPointOfInterest() {}
// End Class ANavigatorPointOfInterest

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_PointOfInterest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigatorPointOfInterest, ANavigatorPointOfInterest::StaticClass, TEXT("ANavigatorPointOfInterest"), &Z_Registration_Info_UClass_ANavigatorPointOfInterest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigatorPointOfInterest), 2738816451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_PointOfInterest_h_1929088059(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_PointOfInterest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_PointOfInterest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
