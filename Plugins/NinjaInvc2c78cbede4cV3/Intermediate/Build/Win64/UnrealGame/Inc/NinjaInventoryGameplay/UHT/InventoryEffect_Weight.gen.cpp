// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Effects/InventoryEffect_Weight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryEffect_Weight() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryEffect_Weight();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryEffect_Weight_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UInventoryEffect_Weight
void UInventoryEffect_Weight::StaticRegisterNativesUInventoryEffect_Weight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryEffect_Weight);
UClass* Z_Construct_UClass_UInventoryEffect_Weight_NoRegister()
{
	return UInventoryEffect_Weight::StaticClass();
}
struct Z_Construct_UClass_UInventoryEffect_Weight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A gameplay effect that adds to the Encumbrance attribute.\n *\n * It's designed in a way that a Fragment can set the actual weight externally, instead of requiring\n * that each item defines their own Gameplay Effect separately, which simplifies things a lot.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/InventoryEffect_Weight.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/InventoryEffect_Weight.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
		{ "ToolTip", "A gameplay effect that adds to the Encumbrance attribute.\n\nIt's designed in a way that a Fragment can set the actual weight externally, instead of requiring\nthat each item defines their own Gameplay Effect separately, which simplifies things a lot." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryEffect_Weight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryEffect_Weight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEffect_Weight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryEffect_Weight_Statics::ClassParams = {
	&UInventoryEffect_Weight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryEffect_Weight_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryEffect_Weight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryEffect_Weight()
{
	if (!Z_Registration_Info_UClass_UInventoryEffect_Weight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryEffect_Weight.OuterSingleton, Z_Construct_UClass_UInventoryEffect_Weight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryEffect_Weight.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryEffect_Weight>()
{
	return UInventoryEffect_Weight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryEffect_Weight);
UInventoryEffect_Weight::~UInventoryEffect_Weight() {}
// End Class UInventoryEffect_Weight

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Weight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryEffect_Weight, UInventoryEffect_Weight::StaticClass, TEXT("UInventoryEffect_Weight"), &Z_Registration_Info_UClass_UInventoryEffect_Weight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryEffect_Weight), 3072049496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Weight_h_3552884956(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Weight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Effects_InventoryEffect_Weight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
