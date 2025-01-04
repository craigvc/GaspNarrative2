// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatAI/Public/AI/StateTree/StateTreeCombatantDeadCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCombatantDeadCondition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBATAI_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition();
NINJACOMBATAI_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
UPackage* Z_Construct_UPackage__Script_NinjaCombatAI();
// End Cross Module References

// Begin ScriptStruct FStateTreeCombatantDeadConditionInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData;
class UScriptStruct* FStateTreeCombatantDeadConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_NinjaCombatAI(), TEXT("StateTreeCombatantDeadConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.OuterSingleton;
}
template<> NINJACOMBATAI_API UScriptStruct* StaticStruct<FStateTreeCombatantDeadConditionInstanceData>()
{
	return FStateTreeCombatantDeadConditionInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/StateTree/StateTreeCombatantDeadCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatantActor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Combatant Actor to evaluate. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/StateTreeCombatantDeadCondition.h" },
		{ "ToolTip", "Combatant Actor to evaluate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatantActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCombatantDeadConditionInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::NewProp_CombatantActor = { "CombatantActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCombatantDeadConditionInstanceData, CombatantActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatantActor_MetaData), NewProp_CombatantActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::NewProp_CombatantActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatAI,
	nullptr,
	&NewStructOps,
	"StateTreeCombatantDeadConditionInstanceData",
	Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::PropPointers),
	sizeof(FStateTreeCombatantDeadConditionInstanceData),
	alignof(FStateTreeCombatantDeadConditionInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeCombatantDeadConditionInstanceData

// Begin ScriptStruct FStateTreeCombatantDeadCondition
static_assert(std::is_polymorphic<FStateTreeCombatantDeadCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeCombatantDeadCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition;
class UScriptStruct* FStateTreeCombatantDeadCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition, (UObject*)Z_Construct_UPackage__Script_NinjaCombatAI(), TEXT("StateTreeCombatantDeadCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.OuterSingleton;
}
template<> NINJACOMBATAI_API UScriptStruct* StaticStruct<FStateTreeCombatantDeadCondition>()
{
	return FStateTreeCombatantDeadCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Checks if a combat actor is dead, based on the damage manager.\n * You can also check if the combatant is alive by inverting the check.\n */" },
		{ "DisplayName", "Combatant is Dead" },
		{ "ModuleRelativePath", "Public/AI/StateTree/StateTreeCombatantDeadCondition.h" },
		{ "ToolTip", "Checks if a combat actor is dead, based on the damage manager.\nYou can also check if the combatant is alive by inverting the check." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Inverts the condition, checking if the combatant is dead. */" },
		{ "ModuleRelativePath", "Public/AI/StateTree/StateTreeCombatantDeadCondition.h" },
		{ "ToolTip", "Inverts the condition, checking if the combatant is dead." },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCombatantDeadCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FStateTreeCombatantDeadCondition*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeCombatantDeadCondition), &Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatAI,
	Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
	&NewStructOps,
	"StateTreeCombatantDeadCondition",
	Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::PropPointers),
	sizeof(FStateTreeCombatantDeadCondition),
	alignof(FStateTreeCombatantDeadCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition.InnerSingleton;
}
// End ScriptStruct FStateTreeCombatantDeadCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_StateTree_StateTreeCombatantDeadCondition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeCombatantDeadConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCombatantDeadConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeCombatantDeadConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCombatantDeadConditionInstanceData), 469598258U) },
		{ FStateTreeCombatantDeadCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCombatantDeadCondition_Statics::NewStructOps, TEXT("StateTreeCombatantDeadCondition"), &Z_Registration_Info_UScriptStruct_StateTreeCombatantDeadCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCombatantDeadCondition), 1922662720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_StateTree_StateTreeCombatantDeadCondition_h_2407576814(TEXT("/Script/NinjaCombatAI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_StateTree_StateTreeCombatantDeadCondition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_StateTree_StateTreeCombatantDeadCondition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
