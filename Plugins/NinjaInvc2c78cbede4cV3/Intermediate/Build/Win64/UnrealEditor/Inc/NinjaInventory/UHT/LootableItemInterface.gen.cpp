// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Aspects/LootableItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootableItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootableItemInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootableItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface ULootableItemInterface
void ULootableItemInterface::StaticRegisterNativesULootableItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootableItemInterface);
UClass* Z_Construct_UClass_ULootableItemInterface_NoRegister()
{
	return ULootableItemInterface::StaticClass();
}
struct Z_Construct_UClass_ULootableItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/LootableItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILootableItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULootableItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootableItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootableItemInterface_Statics::ClassParams = {
	&ULootableItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootableItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootableItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootableItemInterface()
{
	if (!Z_Registration_Info_UClass_ULootableItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootableItemInterface.OuterSingleton, Z_Construct_UClass_ULootableItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootableItemInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<ULootableItemInterface>()
{
	return ULootableItemInterface::StaticClass();
}
ULootableItemInterface::ULootableItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootableItemInterface);
ULootableItemInterface::~ULootableItemInterface() {}
// End Interface ULootableItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_LootableItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootableItemInterface, ULootableItemInterface::StaticClass, TEXT("ULootableItemInterface"), &Z_Registration_Info_UClass_ULootableItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootableItemInterface), 2226237777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_LootableItemInterface_h_568835487(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_LootableItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_LootableItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
