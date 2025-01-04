// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Abilities/InventoryAbility_ActivateEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryAbility_ActivateEquipment() {}

// Begin Cross Module References
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_ActivateEquipment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_ActivateEquipment_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UInventoryAbility_ActivateEquipment
void UInventoryAbility_ActivateEquipment::StaticRegisterNativesUInventoryAbility_ActivateEquipment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryAbility_ActivateEquipment);
UClass* Z_Construct_UClass_UInventoryAbility_ActivateEquipment_NoRegister()
{
	return UInventoryAbility_ActivateEquipment::StaticClass();
}
struct Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Activates any equipment retrieved from the provided query.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/InventoryAbility_ActivateEquipment.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ActivateEquipment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Activates any equipment retrieved from the provided query." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryAbility_ActivateEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryEquipmentStateAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::ClassParams = {
	&UInventoryAbility_ActivateEquipment::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryAbility_ActivateEquipment()
{
	if (!Z_Registration_Info_UClass_UInventoryAbility_ActivateEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryAbility_ActivateEquipment.OuterSingleton, Z_Construct_UClass_UInventoryAbility_ActivateEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryAbility_ActivateEquipment.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryAbility_ActivateEquipment>()
{
	return UInventoryAbility_ActivateEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryAbility_ActivateEquipment);
UInventoryAbility_ActivateEquipment::~UInventoryAbility_ActivateEquipment() {}
// End Class UInventoryAbility_ActivateEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ActivateEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryAbility_ActivateEquipment, UInventoryAbility_ActivateEquipment::StaticClass, TEXT("UInventoryAbility_ActivateEquipment"), &Z_Registration_Info_UClass_UInventoryAbility_ActivateEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryAbility_ActivateEquipment), 3914696335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ActivateEquipment_h_3295301216(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ActivateEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ActivateEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
