// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/MapTileBoundsDebugDraw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileBoundsDebugDraw() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileBoundsDebugDraw();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileBoundsDebugDraw_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class UMapTileBoundsDebugDraw
void UMapTileBoundsDebugDraw::StaticRegisterNativesUMapTileBoundsDebugDraw()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTileBoundsDebugDraw);
UClass* Z_Construct_UClass_UMapTileBoundsDebugDraw_NoRegister()
{
	return UMapTileBoundsDebugDraw::StaticClass();
}
struct Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MapTileBoundsDebugDraw.h" },
		{ "ModuleRelativePath", "Public/MapTileBoundsDebugDraw.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapWidth_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/** The width our map should be, in unreal units (cm)*/" },
		{ "ModuleRelativePath", "Public/MapTileBoundsDebugDraw.h" },
		{ "ToolTip", "The width our map should be, in unreal units (cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTiles_MetaData[] = {
		{ "Category", "Map Bounds" },
		{ "Comment", "/*The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n\x09or your map will become blurry and low resolution. */" },
		{ "ModuleRelativePath", "Public/MapTileBoundsDebugDraw.h" },
		{ "ToolTip", "The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more\n       or your map will become blurry and low resolution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTileBoundsDebugDraw>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::NewProp_MapWidth = { "MapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTileBoundsDebugDraw, MapWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapWidth_MetaData), NewProp_MapWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::NewProp_NumTiles = { "NumTiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTileBoundsDebugDraw, NumTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTiles_MetaData), NewProp_NumTiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::NewProp_MapWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::NewProp_NumTiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::ClassParams = {
	&UMapTileBoundsDebugDraw::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTileBoundsDebugDraw()
{
	if (!Z_Registration_Info_UClass_UMapTileBoundsDebugDraw.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTileBoundsDebugDraw.OuterSingleton, Z_Construct_UClass_UMapTileBoundsDebugDraw_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTileBoundsDebugDraw.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UMapTileBoundsDebugDraw>()
{
	return UMapTileBoundsDebugDraw::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTileBoundsDebugDraw);
UMapTileBoundsDebugDraw::~UMapTileBoundsDebugDraw() {}
// End Class UMapTileBoundsDebugDraw

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBoundsDebugDraw_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTileBoundsDebugDraw, UMapTileBoundsDebugDraw::StaticClass, TEXT("UMapTileBoundsDebugDraw"), &Z_Registration_Info_UClass_UMapTileBoundsDebugDraw, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTileBoundsDebugDraw), 927552719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBoundsDebugDraw_h_3935900537(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBoundsDebugDraw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileBoundsDebugDraw_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
