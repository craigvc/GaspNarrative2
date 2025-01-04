// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/NinjaFactionSubsystem.h"
#include "NinjaFactions/Public/Types/FFactionReputationTableRow.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionSubsystem() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSubsystem();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSubsystem_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionSubsystem Function GetAttitude
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics
{
	struct NinjaFactionSubsystem_eventGetAttitude_Parms
	{
		const AActor* Source;
		const AActor* Target;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Determines the attitude between two pawns.\n     * \n     * @param Source    Source Pawn from which the faction test is done. Must be a valid faction member.\n     * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n     * @return          The attitude between both pawns.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ReturnDisplayName", "Attitude" },
		{ "ToolTip", "Determines the attitude between two pawns.\n\n@param Source    Source Pawn from which the faction test is done. Must be a valid faction member.\n@param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n@return          The attitude between both pawns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetAttitude_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetAttitude", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NinjaFactionSubsystem_eventGetAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::NinjaFactionSubsystem_eventGetAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->GetAttitude(Z_Param_Source,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetAttitude

// Begin Class UNinjaFactionSubsystem Function GetFaction
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics
{
	struct NinjaFactionSubsystem_eventGetFaction_Parms
	{
		FGameplayTag FactionTag;
		UNinjaFactionDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the Data Asset for the provided Faction Tag.\n     * \n     * @param FactionTag    Tag that uniquely identifies the Faction. \n     * @return              The Faction Data Asset.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ReturnDisplayName", "Faction Data" },
		{ "ToolTip", "Provides the Data Asset for the provided Faction Tag.\n\n@param FactionTag    Tag that uniquely identifies the Faction.\n@return              The Faction Data Asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NewProp_FactionTag = { "FactionTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetFaction_Parms, FactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTag_MetaData), NewProp_FactionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetFaction_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NewProp_FactionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NinjaFactionSubsystem_eventGetFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::NinjaFactionSubsystem_eventGetFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetFaction)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_FactionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionDataAsset**)Z_Param__Result=P_THIS->GetFaction(Z_Param_Out_FactionTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetFaction

// Begin Class UNinjaFactionSubsystem Function GetFactionComponent
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics
{
	struct NinjaFactionSubsystem_eventGetFactionComponent_Parms
	{
		const AActor* Member;
		UNinjaFactionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n\x09 * Retrieves the Faction Component from a given member actor.\n\x09 * \n\x09 * @param Member    The Faction Member to provide the component. \n\x09 * @return          Pointer to the Faction Component assigned to the provided member.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ReturnDisplayName", "Faction Component" },
		{ "ToolTip", "Retrieves the Faction Component from a given member actor.\n\n@param Member    The Faction Member to provide the component.\n@return          Pointer to the Faction Component assigned to the provided member." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Member;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetFactionComponent_Parms, Member), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Member_MetaData), NewProp_Member_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetFactionComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetFactionComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NinjaFactionSubsystem_eventGetFactionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::NinjaFactionSubsystem_eventGetFactionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetFactionComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionComponent**)Z_Param__Result=UNinjaFactionSubsystem::GetFactionComponent(Z_Param_Member);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetFactionComponent

// Begin Class UNinjaFactionSubsystem Function GetFactions
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics
{
	struct NinjaFactionSubsystem_eventGetFactions_Parms
	{
		TArray<UNinjaFactionDataAsset*> OutFactions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides all available Factions.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Provides all available Factions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutFactions_MetaData[] = {
		{ "DisplayName", "Factions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutFactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NewProp_OutFactions_Inner = { "OutFactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NewProp_OutFactions = { "OutFactions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetFactions_Parms, OutFactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutFactions_MetaData), NewProp_OutFactions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NewProp_OutFactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NewProp_OutFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetFactions", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NinjaFactionSubsystem_eventGetFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::NinjaFactionSubsystem_eventGetFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetFactions)
{
	P_GET_TARRAY_REF(UNinjaFactionDataAsset*,Z_Param_Out_OutFactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFactions(Z_Param_Out_OutFactions);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetFactions

// Begin Class UNinjaFactionSubsystem Function GetReputationTier
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics
{
	struct NinjaFactionSubsystem_eventGetReputationTier_Parms
	{
		int32 Reputation;
		FFactionReputationTableRow OutReputationTier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the reputation tier configured for a given amount of reputation.\n     * \n     * @param Reputation            Amount of reputation used as a reference. \n     * @param OutReputationTier     Tier equivalent to the amount of reputation.\n     * @return                      True if a tier was found for the given reputation.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Provides the reputation tier configured for a given amount of reputation.\n\n@param Reputation            Amount of reputation used as a reference.\n@param OutReputationTier     Tier equivalent to the amount of reputation.\n@return                      True if a tier was found for the given reputation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutReputationTier_MetaData[] = {
		{ "DisplayName", "Reputation Tier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetReputationTier_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_OutReputationTier = { "OutReputationTier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetReputationTier_Parms, OutReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutReputationTier_MetaData), NewProp_OutReputationTier_MetaData) }; // 1860739754
void Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionSubsystem_eventGetReputationTier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionSubsystem_eventGetReputationTier_Parms), &Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_OutReputationTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetReputationTier", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NinjaFactionSubsystem_eventGetReputationTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::NinjaFactionSubsystem_eventGetReputationTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetReputationTier)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_STRUCT_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetReputationTier(Z_Param_Reputation,Z_Param_Out_OutReputationTier);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetReputationTier

// Begin Class UNinjaFactionSubsystem Function GetReputationTierByName
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics
{
	struct NinjaFactionSubsystem_eventGetReputationTierByName_Parms
	{
		FName TierName;
		FFactionReputationTableRow OutReputationTier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the reputation tier configured for its unique name\n     * \n     * @param TierName              Unique name that identifies the tier.\n     * @param OutReputationTier     Tier equivalent to the amount of reputation.\n     * @return                      True if a tier was found for the given name.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Provides the reputation tier configured for its unique name\n\n@param TierName              Unique name that identifies the tier.\n@param OutReputationTier     Tier equivalent to the amount of reputation.\n@return                      True if a tier was found for the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutReputationTier_MetaData[] = {
		{ "DisplayName", "Reputation Tier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TierName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_TierName = { "TierName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetReputationTierByName_Parms, TierName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_OutReputationTier = { "OutReputationTier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetReputationTierByName_Parms, OutReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutReputationTier_MetaData), NewProp_OutReputationTier_MetaData) }; // 1860739754
void Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionSubsystem_eventGetReputationTierByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionSubsystem_eventGetReputationTierByName_Parms), &Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_TierName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_OutReputationTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetReputationTierByName", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NinjaFactionSubsystem_eventGetReputationTierByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::NinjaFactionSubsystem_eventGetReputationTierByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetReputationTierByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TierName);
	P_GET_STRUCT_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetReputationTierByName(Z_Param_TierName,Z_Param_Out_OutReputationTier);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetReputationTierByName

// Begin Class UNinjaFactionSubsystem Function GetReputationTiers
struct Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics
{
	struct NinjaFactionSubsystem_eventGetReputationTiers_Parms
	{
		TArray<FFactionReputationTableRow> OutReputationTiers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides all available Reputation Tiers.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Provides all available Reputation Tiers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutReputationTiers_MetaData[] = {
		{ "DisplayName", "Reputation Tiers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutReputationTiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NewProp_OutReputationTiers_Inner = { "OutReputationTiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(0, nullptr) }; // 1860739754
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NewProp_OutReputationTiers = { "OutReputationTiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionSubsystem_eventGetReputationTiers_Parms, OutReputationTiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutReputationTiers_MetaData), NewProp_OutReputationTiers_MetaData) }; // 1860739754
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NewProp_OutReputationTiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NewProp_OutReputationTiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionSubsystem, nullptr, "GetReputationTiers", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NinjaFactionSubsystem_eventGetReputationTiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::NinjaFactionSubsystem_eventGetReputationTiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionSubsystem::execGetReputationTiers)
{
	P_GET_TARRAY_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTiers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReputationTiers(Z_Param_Out_OutReputationTiers);
	P_NATIVE_END;
}
// End Class UNinjaFactionSubsystem Function GetReputationTiers

// Begin Class UNinjaFactionSubsystem
void UNinjaFactionSubsystem::StaticRegisterNativesUNinjaFactionSubsystem()
{
	UClass* Class = UNinjaFactionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttitude", &UNinjaFactionSubsystem::execGetAttitude },
		{ "GetFaction", &UNinjaFactionSubsystem::execGetFaction },
		{ "GetFactionComponent", &UNinjaFactionSubsystem::execGetFactionComponent },
		{ "GetFactions", &UNinjaFactionSubsystem::execGetFactions },
		{ "GetReputationTier", &UNinjaFactionSubsystem::execGetReputationTier },
		{ "GetReputationTierByName", &UNinjaFactionSubsystem::execGetReputationTierByName },
		{ "GetReputationTiers", &UNinjaFactionSubsystem::execGetReputationTiers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionSubsystem);
UClass* Z_Construct_UClass_UNinjaFactionSubsystem_NoRegister()
{
	return UNinjaFactionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Central hub for the Faction System functionality.\n */" },
		{ "DisplayName", "Faction Subsystem" },
		{ "IncludePath", "NinjaFactionSubsystem.h" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Central hub for the Faction System functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttitude_MetaData[] = {
		{ "Comment", "/** Default attitude in case resolution is not possible. */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Default attitude in case resolution is not possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionDatabase_MetaData[] = {
		{ "Comment", "/** Database for all registered factions in the game. */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Database for all registered factions in the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionSolver_MetaData[] = {
		{ "Comment", "/** Solver used to determine the alignment between factions. */" },
		{ "ModuleRelativePath", "Public/NinjaFactionSubsystem.h" },
		{ "ToolTip", "Solver used to determine the alignment between factions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionDatabase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionSolver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetAttitude, "GetAttitude" }, // 2298607389
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetFaction, "GetFaction" }, // 2174716925
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactionComponent, "GetFactionComponent" }, // 1201888403
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetFactions, "GetFactions" }, // 1452400060
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTier, "GetReputationTier" }, // 2399937414
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTierByName, "GetReputationTierByName" }, // 1490919105
		{ &Z_Construct_UFunction_UNinjaFactionSubsystem_GetReputationTiers, "GetReputationTiers" }, // 751770609
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_DefaultAttitude = { "DefaultAttitude", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSubsystem, DefaultAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttitude_MetaData), NewProp_DefaultAttitude_MetaData) }; // 2991328252
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_FactionDatabase = { "FactionDatabase", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSubsystem, FactionDatabase), Z_Construct_UClass_UNinjaFactionDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionDatabase_MetaData), NewProp_FactionDatabase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_FactionSolver = { "FactionSolver", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionSubsystem, FactionSolver), Z_Construct_UClass_UNinjaFactionAttitudeSolver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionSolver_MetaData), NewProp_FactionSolver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_DefaultAttitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_FactionDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionSubsystem_Statics::NewProp_FactionSolver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionSubsystem_Statics::ClassParams = {
	&UNinjaFactionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaFactionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionSubsystem()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionSubsystem.OuterSingleton, Z_Construct_UClass_UNinjaFactionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionSubsystem.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionSubsystem>()
{
	return UNinjaFactionSubsystem::StaticClass();
}
UNinjaFactionSubsystem::UNinjaFactionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionSubsystem);
UNinjaFactionSubsystem::~UNinjaFactionSubsystem() {}
// End Class UNinjaFactionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionSubsystem, UNinjaFactionSubsystem::StaticClass, TEXT("UNinjaFactionSubsystem"), &Z_Registration_Info_UClass_UNinjaFactionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionSubsystem), 1738730225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_952899327(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
