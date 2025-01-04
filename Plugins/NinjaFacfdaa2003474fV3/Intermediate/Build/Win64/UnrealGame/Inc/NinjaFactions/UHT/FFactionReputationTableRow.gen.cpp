// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Types/FFactionReputationTableRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactionReputationTableRow() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin ScriptStruct FFactionReputationTableRow
static_assert(std::is_polymorphic<FFactionReputationTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFactionReputationTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionReputationTableRow;
class UScriptStruct* FFactionReputationTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionReputationTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionReputationTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionReputationTableRow, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionReputationTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FactionReputationTableRow.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionReputationTableRow>()
{
	return FFactionReputationTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A reputation tier for a faction.\n */" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "A reputation tier for a faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Faction Reputation" },
		{ "Comment", "/** Name displayed for this tier, using the Localization System. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "Name displayed for this tier, using the Localization System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Faction Reputation" },
		{ "Comment", "/** A color that represents this tier. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "A color that represents this tier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinReputation_MetaData[] = {
		{ "Category", "Faction Reputation" },
		{ "Comment", "/** Minimum amount of reputation for this tier (inclusive). */" },
		{ "DisplayName", "Minimum Reputation" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "Minimum amount of reputation for this tier (inclusive)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReputation_MetaData[] = {
		{ "Category", "Faction Reputation" },
		{ "Comment", "/** Maximum amount of reputation for this tier (inclusive). */" },
		{ "DisplayName", "Maximum Reputation" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "Maximum amount of reputation for this tier (inclusive)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attitude_MetaData[] = {
		{ "Category", "Faction Reputation" },
		{ "Comment", "/** Attitude towards members in this tier. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionReputationTableRow.h" },
		{ "ToolTip", "Attitude towards members in this tier." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinReputation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReputation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionReputationTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionReputationTableRow, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionReputationTableRow, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_MinReputation = { "MinReputation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionReputationTableRow, MinReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinReputation_MetaData), NewProp_MinReputation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_MaxReputation = { "MaxReputation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionReputationTableRow, MaxReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReputation_MetaData), NewProp_MaxReputation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionReputationTableRow, Attitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attitude_MetaData), NewProp_Attitude_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_MinReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_MaxReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewProp_Attitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FactionReputationTableRow",
	Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::PropPointers),
	sizeof(FFactionReputationTableRow),
	alignof(FFactionReputationTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FactionReputationTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionReputationTableRow.InnerSingleton, Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionReputationTableRow.InnerSingleton;
}
// End ScriptStruct FFactionReputationTableRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionReputationTableRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionReputationTableRow::StaticStruct, Z_Construct_UScriptStruct_FFactionReputationTableRow_Statics::NewStructOps, TEXT("FactionReputationTableRow"), &Z_Registration_Info_UScriptStruct_FactionReputationTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionReputationTableRow), 1860739754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionReputationTableRow_h_106386260(TEXT("/Script/NinjaFactions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionReputationTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionReputationTableRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
