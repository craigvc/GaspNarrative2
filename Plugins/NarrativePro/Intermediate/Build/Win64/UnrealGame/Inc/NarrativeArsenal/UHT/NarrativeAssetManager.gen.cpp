// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAssetManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAssetManager();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeAssetManager
void UNarrativeAssetManager::StaticRegisterNativesUNarrativeAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAssetManager);
UClass* Z_Construct_UClass_UNarrativeAssetManager_NoRegister()
{
	return UNarrativeAssetManager::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom asset manager for Narrative pro. Used for GAS and efficient NPC caching. \n */" },
		{ "IncludePath", "UnrealFramework/NarrativeAssetManager.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeAssetManager.h" },
		{ "ToolTip", "Custom asset manager for Narrative pro. Used for GAS and efficient NPC caching." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAssetManager_Statics::ClassParams = {
	&UNarrativeAssetManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAssetManager()
{
	if (!Z_Registration_Info_UClass_UNarrativeAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAssetManager.OuterSingleton, Z_Construct_UClass_UNarrativeAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAssetManager.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAssetManager>()
{
	return UNarrativeAssetManager::StaticClass();
}
UNarrativeAssetManager::UNarrativeAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAssetManager);
UNarrativeAssetManager::~UNarrativeAssetManager() {}
// End Class UNarrativeAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAssetManager, UNarrativeAssetManager::StaticClass, TEXT("UNarrativeAssetManager"), &Z_Registration_Info_UClass_UNarrativeAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAssetManager), 730040820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAssetManager_h_2821472991(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
