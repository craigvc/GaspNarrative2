// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Effects/InventoryEffect_Level.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryEffect_Level() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryEffect_Level();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryEffect_Level_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UInventoryEffect_Level
void UInventoryEffect_Level::StaticRegisterNativesUInventoryEffect_Level()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryEffect_Level);
UClass* Z_Construct_UClass_UInventoryEffect_Level_NoRegister()
{
	return UInventoryEffect_Level::StaticClass();
}
struct Z_Construct_UClass_UInventoryEffect_Level_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A gameplay effect that adds to the Equipment Level attribute.\n *\n * It's designed in a way that a Fragment can set the actual gear level externally, instead of requiring\n * that each item defines their own Gameplay Effect separately, which simplifies things a lot.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/InventoryEffect_Level.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/InventoryEffect_Level.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "A gameplay effect that adds to the Equipment Level attribute.\n\nIt's designed in a way that a Fragment can set the actual gear level externally, instead of requiring\nthat each item defines their own Gameplay Effect separately, which simplifies things a lot." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryEffect_Level>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryEffect_Level_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEffect_Level_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryEffect_Level_Statics::ClassParams = {
	&UInventoryEffect_Level::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEffect_Level_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryEffect_Level_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryEffect_Level()
{
	if (!Z_Registration_Info_UClass_UInventoryEffect_Level.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryEffect_Level.OuterSingleton, Z_Construct_UClass_UInventoryEffect_Level_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryEffect_Level.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryEffect_Level>()
{
	return UInventoryEffect_Level::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryEffect_Level);
UInventoryEffect_Level::~UInventoryEffect_Level() {}
// End Class UInventoryEffect_Level

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Level_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryEffect_Level, UInventoryEffect_Level::StaticClass, TEXT("UInventoryEffect_Level"), &Z_Registration_Info_UClass_UInventoryEffect_Level, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryEffect_Level), 3659052274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Level_h_421594414(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Level_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Level_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
