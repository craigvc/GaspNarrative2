// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEditor/Public/Factories/FFactory_EquipmentSlotSetup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactory_EquipmentSlotSetup() {}

// Begin Cross Module References
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_EquipmentSlotSetup();
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_EquipmentSlotSetup_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEditor();
// End Cross Module References

// Begin Class UFactory_EquipmentSlotSetup
void UFactory_EquipmentSlotSetup::StaticRegisterNativesUFactory_EquipmentSlotSetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_EquipmentSlotSetup);
UClass* Z_Construct_UClass_UFactory_EquipmentSlotSetup_NoRegister()
{
	return UFactory_EquipmentSlotSetup::StaticClass();
}
struct Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FFactory_EquipmentSlotSetup.h" },
		{ "ModuleRelativePath", "Public/Factories/FFactory_EquipmentSlotSetup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_EquipmentSlotSetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::ClassParams = {
	&UFactory_EquipmentSlotSetup::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_EquipmentSlotSetup()
{
	if (!Z_Registration_Info_UClass_UFactory_EquipmentSlotSetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_EquipmentSlotSetup.OuterSingleton, Z_Construct_UClass_UFactory_EquipmentSlotSetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_EquipmentSlotSetup.OuterSingleton;
}
template<> NINJAINVENTORYEDITOR_API UClass* StaticClass<UFactory_EquipmentSlotSetup>()
{
	return UFactory_EquipmentSlotSetup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_EquipmentSlotSetup);
UFactory_EquipmentSlotSetup::~UFactory_EquipmentSlotSetup() {}
// End Class UFactory_EquipmentSlotSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentSlotSetup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_EquipmentSlotSetup, UFactory_EquipmentSlotSetup::StaticClass, TEXT("UFactory_EquipmentSlotSetup"), &Z_Registration_Info_UClass_UFactory_EquipmentSlotSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_EquipmentSlotSetup), 3450988905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentSlotSetup_h_1236651936(TEXT("/Script/NinjaInventoryEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentSlotSetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_EquipmentSlotSetup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
