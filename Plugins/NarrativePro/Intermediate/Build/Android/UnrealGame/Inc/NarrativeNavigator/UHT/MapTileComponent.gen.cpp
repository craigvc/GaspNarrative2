// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/MapTileComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapTileComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileComponent();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UMapTileComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class UMapTileComponent Function SetMapLayer
struct Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics
{
	struct MapTileComponent_eventSetMapLayer_Parms
	{
		FGameplayTag NewLayer;
		FGameplayTagContainer Domains;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Layers" },
		{ "Comment", "//Set the layer of this map tile for the given domains \n" },
		{ "ModuleRelativePath", "Public/MapTileComponent.h" },
		{ "ToolTip", "Set the layer of this map tile for the given domains" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLayer_MetaData[] = {
		{ "Categories", "Navigator.MapLayer" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Domains;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_NewLayer = { "NewLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileComponent_eventSetMapLayer_Parms, NewLayer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLayer_MetaData), NewProp_NewLayer_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_Domains = { "Domains", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapTileComponent_eventSetMapLayer_Parms, Domains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domains_MetaData), NewProp_Domains_MetaData) }; // 3352185621
void Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapTileComponent_eventSetMapLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapTileComponent_eventSetMapLayer_Parms), &Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_NewLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_Domains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapTileComponent, nullptr, "SetMapLayer", nullptr, nullptr, Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::MapTileComponent_eventSetMapLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::MapTileComponent_eventSetMapLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapTileComponent_SetMapLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapTileComponent_SetMapLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapTileComponent::execSetMapLayer)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewLayer);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Domains);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMapLayer(Z_Param_Out_NewLayer,Z_Param_Out_Domains);
	P_NATIVE_END;
}
// End Class UMapTileComponent Function SetMapLayer

// Begin Class UMapTileComponent
void UMapTileComponent::StaticRegisterNativesUMapTileComponent()
{
	UClass* Class = UMapTileComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMapLayer", &UMapTileComponent::execSetMapLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapTileComponent);
UClass* Z_Construct_UClass_UMapTileComponent_NoRegister()
{
	return UMapTileComponent::StaticClass();
}
struct Z_Construct_UClass_UMapTileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * A specialized map marker used for map tiles. Map tiles are nice because we can generate a NxN grid of them depending on our map size \n */" },
		{ "DisplayName", "Map Tile Marker" },
		{ "IncludePath", "MapTileComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MapTileComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A specialized map marker used for map tiles. Map tiles are nice because we can generate a NxN grid of them depending on our map size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTileLayers_MetaData[] = {
		{ "Category", "Map Tiles" },
		{ "Comment", "//The map tile layers. \n" },
		{ "ModuleRelativePath", "Public/MapTileComponent.h" },
		{ "ToolTip", "The map tile layers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTileLayers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapTileLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MapTileLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapTileComponent_SetMapLayer, "SetMapLayer" }, // 42505391
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapTileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers_ValueProp = { "MapTileLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers_Key_KeyProp = { "MapTileLayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers = { "MapTileLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapTileComponent, MapTileLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTileLayers_MetaData), NewProp_MapTileLayers_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapTileComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapTileComponent_Statics::NewProp_MapTileLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapTileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationMarkerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapTileComponent_Statics::ClassParams = {
	&UMapTileComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapTileComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapTileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapTileComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapTileComponent()
{
	if (!Z_Registration_Info_UClass_UMapTileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapTileComponent.OuterSingleton, Z_Construct_UClass_UMapTileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapTileComponent.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UMapTileComponent>()
{
	return UMapTileComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapTileComponent);
UMapTileComponent::~UMapTileComponent() {}
// End Class UMapTileComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapTileComponent, UMapTileComponent::StaticClass, TEXT("UMapTileComponent"), &Z_Registration_Info_UClass_UMapTileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapTileComponent), 910327240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileComponent_h_3781442993(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_MapTileComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
