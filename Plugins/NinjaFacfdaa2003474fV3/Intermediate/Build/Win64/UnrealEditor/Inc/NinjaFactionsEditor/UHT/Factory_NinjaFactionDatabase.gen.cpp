// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsEditor/Public/Factories/Factory_NinjaFactionDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_NinjaFactionDatabase() {}

// Begin Cross Module References
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionDatabase();
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionDatabase_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsEditor();
// End Cross Module References

// Begin Class UFactory_NinjaFactionDatabase
void UFactory_NinjaFactionDatabase::StaticRegisterNativesUFactory_NinjaFactionDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_NinjaFactionDatabase);
UClass* Z_Construct_UClass_UFactory_NinjaFactionDatabase_NoRegister()
{
	return UFactory_NinjaFactionDatabase::StaticClass();
}
struct Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory_NinjaFactionDatabase.h" },
		{ "ModuleRelativePath", "Public/Factories/Factory_NinjaFactionDatabase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_NinjaFactionDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::ClassParams = {
	&UFactory_NinjaFactionDatabase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_NinjaFactionDatabase()
{
	if (!Z_Registration_Info_UClass_UFactory_NinjaFactionDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_NinjaFactionDatabase.OuterSingleton, Z_Construct_UClass_UFactory_NinjaFactionDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_NinjaFactionDatabase.OuterSingleton;
}
template<> NINJAFACTIONSEDITOR_API UClass* StaticClass<UFactory_NinjaFactionDatabase>()
{
	return UFactory_NinjaFactionDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_NinjaFactionDatabase);
UFactory_NinjaFactionDatabase::~UFactory_NinjaFactionDatabase() {}
// End Class UFactory_NinjaFactionDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_NinjaFactionDatabase, UFactory_NinjaFactionDatabase::StaticClass, TEXT("UFactory_NinjaFactionDatabase"), &Z_Registration_Info_UClass_UFactory_NinjaFactionDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_NinjaFactionDatabase), 850398157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionDatabase_h_3825436178(TEXT("/Script/NinjaFactionsEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
