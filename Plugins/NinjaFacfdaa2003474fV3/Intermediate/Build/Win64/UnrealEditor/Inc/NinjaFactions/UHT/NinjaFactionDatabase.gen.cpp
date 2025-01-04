// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/NinjaFactionDatabase.h"
#include "NinjaFactions/Public/Types/FFactionReputationTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionDatabase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDatabase_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionDatabase Function GetFaction
struct NinjaFactionDatabase_eventGetFaction_Parms
{
	FGameplayTag FactionTag;
	UNinjaFactionDataAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaFactionDatabase_eventGetFaction_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaFactionDatabase_GetFaction = FName(TEXT("GetFaction"));
UNinjaFactionDataAsset* UNinjaFactionDatabase::GetFaction(FGameplayTag const& FactionTag) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionDatabase_GetFaction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionDatabase_eventGetFaction_Parms Parms;
		Parms.FactionTag=FactionTag;
		const_cast<UNinjaFactionDatabase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaFactionDatabase*>(this)->GetFaction_Implementation(FactionTag);
	}
}
struct Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Database" },
		{ "Comment", "/**\n     * Provides the Data Asset for the provided Faction Tag.\n     * \n     * @param FactionTag    Tag that uniquely identifies the Faction. \n     * @return              The Faction Data Asset.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::NewProp_FactionTag = { "FactionTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetFaction_Parms, FactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTag_MetaData), NewProp_FactionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetFaction_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::NewProp_FactionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "GetFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::PropPointers), sizeof(NinjaFactionDatabase_eventGetFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionDatabase_eventGetFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execGetFaction)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_FactionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionDataAsset**)Z_Param__Result=P_THIS->GetFaction_Implementation(Z_Param_Out_FactionTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function GetFaction

// Begin Class UNinjaFactionDatabase Function GetFactions
struct NinjaFactionDatabase_eventGetFactions_Parms
{
	TArray<UNinjaFactionDataAsset*> OutFactions;
};
static const FName NAME_UNinjaFactionDatabase_GetFactions = FName(TEXT("GetFactions"));
void UNinjaFactionDatabase::GetFactions(TArray<UNinjaFactionDataAsset*>& OutFactions) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionDatabase_GetFactions);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionDatabase_eventGetFactions_Parms Parms;
		Parms.OutFactions=OutFactions;
		const_cast<UNinjaFactionDatabase*>(this)->ProcessEvent(Func,&Parms);
		OutFactions=Parms.OutFactions;
	}
	else
	{
		const_cast<UNinjaFactionDatabase*>(this)->GetFactions_Implementation(OutFactions);
	}
}
struct Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Database" },
		{ "Comment", "/**\n     * Provides all Factions available.\n     * \n     * @param OutFactions\n     *      The array containing all factions. It's a hard copy of the data assets to avoid\n     *      duplicating a potentially large list of Data assets from the game.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Provides all Factions available.\n\n@param OutFactions\n     The array containing all factions. It's a hard copy of the data assets to avoid\n     duplicating a potentially large list of Data assets from the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutFactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::NewProp_OutFactions_Inner = { "OutFactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::NewProp_OutFactions = { "OutFactions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetFactions_Parms, OutFactions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::NewProp_OutFactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::NewProp_OutFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "GetFactions", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::PropPointers), sizeof(NinjaFactionDatabase_eventGetFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionDatabase_eventGetFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execGetFactions)
{
	P_GET_TARRAY_REF(UNinjaFactionDataAsset*,Z_Param_Out_OutFactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFactions_Implementation(Z_Param_Out_OutFactions);
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function GetFactions

// Begin Class UNinjaFactionDatabase Function GetReputationTier
struct NinjaFactionDatabase_eventGetReputationTier_Parms
{
	int32 Reputation;
	FFactionReputationTableRow OutReputationTier;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaFactionDatabase_eventGetReputationTier_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaFactionDatabase_GetReputationTier = FName(TEXT("GetReputationTier"));
bool UNinjaFactionDatabase::GetReputationTier(int32 Reputation, FFactionReputationTableRow& OutReputationTier) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionDatabase_GetReputationTier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionDatabase_eventGetReputationTier_Parms Parms;
		Parms.Reputation=Reputation;
		Parms.OutReputationTier=OutReputationTier;
		const_cast<UNinjaFactionDatabase*>(this)->ProcessEvent(Func,&Parms);
		OutReputationTier=Parms.OutReputationTier;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaFactionDatabase*>(this)->GetReputationTier_Implementation(Reputation, OutReputationTier);
	}
}
struct Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Database" },
		{ "Comment", "/**\n     * Provides the reputation tier configured for a given amount of reputation.\n     * \n     * @param Reputation            Amount of reputation used as a reference. \n     * @param OutReputationTier     Tier equivalent to the amount of reputation.\n     * @return\x09\x09\x09\x09\x09\x09True if a tier was found for the provided reputation.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Provides the reputation tier configured for a given amount of reputation.\n\n@param Reputation            Amount of reputation used as a reference.\n@param OutReputationTier     Tier equivalent to the amount of reputation.\n@return                                         True if a tier was found for the provided reputation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetReputationTier_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_OutReputationTier = { "OutReputationTier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetReputationTier_Parms, OutReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(0, nullptr) }; // 1860739754
void Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionDatabase_eventGetReputationTier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionDatabase_eventGetReputationTier_Parms), &Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_OutReputationTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "GetReputationTier", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::PropPointers), sizeof(NinjaFactionDatabase_eventGetReputationTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionDatabase_eventGetReputationTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execGetReputationTier)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_STRUCT_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetReputationTier_Implementation(Z_Param_Reputation,Z_Param_Out_OutReputationTier);
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function GetReputationTier

// Begin Class UNinjaFactionDatabase Function GetReputationTierByName
struct Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics
{
	struct NinjaFactionDatabase_eventGetReputationTierByName_Parms
	{
		FName TierName;
		FFactionReputationTableRow OutReputationTier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions" },
		{ "Comment", "/**\n     * Provides the reputation tier using its unique name as criteria.\n     * \n     * @param TierName              Name that identifies the tier.\n     * @param OutReputationTier     Tier equivalent to the amount of reputation.\n     * @return\x09\x09\x09\x09\x09\x09True if a tier was found for the provided name.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Provides the reputation tier using its unique name as criteria.\n\n@param TierName              Name that identifies the tier.\n@param OutReputationTier     Tier equivalent to the amount of reputation.\n@return                                         True if a tier was found for the provided name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TierName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_TierName = { "TierName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetReputationTierByName_Parms, TierName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_OutReputationTier = { "OutReputationTier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetReputationTierByName_Parms, OutReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(0, nullptr) }; // 1860739754
void Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionDatabase_eventGetReputationTierByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionDatabase_eventGetReputationTierByName_Parms), &Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_TierName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_OutReputationTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "GetReputationTierByName", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NinjaFactionDatabase_eventGetReputationTierByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::NinjaFactionDatabase_eventGetReputationTierByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execGetReputationTierByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TierName);
	P_GET_STRUCT_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetReputationTierByName(Z_Param_TierName,Z_Param_Out_OutReputationTier);
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function GetReputationTierByName

// Begin Class UNinjaFactionDatabase Function GetReputationTiers
struct NinjaFactionDatabase_eventGetReputationTiers_Parms
{
	TArray<FFactionReputationTableRow> OutReputationTiers;
};
static const FName NAME_UNinjaFactionDatabase_GetReputationTiers = FName(TEXT("GetReputationTiers"));
void UNinjaFactionDatabase::GetReputationTiers(TArray<FFactionReputationTableRow>& OutReputationTiers) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionDatabase_GetReputationTiers);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionDatabase_eventGetReputationTiers_Parms Parms;
		Parms.OutReputationTiers=OutReputationTiers;
		const_cast<UNinjaFactionDatabase*>(this)->ProcessEvent(Func,&Parms);
		OutReputationTiers=Parms.OutReputationTiers;
	}
	else
	{
		const_cast<UNinjaFactionDatabase*>(this)->GetReputationTiers_Implementation(OutReputationTiers);
	}
}
struct Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Database" },
		{ "Comment", "/**\n     * Provides all available Reputation Tiers.\n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Provides all available Reputation Tiers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutReputationTiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::NewProp_OutReputationTiers_Inner = { "OutReputationTiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(0, nullptr) }; // 1860739754
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::NewProp_OutReputationTiers = { "OutReputationTiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionDatabase_eventGetReputationTiers_Parms, OutReputationTiers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1860739754
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::NewProp_OutReputationTiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::NewProp_OutReputationTiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "GetReputationTiers", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::PropPointers), sizeof(NinjaFactionDatabase_eventGetReputationTiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionDatabase_eventGetReputationTiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execGetReputationTiers)
{
	P_GET_TARRAY_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTiers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReputationTiers_Implementation(Z_Param_Out_OutReputationTiers);
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function GetReputationTiers

// Begin Class UNinjaFactionDatabase Function InitializeDatabase
static const FName NAME_UNinjaFactionDatabase_InitializeDatabase = FName(TEXT("InitializeDatabase"));
void UNinjaFactionDatabase::InitializeDatabase()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionDatabase_InitializeDatabase);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeDatabase_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Database" },
		{ "Comment", "/**\n     * Allows the initialization of the database. \n     */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Allows the initialization of the database." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionDatabase, nullptr, "InitializeDatabase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionDatabase::execInitializeDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDatabase_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaFactionDatabase Function InitializeDatabase

// Begin Class UNinjaFactionDatabase
void UNinjaFactionDatabase::StaticRegisterNativesUNinjaFactionDatabase()
{
	UClass* Class = UNinjaFactionDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFaction", &UNinjaFactionDatabase::execGetFaction },
		{ "GetFactions", &UNinjaFactionDatabase::execGetFactions },
		{ "GetReputationTier", &UNinjaFactionDatabase::execGetReputationTier },
		{ "GetReputationTierByName", &UNinjaFactionDatabase::execGetReputationTierByName },
		{ "GetReputationTiers", &UNinjaFactionDatabase::execGetReputationTiers },
		{ "InitializeDatabase", &UNinjaFactionDatabase::execInitializeDatabase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionDatabase);
UClass* Z_Construct_UClass_UNinjaFactionDatabase_NoRegister()
{
	return UNinjaFactionDatabase::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base implementation of a Faction Database.\n */" },
		{ "DisplayName", "Faction Database" },
		{ "IncludePath", "GameFramework/NinjaFactionDatabase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Base implementation of a Faction Database." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReputationTable_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "/** Data Table containing reputation tiers. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionDatabase.h" },
		{ "ToolTip", "Data Table containing reputation tiers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReputationTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_GetFaction, "GetFaction" }, // 3631210554
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_GetFactions, "GetFactions" }, // 2386292426
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTier, "GetReputationTier" }, // 3227398206
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTierByName, "GetReputationTierByName" }, // 1270334756
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_GetReputationTiers, "GetReputationTiers" }, // 3366220510
		{ &Z_Construct_UFunction_UNinjaFactionDatabase_InitializeDatabase, "InitializeDatabase" }, // 2251176754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionDatabase_Statics::NewProp_ReputationTable = { "ReputationTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDatabase, ReputationTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReputationTable_MetaData), NewProp_ReputationTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDatabase_Statics::NewProp_ReputationTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionDatabase_Statics::ClassParams = {
	&UNinjaFactionDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaFactionDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionDatabase()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionDatabase.OuterSingleton, Z_Construct_UClass_UNinjaFactionDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionDatabase.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionDatabase>()
{
	return UNinjaFactionDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionDatabase);
UNinjaFactionDatabase::~UNinjaFactionDatabase() {}
// End Class UNinjaFactionDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionDatabase, UNinjaFactionDatabase::StaticClass, TEXT("UNinjaFactionDatabase"), &Z_Registration_Info_UClass_UNinjaFactionDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionDatabase), 2256696821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_2396558093(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
