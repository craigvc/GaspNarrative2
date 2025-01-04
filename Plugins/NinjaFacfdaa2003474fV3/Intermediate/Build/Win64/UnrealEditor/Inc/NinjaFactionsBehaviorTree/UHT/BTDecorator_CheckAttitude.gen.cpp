// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsBehaviorTree/Public/AI/BehaviorTree/BTDecorator_CheckAttitude.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckAttitude() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
NINJAFACTIONSBEHAVIORTREE_API UClass* Z_Construct_UClass_UBTDecorator_CheckAttitude();
NINJAFACTIONSBEHAVIORTREE_API UClass* Z_Construct_UClass_UBTDecorator_CheckAttitude_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsBehaviorTree();
// End Cross Module References

// Begin Class UBTDecorator_CheckAttitude
void UBTDecorator_CheckAttitude::StaticRegisterNativesUBTDecorator_CheckAttitude()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckAttitude);
UClass* Z_Construct_UClass_UBTDecorator_CheckAttitude_NoRegister()
{
	return UBTDecorator_CheckAttitude::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n * Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value. \n */" },
		{ "DisplayName", "Check Attitude" },
		{ "IncludePath", "AI/BehaviorTree/BTDecorator_CheckAttitude.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTDecorator_CheckAttitude.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Given a Faction Member, evaluates its attitude towards the AI Agent, comparing it against a reference value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** The Attitude to be evaluated. Most likely loaded by the faction service. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTDecorator_CheckAttitude.h" },
		{ "ToolTip", "The Attitude to be evaluated. Most likely loaded by the faction service." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeTest_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** The attitude towards the agent running the evaluator. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTDecorator_CheckAttitude.h" },
		{ "ToolTip", "The attitude towards the agent running the evaluator." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttitudeKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckAttitude>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::NewProp_AttitudeKey = { "AttitudeKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckAttitude, AttitudeKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeKey_MetaData), NewProp_AttitudeKey_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::NewProp_AttitudeTest = { "AttitudeTest", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckAttitude, AttitudeTest), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeTest_MetaData), NewProp_AttitudeTest_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::NewProp_AttitudeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::NewProp_AttitudeTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsBehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::ClassParams = {
	&UBTDecorator_CheckAttitude::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CheckAttitude()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CheckAttitude.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckAttitude.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckAttitude_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CheckAttitude.OuterSingleton;
}
template<> NINJAFACTIONSBEHAVIORTREE_API UClass* StaticClass<UBTDecorator_CheckAttitude>()
{
	return UBTDecorator_CheckAttitude::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckAttitude);
UBTDecorator_CheckAttitude::~UBTDecorator_CheckAttitude() {}
// End Class UBTDecorator_CheckAttitude

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTDecorator_CheckAttitude_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckAttitude, UBTDecorator_CheckAttitude::StaticClass, TEXT("UBTDecorator_CheckAttitude"), &Z_Registration_Info_UClass_UBTDecorator_CheckAttitude, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckAttitude), 3622702075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTDecorator_CheckAttitude_h_3846098206(TEXT("/Script/NinjaFactionsBehaviorTree"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTDecorator_CheckAttitude_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsBehaviorTree_Public_AI_BehaviorTree_BTDecorator_CheckAttitude_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
