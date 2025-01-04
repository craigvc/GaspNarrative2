// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/InventoryLootCacheInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryLootCacheInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryLootCacheInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UInventoryLootCacheInterface
void UInventoryLootCacheInterface::StaticRegisterNativesUInventoryLootCacheInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryLootCacheInterface);
UClass* Z_Construct_UClass_UInventoryLootCacheInterface_NoRegister()
{
	return UInventoryLootCacheInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryLootCacheInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/InventoryLootCacheInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryLootCacheInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryLootCacheInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLootCacheInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryLootCacheInterface_Statics::ClassParams = {
	&UInventoryLootCacheInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryLootCacheInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryLootCacheInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryLootCacheInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryLootCacheInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryLootCacheInterface.OuterSingleton, Z_Construct_UClass_UInventoryLootCacheInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryLootCacheInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UInventoryLootCacheInterface>()
{
	return UInventoryLootCacheInterface::StaticClass();
}
UInventoryLootCacheInterface::UInventoryLootCacheInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryLootCacheInterface);
UInventoryLootCacheInterface::~UInventoryLootCacheInterface() {}
// End Interface UInventoryLootCacheInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryLootCacheInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryLootCacheInterface, UInventoryLootCacheInterface::StaticClass, TEXT("UInventoryLootCacheInterface"), &Z_Registration_Info_UClass_UInventoryLootCacheInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryLootCacheInterface), 418726335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryLootCacheInterface_h_3355512939(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryLootCacheInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryLootCacheInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
