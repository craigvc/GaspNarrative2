// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Aspects/UpgradeableItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeableItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UUpgradeableItemInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UUpgradeableItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UUpgradeableItemInterface
void UUpgradeableItemInterface::StaticRegisterNativesUUpgradeableItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpgradeableItemInterface);
UClass* Z_Construct_UClass_UUpgradeableItemInterface_NoRegister()
{
	return UUpgradeableItemInterface::StaticClass();
}
struct Z_Construct_UClass_UUpgradeableItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/UpgradeableItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUpgradeableItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUpgradeableItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeableItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeableItemInterface_Statics::ClassParams = {
	&UUpgradeableItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeableItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpgradeableItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUpgradeableItemInterface()
{
	if (!Z_Registration_Info_UClass_UUpgradeableItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpgradeableItemInterface.OuterSingleton, Z_Construct_UClass_UUpgradeableItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpgradeableItemInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UUpgradeableItemInterface>()
{
	return UUpgradeableItemInterface::StaticClass();
}
UUpgradeableItemInterface::UUpgradeableItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeableItemInterface);
UUpgradeableItemInterface::~UUpgradeableItemInterface() {}
// End Interface UUpgradeableItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_UpgradeableItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpgradeableItemInterface, UUpgradeableItemInterface::StaticClass, TEXT("UUpgradeableItemInterface"), &Z_Registration_Info_UClass_UUpgradeableItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpgradeableItemInterface), 935181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_UpgradeableItemInterface_h_2743905823(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_UpgradeableItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_UpgradeableItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
