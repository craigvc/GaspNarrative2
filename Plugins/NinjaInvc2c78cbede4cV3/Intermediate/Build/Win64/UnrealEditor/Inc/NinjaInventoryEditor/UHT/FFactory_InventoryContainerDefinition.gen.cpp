// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEditor/Public/Factories/FFactory_InventoryContainerDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactory_InventoryContainerDefinition() {}

// Begin Cross Module References
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_InventoryContainerDefinition();
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_InventoryContainerDefinition_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEditor();
// End Cross Module References

// Begin Class UFactory_InventoryContainerDefinition
void UFactory_InventoryContainerDefinition::StaticRegisterNativesUFactory_InventoryContainerDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_InventoryContainerDefinition);
UClass* Z_Construct_UClass_UFactory_InventoryContainerDefinition_NoRegister()
{
	return UFactory_InventoryContainerDefinition::StaticClass();
}
struct Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FFactory_InventoryContainerDefinition.h" },
		{ "ModuleRelativePath", "Public/Factories/FFactory_InventoryContainerDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_InventoryContainerDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::ClassParams = {
	&UFactory_InventoryContainerDefinition::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_InventoryContainerDefinition()
{
	if (!Z_Registration_Info_UClass_UFactory_InventoryContainerDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_InventoryContainerDefinition.OuterSingleton, Z_Construct_UClass_UFactory_InventoryContainerDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_InventoryContainerDefinition.OuterSingleton;
}
template<> NINJAINVENTORYEDITOR_API UClass* StaticClass<UFactory_InventoryContainerDefinition>()
{
	return UFactory_InventoryContainerDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_InventoryContainerDefinition);
UFactory_InventoryContainerDefinition::~UFactory_InventoryContainerDefinition() {}
// End Class UFactory_InventoryContainerDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryContainerDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_InventoryContainerDefinition, UFactory_InventoryContainerDefinition::StaticClass, TEXT("UFactory_InventoryContainerDefinition"), &Z_Registration_Info_UClass_UFactory_InventoryContainerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_InventoryContainerDefinition), 3488625462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryContainerDefinition_h_3900727899(TEXT("/Script/NinjaInventoryEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryContainerDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryContainerDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
