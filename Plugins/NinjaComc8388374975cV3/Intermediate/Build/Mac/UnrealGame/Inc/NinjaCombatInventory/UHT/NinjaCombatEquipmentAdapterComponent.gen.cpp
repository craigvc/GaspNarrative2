// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatInventory/Public/Components/NinjaCombatEquipmentAdapterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatEquipmentAdapterComponent() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent();
NINJACOMBATINVENTORY_API UClass* Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent();
NINJACOMBATINVENTORY_API UClass* Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatInventory();
// End Cross Module References

// Begin Class UNinjaCombatEquipmentAdapterComponent
void UNinjaCombatEquipmentAdapterComponent::StaticRegisterNativesUNinjaCombatEquipmentAdapterComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatEquipmentAdapterComponent);
UClass* Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_NoRegister()
{
	return UNinjaCombatEquipmentAdapterComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Adapts the Weapon Manager to the Ninja Equipment Manager.\n */" },
		{ "IncludePath", "Components/NinjaCombatEquipmentAdapterComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatEquipmentAdapterComponent.h" },
		{ "ToolTip", "Adapts the Weapon Manager to the Ninja Equipment Manager." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatEquipmentAdapterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatBaseWeaponManagerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::ClassParams = {
	&UNinjaCombatEquipmentAdapterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatEquipmentAdapterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatEquipmentAdapterComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatEquipmentAdapterComponent.OuterSingleton;
}
template<> NINJACOMBATINVENTORY_API UClass* StaticClass<UNinjaCombatEquipmentAdapterComponent>()
{
	return UNinjaCombatEquipmentAdapterComponent::StaticClass();
}
UNinjaCombatEquipmentAdapterComponent::UNinjaCombatEquipmentAdapterComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatEquipmentAdapterComponent);
UNinjaCombatEquipmentAdapterComponent::~UNinjaCombatEquipmentAdapterComponent() {}
// End Class UNinjaCombatEquipmentAdapterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_Components_NinjaCombatEquipmentAdapterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatEquipmentAdapterComponent, UNinjaCombatEquipmentAdapterComponent::StaticClass, TEXT("UNinjaCombatEquipmentAdapterComponent"), &Z_Registration_Info_UClass_UNinjaCombatEquipmentAdapterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatEquipmentAdapterComponent), 2446860421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_Components_NinjaCombatEquipmentAdapterComponent_h_235648590(TEXT("/Script/NinjaCombatInventory"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_Components_NinjaCombatEquipmentAdapterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatInventory_Public_Components_NinjaCombatEquipmentAdapterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
