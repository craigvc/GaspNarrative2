// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsEditor/Public/Factories/Factory_NinjaFactionAttitudeSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_NinjaFactionAttitudeSolver() {}

// Begin Cross Module References
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver();
NINJAFACTIONSEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsEditor();
// End Cross Module References

// Begin Class UFactory_NinjaFactionAttitudeSolver
void UFactory_NinjaFactionAttitudeSolver::StaticRegisterNativesUFactory_NinjaFactionAttitudeSolver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_NinjaFactionAttitudeSolver);
UClass* Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_NoRegister()
{
	return UFactory_NinjaFactionAttitudeSolver::StaticClass();
}
struct Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory_NinjaFactionAttitudeSolver.h" },
		{ "ModuleRelativePath", "Public/Factories/Factory_NinjaFactionAttitudeSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_NinjaFactionAttitudeSolver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::ClassParams = {
	&UFactory_NinjaFactionAttitudeSolver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver()
{
	if (!Z_Registration_Info_UClass_UFactory_NinjaFactionAttitudeSolver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_NinjaFactionAttitudeSolver.OuterSingleton, Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_NinjaFactionAttitudeSolver.OuterSingleton;
}
template<> NINJAFACTIONSEDITOR_API UClass* StaticClass<UFactory_NinjaFactionAttitudeSolver>()
{
	return UFactory_NinjaFactionAttitudeSolver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_NinjaFactionAttitudeSolver);
UFactory_NinjaFactionAttitudeSolver::~UFactory_NinjaFactionAttitudeSolver() {}
// End Class UFactory_NinjaFactionAttitudeSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionAttitudeSolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_NinjaFactionAttitudeSolver, UFactory_NinjaFactionAttitudeSolver::StaticClass, TEXT("UFactory_NinjaFactionAttitudeSolver"), &Z_Registration_Info_UClass_UFactory_NinjaFactionAttitudeSolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_NinjaFactionAttitudeSolver), 748586707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionAttitudeSolver_h_1546360401(TEXT("/Script/NinjaFactionsEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionAttitudeSolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsEditor_Public_Factories_Factory_NinjaFactionAttitudeSolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
