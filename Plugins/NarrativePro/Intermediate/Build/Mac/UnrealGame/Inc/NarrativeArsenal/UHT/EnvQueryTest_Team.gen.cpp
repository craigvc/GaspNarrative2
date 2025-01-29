// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/EnvQueryTest_Team.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Team() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_Team();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEnvQueryTest_Team_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UEnvQueryTest_Team
void UEnvQueryTest_Team::StaticRegisterNativesUEnvQueryTest_Team()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Team);
UClass* Z_Construct_UClass_UEnvQueryTest_Team_NoRegister()
{
	return UEnvQueryTest_Team::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Team_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An EQS test that filters out actors that match the required attitude\n */" },
		{ "IncludePath", "AI/EnvQueryTest_Team.h" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_Team.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An EQS test that filters out actors that match the required attitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFriendlies_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_Team.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeNeutrals_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_Team.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeEnemies_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_Team.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeFriendlies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFriendlies;
	static void NewProp_bIncludeNeutrals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeNeutrals;
	static void NewProp_bIncludeEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Team>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeFriendlies_SetBit(void* Obj)
{
	((UEnvQueryTest_Team*)Obj)->bIncludeFriendlies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeFriendlies = { "bIncludeFriendlies", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_Team), &Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeFriendlies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFriendlies_MetaData), NewProp_bIncludeFriendlies_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeNeutrals_SetBit(void* Obj)
{
	((UEnvQueryTest_Team*)Obj)->bIncludeNeutrals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeNeutrals = { "bIncludeNeutrals", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_Team), &Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeNeutrals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeNeutrals_MetaData), NewProp_bIncludeNeutrals_MetaData) };
void Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeEnemies_SetBit(void* Obj)
{
	((UEnvQueryTest_Team*)Obj)->bIncludeEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeEnemies = { "bIncludeEnemies", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnvQueryTest_Team), &Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeEnemies_MetaData), NewProp_bIncludeEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Team_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeFriendlies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeNeutrals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Team_Statics::NewProp_bIncludeEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Team_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Team_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Team_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Team_Statics::ClassParams = {
	&UEnvQueryTest_Team::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Team_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Team_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Team_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Team_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Team()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Team.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Team.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Team_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Team.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UEnvQueryTest_Team>()
{
	return UEnvQueryTest_Team::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Team);
UEnvQueryTest_Team::~UEnvQueryTest_Team() {}
// End Class UEnvQueryTest_Team

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_Team_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Team, UEnvQueryTest_Team::StaticClass, TEXT("UEnvQueryTest_Team"), &Z_Registration_Info_UClass_UEnvQueryTest_Team, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Team), 3357820696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_Team_h_2296685773(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_Team_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_EnvQueryTest_Team_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
