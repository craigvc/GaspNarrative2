// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Types/FFactionMembership.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactionMembership() {}

// Begin Cross Module References
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin ScriptStruct FFactionMembership
static_assert(std::is_polymorphic<FFactionMembership>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FFactionMembership cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionMembership;
class UScriptStruct* FFactionMembership::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembership.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionMembership.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionMembership, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionMembership"));
	}
	return Z_Registration_Info_UScriptStruct_FactionMembership.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionMembership>()
{
	return FFactionMembership::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionMembership_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a faction that has been assigned to an actor.\n */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Represents a faction that has been assigned to an actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** The Data Asset representing the faction. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "The Data Asset representing the faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMainFaction_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Is this the main faction for the member? */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Is this the main faction for the member?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reputation_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Current reputation in this membership. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Current reputation in this membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNewMembership_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Informs if this is a new assignment.*/" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Informs if this is a new assignment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinReputation_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Minimum amount of Reputation for the current tier. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Minimum amount of Reputation for the current tier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReputation_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Maximum amount of Reputation for the current tier. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Maximum amount of Reputation for the current tier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TierName_MetaData[] = {
		{ "Category", "Faction Membership" },
		{ "Comment", "/** Unique name of this current tier, as per the Tier Table. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
		{ "ToolTip", "Unique name of this current tier, as per the Tier Table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangedReputation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangedTier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangedMainStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/FFactionMembership.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static void NewProp_bMainFaction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMainFaction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static void NewProp_bIsNewMembership_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNewMembership;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinReputation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReputation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TierName;
	static void NewProp_bChangedReputation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedReputation;
	static void NewProp_bChangedTier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedTier;
	static void NewProp_bChangedMainStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedMainStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionMembership>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembership, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bMainFaction_SetBit(void* Obj)
{
	((FFactionMembership*)Obj)->bMainFaction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bMainFaction = { "bMainFaction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFactionMembership), &Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bMainFaction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMainFaction_MetaData), NewProp_bMainFaction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembership, Reputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reputation_MetaData), NewProp_Reputation_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bIsNewMembership_SetBit(void* Obj)
{
	((FFactionMembership*)Obj)->bIsNewMembership = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bIsNewMembership = { "bIsNewMembership", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFactionMembership), &Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bIsNewMembership_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNewMembership_MetaData), NewProp_bIsNewMembership_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_MinReputation = { "MinReputation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembership, MinReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinReputation_MetaData), NewProp_MinReputation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_MaxReputation = { "MaxReputation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembership, MaxReputation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReputation_MetaData), NewProp_MaxReputation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_TierName = { "TierName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembership, TierName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TierName_MetaData), NewProp_TierName_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedReputation_SetBit(void* Obj)
{
	((FFactionMembership*)Obj)->bChangedReputation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedReputation = { "bChangedReputation", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFactionMembership), &Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedReputation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangedReputation_MetaData), NewProp_bChangedReputation_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedTier_SetBit(void* Obj)
{
	((FFactionMembership*)Obj)->bChangedTier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedTier = { "bChangedTier", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFactionMembership), &Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedTier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangedTier_MetaData), NewProp_bChangedTier_MetaData) };
void Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedMainStatus_SetBit(void* Obj)
{
	((FFactionMembership*)Obj)->bChangedMainStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedMainStatus = { "bChangedMainStatus", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFactionMembership), &Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedMainStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangedMainStatus_MetaData), NewProp_bChangedMainStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bMainFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bIsNewMembership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_MinReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_MaxReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_TierName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedReputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembership_Statics::NewProp_bChangedMainStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionMembership_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"FactionMembership",
	Z_Construct_UScriptStruct_FFactionMembership_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembership_Statics::PropPointers),
	sizeof(FFactionMembership),
	alignof(FFactionMembership),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembership_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionMembership_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembership.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionMembership.InnerSingleton, Z_Construct_UScriptStruct_FFactionMembership_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionMembership.InnerSingleton;
}
// End ScriptStruct FFactionMembership

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembership_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionMembership::StaticStruct, Z_Construct_UScriptStruct_FFactionMembership_Statics::NewStructOps, TEXT("FactionMembership"), &Z_Registration_Info_UScriptStruct_FactionMembership, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionMembership), 2510799810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembership_h_2088247204(TEXT("/Script/NinjaFactions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembership_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembership_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
