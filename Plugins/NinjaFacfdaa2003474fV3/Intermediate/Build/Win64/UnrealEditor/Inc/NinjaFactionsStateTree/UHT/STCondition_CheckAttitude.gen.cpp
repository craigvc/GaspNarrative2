// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsStateTree/Public/AI/StateTree/STCondition_CheckAttitude.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTCondition_CheckAttitude() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
NINJAFACTIONSSTATETREE_API UClass* Z_Construct_UClass_USTCondition_CheckAttitude();
NINJAFACTIONSSTATETREE_API UClass* Z_Construct_UClass_USTCondition_CheckAttitude_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsStateTree();
// End Cross Module References

// Begin Class USTCondition_CheckAttitude
void USTCondition_CheckAttitude::StaticRegisterNativesUSTCondition_CheckAttitude()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTCondition_CheckAttitude);
UClass* Z_Construct_UClass_USTCondition_CheckAttitude_NoRegister()
{
	return USTCondition_CheckAttitude::StaticClass();
}
struct Z_Construct_UClass_USTCondition_CheckAttitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n * Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value. \n */" },
		{ "DisplayName", "Check Attitude" },
		{ "IncludePath", "AI/StateTree/STCondition_CheckAttitude.h" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STCondition_CheckAttitude.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attitude_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The Attitude to be evaluated. Most likely loaded by the faction evaluator. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STCondition_CheckAttitude.h" },
		{ "ToolTip", "The Attitude to be evaluated. Most likely loaded by the faction evaluator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeTest_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** The attitude towards the agent running the evaluator. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STCondition_CheckAttitude.h" },
		{ "ToolTip", "The attitude towards the agent running the evaluator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Informs if the output should be inverted. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STCondition_CheckAttitude.h" },
		{ "ToolTip", "Informs if the output should be inverted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attitude;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeTest;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTCondition_CheckAttitude>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCondition_CheckAttitude, Attitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attitude_MetaData), NewProp_Attitude_MetaData) }; // 2991328252
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_AttitudeTest = { "AttitudeTest", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCondition_CheckAttitude, AttitudeTest), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeTest_MetaData), NewProp_AttitudeTest_MetaData) }; // 2991328252
void Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((USTCondition_CheckAttitude*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USTCondition_CheckAttitude), &Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTCondition_CheckAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_Attitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_AttitudeTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCondition_CheckAttitude_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTCondition_CheckAttitude_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTCondition_CheckAttitude_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeConditionBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsStateTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTCondition_CheckAttitude_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTCondition_CheckAttitude_Statics::ClassParams = {
	&USTCondition_CheckAttitude::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTCondition_CheckAttitude_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTCondition_CheckAttitude_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTCondition_CheckAttitude_Statics::Class_MetaDataParams), Z_Construct_UClass_USTCondition_CheckAttitude_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTCondition_CheckAttitude()
{
	if (!Z_Registration_Info_UClass_USTCondition_CheckAttitude.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTCondition_CheckAttitude.OuterSingleton, Z_Construct_UClass_USTCondition_CheckAttitude_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTCondition_CheckAttitude.OuterSingleton;
}
template<> NINJAFACTIONSSTATETREE_API UClass* StaticClass<USTCondition_CheckAttitude>()
{
	return USTCondition_CheckAttitude::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTCondition_CheckAttitude);
USTCondition_CheckAttitude::~USTCondition_CheckAttitude() {}
// End Class USTCondition_CheckAttitude

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STCondition_CheckAttitude_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTCondition_CheckAttitude, USTCondition_CheckAttitude::StaticClass, TEXT("USTCondition_CheckAttitude"), &Z_Registration_Info_UClass_USTCondition_CheckAttitude, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTCondition_CheckAttitude), 518119771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STCondition_CheckAttitude_h_495081440(TEXT("/Script/NinjaFactionsStateTree"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STCondition_CheckAttitude_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STCondition_CheckAttitude_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
