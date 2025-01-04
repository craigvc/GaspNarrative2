// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/NinjaGASFunctionLibrary.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASFunctionLibrary();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UNinjaGASFunctionLibrary Function AddGameplayCueLocally
struct Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics
{
	struct NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms
	{
		AActor* Target;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n\x09 * Locally adds an <b>Actor<b> Gameplay Cue.\n\x09 *\n\x09 * When adding this Gameplay Cue locally, make sure to also remove it locally.\n\x09 *\n\x09 * @param Target\x09\x09\x09\x09\x09""Actor receiving the local cue.\n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag for the Gameplay Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters for the Gameplay Cue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ToolTip", "Locally adds an <b>Actor<b> Gameplay Cue.\n\nWhen adding this Gameplay Cue locally, make sure to also remove it locally.\n\n@param Target                                        Actor receiving the local cue.\n@param GameplayCueTag                        Gameplay Tag for the Gameplay Cue.\n@param GameplayCueParameters         Parameters for the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASFunctionLibrary, nullptr, "AddGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::NinjaGASFunctionLibrary_eventAddGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASFunctionLibrary::execAddGameplayCueLocally)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayCueLocally(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaGASFunctionLibrary Function AddGameplayCueLocally

// Begin Class UNinjaGASFunctionLibrary Function GetCustomAbilitySystemComponentFromActor
struct Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics
{
	struct NinjaGASFunctionLibrary_eventGetCustomAbilitySystemComponentFromActor_Parms
	{
		AActor* Owner;
		UNinjaGASAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n\x09 * Provides the custom (Ninja GAS) Ability System Component from an owner.\n\x09 * Performs like the Ability System Globals version, but handles the cast for you.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ReturnDisplayName", "ASC" },
		{ "ToolTip", "Provides the custom (Ninja GAS) Ability System Component from an owner.\nPerforms like the Ability System Globals version, but handles the cast for you." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventGetCustomAbilitySystemComponentFromActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventGetCustomAbilitySystemComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASFunctionLibrary, nullptr, "GetCustomAbilitySystemComponentFromActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NinjaGASFunctionLibrary_eventGetCustomAbilitySystemComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::NinjaGASFunctionLibrary_eventGetCustomAbilitySystemComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASFunctionLibrary::execGetCustomAbilitySystemComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaGASAbilitySystemComponent**)Z_Param__Result=UNinjaGASFunctionLibrary::GetCustomAbilitySystemComponentFromActor(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaGASFunctionLibrary Function GetCustomAbilitySystemComponentFromActor

// Begin Class UNinjaGASFunctionLibrary Function RemoveGameplayCueLocally
struct Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics
{
	struct NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms
	{
		AActor* Target;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n\x09 * Locally removes an <b>Actor<b> Gameplay Cue.\n\x09 *\n\x09 * @param Target\x09\x09\x09\x09\x09""Actor having the local cue removed.\n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag for the Gameplay Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters for the Gameplay Cue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ToolTip", "Locally removes an <b>Actor<b> Gameplay Cue.\n\n@param Target                                        Actor having the local cue removed.\n@param GameplayCueTag                        Gameplay Tag for the Gameplay Cue.\n@param GameplayCueParameters         Parameters for the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASFunctionLibrary, nullptr, "RemoveGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::NinjaGASFunctionLibrary_eventRemoveGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASFunctionLibrary::execRemoveGameplayCueLocally)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayCueLocally(Z_Param_Target,Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaGASFunctionLibrary Function RemoveGameplayCueLocally

// Begin Class UNinjaGASFunctionLibrary Function SendGameplayEventToActor
struct Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics
{
	struct NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms
	{
		const AActor* AbilityOwner;
		FGameplayTag EventTag;
		FGameplayEventData EventData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n\x09 * Sends a Gameplay Event to the Owner's of an Ability System Component.\n\x09 *\n\x09 * @param AbilityOwner\x09\x09Owner of the Ability System Component.\n\x09 * @param EventTag\x09\x09\x09Gameplay Tag identifying the Gameplay Event.\n\x09 * @param EventData\x09\x09\x09Payload for the Gameplay Event.\n\x09 * @return\x09\x09\x09\x09\x09The number of successful ability activations triggered by the event.\n\x09 */" },
		{ "DefaultToSelf", "AbilityOwner" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ReturnDisplayName", "Activations" },
		{ "ToolTip", "Sends a Gameplay Event to the Owner's of an Ability System Component.\n\n@param AbilityOwner          Owner of the Ability System Component.\n@param EventTag                      Gameplay Tag identifying the Gameplay Event.\n@param EventData                     Payload for the Gameplay Event.\n@return                                      The number of successful ability activations triggered by the event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityOwner_MetaData), NewProp_AbilityOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_AbilityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASFunctionLibrary, nullptr, "SendGameplayEventToActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::NinjaGASFunctionLibrary_eventSendGameplayEventToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASFunctionLibrary::execSendGameplayEventToActor)
{
	P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNinjaGASFunctionLibrary::SendGameplayEventToActor(Z_Param_AbilityOwner,Z_Param_EventTag,Z_Param_Out_EventData);
	P_NATIVE_END;
}
// End Class UNinjaGASFunctionLibrary Function SendGameplayEventToActor

// Begin Class UNinjaGASFunctionLibrary Function SendGameplayEventToComponent
struct Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics
{
	struct NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms
	{
		UAbilitySystemComponent* AbilityComponent;
		FGameplayTag EventTag;
		FGameplayEventData EventData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n\x09 * Sends a Gameplay Event to the Ability System Component.\n\x09 *\n\x09 * @param AbilityComponent\x09""Ability Component receiving the event.\n\x09 * @param EventTag\x09\x09\x09Gameplay Tag identifying the Gameplay Event.\n\x09 * @param EventData\x09\x09\x09Payload for the Gameplay Event.\n\x09 * @return\x09\x09\x09\x09\x09The number of successful ability activations triggered by the event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ReturnDisplayName", "Activations" },
		{ "ToolTip", "Sends a Gameplay Event to the Ability System Component.\n\n@param AbilityComponent      Ability Component receiving the event.\n@param EventTag                      Gameplay Tag identifying the Gameplay Event.\n@param EventData                     Payload for the Gameplay Event.\n@return                                      The number of successful ability activations triggered by the event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_AbilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASFunctionLibrary, nullptr, "SendGameplayEventToComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::NinjaGASFunctionLibrary_eventSendGameplayEventToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASFunctionLibrary::execSendGameplayEventToComponent)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilityComponent);
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNinjaGASFunctionLibrary::SendGameplayEventToComponent(Z_Param_AbilityComponent,Z_Param_EventTag,Z_Param_Out_EventData);
	P_NATIVE_END;
}
// End Class UNinjaGASFunctionLibrary Function SendGameplayEventToComponent

// Begin Class UNinjaGASFunctionLibrary
void UNinjaGASFunctionLibrary::StaticRegisterNativesUNinjaGASFunctionLibrary()
{
	UClass* Class = UNinjaGASFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayCueLocally", &UNinjaGASFunctionLibrary::execAddGameplayCueLocally },
		{ "GetCustomAbilitySystemComponentFromActor", &UNinjaGASFunctionLibrary::execGetCustomAbilitySystemComponentFromActor },
		{ "RemoveGameplayCueLocally", &UNinjaGASFunctionLibrary::execRemoveGameplayCueLocally },
		{ "SendGameplayEventToActor", &UNinjaGASFunctionLibrary::execSendGameplayEventToActor },
		{ "SendGameplayEventToComponent", &UNinjaGASFunctionLibrary::execSendGameplayEventToComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaGASFunctionLibrary_NoRegister()
{
	return UNinjaGASFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper functions for the Ninja GAS system.\n */" },
		{ "IncludePath", "NinjaGASFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaGASFunctionLibrary.h" },
		{ "ToolTip", "Helper functions for the Ninja GAS system." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaGASFunctionLibrary_AddGameplayCueLocally, "AddGameplayCueLocally" }, // 639686744
		{ &Z_Construct_UFunction_UNinjaGASFunctionLibrary_GetCustomAbilitySystemComponentFromActor, "GetCustomAbilitySystemComponentFromActor" }, // 4188580870
		{ &Z_Construct_UFunction_UNinjaGASFunctionLibrary_RemoveGameplayCueLocally, "RemoveGameplayCueLocally" }, // 1904716391
		{ &Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToActor, "SendGameplayEventToActor" }, // 527840271
		{ &Z_Construct_UFunction_UNinjaGASFunctionLibrary_SendGameplayEventToComponent, "SendGameplayEventToComponent" }, // 2882538822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::ClassParams = {
	&UNinjaGASFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaGASFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaGASFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASFunctionLibrary.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASFunctionLibrary>()
{
	return UNinjaGASFunctionLibrary::StaticClass();
}
UNinjaGASFunctionLibrary::UNinjaGASFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASFunctionLibrary);
UNinjaGASFunctionLibrary::~UNinjaGASFunctionLibrary() {}
// End Class UNinjaGASFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASFunctionLibrary, UNinjaGASFunctionLibrary::StaticClass, TEXT("UNinjaGASFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaGASFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASFunctionLibrary), 2647669016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASFunctionLibrary_h_3031436269(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_NinjaGASFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
