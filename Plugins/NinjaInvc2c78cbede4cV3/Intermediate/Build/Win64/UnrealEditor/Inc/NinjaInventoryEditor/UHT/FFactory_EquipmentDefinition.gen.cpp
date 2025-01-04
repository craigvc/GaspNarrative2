// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEditor/Public/Factories/FFactory_EquipmentDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactory_EquipmentDefinition() {}

// Begin Cross Module References
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_EquipmentDefinition();
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_EquipmentDefinition_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEditor();
// End Cross Module References

// Begin Class UFactory_EquipmentDefinition
void UFactory_EquipmentDefinition::StaticRegisterNativesUFactory_EquipmentDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_EquipmentDefinition);
UClass* Z_Construct_UClass_UFactory_EquipmentDefinition_NoRegister()
{
	return UFactory_EquipmentDefinition::StaticClass();
}
struct Z_Construct_UClass_UFactory_EquipmentDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FFactory_EquipmentDefinition.h" },
		{ "ModuleRelativePath", "Public/Factories/FFactory_EquipmentDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_EquipmentDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::ClassParams = {
	&UFactory_EquipmentDefinition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_EquipmentDefinition()
{
	if (!Z_Registration_Info_UClass_UFactory_EquipmentDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_EquipmentDefinition.OuterSingleton, Z_Construct_UClass_UFactory_EquipmentDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_EquipmentDefinition.OuterSingleton;
}
template<> NINJAINVENTORYEDITOR_API UClass* StaticClass<UFactory_EquipmentDefinition>()
{
	return UFactory_EquipmentDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_EquipmentDefinition);
UFactory_EquipmentDefinition::~UFactory_EquipmentDefinition() {}
// End Class UFactory_EquipmentDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_EquipmentDefinition, UFactory_EquipmentDefinition::StaticClass, TEXT("UFactory_EquipmentDefinition"), &Z_Registration_Info_UClass_UFactory_EquipmentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_EquipmentDefinition), 3192588274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentDefinition_h_3571404935(TEXT("/Script/NinjaInventoryEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
