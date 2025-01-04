// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Data/NinjaEquipmentSlotDataAsset.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentMeshTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentSlotDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSlotDataAsset();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkeletalMesh();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentSlotDataAsset
void UNinjaEquipmentSlotDataAsset::StaticRegisterNativesUNinjaEquipmentSlotDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentSlotDataAsset);
UClass* Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_NoRegister()
{
	return UNinjaEquipmentSlotDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default configuration for slots used by equipments.\n */" },
		{ "IncludePath", "Data/NinjaEquipmentSlotDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentSlotDataAsset.h" },
		{ "ToolTip", "Default configuration for slots used by equipments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[] = {
		{ "AssetBundles", "Meshes" },
		{ "Category", "Slot Data" },
		{ "Comment", "/** Default data for equipment slots. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaEquipmentSlotDataAsset.h" },
		{ "TitleProperty", "SlotTag" },
		{ "ToolTip", "Default data for equipment slots." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentSlotDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentSkeletalMesh, METADATA_PARAMS(0, nullptr) }; // 1300637625
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaEquipmentSlotDataAsset, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshes_MetaData), NewProp_SkeletalMeshes_MetaData) }; // 1300637625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::NewProp_SkeletalMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::NewProp_SkeletalMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::ClassParams = {
	&UNinjaEquipmentSlotDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentSlotDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentSlotDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentSlotDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentSlotDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentSlotDataAsset.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentSlotDataAsset>()
{
	return UNinjaEquipmentSlotDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentSlotDataAsset);
UNinjaEquipmentSlotDataAsset::~UNinjaEquipmentSlotDataAsset() {}
// End Class UNinjaEquipmentSlotDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentSlotDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentSlotDataAsset, UNinjaEquipmentSlotDataAsset::StaticClass, TEXT("UNinjaEquipmentSlotDataAsset"), &Z_Registration_Info_UClass_UNinjaEquipmentSlotDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentSlotDataAsset), 4174729791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentSlotDataAsset_h_1786928430(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentSlotDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Data_NinjaEquipmentSlotDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
