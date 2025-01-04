// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEditor/Public/Factories/FFactory_InventoryLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactory_InventoryLayout() {}

// Begin Cross Module References
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_InventoryLayout();
NINJAINVENTORYEDITOR_API UClass* Z_Construct_UClass_UFactory_InventoryLayout_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEditor();
// End Cross Module References

// Begin Class UFactory_InventoryLayout
void UFactory_InventoryLayout::StaticRegisterNativesUFactory_InventoryLayout()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_InventoryLayout);
UClass* Z_Construct_UClass_UFactory_InventoryLayout_NoRegister()
{
	return UFactory_InventoryLayout::StaticClass();
}
struct Z_Construct_UClass_UFactory_InventoryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FFactory_InventoryLayout.h" },
		{ "ModuleRelativePath", "Public/Factories/FFactory_InventoryLayout.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_InventoryLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_InventoryLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InventoryLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_InventoryLayout_Statics::ClassParams = {
	&UFactory_InventoryLayout::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InventoryLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_InventoryLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_InventoryLayout()
{
	if (!Z_Registration_Info_UClass_UFactory_InventoryLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_InventoryLayout.OuterSingleton, Z_Construct_UClass_UFactory_InventoryLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_InventoryLayout.OuterSingleton;
}
template<> NINJAINVENTORYEDITOR_API UClass* StaticClass<UFactory_InventoryLayout>()
{
	return UFactory_InventoryLayout::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_InventoryLayout);
UFactory_InventoryLayout::~UFactory_InventoryLayout() {}
// End Class UFactory_InventoryLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryLayout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_InventoryLayout, UFactory_InventoryLayout::StaticClass, TEXT("UFactory_InventoryLayout"), &Z_Registration_Info_UClass_UFactory_InventoryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_InventoryLayout), 4239192864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryLayout_h_3528771712(TEXT("/Script/NinjaInventoryEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEditor_Public_Factories_FFactory_InventoryLayout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
