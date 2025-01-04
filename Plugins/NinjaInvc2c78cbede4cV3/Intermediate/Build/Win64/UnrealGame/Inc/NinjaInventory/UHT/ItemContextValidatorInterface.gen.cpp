// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Context/ItemContextValidatorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemContextValidatorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextValidatorInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextValidatorInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UItemContextValidatorInterface
void UItemContextValidatorInterface::StaticRegisterNativesUItemContextValidatorInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemContextValidatorInterface);
UClass* Z_Construct_UClass_UItemContextValidatorInterface_NoRegister()
{
	return UItemContextValidatorInterface::StaticClass();
}
struct Z_Construct_UClass_UItemContextValidatorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Context/ItemContextValidatorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemContextValidatorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemContextValidatorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemContextValidatorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemContextValidatorInterface_Statics::ClassParams = {
	&UItemContextValidatorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemContextValidatorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemContextValidatorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemContextValidatorInterface()
{
	if (!Z_Registration_Info_UClass_UItemContextValidatorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemContextValidatorInterface.OuterSingleton, Z_Construct_UClass_UItemContextValidatorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemContextValidatorInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UItemContextValidatorInterface>()
{
	return UItemContextValidatorInterface::StaticClass();
}
UItemContextValidatorInterface::UItemContextValidatorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemContextValidatorInterface);
UItemContextValidatorInterface::~UItemContextValidatorInterface() {}
// End Interface UItemContextValidatorInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextValidatorInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemContextValidatorInterface, UItemContextValidatorInterface::StaticClass, TEXT("UItemContextValidatorInterface"), &Z_Registration_Info_UClass_UItemContextValidatorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemContextValidatorInterface), 4259915807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextValidatorInterface_h_4245532973(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextValidatorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextValidatorInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
