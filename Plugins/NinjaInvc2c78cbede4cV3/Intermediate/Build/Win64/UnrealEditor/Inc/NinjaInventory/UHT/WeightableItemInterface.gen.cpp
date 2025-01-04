// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Aspects/WeightableItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightableItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UWeightableItemInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UWeightableItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UWeightableItemInterface
void UWeightableItemInterface::StaticRegisterNativesUWeightableItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightableItemInterface);
UClass* Z_Construct_UClass_UWeightableItemInterface_NoRegister()
{
	return UWeightableItemInterface::StaticClass();
}
struct Z_Construct_UClass_UWeightableItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/WeightableItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeightableItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeightableItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightableItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightableItemInterface_Statics::ClassParams = {
	&UWeightableItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightableItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightableItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeightableItemInterface()
{
	if (!Z_Registration_Info_UClass_UWeightableItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightableItemInterface.OuterSingleton, Z_Construct_UClass_UWeightableItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeightableItemInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UWeightableItemInterface>()
{
	return UWeightableItemInterface::StaticClass();
}
UWeightableItemInterface::UWeightableItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightableItemInterface);
UWeightableItemInterface::~UWeightableItemInterface() {}
// End Interface UWeightableItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_WeightableItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeightableItemInterface, UWeightableItemInterface::StaticClass, TEXT("UWeightableItemInterface"), &Z_Registration_Info_UClass_UWeightableItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightableItemInterface), 4172510744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_WeightableItemInterface_h_1686609478(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_WeightableItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_WeightableItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
