// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Blueprints/NinjaFactionAttitudeSolverBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionAttitudeSolverBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionAttitudeSolverBlueprint
void UNinjaFactionAttitudeSolverBlueprint::StaticRegisterNativesUNinjaFactionAttitudeSolverBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionAttitudeSolverBlueprint);
UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_NoRegister()
{
	return UNinjaFactionAttitudeSolverBlueprint::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An attitude solver is capable of evaluating the attitude between two given factions. \n */" },
		{ "IncludePath", "Blueprints/NinjaFactionAttitudeSolverBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprints/NinjaFactionAttitudeSolverBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An attitude solver is capable of evaluating the attitude between two given factions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionAttitudeSolverBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::ClassParams = {
	&UNinjaFactionAttitudeSolverBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x019000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionAttitudeSolverBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionAttitudeSolverBlueprint.OuterSingleton, Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionAttitudeSolverBlueprint.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionAttitudeSolverBlueprint>()
{
	return UNinjaFactionAttitudeSolverBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionAttitudeSolverBlueprint);
UNinjaFactionAttitudeSolverBlueprint::~UNinjaFactionAttitudeSolverBlueprint() {}
// End Class UNinjaFactionAttitudeSolverBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionAttitudeSolverBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionAttitudeSolverBlueprint, UNinjaFactionAttitudeSolverBlueprint::StaticClass, TEXT("UNinjaFactionAttitudeSolverBlueprint"), &Z_Registration_Info_UClass_UNinjaFactionAttitudeSolverBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionAttitudeSolverBlueprint), 353638480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionAttitudeSolverBlueprint_h_2030078351(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionAttitudeSolverBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Blueprints_NinjaFactionAttitudeSolverBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
