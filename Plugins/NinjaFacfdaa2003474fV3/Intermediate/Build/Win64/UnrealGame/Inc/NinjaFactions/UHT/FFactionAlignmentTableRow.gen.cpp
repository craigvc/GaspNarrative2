// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Types/FFactionAlignmentTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactionAlignmentTableRow() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionAlignmentTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin ScriptStruct FFactionAlignmentTableRow
static_assert(std::is_polymorphic<FFactionAlignmentTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFactionAlignmentTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow;
class UScriptStruct* FFactionAlignmentTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionAlignmentTableRow, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionAlignmentTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionAlignmentTableRow>()
{
	return FFactionAlignmentTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Alignment matrix for a faction.\n */" },
		{ "ModuleRelativePath", "Public/Types/FFactionAlignmentTableRow.h" },
		{ "ToolTip", "Alignment matrix for a faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTags_MetaData[] = {
		{ "Categories", "Factions.ID" },
		{ "Category", "Faction Alignment" },
		{ "Comment", "/** List of factions that will have an exception case. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionAlignmentTableRow.h" },
		{ "ToolTip", "List of factions that will have an exception case." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attitude_MetaData[] = {
		{ "Category", "Faction Alignment" },
		{ "Comment", "/** Attitude towards the provided factions. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionAlignmentTableRow.h" },
		{ "ToolTip", "Attitude towards the provided factions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionAlignmentTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::NewProp_FactionTags = { "FactionTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionAlignmentTableRow, FactionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTags_MetaData), NewProp_FactionTags_MetaData) }; // 3352185621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionAlignmentTableRow, Attitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attitude_MetaData), NewProp_Attitude_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::NewProp_FactionTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::NewProp_Attitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FactionAlignmentTableRow",
	Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::PropPointers),
	sizeof(FFactionAlignmentTableRow),
	alignof(FFactionAlignmentTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionAlignmentTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.InnerSingleton, Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow.InnerSingleton;
}
// End ScriptStruct FFactionAlignmentTableRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionAlignmentTableRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionAlignmentTableRow::StaticStruct, Z_Construct_UScriptStruct_FFactionAlignmentTableRow_Statics::NewStructOps, TEXT("FactionAlignmentTableRow"), &Z_Registration_Info_UScriptStruct_FactionAlignmentTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionAlignmentTableRow), 1974430071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionAlignmentTableRow_h_1892748394(TEXT("/Script/NinjaFactions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionAlignmentTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionAlignmentTableRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
