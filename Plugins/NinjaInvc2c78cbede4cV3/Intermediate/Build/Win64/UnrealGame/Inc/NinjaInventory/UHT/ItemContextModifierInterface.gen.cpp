// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Context/ItemContextModifierInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemContextModifierInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextModifierInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemContextModifierInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UItemContextModifierInterface
void UItemContextModifierInterface::StaticRegisterNativesUItemContextModifierInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemContextModifierInterface);
UClass* Z_Construct_UClass_UItemContextModifierInterface_NoRegister()
{
	return UItemContextModifierInterface::StaticClass();
}
struct Z_Construct_UClass_UItemContextModifierInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Context/ItemContextModifierInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemContextModifierInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemContextModifierInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemContextModifierInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemContextModifierInterface_Statics::ClassParams = {
	&UItemContextModifierInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemContextModifierInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemContextModifierInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemContextModifierInterface()
{
	if (!Z_Registration_Info_UClass_UItemContextModifierInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemContextModifierInterface.OuterSingleton, Z_Construct_UClass_UItemContextModifierInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemContextModifierInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UItemContextModifierInterface>()
{
	return UItemContextModifierInterface::StaticClass();
}
UItemContextModifierInterface::UItemContextModifierInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemContextModifierInterface);
UItemContextModifierInterface::~UItemContextModifierInterface() {}
// End Interface UItemContextModifierInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextModifierInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemContextModifierInterface, UItemContextModifierInterface::StaticClass, TEXT("UItemContextModifierInterface"), &Z_Registration_Info_UClass_UItemContextModifierInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemContextModifierInterface), 3935088781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextModifierInterface_h_604617521(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextModifierInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Context_ItemContextModifierInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
