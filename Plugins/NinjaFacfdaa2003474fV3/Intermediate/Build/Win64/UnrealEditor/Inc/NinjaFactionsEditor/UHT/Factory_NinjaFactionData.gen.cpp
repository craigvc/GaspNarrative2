// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsEditor/Public/Factories/Factory_NinjaFactionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_NinjaFactionData() {}

// Begin Cross Module References
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionData();
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionData_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsEditor();
// End Cross Module References

// Begin Class UFactory_NinjaFactionData
void UFactory_NinjaFactionData::StaticRegisterNativesUFactory_NinjaFactionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_NinjaFactionData);
UClass* Z_Construct_UClass_UFactory_NinjaFactionData_NoRegister()
{
	return UFactory_NinjaFactionData::StaticClass();
}
struct Z_Construct_UClass_UFactory_NinjaFactionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory_NinjaFactionData.h" },
		{ "ModuleRelativePath", "Public/Factories/Factory_NinjaFactionData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_NinjaFactionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_NinjaFactionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_NinjaFactionData_Statics::ClassParams = {
	&UFactory_NinjaFactionData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_NinjaFactionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_NinjaFactionData()
{
	if (!Z_Registration_Info_UClass_UFactory_NinjaFactionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_NinjaFactionData.OuterSingleton, Z_Construct_UClass_UFactory_NinjaFactionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_NinjaFactionData.OuterSingleton;
}
template<> NINJAFACTIONSEDITOR_API UClass* StaticClass<UFactory_NinjaFactionData>()
{
	return UFactory_NinjaFactionData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_NinjaFactionData);
UFactory_NinjaFactionData::~UFactory_NinjaFactionData() {}
// End Class UFactory_NinjaFactionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_NinjaFactionData, UFactory_NinjaFactionData::StaticClass, TEXT("UFactory_NinjaFactionData"), &Z_Registration_Info_UClass_UFactory_NinjaFactionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_NinjaFactionData), 1354234920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionData_h_3508284706(TEXT("/Script/NinjaFactionsEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
