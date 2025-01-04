// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsBehaviorTree/Public/AI/BehaviorTree/BTService_FactionData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FactionData() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
NINJAFACTIONSBEHAVIORTREE_API UClass* Z_Construct_UClass_UBTService_FactionData();
NINJAFACTIONSBEHAVIORTREE_API UClass* Z_Construct_UClass_UBTService_FactionData_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsBehaviorTree();
// End Cross Module References

// Begin Class UBTService_FactionData
void UBTService_FactionData::StaticRegisterNativesUBTService_FactionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_FactionData);
UClass* Z_Construct_UClass_UBTService_FactionData_NoRegister()
{
	return UBTService_FactionData::StaticClass();
}
struct Z_Construct_UClass_UBTService_FactionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n * Exposes the faction data regarding a given Faction Member (self or others).\n */" },
		{ "DisplayName", "Faction Data" },
		{ "IncludePath", "AI/BehaviorTree/BTService_FactionData.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_FactionData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Exposes the faction data regarding a given Faction Member (self or others)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionMemberKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** Reference to the Faction Member that this evaluator is targeting. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_FactionData.h" },
		{ "ToolTip", "Reference to the Faction Member that this evaluator is targeting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamIdKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** The Team ID related to the core Unreal AI System. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_FactionData.h" },
		{ "ToolTip", "The Team ID related to the core Unreal AI System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTagKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** The Team ID related to the core Unreal AI System. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_FactionData.h" },
		{ "ToolTip", "The Team ID related to the core Unreal AI System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeTowardsAgentKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** The attitude towards the agent running the evaluator. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_FactionData.h" },
		{ "ToolTip", "The attitude towards the agent running the evaluator." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionMemberKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamIdKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTagKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttitudeTowardsAgentKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FactionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_FactionMemberKey = { "FactionMemberKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FactionData, FactionMemberKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionMemberKey_MetaData), NewProp_FactionMemberKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_TeamIdKey = { "TeamIdKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FactionData, TeamIdKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamIdKey_MetaData), NewProp_TeamIdKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_FactionTagKey = { "FactionTagKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FactionData, FactionTagKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTagKey_MetaData), NewProp_FactionTagKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_AttitudeTowardsAgentKey = { "AttitudeTowardsAgentKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FactionData, AttitudeTowardsAgentKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeTowardsAgentKey_MetaData), NewProp_AttitudeTowardsAgentKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_FactionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_FactionMemberKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_TeamIdKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_FactionTagKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FactionData_Statics::NewProp_AttitudeTowardsAgentKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FactionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_FactionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsBehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FactionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FactionData_Statics::ClassParams = {
	&UBTService_FactionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_FactionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FactionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FactionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_FactionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_FactionData()
{
	if (!Z_Registration_Info_UClass_UBTService_FactionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_FactionData.OuterSingleton, Z_Construct_UClass_UBTService_FactionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_FactionData.OuterSingleton;
}
template<> NINJAFACTIONSBEHAVIORTREE_API UClass* StaticClass<UBTService_FactionData>()
{
	return UBTService_FactionData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FactionData);
UBTService_FactionData::~UBTService_FactionData() {}
// End Class UBTService_FactionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTService_FactionData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_FactionData, UBTService_FactionData::StaticClass, TEXT("UBTService_FactionData"), &Z_Registration_Info_UClass_UBTService_FactionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_FactionData), 2906093022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTService_FactionData_h_1821544488(TEXT("/Script/NinjaFactionsBehaviorTree"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTService_FactionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTService_FactionData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
