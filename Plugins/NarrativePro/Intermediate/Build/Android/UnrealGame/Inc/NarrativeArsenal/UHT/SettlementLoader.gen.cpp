// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Settlements/SettlementLoader.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettlementLoader() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlementLoader();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ASettlementLoader_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ASettlementLoader
void ASettlementLoader::StaticRegisterNativesASettlementLoader()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASettlementLoader);
UClass* Z_Construct_UClass_ASettlementLoader_NoRegister()
{
	return ASettlementLoader::StaticClass();
}
struct Z_Construct_UClass_ASettlementLoader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*SettlementLoader will activate/deactivate the selected settlement when World Partiton streams it\nin or out, essentially making World Parititon stream settlements in or out and keeping them efficient. \n\nIt also handles discovering its owner POI when it is walked into! This makes sense to do in the loader because the loaders overlap volumes will only be \nloaded in when you're nearby. If we put the volumes in the settlement we'd have hundreds of collision volumes loaded in at one time which would waste performance. */" },
		{ "IncludePath", "Settlements/SettlementLoader.h" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementLoader.h" },
		{ "ToolTip", "SettlementLoader will activate/deactivate the selected settlement when World Partiton streams it\nin or out, essentially making World Parititon stream settlements in or out and keeping them efficient.\n\nIt also handles discovering its owner POI when it is walked into! This makes sense to do in the loader because the loaders overlap volumes will only be\nloaded in when you're nearby. If we put the volumes in the settlement we'd have hundreds of collision volumes loaded in at one time which would waste performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementToLoad_MetaData[] = {
		{ "Categories", "Narrative.Settlements" },
		{ "Category", "Settlement Configuration" },
		{ "Comment", "//The settlement we want to activate/deactivate when settlement loader is streamed in or out \n" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementLoader.h" },
		{ "ToolTip", "The settlement we want to activate/deactivate when settlement loader is streamed in or out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettlementLoaderRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Root component - we want the settlement to have a transform \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementLoader.h" },
		{ "ToolTip", "Root component - we want the settlement to have a transform" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settlements/SettlementLoader.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettlementToLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettlementLoaderRoot;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASettlementLoader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SettlementToLoad = { "SettlementToLoad", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementLoader, SettlementToLoad), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementToLoad_MetaData), NewProp_SettlementToLoad_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SettlementLoaderRoot = { "SettlementLoaderRoot", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementLoader, SettlementLoaderRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettlementLoaderRoot_MetaData), NewProp_SettlementLoaderRoot_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x01440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASettlementLoader, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASettlementLoader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SettlementToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SettlementLoaderRoot,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASettlementLoader_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementLoader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASettlementLoader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementLoader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASettlementLoader_Statics::ClassParams = {
	&ASettlementLoader::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASettlementLoader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementLoader_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASettlementLoader_Statics::Class_MetaDataParams), Z_Construct_UClass_ASettlementLoader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASettlementLoader()
{
	if (!Z_Registration_Info_UClass_ASettlementLoader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASettlementLoader.OuterSingleton, Z_Construct_UClass_ASettlementLoader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASettlementLoader.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ASettlementLoader>()
{
	return ASettlementLoader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASettlementLoader);
ASettlementLoader::~ASettlementLoader() {}
// End Class ASettlementLoader

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementLoader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASettlementLoader, ASettlementLoader::StaticClass, TEXT("ASettlementLoader"), &Z_Registration_Info_UClass_ASettlementLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASettlementLoader), 3631668378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementLoader_h_2568201341(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_SettlementLoader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
