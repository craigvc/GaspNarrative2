// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Combo/STEvaluator_ComboManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTEvaluator_ComboManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FStateTreeComboManagerEvaluatorInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData;
class UScriptStruct* FStateTreeComboManagerEvaluatorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("StateTreeComboManagerEvaluatorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FStateTreeComboManagerEvaluatorInstanceData>()
{
	return FStateTreeComboManagerEvaluatorInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManagerOwner_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/** The Actor owning the Combo Manager. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboManager.h" },
		{ "ToolTip", "The Actor owning the Combo Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Combo Manager obtained from the owner that can be set somewhere else. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboManager.h" },
		{ "ToolTip", "Combo Manager obtained from the owner that can be set somewhere else." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManagerOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeComboManagerEvaluatorInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::NewProp_ComboManagerOwner = { "ComboManagerOwner", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeComboManagerEvaluatorInstanceData, ComboManagerOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManagerOwner_MetaData), NewProp_ComboManagerOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeComboManagerEvaluatorInstanceData, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::NewProp_ComboManagerOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::NewProp_ComboManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"StateTreeComboManagerEvaluatorInstanceData",
	Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::PropPointers),
	sizeof(FStateTreeComboManagerEvaluatorInstanceData),
	alignof(FStateTreeComboManagerEvaluatorInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeComboManagerEvaluatorInstanceData

// Begin ScriptStruct FStateTreeComboManagerEvaluator
static_assert(std::is_polymorphic<FStateTreeComboManagerEvaluator>() == std::is_polymorphic<FStateTreeEvaluatorCommonBase>(), "USTRUCT FStateTreeComboManagerEvaluator cannot be polymorphic unless super FStateTreeEvaluatorCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator;
class UScriptStruct* FStateTreeComboManagerEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("StateTreeComboManagerEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FStateTreeComboManagerEvaluator>()
{
	return FStateTreeComboManagerEvaluator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Evaluator that retrieves a Combo Manager from an Actor.\n *\n * Mostly needed for version 5.3, where the State Tree Schema won't allow additional parameters.\n * \n * For version 5.4 and above, the Combo Manager can usually be retrieved from the State Tree Context,\n * as long as the correct one is used (UNinjaCombatComboComponentSchema).\n */" },
		{ "DisplayName", "Combo Manager" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboManager.h" },
		{ "ToolTip", "Evaluator that retrieves a Combo Manager from an Actor.\n\nMostly needed for version 5.3, where the State Tree Schema won't allow additional parameters.\n\nFor version 5.4 and above, the Combo Manager can usually be retrieved from the State Tree Context,\nas long as the correct one is used (UNinjaCombatComboComponentSchema)." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeComboManagerEvaluator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase,
	&NewStructOps,
	"StateTreeComboManagerEvaluator",
	nullptr,
	0,
	sizeof(FStateTreeComboManagerEvaluator),
	alignof(FStateTreeComboManagerEvaluator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator.InnerSingleton;
}
// End ScriptStruct FStateTreeComboManagerEvaluator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeComboManagerEvaluatorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluatorInstanceData_Statics::NewStructOps, TEXT("StateTreeComboManagerEvaluatorInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluatorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeComboManagerEvaluatorInstanceData), 3188898705U) },
		{ FStateTreeComboManagerEvaluator::StaticStruct, Z_Construct_UScriptStruct_FStateTreeComboManagerEvaluator_Statics::NewStructOps, TEXT("StateTreeComboManagerEvaluator"), &Z_Registration_Info_UScriptStruct_StateTreeComboManagerEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeComboManagerEvaluator), 2683821755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboManager_h_2528921798(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
