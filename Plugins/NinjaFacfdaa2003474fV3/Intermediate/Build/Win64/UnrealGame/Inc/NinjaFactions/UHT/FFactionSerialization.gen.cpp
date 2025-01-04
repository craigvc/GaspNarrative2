// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Serialization/FFactionSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactionSerialization() {}

// Begin Cross Module References
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionManagerRecord();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipRecord();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin ScriptStruct FFactionMembershipRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionMembershipRecord;
class UScriptStruct* FFactionMembershipRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembershipRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionMembershipRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionMembershipRecord, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionMembershipRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FactionMembershipRecord.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionMembershipRecord>()
{
	return FFactionMembershipRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a serialized membership that can be used when saving/loading the game.\n */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "Represents a serialized membership that can be used when saving/loading the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetPath_MetaData[] = {
		{ "Category", "Membership Record" },
		{ "Comment", "/** Asset Path to the Faction Data Asset. */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "Asset Path to the Faction Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainFaction_MetaData[] = {
		{ "Category", "Membership Record" },
		{ "Comment", "/** Is this considered the main faction?. */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "Is this considered the main faction?." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reputation_MetaData[] = {
		{ "Category", "Membership Record" },
		{ "Comment", "/** Reputation assigned to this faction. Determines the tier. */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "Reputation assigned to this faction. Determines the tier." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataAssetPath;
	static void NewProp_bIsMainFaction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainFaction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionMembershipRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_DataAssetPath = { "DataAssetPath", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembershipRecord, DataAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetPath_MetaData), NewProp_DataAssetPath_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_bIsMainFaction_SetBit(void* Obj)
{
	((FFactionMembershipRecord*)Obj)->bIsMainFaction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_bIsMainFaction = { "bIsMainFaction", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFactionMembershipRecord), &Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_bIsMainFaction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMainFaction_MetaData), NewProp_bIsMainFaction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembershipRecord, Reputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_DataAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_bIsMainFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewProp_Reputation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	nullptr,
	&NewStructOps,
	"FactionMembershipRecord",
	Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::PropPointers),
	sizeof(FFactionMembershipRecord),
	alignof(FFactionMembershipRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembershipRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionMembershipRecord.InnerSingleton, Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionMembershipRecord.InnerSingleton;
}
// End ScriptStruct FFactionMembershipRecord

// Begin ScriptStruct FFactionManagerRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionManagerRecord;
class UScriptStruct* FFactionManagerRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionManagerRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionManagerRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionManagerRecord, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionManagerRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FactionManagerRecord.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionManagerRecord>()
{
	return FFactionManagerRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionManagerRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a serialized manager that can be used when saving/loading the game.\n */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "Represents a serialized manager that can be used when saving/loading the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MembershipRecords_MetaData[] = {
		{ "Category", "Manager Record" },
		{ "Comment", "/** All memberships assigned to the owner. */" },
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
		{ "ToolTip", "All memberships assigned to the owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/FFactionSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MembershipRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MembershipRecords;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionManagerRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_MembershipRecords_Inner = { "MembershipRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembershipRecord, METADATA_PARAMS(0, nullptr) }; // 2349043658
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_MembershipRecords = { "MembershipRecords", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionManagerRecord, MembershipRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MembershipRecords_MetaData), NewProp_MembershipRecords_MetaData) }; // 2349043658
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionManagerRecord, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_MembershipRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_MembershipRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	nullptr,
	&NewStructOps,
	"FactionManagerRecord",
	Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::PropPointers),
	sizeof(FFactionManagerRecord),
	alignof(FFactionManagerRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionManagerRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FactionManagerRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionManagerRecord.InnerSingleton, Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionManagerRecord.InnerSingleton;
}
// End ScriptStruct FFactionManagerRecord

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_FFactionSerialization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionMembershipRecord::StaticStruct, Z_Construct_UScriptStruct_FFactionMembershipRecord_Statics::NewStructOps, TEXT("FactionMembershipRecord"), &Z_Registration_Info_UScriptStruct_FactionMembershipRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionMembershipRecord), 2349043658U) },
		{ FFactionManagerRecord::StaticStruct, Z_Construct_UScriptStruct_FFactionManagerRecord_Statics::NewStructOps, TEXT("FactionManagerRecord"), &Z_Registration_Info_UScriptStruct_FactionManagerRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionManagerRecord), 940632695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_FFactionSerialization_h_2041680475(TEXT("/Script/NinjaFactions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_FFactionSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_FFactionSerialization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
