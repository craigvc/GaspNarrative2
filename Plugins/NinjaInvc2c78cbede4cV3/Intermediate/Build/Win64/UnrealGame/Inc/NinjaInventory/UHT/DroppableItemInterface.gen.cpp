// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Aspects/DroppableItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroppableItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UDroppableItemInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UDroppableItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Interface UDroppableItemInterface
void UDroppableItemInterface::StaticRegisterNativesUDroppableItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroppableItemInterface);
UClass* Z_Construct_UClass_UDroppableItemInterface_NoRegister()
{
	return UDroppableItemInterface::StaticClass();
}
struct Z_Construct_UClass_UDroppableItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/DroppableItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDroppableItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDroppableItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDroppableItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroppableItemInterface_Statics::ClassParams = {
	&UDroppableItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDroppableItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDroppableItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDroppableItemInterface()
{
	if (!Z_Registration_Info_UClass_UDroppableItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroppableItemInterface.OuterSingleton, Z_Construct_UClass_UDroppableItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDroppableItemInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UDroppableItemInterface>()
{
	return UDroppableItemInterface::StaticClass();
}
UDroppableItemInterface::UDroppableItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDroppableItemInterface);
UDroppableItemInterface::~UDroppableItemInterface() {}
// End Interface UDroppableItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_DroppableItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDroppableItemInterface, UDroppableItemInterface::StaticClass, TEXT("UDroppableItemInterface"), &Z_Registration_Info_UClass_UDroppableItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroppableItemInterface), 3093478149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_DroppableItemInterface_h_4254277403(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_DroppableItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_DroppableItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
