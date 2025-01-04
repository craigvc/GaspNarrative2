// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGASEditor/Public/Factories/Factory_NinjaGASSetupData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_NinjaGASSetupData() {}

// Begin Cross Module References
NINJAGASEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaGASSetupData();
NINJAGASEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaGASSetupData_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaGASEditor();
// End Cross Module References

// Begin Class UFactory_NinjaGASSetupData
void UFactory_NinjaGASSetupData::StaticRegisterNativesUFactory_NinjaGASSetupData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_NinjaGASSetupData);
UClass* Z_Construct_UClass_UFactory_NinjaGASSetupData_NoRegister()
{
	return UFactory_NinjaGASSetupData::StaticClass();
}
struct Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory_NinjaGASSetupData.h" },
		{ "ModuleRelativePath", "Public/Factories/Factory_NinjaGASSetupData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_NinjaGASSetupData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGASEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::ClassParams = {
	&UFactory_NinjaGASSetupData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_NinjaGASSetupData()
{
	if (!Z_Registration_Info_UClass_UFactory_NinjaGASSetupData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_NinjaGASSetupData.OuterSingleton, Z_Construct_UClass_UFactory_NinjaGASSetupData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_NinjaGASSetupData.OuterSingleton;
}
template<> NINJAGASEDITOR_API UClass* StaticClass<UFactory_NinjaGASSetupData>()
{
	return UFactory_NinjaGASSetupData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_NinjaGASSetupData);
UFactory_NinjaGASSetupData::~UFactory_NinjaGASSetupData() {}
// End Class UFactory_NinjaGASSetupData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGASEditor_Public_Factories_Factory_NinjaGASSetupData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_NinjaGASSetupData, UFactory_NinjaGASSetupData::StaticClass, TEXT("UFactory_NinjaGASSetupData"), &Z_Registration_Info_UClass_UFactory_NinjaGASSetupData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_NinjaGASSetupData), 385394077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGASEditor_Public_Factories_Factory_NinjaGASSetupData_h_1915616092(TEXT("/Script/NinjaGASEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGASEditor_Public_Factories_Factory_NinjaGASSetupData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGASEditor_Public_Factories_Factory_NinjaGASSetupData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
