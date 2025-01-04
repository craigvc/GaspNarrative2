// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/GameFramework/NinjaGASPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASPlayerCharacter() {}

// Begin Cross Module References
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASCharacter();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerCharacter();
NINJAGAS_API UClass* Z_Construct_UClass_ANinjaGASPlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class ANinjaGASPlayerCharacter
void ANinjaGASPlayerCharacter::StaticRegisterNativesANinjaGASPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaGASPlayerCharacter);
UClass* Z_Construct_UClass_ANinjaGASPlayerCharacter_NoRegister()
{
	return ANinjaGASPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A specialized class that will obtain the Ability System Component from the Player State.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/NinjaGASPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaGASPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A specialized class that will obtain the Ability System Component from the Player State." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaGASPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaGASCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::ClassParams = {
	&ANinjaGASPlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaGASPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ANinjaGASPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaGASPlayerCharacter.OuterSingleton, Z_Construct_UClass_ANinjaGASPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaGASPlayerCharacter.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<ANinjaGASPlayerCharacter>()
{
	return ANinjaGASPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaGASPlayerCharacter);
ANinjaGASPlayerCharacter::~ANinjaGASPlayerCharacter() {}
// End Class ANinjaGASPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaGASPlayerCharacter, ANinjaGASPlayerCharacter::StaticClass, TEXT("ANinjaGASPlayerCharacter"), &Z_Registration_Info_UClass_ANinjaGASPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaGASPlayerCharacter), 2287243236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerCharacter_h_3475826918(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
