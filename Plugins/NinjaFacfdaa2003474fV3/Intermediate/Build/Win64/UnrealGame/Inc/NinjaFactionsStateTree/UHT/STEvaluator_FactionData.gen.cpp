// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsStateTree/Public/AI/StateTree/STEvaluator_FactionData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTEvaluator_FactionData() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAFACTIONSSTATETREE_API UClass* Z_Construct_UClass_USTEvaluator_FactionData();
NINJAFACTIONSSTATETREE_API UClass* Z_Construct_UClass_USTEvaluator_FactionData_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsStateTree();
// End Cross Module References

// Begin Class USTEvaluator_FactionData
void USTEvaluator_FactionData::StaticRegisterNativesUSTEvaluator_FactionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTEvaluator_FactionData);
UClass* Z_Construct_UClass_USTEvaluator_FactionData_NoRegister()
{
	return USTEvaluator_FactionData::StaticClass();
}
struct Z_Construct_UClass_USTEvaluator_FactionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n * Exposes the faction data regarding a given Faction Member (self or others).\n */" },
		{ "DisplayName", "Faction Data" },
		{ "IncludePath", "AI/StateTree/STEvaluator_FactionData.h" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STEvaluator_FactionData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Exposes the faction data regarding a given Faction Member (self or others)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionMember_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Reference to the Faction Member that this evaluator is targeting. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STEvaluator_FactionData.h" },
		{ "ToolTip", "Reference to the Faction Member that this evaluator is targeting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** The Team ID related to the core Unreal AI System. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STEvaluator_FactionData.h" },
		{ "ToolTip", "The Team ID related to the core Unreal AI System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTag_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Tag that identifies the faction of the targeted Faction Member. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STEvaluator_FactionData.h" },
		{ "ToolTip", "Tag that identifies the faction of the targeted Faction Member." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeTowardsAgent_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** The attitude towards the agent running the evaluator. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/STEvaluator_FactionData.h" },
		{ "ToolTip", "The attitude towards the agent running the evaluator." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionMember;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeTowardsAgent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTEvaluator_FactionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_FactionMember = { "FactionMember", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_FactionData, FactionMember), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionMember_MetaData), NewProp_FactionMember_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_FactionData, TeamId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_FactionTag = { "FactionTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_FactionData, FactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTag_MetaData), NewProp_FactionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_AttitudeTowardsAgent = { "AttitudeTowardsAgent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_FactionData, AttitudeTowardsAgent), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeTowardsAgent_MetaData), NewProp_AttitudeTowardsAgent_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTEvaluator_FactionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_FactionMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_FactionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_FactionData_Statics::NewProp_AttitudeTowardsAgent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_FactionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTEvaluator_FactionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsStateTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_FactionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTEvaluator_FactionData_Statics::ClassParams = {
	&USTEvaluator_FactionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTEvaluator_FactionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_FactionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_FactionData_Statics::Class_MetaDataParams), Z_Construct_UClass_USTEvaluator_FactionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTEvaluator_FactionData()
{
	if (!Z_Registration_Info_UClass_USTEvaluator_FactionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTEvaluator_FactionData.OuterSingleton, Z_Construct_UClass_USTEvaluator_FactionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTEvaluator_FactionData.OuterSingleton;
}
template<> NINJAFACTIONSSTATETREE_API UClass* StaticClass<USTEvaluator_FactionData>()
{
	return USTEvaluator_FactionData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTEvaluator_FactionData);
USTEvaluator_FactionData::~USTEvaluator_FactionData() {}
// End Class USTEvaluator_FactionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STEvaluator_FactionData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTEvaluator_FactionData, USTEvaluator_FactionData::StaticClass, TEXT("USTEvaluator_FactionData"), &Z_Registration_Info_UClass_USTEvaluator_FactionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTEvaluator_FactionData), 2528825788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STEvaluator_FactionData_h_3781754292(TEXT("/Script/NinjaFactionsStateTree"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STEvaluator_FactionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsStateTree_Public_AI_StateTree_STEvaluator_FactionData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
