// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FDamageLastStand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDamageLastStand() {}

// Begin Cross Module References
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageLastStand();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FDamageLastStand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageLastStand;
class UScriptStruct* FDamageLastStand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageLastStand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageLastStand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageLastStand, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DamageLastStand"));
	}
	return Z_Registration_Info_UScriptStruct_DamageLastStand.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDamageLastStand>()
{
	return FDamageLastStand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageLastStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a last stand that reverts fatal damage.\n */" },
		{ "ModuleRelativePath", "Public/Types/FDamageLastStand.h" },
		{ "ToolTip", "Information about a last stand that reverts fatal damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLastStand_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/** Informs if the fatal damage was reverted. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageLastStand.h" },
		{ "ToolTip", "Informs if the fatal damage was reverted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalDamage_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/** Original incoming damage. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageLastStand.h" },
		{ "ToolTip", "Original incoming damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MitigationCost_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/** Mitigation cost spent to prevent this damage. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageLastStand.h" },
		{ "ToolTip", "Mitigation cost spent to prevent this damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewHealth_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/** New health after the damage has been reverted. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageLastStand.h" },
		{ "ToolTip", "New health after the damage has been reverted." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLastStand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLastStand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigationCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageLastStand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_bIsLastStand_SetBit(void* Obj)
{
	((FDamageLastStand*)Obj)->bIsLastStand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_bIsLastStand = { "bIsLastStand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDamageLastStand), &Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_bIsLastStand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLastStand_MetaData), NewProp_bIsLastStand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_OriginalDamage = { "OriginalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageLastStand, OriginalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalDamage_MetaData), NewProp_OriginalDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_MitigationCost = { "MitigationCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageLastStand, MitigationCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MitigationCost_MetaData), NewProp_MitigationCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageLastStand, NewHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHealth_MetaData), NewProp_NewHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageLastStand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_bIsLastStand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_OriginalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_MitigationCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageLastStand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageLastStand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"DamageLastStand",
	Z_Construct_UScriptStruct_FDamageLastStand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageLastStand_Statics::PropPointers),
	sizeof(FDamageLastStand),
	alignof(FDamageLastStand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageLastStand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageLastStand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageLastStand()
{
	if (!Z_Registration_Info_UScriptStruct_DamageLastStand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageLastStand.InnerSingleton, Z_Construct_UScriptStruct_FDamageLastStand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageLastStand.InnerSingleton;
}
// End ScriptStruct FDamageLastStand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageLastStand_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageLastStand::StaticStruct, Z_Construct_UScriptStruct_FDamageLastStand_Statics::NewStructOps, TEXT("DamageLastStand"), &Z_Registration_Info_UScriptStruct_DamageLastStand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageLastStand), 637173078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageLastStand_h_475320850(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageLastStand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageLastStand_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
