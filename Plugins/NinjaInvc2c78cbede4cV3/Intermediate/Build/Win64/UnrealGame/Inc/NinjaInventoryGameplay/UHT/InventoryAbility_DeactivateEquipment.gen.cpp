// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Abilities/InventoryAbility_DeactivateEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryAbility_DeactivateEquipment() {}

// Begin Cross Module References
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_DeactivateEquipment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UInventoryAbility_DeactivateEquipment
void UInventoryAbility_DeactivateEquipment::StaticRegisterNativesUInventoryAbility_DeactivateEquipment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryAbility_DeactivateEquipment);
UClass* Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_NoRegister()
{
	return UInventoryAbility_DeactivateEquipment::StaticClass();
}
struct Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deactivates any equipment retrieved from the provided query.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/InventoryAbility_DeactivateEquipment.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_DeactivateEquipment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Deactivates any equipment retrieved from the provided query." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryAbility_DeactivateEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::ClassParams = {
	&UInventoryAbility_DeactivateEquipment::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryAbility_DeactivateEquipment()
{
	if (!Z_Registration_Info_UClass_UInventoryAbility_DeactivateEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryAbility_DeactivateEquipment.OuterSingleton, Z_Construct_UClass_UInventoryAbility_DeactivateEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryAbility_DeactivateEquipment.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryAbility_DeactivateEquipment>()
{
	return UInventoryAbility_DeactivateEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryAbility_DeactivateEquipment);
UInventoryAbility_DeactivateEquipment::~UInventoryAbility_DeactivateEquipment() {}
// End Class UInventoryAbility_DeactivateEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_DeactivateEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryAbility_DeactivateEquipment, UInventoryAbility_DeactivateEquipment::StaticClass, TEXT("UInventoryAbility_DeactivateEquipment"), &Z_Registration_Info_UClass_UInventoryAbility_DeactivateEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryAbility_DeactivateEquipment), 1731400827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_DeactivateEquipment_h_3747531934(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_DeactivateEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_DeactivateEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
