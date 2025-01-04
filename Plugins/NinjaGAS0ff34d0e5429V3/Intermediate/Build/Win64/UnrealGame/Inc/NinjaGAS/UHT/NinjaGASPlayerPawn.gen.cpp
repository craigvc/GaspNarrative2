// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/GameFramework/NinjaGASPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASPlayerPawn() {}

// Begin Cross Module References
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPawn();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerPawn();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class ANinjaGASPlayerPawn
void ANinjaGASPlayerPawn::StaticRegisterNativesANinjaGASPlayerPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaGASPlayerPawn);
UClass* Z_Construct_UClass_ANinjaGASPlayerPawn_NoRegister()
{
	return ANinjaGASPlayerPawn::StaticClass();
}
struct Z_Construct_UClass_ANinjaGASPlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A specialized class that will obtain the Ability System Component from the Player State.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/NinjaGASPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASPlayerPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A specialized class that will obtain the Ability System Component from the Player State." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaGASPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaGASPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::ClassParams = {
	&ANinjaGASPlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaGASPlayerPawn()
{
	if (!Z_Registration_Info_UClass_ANinjaGASPlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaGASPlayerPawn.OuterSingleton, Z_Construct_UClass_ANinjaGASPlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaGASPlayerPawn.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<ANinjaGASPlayerPawn>()
{
	return ANinjaGASPlayerPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaGASPlayerPawn);
ANinjaGASPlayerPawn::~ANinjaGASPlayerPawn() {}
// End Class ANinjaGASPlayerPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaGASPlayerPawn, ANinjaGASPlayerPawn::StaticClass, TEXT("ANinjaGASPlayerPawn"), &Z_Registration_Info_UClass_ANinjaGASPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaGASPlayerPawn), 1858299564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerPawn_h_2010988485(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
