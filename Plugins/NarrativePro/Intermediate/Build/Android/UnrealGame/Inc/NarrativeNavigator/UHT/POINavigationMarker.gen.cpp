// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/POINavigationMarker.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOINavigationMarker() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UPOINavigationMarker();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UPOINavigationMarker_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class UPOINavigationMarker
void UPOINavigationMarker::StaticRegisterNativesUPOINavigationMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPOINavigationMarker);
UClass* Z_Construct_UClass_UPOINavigationMarker_NoRegister()
{
	return UPOINavigationMarker::StaticClass();
}
struct Z_Construct_UClass_UPOINavigationMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Special Navigation marker component intended for points of interest. This marker will also cache its owners location with the POI system, so \n * you can quickly access points of interest via their tag. \n */" },
		{ "DisplayName", "POI Navigation Marker" },
		{ "IncludePath", "POINavigationMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/POINavigationMarker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Special Navigation marker component intended for points of interest. This marker will also cache its owners location with the POI system, so\nyou can quickly access points of interest via their tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POITag_MetaData[] = {
		{ "Categories", "Navigator.PointOfInterest" },
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The tag for this location*/" },
		{ "ModuleRelativePath", "Public/POINavigationMarker.h" },
		{ "ToolTip", "The tag for this location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POIDisplayName_MetaData[] = {
		{ "Category", "Point Of Interest" },
		{ "Comment", "/** The display name for this poi when we display it in the UI */" },
		{ "ModuleRelativePath", "Public/POINavigationMarker.h" },
		{ "ToolTip", "The display name for this poi when we display it in the UI" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_POITag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_POIDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPOINavigationMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPOINavigationMarker_Statics::NewProp_POITag = { "POITag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPOINavigationMarker, POITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POITag_MetaData), NewProp_POITag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPOINavigationMarker_Statics::NewProp_POIDisplayName = { "POIDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPOINavigationMarker, POIDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POIDisplayName_MetaData), NewProp_POIDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPOINavigationMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPOINavigationMarker_Statics::NewProp_POITag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPOINavigationMarker_Statics::NewProp_POIDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPOINavigationMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPOINavigationMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationMarkerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPOINavigationMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPOINavigationMarker_Statics::ClassParams = {
	&UPOINavigationMarker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPOINavigationMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPOINavigationMarker_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPOINavigationMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UPOINavigationMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPOINavigationMarker()
{
	if (!Z_Registration_Info_UClass_UPOINavigationMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPOINavigationMarker.OuterSingleton, Z_Construct_UClass_UPOINavigationMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPOINavigationMarker.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UPOINavigationMarker>()
{
	return UPOINavigationMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPOINavigationMarker);
UPOINavigationMarker::~UPOINavigationMarker() {}
// End Class UPOINavigationMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_POINavigationMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPOINavigationMarker, UPOINavigationMarker::StaticClass, TEXT("UPOINavigationMarker"), &Z_Registration_Info_UClass_UPOINavigationMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPOINavigationMarker), 1817490776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_POINavigationMarker_h_2525600950(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_POINavigationMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_POINavigationMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
