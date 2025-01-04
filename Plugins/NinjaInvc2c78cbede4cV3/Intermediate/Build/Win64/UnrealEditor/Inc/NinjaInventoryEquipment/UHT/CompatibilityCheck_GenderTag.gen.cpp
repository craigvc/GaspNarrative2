// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/CombatibilityChecks/CompatibilityCheck_GenderTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompatibilityCheck_GenderTag() {}

// Begin Cross Module References
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UCompatibilityCheck_GenderTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UCompatibilityCheck_GenderTag_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UCompatibilityCheck_GenderTag
void UCompatibilityCheck_GenderTag::StaticRegisterNativesUCompatibilityCheck_GenderTag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompatibilityCheck_GenderTag);
UClass* Z_Construct_UClass_UCompatibilityCheck_GenderTag_NoRegister()
{
	return UCompatibilityCheck_GenderTag::StaticClass();
}
struct Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Checks an asset's compatibility with the owner based on a gender tag for the body type.\n */" },
		{ "IncludePath", "GameFramework/CombatibilityChecks/CompatibilityCheck_GenderTag.h" },
		{ "ModuleRelativePath", "Public/GameFramework/CombatibilityChecks/CompatibilityCheck_GenderTag.h" },
		{ "ToolTip", "Checks an asset's compatibility with the owner based on a gender tag for the body type." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompatibilityCheck_GenderTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaEquipmentAssetCompatibilityCheck,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::ClassParams = {
	&UCompatibilityCheck_GenderTag::StaticClass,
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
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompatibilityCheck_GenderTag()
{
	if (!Z_Registration_Info_UClass_UCompatibilityCheck_GenderTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompatibilityCheck_GenderTag.OuterSingleton, Z_Construct_UClass_UCompatibilityCheck_GenderTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompatibilityCheck_GenderTag.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UCompatibilityCheck_GenderTag>()
{
	return UCompatibilityCheck_GenderTag::StaticClass();
}
UCompatibilityCheck_GenderTag::UCompatibilityCheck_GenderTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompatibilityCheck_GenderTag);
UCompatibilityCheck_GenderTag::~UCompatibilityCheck_GenderTag() {}
// End Class UCompatibilityCheck_GenderTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_CombatibilityChecks_CompatibilityCheck_GenderTag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompatibilityCheck_GenderTag, UCompatibilityCheck_GenderTag::StaticClass, TEXT("UCompatibilityCheck_GenderTag"), &Z_Registration_Info_UClass_UCompatibilityCheck_GenderTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompatibilityCheck_GenderTag), 3940307212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_CombatibilityChecks_CompatibilityCheck_GenderTag_h_2182888564(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_CombatibilityChecks_CompatibilityCheck_GenderTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_CombatibilityChecks_CompatibilityCheck_GenderTag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
