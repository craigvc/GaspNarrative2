// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Components/NinjaFactionComponent.h"
#include "NinjaFactions/Public/Serialization/FFactionSerialization.h"
#include "NinjaFactions/Public/Types/FFactionMembership.h"
#include "NinjaFactions/Public/Types/FFactionMembershipList.h"
#include "NinjaFactions/Public/Types/FFactionReputationTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionComponent() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionSubsystem_NoRegister();
NINJAFACTIONS_API UFunction* Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionManagerRecord();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipList();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipRecord();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionReputationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Delegate FFactionMemebershipMCDelegate
struct Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics
{
	struct NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms
	{
		FFactionMembership FactionMembership;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionMembership_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionMembership;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::NewProp_FactionMembership = { "FactionMembership", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms, FactionMembership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionMembership_MetaData), NewProp_FactionMembership_MetaData) }; // 2510799810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::NewProp_FactionMembership,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "FactionMemebershipMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaFactionComponent::FFactionMemebershipMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& FactionMemebershipMCDelegate, FFactionMembership const& FactionMembership)
{
	struct NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms
	{
		FFactionMembership FactionMembership;
	};
	NinjaFactionComponent_eventFactionMemebershipMCDelegate_Parms Parms;
	Parms.FactionMembership=FactionMembership;
	FactionMemebershipMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFactionMemebershipMCDelegate

// Begin Class UNinjaFactionComponent Function AddFaction
struct Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics
{
	struct NinjaFactionComponent_eventAddFaction_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
		int32 Reputation;
		const UObject* Source;
		FGameplayTag EventTag;
		bool bMainFaction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Register this component as member of a given faction.\n     *\n     * @param FactionData       Faction Data to be added. Must be valid.\n     * @param Reputation        Amount of reputation to be added. Must zero or greater.\n     * @param Source            An object that was the source of the granted faction.\n     * @param EventTag\x09\x09\x09The reason why this faction is being granted.\n     * @param bMainFaction\x09\x09Optional parameter informing if this is supposed to become the Main Faction.\n     */" },
		{ "CPP_Default_bMainFaction", "false" },
		{ "DefaultToSelf", "Source" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Register this component as member of a given faction.\n\n@param FactionData       Faction Data to be added. Must be valid.\n@param Reputation        Amount of reputation to be added. Must zero or greater.\n@param Source            An object that was the source of the granted faction.\n@param EventTag                 The reason why this faction is being granted.\n@param bMainFaction             Optional parameter informing if this is supposed to become the Main Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_bMainFaction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMainFaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFaction_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFaction_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFaction_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_bMainFaction_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventAddFaction_Parms*)Obj)->bMainFaction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_bMainFaction = { "bMainFaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventAddFaction_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_bMainFaction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NewProp_bMainFaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "AddFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NinjaFactionComponent_eventAddFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::NinjaFactionComponent_eventAddFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_AddFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_AddFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execAddFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_UBOOL(Z_Param_bMainFaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFaction(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag,Z_Param_bMainFaction);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function AddFaction

// Begin Class UNinjaFactionComponent Function AddFactionFromMembership
struct Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics
{
	struct NinjaFactionComponent_eventAddFactionFromMembership_Parms
	{
		FFactionMembership Membership;
		const UObject* Source;
		FGameplayTag EventTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n\x09 * Adds a faction from a pre-defined membership.\n\x09 */" },
		{ "DefaultToSelf", "Source" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Adds a faction from a pre-defined membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Membership_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Membership;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_Membership = { "Membership", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFactionFromMembership_Parms, Membership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Membership_MetaData), NewProp_Membership_MetaData) }; // 2510799810
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFactionFromMembership_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddFactionFromMembership_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_Membership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "AddFactionFromMembership", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NinjaFactionComponent_eventAddFactionFromMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::NinjaFactionComponent_eventAddFactionFromMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execAddFactionFromMembership)
{
	P_GET_STRUCT_REF(FFactionMembership,Z_Param_Out_Membership);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFactionFromMembership(Z_Param_Out_Membership,Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function AddFactionFromMembership

// Begin Class UNinjaFactionComponent Function AddReputation
struct Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics
{
	struct NinjaFactionComponent_eventAddReputation_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
		int32 Reputation;
		const UObject* Source;
		FGameplayTag EventTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Adds a specific reputation to a given faction.\n     *\n     * It checks if the component has a Faction Membership before adding the reputation.\n     * If the component has no reputation, then nothing happens.\n     *\n     * @param FactionData       Faction used as a reference. Must be valid.\n     * @param Reputation        Amount of reputation to be added. May be positive or negative (zero is discarded).\n     * @param Source            Any object that was the source of the granted reputation.\n     * @param EventTag          The reason why this reputation is being modified.\n     */" },
		{ "DefaultToSelf", "Source" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Adds a specific reputation to a given faction.\n\nIt checks if the component has a Faction Membership before adding the reputation.\nIf the component has no reputation, then nothing happens.\n\n@param FactionData       Faction used as a reference. Must be valid.\n@param Reputation        Amount of reputation to be added. May be positive or negative (zero is discarded).\n@param Source            Any object that was the source of the granted reputation.\n@param EventTag          The reason why this reputation is being modified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputation_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputation_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputation_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputation_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "AddReputation", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NinjaFactionComponent_eventAddReputation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::NinjaFactionComponent_eventAddReputation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_AddReputation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_AddReputation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execAddReputation)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddReputation(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function AddReputation

// Begin Class UNinjaFactionComponent Function AddReputationFromSource
struct Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics
{
	struct NinjaFactionComponent_eventAddReputationFromSource_Parms
	{
		const UObject* Source;
		FGameplayTag EventTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Adds reputation from a given source.\n     *\n     * @param Source            Any object that was the source of the granted reputation.\n     * @param EventTag\x09\x09\x09The reason why this reputation is being granted/removed.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Adds reputation from a given source.\n\n@param Source            Any object that was the source of the granted reputation.\n@param EventTag                 The reason why this reputation is being granted/removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputationFromSource_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventAddReputationFromSource_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "AddReputationFromSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NinjaFactionComponent_eventAddReputationFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::NinjaFactionComponent_eventAddReputationFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execAddReputationFromSource)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddReputationFromSource(Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function AddReputationFromSource

// Begin Class UNinjaFactionComponent Function GetAttitude
struct Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics
{
	struct NinjaFactionComponent_eventGetAttitude_Parms
	{
		const AActor* Target;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n\x09 * Determines the attitude from this Member towards a Target.\n\x09 * \n\x09 * @param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n\x09 * @return          The attitude between both pawns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Attitude" },
		{ "ToolTip", "Determines the attitude from this Member towards a Target.\n\n@param Target    Target Pawn to which the faction test is done against. Must be a valid faction member.\n@return          The attitude between both pawns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetAttitude", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NinjaFactionComponent_eventGetAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::NinjaFactionComponent_eventGetAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->GetAttitude(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetAttitude

// Begin Class UNinjaFactionComponent Function GetFactionMembership
struct Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics
{
	struct NinjaFactionComponent_eventGetFactionMembership_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
		FFactionMembership OutMembership;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Provides a specific membership for a faction.\n     *\n     * @param FactionData       Original data asset for the membership.\n     * @param OutMembership     Membership data for the Faction provided.\n     * @return                  True if a membership was found. False otherwise.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Provides a specific membership for a faction.\n\n@param FactionData       Original data asset for the membership.\n@param OutMembership     Membership data for the Faction provided.\n@return                  True if a membership was found. False otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutMembership_MetaData[] = {
		{ "DisplayName", "Membership" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMembership;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetFactionMembership_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_OutMembership = { "OutMembership", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetFactionMembership_Parms, OutMembership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutMembership_MetaData), NewProp_OutMembership_MetaData) }; // 2510799810
void Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventGetFactionMembership_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventGetFactionMembership_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_OutMembership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetFactionMembership", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NinjaFactionComponent_eventGetFactionMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::NinjaFactionComponent_eventGetFactionMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetFactionMembership)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_STRUCT_REF(FFactionMembership,Z_Param_Out_OutMembership);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFactionMembership(Z_Param_FactionData,Z_Param_Out_OutMembership);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetFactionMembership

// Begin Class UNinjaFactionComponent Function GetFactionMemberships
struct Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics
{
	struct NinjaFactionComponent_eventGetFactionMemberships_Parms
	{
		TArray<FFactionMembership> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Provides all Factions assigned to this component. \n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Memberships" },
		{ "ToolTip", "Provides all Factions assigned to this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetFactionMemberships_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetFactionMemberships", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NinjaFactionComponent_eventGetFactionMemberships_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::NinjaFactionComponent_eventGetFactionMemberships_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetFactionMemberships)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFactionMembership>*)Z_Param__Result=P_THIS->GetFactionMemberships();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetFactionMemberships

// Begin Class UNinjaFactionComponent Function GetFactionRecordForSerialization
struct Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics
{
	struct NinjaFactionComponent_eventGetFactionRecordForSerialization_Parms
	{
		FFactionManagerRecord ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member" },
		{ "Comment", "/**\n\x09 * Provides the Faction Record that can be used for serialization.\n\x09 * It contains records for all memberships.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Faction Record" },
		{ "ToolTip", "Provides the Faction Record that can be used for serialization.\nIt contains records for all memberships." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetFactionRecordForSerialization_Parms, ReturnValue), Z_Construct_UScriptStruct_FFactionManagerRecord, METADATA_PARAMS(0, nullptr) }; // 940632695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetFactionRecordForSerialization", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::NinjaFactionComponent_eventGetFactionRecordForSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::NinjaFactionComponent_eventGetFactionRecordForSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetFactionRecordForSerialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFactionManagerRecord*)Z_Param__Result=P_THIS->GetFactionRecordForSerialization();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetFactionRecordForSerialization

// Begin Class UNinjaFactionComponent Function GetFactionSubsystem
struct Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics
{
	struct NinjaFactionComponent_eventGetFactionSubsystem_Parms
	{
		UNinjaFactionSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Unified access to the Faction Subsystem.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Unified access to the Faction Subsystem." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetFactionSubsystem_Parms, ReturnValue), Z_Construct_UClass_UNinjaFactionSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetFactionSubsystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::NinjaFactionComponent_eventGetFactionSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::NinjaFactionComponent_eventGetFactionSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetFactionSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaFactionSubsystem**)Z_Param__Result=P_THIS->GetFactionSubsystem();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetFactionSubsystem

// Begin Class UNinjaFactionComponent Function GetMainFactionMembership
struct Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics
{
	struct NinjaFactionComponent_eventGetMainFactionMembership_Parms
	{
		FFactionMembership OutMembership;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Retrieves the main faction to be considered for simple attitude checks.\n     *\n     * This method is only truly reliable in a context where only one Main Faction can ever be present.\n     * If your design requires multiple Main Factions assigned to the same character, then you may need\n     * to overwrite this method with your logic.\n     * \n     * @param OutMembership     Membership data for the Faction to be considered as the main one.\n     * @return                  True if a main membership was found. False otherwise.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Retrieves the main faction to be considered for simple attitude checks.\n\nThis method is only truly reliable in a context where only one Main Faction can ever be present.\nIf your design requires multiple Main Factions assigned to the same character, then you may need\nto overwrite this method with your logic.\n\n@param OutMembership     Membership data for the Faction to be considered as the main one.\n@return                  True if a main membership was found. False otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutMembership_MetaData[] = {
		{ "DisplayName", "Memberships" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMembership;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_OutMembership = { "OutMembership", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetMainFactionMembership_Parms, OutMembership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutMembership_MetaData), NewProp_OutMembership_MetaData) }; // 2510799810
void Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventGetMainFactionMembership_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventGetMainFactionMembership_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_OutMembership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetMainFactionMembership", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NinjaFactionComponent_eventGetMainFactionMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::NinjaFactionComponent_eventGetMainFactionMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetMainFactionMembership)
{
	P_GET_STRUCT_REF(FFactionMembership,Z_Param_Out_OutMembership);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMainFactionMembership(Z_Param_Out_OutMembership);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetMainFactionMembership

// Begin Class UNinjaFactionComponent Function GetMembershipRecordsForSerialization
struct Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics
{
	struct NinjaFactionComponent_eventGetMembershipRecordsForSerialization_Parms
	{
		TArray<FFactionMembershipRecord> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member" },
		{ "Comment", "/**\n\x09 * Provides all serializable memberships as their records.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Membership Records" },
		{ "ToolTip", "Provides all serializable memberships as their records." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembershipRecord, METADATA_PARAMS(0, nullptr) }; // 2349043658
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetMembershipRecordsForSerialization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2349043658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetMembershipRecordsForSerialization", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NinjaFactionComponent_eventGetMembershipRecordsForSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::NinjaFactionComponent_eventGetMembershipRecordsForSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetMembershipRecordsForSerialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFactionMembershipRecord>*)Z_Param__Result=P_THIS->GetMembershipRecordsForSerialization();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetMembershipRecordsForSerialization

// Begin Class UNinjaFactionComponent Function GetReputationRewards
struct Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics
{
	struct NinjaFactionComponent_eventGetReputationRewards_Parms
	{
		TMap<UNinjaFactionDataAsset*,float> OutRewards;
		FGameplayTag EventTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Provides the owner's rewards for a given event.\n     *\n     * This function expects the owner to be a valid implementation of the Faction Source interface.\n     * \n     * @param OutRewards        Map with rewards. Reputation gains will be added or merged with existing entries.\n     * @param EventTag\x09\x09\x09""Arbitrary event to trigger the output.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Provides the owner's rewards for a given event.\n\nThis function expects the owner to be a valid implementation of the Faction Source interface.\n\n@param OutRewards        Map with rewards. Reputation gains will be added or merged with existing entries.\n@param EventTag                 Arbitrary event to trigger the output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRewards_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRewards_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutRewards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards_ValueProp = { "OutRewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards_Key_KeyProp = { "OutRewards_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards = { "OutRewards", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetReputationRewards_Parms, OutRewards), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetReputationRewards_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_OutRewards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetReputationRewards", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NinjaFactionComponent_eventGetReputationRewards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::NinjaFactionComponent_eventGetReputationRewards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetReputationRewards)
{
	P_GET_TMAP_REF(UNinjaFactionDataAsset*,float,Z_Param_Out_OutRewards);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReputationRewards(Z_Param_Out_OutRewards,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetReputationRewards

// Begin Class UNinjaFactionComponent Function GetReputationTier
struct Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics
{
	struct NinjaFactionComponent_eventGetReputationTier_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
		FFactionReputationTableRow OutReputationTier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n\x09 * Provides the reputation tier for a given Faction Data.\n\x09 * \n\x09 * @param FactionData\x09\x09\x09""Faction Data for the Test. Not necessarily assigned. \n\x09 * @param OutReputationTier     Tier equivalent to the amount of reputation.\n\x09 * @return                      True if a tier was found for the given reputation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Provides the reputation tier for a given Faction Data.\n\n@param FactionData                   Faction Data for the Test. Not necessarily assigned.\n@param OutReputationTier     Tier equivalent to the amount of reputation.\n@return                      True if a tier was found for the given reputation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutReputationTier_MetaData[] = {
		{ "DisplayName", "Reputation Tier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutReputationTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetReputationTier_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_OutReputationTier = { "OutReputationTier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventGetReputationTier_Parms, OutReputationTier), Z_Construct_UScriptStruct_FFactionReputationTableRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutReputationTier_MetaData), NewProp_OutReputationTier_MetaData) }; // 1860739754
void Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventGetReputationTier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventGetReputationTier_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_OutReputationTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "GetReputationTier", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NinjaFactionComponent_eventGetReputationTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::NinjaFactionComponent_eventGetReputationTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execGetReputationTier)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_STRUCT_REF(FFactionReputationTableRow,Z_Param_Out_OutReputationTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetReputationTier(Z_Param_FactionData,Z_Param_Out_OutReputationTier);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function GetReputationTier

// Begin Class UNinjaFactionComponent Function HasMembership
struct Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics
{
	struct NinjaFactionComponent_eventHasMembership_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Checks if a given Faction is assigned to this component.\n     * \n     * @param FactionData       Faction Data to be evaluated. Must be valid.\n     * @return                  True if this Faction Tag is assigned to this component. \n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Checks if a given Faction is assigned to this component.\n\n@param FactionData       Faction Data to be evaluated. Must be valid.\n@return                  True if this Faction Tag is assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventHasMembership_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
void Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventHasMembership_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventHasMembership_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "HasMembership", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NinjaFactionComponent_eventHasMembership_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::NinjaFactionComponent_eventHasMembership_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_HasMembership()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_HasMembership_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execHasMembership)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMembership(Z_Param_FactionData);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function HasMembership

// Begin Class UNinjaFactionComponent Function IsValidFactionAssignment
struct NinjaFactionComponent_eventIsValidFactionAssignment_Parms
{
	const UNinjaFactionDataAsset* FactionData;
	int32 Reputation;
	const UObject* Source;
	FGameplayTag EventTag;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaFactionComponent_eventIsValidFactionAssignment_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaFactionComponent_IsValidFactionAssignment = FName(TEXT("IsValidFactionAssignment"));
bool UNinjaFactionComponent::IsValidFactionAssignment(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag EventTag) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_IsValidFactionAssignment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionComponent_eventIsValidFactionAssignment_Parms Parms;
		Parms.FactionData=FactionData;
		Parms.Reputation=Reputation;
		Parms.Source=Source;
		Parms.EventTag=EventTag;
		const_cast<UNinjaFactionComponent*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaFactionComponent*>(this)->IsValidFactionAssignment_Implementation(FactionData, Reputation, Source, EventTag);
	}
}
struct Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Member Component" },
		{ "Comment", "/**\n     * Checks if a given faction can be assigned to the owner.\n     *\n     * This test is meant to be used in two contexts: First, as expected, when the Faction\n     * is assigned to the owner and second, during Server RPCs assigning factions.\n     * \n     * @param FactionData       Faction Data to be evaluated.\n     * @param Reputation        Amount of reputation to be granted by default.\n     * @param Source            Any object that was the source of the granted faction.\n     * @param EventTag\x09        The reason why this faction is being granted.\n     * @return                  True if the Faction can be assigned.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Checks if a given faction can be assigned to the owner.\n\nThis test is meant to be used in two contexts: First, as expected, when the Faction\nis assigned to the owner and second, during Server RPCs assigning factions.\n\n@param FactionData       Faction Data to be evaluated.\n@param Reputation        Amount of reputation to be granted by default.\n@param Source            Any object that was the source of the granted faction.\n@param EventTag         The reason why this faction is being granted.\n@return                  True if the Faction can be assigned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionAssignment_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionAssignment_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionAssignment_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionAssignment_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventIsValidFactionAssignment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventIsValidFactionAssignment_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "IsValidFactionAssignment", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::PropPointers), sizeof(NinjaFactionComponent_eventIsValidFactionAssignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventIsValidFactionAssignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execIsValidFactionAssignment)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidFactionAssignment_Implementation(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function IsValidFactionAssignment

// Begin Class UNinjaFactionComponent Function IsValidFactionUpdate
struct NinjaFactionComponent_eventIsValidFactionUpdate_Parms
{
	const UNinjaFactionDataAsset* FactionData;
	int32 Reputation;
	const UObject* Source;
	FGameplayTag EventTag;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaFactionComponent_eventIsValidFactionUpdate_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaFactionComponent_IsValidFactionUpdate = FName(TEXT("IsValidFactionUpdate"));
bool UNinjaFactionComponent::IsValidFactionUpdate(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag EventTag) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_IsValidFactionUpdate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaFactionComponent_eventIsValidFactionUpdate_Parms Parms;
		Parms.FactionData=FactionData;
		Parms.Reputation=Reputation;
		Parms.Source=Source;
		Parms.EventTag=EventTag;
		const_cast<UNinjaFactionComponent*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaFactionComponent*>(this)->IsValidFactionUpdate_Implementation(FactionData, Reputation, Source, EventTag);
	}
}
struct Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Member Component" },
		{ "Comment", "/**\n     * Checks if an amount of reputation can be assigned to a faction.\n     *\n     * This test is meant to be used in two contexts: First, as expected, when the Faction\n     * is assigned to the owner and second, during Server RPCs assigning factions.\n     *\n     * @param FactionData       Faction used as a reference. Must be valid.\n     * @param Reputation        Amount of reputation to be added. May be positive or negative.\n     * @param Source            Any object that was the source of the granted reputation.\n     * @param EventTag\x09        The reason why this reputation is being granted/removed.\n     * @return                  True if the reputation amount can be assigned.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Checks if an amount of reputation can be assigned to a faction.\n\nThis test is meant to be used in two contexts: First, as expected, when the Faction\nis assigned to the owner and second, during Server RPCs assigning factions.\n\n@param FactionData       Faction used as a reference. Must be valid.\n@param Reputation        Amount of reputation to be added. May be positive or negative.\n@param Source            Any object that was the source of the granted reputation.\n@param EventTag         The reason why this reputation is being granted/removed.\n@return                  True if the reputation amount can be assigned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Factions.Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionUpdate_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionUpdate_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionUpdate_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidFactionUpdate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventIsValidFactionUpdate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventIsValidFactionUpdate_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "IsValidFactionUpdate", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::PropPointers), sizeof(NinjaFactionComponent_eventIsValidFactionUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventIsValidFactionUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execIsValidFactionUpdate)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidFactionUpdate_Implementation(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function IsValidFactionUpdate

// Begin Class UNinjaFactionComponent Function IsValidSourceAndEvent
struct Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics
{
	struct NinjaFactionComponent_eventIsValidSourceAndEvent_Parms
	{
		const UObject* Source;
		FGameplayTag EventTag;
		bool bCheckInterface;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n\x09 * Basic check to ensure a source and an event are valid.\n\x09 * It can optionally check if the source implements the Source Interface\n\x09 */" },
		{ "CPP_Default_bCheckInterface", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Basic check to ensure a source and an event are valid.\nIt can optionally check if the source implements the Source Interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_bCheckInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckInterface;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidSourceAndEvent_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventIsValidSourceAndEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_bCheckInterface_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventIsValidSourceAndEvent_Parms*)Obj)->bCheckInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_bCheckInterface = { "bCheckInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventIsValidSourceAndEvent_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_bCheckInterface_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventIsValidSourceAndEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventIsValidSourceAndEvent_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_bCheckInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "IsValidSourceAndEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NinjaFactionComponent_eventIsValidSourceAndEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::NinjaFactionComponent_eventIsValidSourceAndEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execIsValidSourceAndEvent)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
	P_GET_UBOOL(Z_Param_bCheckInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidSourceAndEvent(Z_Param_Source,Z_Param_Out_EventTag,Z_Param_bCheckInterface);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function IsValidSourceAndEvent

// Begin Class UNinjaFactionComponent Function LoadFactionMemberships
struct Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics
{
	struct NinjaFactionComponent_eventLoadFactionMemberships_Parms
	{
		FFactionManagerRecord FactionManagerRecord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member" },
		{ "Comment", "/**\n\x09 * Restores the faction data using the provided record.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Restores the faction data using the provided record." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionManagerRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionManagerRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::NewProp_FactionManagerRecord = { "FactionManagerRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventLoadFactionMemberships_Parms, FactionManagerRecord), Z_Construct_UScriptStruct_FFactionManagerRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionManagerRecord_MetaData), NewProp_FactionManagerRecord_MetaData) }; // 940632695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::NewProp_FactionManagerRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "LoadFactionMemberships", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::NinjaFactionComponent_eventLoadFactionMemberships_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::NinjaFactionComponent_eventLoadFactionMemberships_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execLoadFactionMemberships)
{
	P_GET_STRUCT_REF(FFactionManagerRecord,Z_Param_Out_FactionManagerRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFactionMemberships(Z_Param_Out_FactionManagerRecord);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function LoadFactionMemberships

// Begin Class UNinjaFactionComponent Function ProcessReputationAndTier
struct Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics
{
	struct NinjaFactionComponent_eventProcessReputationAndTier_Parms
	{
		FFactionMembership Membership;
		int32 Reputation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Modifies the provided reputation to process the Reputation and Tier.\n     * \n     * @param Membership        Membership receiving the new reputation.\n     * @param Reputation        Amount of reputation being added (or subtracted).\n     * @return                  True if changes actually happened in the membership.\n     */" },
		{ "CPP_Default_Reputation", "0" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Modifies the provided reputation to process the Reputation and Tier.\n\n@param Membership        Membership receiving the new reputation.\n@param Reputation        Amount of reputation being added (or subtracted).\n@return                  True if changes actually happened in the membership." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Membership;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_Membership = { "Membership", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventProcessReputationAndTier_Parms, Membership), Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventProcessReputationAndTier_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventProcessReputationAndTier_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventProcessReputationAndTier_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_Membership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "ProcessReputationAndTier", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NinjaFactionComponent_eventProcessReputationAndTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::NinjaFactionComponent_eventProcessReputationAndTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execProcessReputationAndTier)
{
	P_GET_STRUCT_REF(FFactionMembership,Z_Param_Out_Membership);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessReputationAndTier(Z_Param_Out_Membership,Z_Param_Reputation);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function ProcessReputationAndTier

// Begin Class UNinjaFactionComponent Function RemoveFaction
struct Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics
{
	struct NinjaFactionComponent_eventRemoveFaction_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Removes a faction from this component.\n     * \n     * @param FactionData       Faction Data to be added. Must be valid.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Removes a faction from this component.\n\n@param FactionData       Faction Data to be added. Must be valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventRemoveFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::NewProp_FactionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "RemoveFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::NinjaFactionComponent_eventRemoveFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::NinjaFactionComponent_eventRemoveFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execRemoveFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFaction(Z_Param_FactionData);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function RemoveFaction

// Begin Class UNinjaFactionComponent Function ResetFactions
struct Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n\x09 * Resets all factions from the inventory. Usually necessary before a load operation.\n\x09 * Can only be executed in the authoritative version.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Resets all factions from the inventory. Usually necessary before a load operation.\nCan only be executed in the authoritative version." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "ResetFactions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execResetFactions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFactions();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function ResetFactions

// Begin Class UNinjaFactionComponent Function Server_AddFaction
struct NinjaFactionComponent_eventServer_AddFaction_Parms
{
	const UNinjaFactionDataAsset* FactionData;
	int32 Reputation;
	const UObject* Source;
	FGameplayTag EventTag;
	bool bMainFaction;
};
static const FName NAME_UNinjaFactionComponent_Server_AddFaction = FName(TEXT("Server_AddFaction"));
void UNinjaFactionComponent::Server_AddFaction(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag const& EventTag, bool bMainFaction)
{
	NinjaFactionComponent_eventServer_AddFaction_Parms Parms;
	Parms.FactionData=FactionData;
	Parms.Reputation=Reputation;
	Parms.Source=Source;
	Parms.EventTag=EventTag;
	Parms.bMainFaction=bMainFaction ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_Server_AddFaction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server RPC to add a new Faction. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Server RPC to add a new Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMainFaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static void NewProp_bMainFaction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMainFaction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddFaction_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddFaction_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddFaction_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_bMainFaction_SetBit(void* Obj)
{
	((NinjaFactionComponent_eventServer_AddFaction_Parms*)Obj)->bMainFaction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_bMainFaction = { "bMainFaction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaFactionComponent_eventServer_AddFaction_Parms), &Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_bMainFaction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMainFaction_MetaData), NewProp_bMainFaction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::NewProp_bMainFaction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "Server_AddFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::PropPointers), sizeof(NinjaFactionComponent_eventServer_AddFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventServer_AddFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execServer_AddFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_UBOOL(Z_Param_bMainFaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AddFaction_Validate(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag,Z_Param_bMainFaction))
	{
		RPC_ValidateFailed(TEXT("Server_AddFaction_Validate"));
		return;
	}
	P_THIS->Server_AddFaction_Implementation(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag,Z_Param_bMainFaction);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function Server_AddFaction

// Begin Class UNinjaFactionComponent Function Server_AddReputation
struct NinjaFactionComponent_eventServer_AddReputation_Parms
{
	const UNinjaFactionDataAsset* FactionData;
	int32 Reputation;
	const UObject* Source;
	FGameplayTag EventTag;
};
static const FName NAME_UNinjaFactionComponent_Server_AddReputation = FName(TEXT("Server_AddReputation"));
void UNinjaFactionComponent::Server_AddReputation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag const& EventTag)
{
	NinjaFactionComponent_eventServer_AddReputation_Parms Parms;
	Parms.FactionData=FactionData;
	Parms.Reputation=Reputation;
	Parms.Source=Source;
	Parms.EventTag=EventTag;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_Server_AddReputation);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server RPC to add reputation to a Faction. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Server RPC to add reputation to a Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reputation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputation_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_Reputation = { "Reputation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputation_Parms, Reputation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputation_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputation_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_FactionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_Reputation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "Server_AddReputation", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::PropPointers), sizeof(NinjaFactionComponent_eventServer_AddReputation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventServer_AddReputation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execServer_AddReputation)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Reputation);
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AddReputation_Validate(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag))
	{
		RPC_ValidateFailed(TEXT("Server_AddReputation_Validate"));
		return;
	}
	P_THIS->Server_AddReputation_Implementation(Z_Param_FactionData,Z_Param_Reputation,Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function Server_AddReputation

// Begin Class UNinjaFactionComponent Function Server_AddReputationFromSource
struct NinjaFactionComponent_eventServer_AddReputationFromSource_Parms
{
	const UObject* Source;
	FGameplayTag EventTag;
};
static const FName NAME_UNinjaFactionComponent_Server_AddReputationFromSource = FName(TEXT("Server_AddReputationFromSource"));
void UNinjaFactionComponent::Server_AddReputationFromSource(const UObject* Source, FGameplayTag const& EventTag)
{
	NinjaFactionComponent_eventServer_AddReputationFromSource_Parms Parms;
	Parms.Source=Source;
	Parms.EventTag=EventTag;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_Server_AddReputationFromSource);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server RPC to add reputation from a source. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Server RPC to add reputation from a source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputationFromSource_Parms, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_AddReputationFromSource_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "Server_AddReputationFromSource", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::PropPointers), sizeof(NinjaFactionComponent_eventServer_AddReputationFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventServer_AddReputationFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execServer_AddReputationFromSource)
{
	P_GET_OBJECT(UObject,Z_Param_Source);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AddReputationFromSource_Validate(Z_Param_Source,Z_Param_EventTag))
	{
		RPC_ValidateFailed(TEXT("Server_AddReputationFromSource_Validate"));
		return;
	}
	P_THIS->Server_AddReputationFromSource_Implementation(Z_Param_Source,Z_Param_EventTag);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function Server_AddReputationFromSource

// Begin Class UNinjaFactionComponent Function Server_RemoveFaction
struct NinjaFactionComponent_eventServer_RemoveFaction_Parms
{
	const UNinjaFactionDataAsset* FactionData;
};
static const FName NAME_UNinjaFactionComponent_Server_RemoveFaction = FName(TEXT("Server_RemoveFaction"));
void UNinjaFactionComponent::Server_RemoveFaction(const UNinjaFactionDataAsset* FactionData)
{
	NinjaFactionComponent_eventServer_RemoveFaction_Parms Parms;
	Parms.FactionData=FactionData;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_Server_RemoveFaction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server RPC to remove an existing Faction. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Server RPC to remove an existing Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_RemoveFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::NewProp_FactionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "Server_RemoveFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::PropPointers), sizeof(NinjaFactionComponent_eventServer_RemoveFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventServer_RemoveFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execServer_RemoveFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_RemoveFaction_Validate(Z_Param_FactionData))
	{
		RPC_ValidateFailed(TEXT("Server_RemoveFaction_Validate"));
		return;
	}
	P_THIS->Server_RemoveFaction_Implementation(Z_Param_FactionData);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function Server_RemoveFaction

// Begin Class UNinjaFactionComponent Function Server_SetMainFaction
struct NinjaFactionComponent_eventServer_SetMainFaction_Parms
{
	const UNinjaFactionDataAsset* FactionData;
};
static const FName NAME_UNinjaFactionComponent_Server_SetMainFaction = FName(TEXT("Server_SetMainFaction"));
void UNinjaFactionComponent::Server_SetMainFaction(const UNinjaFactionDataAsset* FactionData)
{
	NinjaFactionComponent_eventServer_SetMainFaction_Parms Parms;
	Parms.FactionData=FactionData;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_Server_SetMainFaction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server RPC to modify the Main Faction. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Server RPC to modify the Main Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventServer_SetMainFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::NewProp_FactionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "Server_SetMainFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::PropPointers), sizeof(NinjaFactionComponent_eventServer_SetMainFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaFactionComponent_eventServer_SetMainFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execServer_SetMainFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetMainFaction_Validate(Z_Param_FactionData))
	{
		RPC_ValidateFailed(TEXT("Server_SetMainFaction_Validate"));
		return;
	}
	P_THIS->Server_SetMainFaction_Implementation(Z_Param_FactionData);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function Server_SetMainFaction

// Begin Class UNinjaFactionComponent Function SetMainFaction
struct Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics
{
	struct NinjaFactionComponent_eventSetMainFaction_Parms
	{
		const UNinjaFactionDataAsset* FactionData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Factions|Faction Member Component" },
		{ "Comment", "/**\n     * Defines the provided Faction as the Main Faction.\n     *\n     * Only works if the owner is already a member of the faction, and any other faction currently\n     * set as the Main Faction will be reverted and lose that status.\n     * \n     * It won't do anything if the provided Faction Data is already the main faction.\n     * \n     * @param FactionData\x09\x09""Faction to be defined as the new Main Faction.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Defines the provided Faction as the Main Faction.\n\nOnly works if the owner is already a member of the faction, and any other faction currently\nset as the Main Faction will be reverted and lose that status.\n\nIt won't do anything if the provided Faction Data is already the main faction.\n\n@param FactionData              Faction to be defined as the new Main Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::NewProp_FactionData = { "FactionData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaFactionComponent_eventSetMainFaction_Parms, FactionData), Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionData_MetaData), NewProp_FactionData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::NewProp_FactionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "SetMainFaction", nullptr, nullptr, Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::NinjaFactionComponent_eventSetMainFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::NinjaFactionComponent_eventSetMainFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execSetMainFaction)
{
	P_GET_OBJECT(UNinjaFactionDataAsset,Z_Param_FactionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainFaction(Z_Param_FactionData);
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function SetMainFaction

// Begin Class UNinjaFactionComponent Function SynchronizeDefaultFactions
static const FName NAME_UNinjaFactionComponent_SynchronizeDefaultFactions = FName(TEXT("SynchronizeDefaultFactions"));
void UNinjaFactionComponent::SynchronizeDefaultFactions()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaFactionComponent_SynchronizeDefaultFactions);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SynchronizeDefaultFactions_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Faction Member Component" },
		{ "Comment", "/**\n     * Synchronizes default factions.\n     *\n     * Usually meant to be invoked during Begin Play (or similar places). This is either retrieved\n     * from the component properties directly or you can extend this to obtain default factions\n     * from a save-game file, backend server, etc.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Synchronizes default factions.\n\nUsually meant to be invoked during Begin Play (or similar places). This is either retrieved\nfrom the component properties directly or you can extend this to obtain default factions\nfrom a save-game file, backend server, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaFactionComponent, nullptr, "SynchronizeDefaultFactions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaFactionComponent::execSynchronizeDefaultFactions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeDefaultFactions_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaFactionComponent Function SynchronizeDefaultFactions

// Begin Class UNinjaFactionComponent
void UNinjaFactionComponent::StaticRegisterNativesUNinjaFactionComponent()
{
	UClass* Class = UNinjaFactionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFaction", &UNinjaFactionComponent::execAddFaction },
		{ "AddFactionFromMembership", &UNinjaFactionComponent::execAddFactionFromMembership },
		{ "AddReputation", &UNinjaFactionComponent::execAddReputation },
		{ "AddReputationFromSource", &UNinjaFactionComponent::execAddReputationFromSource },
		{ "GetAttitude", &UNinjaFactionComponent::execGetAttitude },
		{ "GetFactionMembership", &UNinjaFactionComponent::execGetFactionMembership },
		{ "GetFactionMemberships", &UNinjaFactionComponent::execGetFactionMemberships },
		{ "GetFactionRecordForSerialization", &UNinjaFactionComponent::execGetFactionRecordForSerialization },
		{ "GetFactionSubsystem", &UNinjaFactionComponent::execGetFactionSubsystem },
		{ "GetMainFactionMembership", &UNinjaFactionComponent::execGetMainFactionMembership },
		{ "GetMembershipRecordsForSerialization", &UNinjaFactionComponent::execGetMembershipRecordsForSerialization },
		{ "GetReputationRewards", &UNinjaFactionComponent::execGetReputationRewards },
		{ "GetReputationTier", &UNinjaFactionComponent::execGetReputationTier },
		{ "HasMembership", &UNinjaFactionComponent::execHasMembership },
		{ "IsValidFactionAssignment", &UNinjaFactionComponent::execIsValidFactionAssignment },
		{ "IsValidFactionUpdate", &UNinjaFactionComponent::execIsValidFactionUpdate },
		{ "IsValidSourceAndEvent", &UNinjaFactionComponent::execIsValidSourceAndEvent },
		{ "LoadFactionMemberships", &UNinjaFactionComponent::execLoadFactionMemberships },
		{ "ProcessReputationAndTier", &UNinjaFactionComponent::execProcessReputationAndTier },
		{ "RemoveFaction", &UNinjaFactionComponent::execRemoveFaction },
		{ "ResetFactions", &UNinjaFactionComponent::execResetFactions },
		{ "Server_AddFaction", &UNinjaFactionComponent::execServer_AddFaction },
		{ "Server_AddReputation", &UNinjaFactionComponent::execServer_AddReputation },
		{ "Server_AddReputationFromSource", &UNinjaFactionComponent::execServer_AddReputationFromSource },
		{ "Server_RemoveFaction", &UNinjaFactionComponent::execServer_RemoveFaction },
		{ "Server_SetMainFaction", &UNinjaFactionComponent::execServer_SetMainFaction },
		{ "SetMainFaction", &UNinjaFactionComponent::execSetMainFaction },
		{ "SynchronizeDefaultFactions", &UNinjaFactionComponent::execSynchronizeDefaultFactions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionComponent);
UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister()
{
	return UNinjaFactionComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaFactions" },
		{ "Comment", "/**\n * Manages all Factions and Reputations from this component's owner.\n */" },
		{ "DisplayName", "Faction Component" },
		{ "IncludePath", "Components/NinjaFactionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Manages all Factions and Reputations from this component's owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFactionAdded_MetaData[] = {
		{ "Comment", "/** Notifies subscribers about a Faction Membership that has been added. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Notifies subscribers about a Faction Membership that has been added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFactionRemoved_MetaData[] = {
		{ "Comment", "/** Notifies subscribers about a Faction Membership that has been removed. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Notifies subscribers about a Faction Membership that has been removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReputationChanged_MetaData[] = {
		{ "Comment", "/** Notifies subscribers about Reputation changes in a Faction Membership. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Notifies subscribers about Reputation changes in a Faction Membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMainStatusChanged_MetaData[] = {
		{ "Comment", "/** Notifies subscribers about changes in a main status. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Notifies subscribers about changes in a main status." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTierChanged_MetaData[] = {
		{ "Comment", "/** Notifies subscribers about Tier changes in a Faction Membership. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Notifies subscribers about Tier changes in a Faction Membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFactions_MetaData[] = {
		{ "Category", "Faction Member" },
		{ "Comment", "/**\n\x09 * Faction Memberships granted by default.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Faction Memberships granted by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MembershipList_MetaData[] = {
		{ "Comment", "/** Stores all Factions this component is a member of. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaFactionComponent.h" },
		{ "ToolTip", "Stores all Factions this component is a member of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFactionAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFactionRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReputationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMainStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTierChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultFactions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MembershipList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaFactionComponent_AddFaction, "AddFaction" }, // 2067271354
		{ &Z_Construct_UFunction_UNinjaFactionComponent_AddFactionFromMembership, "AddFactionFromMembership" }, // 5156603
		{ &Z_Construct_UFunction_UNinjaFactionComponent_AddReputation, "AddReputation" }, // 428461719
		{ &Z_Construct_UFunction_UNinjaFactionComponent_AddReputationFromSource, "AddReputationFromSource" }, // 1911563919
		{ &Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, "FactionMemebershipMCDelegate__DelegateSignature" }, // 1298815527
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetAttitude, "GetAttitude" }, // 2443904775
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMembership, "GetFactionMembership" }, // 3847850002
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetFactionMemberships, "GetFactionMemberships" }, // 2963696395
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetFactionRecordForSerialization, "GetFactionRecordForSerialization" }, // 3786273921
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetFactionSubsystem, "GetFactionSubsystem" }, // 910994864
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetMainFactionMembership, "GetMainFactionMembership" }, // 3446915545
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetMembershipRecordsForSerialization, "GetMembershipRecordsForSerialization" }, // 3103429941
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetReputationRewards, "GetReputationRewards" }, // 1882941763
		{ &Z_Construct_UFunction_UNinjaFactionComponent_GetReputationTier, "GetReputationTier" }, // 2566774721
		{ &Z_Construct_UFunction_UNinjaFactionComponent_HasMembership, "HasMembership" }, // 1738971088
		{ &Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionAssignment, "IsValidFactionAssignment" }, // 2486958047
		{ &Z_Construct_UFunction_UNinjaFactionComponent_IsValidFactionUpdate, "IsValidFactionUpdate" }, // 1481513419
		{ &Z_Construct_UFunction_UNinjaFactionComponent_IsValidSourceAndEvent, "IsValidSourceAndEvent" }, // 392776455
		{ &Z_Construct_UFunction_UNinjaFactionComponent_LoadFactionMemberships, "LoadFactionMemberships" }, // 2290712734
		{ &Z_Construct_UFunction_UNinjaFactionComponent_ProcessReputationAndTier, "ProcessReputationAndTier" }, // 211706062
		{ &Z_Construct_UFunction_UNinjaFactionComponent_RemoveFaction, "RemoveFaction" }, // 3281792103
		{ &Z_Construct_UFunction_UNinjaFactionComponent_ResetFactions, "ResetFactions" }, // 1017431545
		{ &Z_Construct_UFunction_UNinjaFactionComponent_Server_AddFaction, "Server_AddFaction" }, // 2974502405
		{ &Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputation, "Server_AddReputation" }, // 2353334960
		{ &Z_Construct_UFunction_UNinjaFactionComponent_Server_AddReputationFromSource, "Server_AddReputationFromSource" }, // 4230154970
		{ &Z_Construct_UFunction_UNinjaFactionComponent_Server_RemoveFaction, "Server_RemoveFaction" }, // 2489590443
		{ &Z_Construct_UFunction_UNinjaFactionComponent_Server_SetMainFaction, "Server_SetMainFaction" }, // 2390419119
		{ &Z_Construct_UFunction_UNinjaFactionComponent_SetMainFaction, "SetMainFaction" }, // 50711409
		{ &Z_Construct_UFunction_UNinjaFactionComponent_SynchronizeDefaultFactions, "SynchronizeDefaultFactions" }, // 3727950919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnFactionAdded = { "OnFactionAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, OnFactionAdded), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFactionAdded_MetaData), NewProp_OnFactionAdded_MetaData) }; // 1298815527
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnFactionRemoved = { "OnFactionRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, OnFactionRemoved), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFactionRemoved_MetaData), NewProp_OnFactionRemoved_MetaData) }; // 1298815527
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnReputationChanged = { "OnReputationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, OnReputationChanged), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReputationChanged_MetaData), NewProp_OnReputationChanged_MetaData) }; // 1298815527
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnMainStatusChanged = { "OnMainStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, OnMainStatusChanged), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMainStatusChanged_MetaData), NewProp_OnMainStatusChanged_MetaData) }; // 1298815527
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnTierChanged = { "OnTierChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, OnTierChanged), Z_Construct_UDelegateFunction_UNinjaFactionComponent_FactionMemebershipMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTierChanged_MetaData), NewProp_OnTierChanged_MetaData) }; // 1298815527
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_DefaultFactions_Inner = { "DefaultFactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_DefaultFactions = { "DefaultFactions", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, DefaultFactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFactions_MetaData), NewProp_DefaultFactions_MetaData) }; // 2510799810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_MembershipList = { "MembershipList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionComponent, MembershipList), Z_Construct_UScriptStruct_FFactionMembershipList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MembershipList_MetaData), NewProp_MembershipList_MetaData) }; // 828088185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnFactionAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnFactionRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnReputationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnMainStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_OnTierChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_DefaultFactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_DefaultFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionComponent_Statics::NewProp_MembershipList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionComponent_Statics::ClassParams = {
	&UNinjaFactionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaFactionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionComponent.OuterSingleton, Z_Construct_UClass_UNinjaFactionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionComponent.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionComponent>()
{
	return UNinjaFactionComponent::StaticClass();
}
void UNinjaFactionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MembershipList(TEXT("MembershipList"));
	const bool bIsValid = true
		&& Name_MembershipList == ClassReps[(int32)ENetFields_Private::MembershipList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaFactionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionComponent);
UNinjaFactionComponent::~UNinjaFactionComponent() {}
// End Class UNinjaFactionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionComponent, UNinjaFactionComponent::StaticClass, TEXT("UNinjaFactionComponent"), &Z_Registration_Info_UClass_UNinjaFactionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionComponent), 1676831656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_490828373(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
