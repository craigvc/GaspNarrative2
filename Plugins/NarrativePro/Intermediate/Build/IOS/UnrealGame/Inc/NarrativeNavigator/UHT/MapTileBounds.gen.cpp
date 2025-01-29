// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/MapTileBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_AMapTileBounds();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_AMapTileBounds_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileBoundsDebugDraw_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class AMapTileBounds
void AMapTileBounds::StaticRegisterNativesAMapTileBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapTileBounds);
UClass* Z_Construct_UClass_AMapTileBounds_NoRegister()
{
	return AMapTileBounds::StaticClass();
}
struct Z_Construct_UClass_AMapTileBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapTileBounds.h" },
		{ "ModuleRelativePath", "Public/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/** The width our map should be, in unreal units (cm)*/" },
		{ "ModuleRelativePath", "Public/MapTileBounds.h" },
		{ "ToolTip", "The width our map should be, in unreal units (cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTiles_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/*The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n\x09or your map will become blurry and low resolution. */" },
		{ "ModuleRelativePath", "Public/MapTileBounds.h" },
		{ "ToolTip", "The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n       or your map will become blurry and low resolution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileBounds_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapTileBounds.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDraw_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapTileBounds.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugDraw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapTileBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_NumTiles = { "NumTiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, NumTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTiles_MetaData), NewProp_NumTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapTileBounds = { "MapTileBounds", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, MapTileBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileBounds_MetaData), NewProp_MapTileBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapTileBounds_Statics::NewProp_DebugDraw = { "DebugDraw", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapTileBounds, DebugDraw), Z_Construct_UClass_UMapTileBoundsDebugDraw_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDraw_MetaData), NewProp_DebugDraw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapTileBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_NumTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_MapTileBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapTileBounds_Statics::NewProp_DebugDraw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapTileBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapTileBounds_Statics::ClassParams = {
	&AMapTileBounds::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapTileBounds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapTileBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapTileBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapTileBounds()
{
	if (!Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton, Z_Construct_UClass_AMapTileBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapTileBounds.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<AMapTileBounds>()
{
	return AMapTileBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapTileBounds);
AMapTileBounds::~AMapTileBounds() {}
// End Class AMapTileBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBounds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapTileBounds, AMapTileBounds::StaticClass, TEXT("AMapTileBounds"), &Z_Registration_Info_UClass_AMapTileBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapTileBounds), 1935178015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBounds_h_1969130994(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBounds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
