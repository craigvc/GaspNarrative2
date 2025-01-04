// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatGameplayAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatGameplayAbility Function AddDebugMessage
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics
{
	struct NinjaCombatGameplayAbility_eventAddDebugMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Adds a debug message, if debugging is activated.\n\x09 * \n\x09 * @param Message\n\x09 *\x09\x09Message that will be displayed to the log and on-screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Adds a debug message, if debugging is activated.\n\n@param Message\n             Message that will be displayed to the log and on-screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventAddDebugMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "AddDebugMessage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::NinjaCombatGameplayAbility_eventAddDebugMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::NinjaCombatGameplayAbility_eventAddDebugMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execAddDebugMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDebugMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function AddDebugMessage

// Begin Class UNinjaCombatGameplayAbility Function FinishLatentTask
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics
{
	struct NinjaCombatGameplayAbility_eventFinishLatentTask_Parms
	{
		UAbilityTask* Task;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Helper method that can finish a latent task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Helper method that can finish a latent task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventFinishLatentTask_Parms, Task), Z_Construct_UClass_UAbilityTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "FinishLatentTask", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::NinjaCombatGameplayAbility_eventFinishLatentTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::NinjaCombatGameplayAbility_eventFinishLatentTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execFinishLatentTask)
{
	P_GET_OBJECT(UAbilityTask,Z_Param_Task);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatGameplayAbility::FinishLatentTask(Z_Param_Task);
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function FinishLatentTask

// Begin Class UNinjaCombatGameplayAbility Function FinishLatentTasks
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics
{
	struct NinjaCombatGameplayAbility_eventFinishLatentTasks_Parms
	{
		TArray<UAbilityTask*> Tasks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Helper method that can finish an array of latent tasks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Helper method that can finish an array of latent tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbilityTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventFinishLatentTasks_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NewProp_Tasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "FinishLatentTasks", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NinjaCombatGameplayAbility_eventFinishLatentTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::NinjaCombatGameplayAbility_eventFinishLatentTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execFinishLatentTasks)
{
	P_GET_TARRAY_REF(UAbilityTask*,Z_Param_Out_Tasks);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatGameplayAbility::FinishLatentTasks(Z_Param_Out_Tasks);
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function FinishLatentTasks

// Begin Class UNinjaCombatGameplayAbility Function GetCombatManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetCombatManagerComponentFromActorInfo_Parms
	{
		UNinjaCombatManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Combat Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Combat Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetCombatManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetCombatManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetCombatManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetCombatManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetCombatManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatManagerComponent**)Z_Param__Result=P_THIS->GetCombatManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetCombatManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetComboManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetComboManagerComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Combo Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Combo Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetComboManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetComboManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetComboManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetComboManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetComboManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetComboManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetComboManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetDamageManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetDamageManagerComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Damage Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Damage Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetDamageManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetDamageManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetDamageManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetDamageManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetDamageManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetDamageManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetDamageManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetDefenseManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetDefenseManagerComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Defense Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Defense Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetDefenseManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetDefenseManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetDefenseManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetDefenseManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetDefenseManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetDefenseManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetDefenseManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetMotionWarpingComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetMotionWarpingComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Motion Warping Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Motion Warping Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetMotionWarpingComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetMotionWarpingComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetMotionWarpingComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetMotionWarpingComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetMotionWarpingComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetMotionWarpingComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetMotionWarpingComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetMovementComponent
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics
{
	struct NinjaCombatGameplayAbility_eventGetMovementComponent_Parms
	{
		UMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Character Movement Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Character Movement Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::NinjaCombatGameplayAbility_eventGetMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::NinjaCombatGameplayAbility_eventGetMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetMovementComponent

// Begin Class UNinjaCombatGameplayAbility Function GetTargetManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetTargetManagerComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Target Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Target Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetTargetManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetTargetManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetTargetManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetTargetManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetTargetManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetTargetManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetTargetManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function GetWeaponManagerComponentFromActorInfo
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics
{
	struct NinjaCombatGameplayAbility_eventGetWeaponManagerComponentFromActorInfo_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Weapon Manager Component from the Actor Info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Provides the Weapon Manager Component from the Actor Info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventGetWeaponManagerComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "GetWeaponManagerComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetWeaponManagerComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::NinjaCombatGameplayAbility_eventGetWeaponManagerComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execGetWeaponManagerComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetWeaponManagerComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function GetWeaponManagerComponentFromActorInfo

// Begin Class UNinjaCombatGameplayAbility Function HandleEventReceived
struct NinjaCombatGameplayAbility_eventHandleEventReceived_Parms
{
	FGameplayEventData Payload;
};
static const FName NAME_UNinjaCombatGameplayAbility_HandleEventReceived = FName(TEXT("HandleEventReceived"));
void UNinjaCombatGameplayAbility::HandleEventReceived(FGameplayEventData Payload)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatGameplayAbility_HandleEventReceived);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatGameplayAbility_eventHandleEventReceived_Parms Parms;
		Parms.Payload=Payload;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleEventReceived_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Ability" },
		{ "Comment", "/**\n\x09 * Convenience method to handle event payloads.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Convenience method to handle event payloads." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventHandleEventReceived_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "HandleEventReceived", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::PropPointers), sizeof(NinjaCombatGameplayAbility_eventHandleEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatGameplayAbility_eventHandleEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execHandleEventReceived)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEventReceived_Implementation(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function HandleEventReceived

// Begin Class UNinjaCombatGameplayAbility Function InitializeEventTask
struct Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics
{
	struct NinjaCombatGameplayAbility_eventInitializeEventTask_Parms
	{
		FGameplayTag Event;
		bool bOnlyMatchExact;
		UAbilityTask_WaitGameplayEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Handles the initialization of the event task. It won't be active yet.\n\x09 */" },
		{ "CPP_Default_bOnlyMatchExact", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Handles the initialization of the event task. It won't be active yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static void NewProp_bOnlyMatchExact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyMatchExact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventInitializeEventTask_Parms, Event), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_bOnlyMatchExact_SetBit(void* Obj)
{
	((NinjaCombatGameplayAbility_eventInitializeEventTask_Parms*)Obj)->bOnlyMatchExact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_bOnlyMatchExact = { "bOnlyMatchExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatGameplayAbility_eventInitializeEventTask_Parms), &Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_bOnlyMatchExact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatGameplayAbility_eventInitializeEventTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_bOnlyMatchExact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatGameplayAbility, nullptr, "InitializeEventTask", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NinjaCombatGameplayAbility_eventInitializeEventTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::NinjaCombatGameplayAbility_eventInitializeEventTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatGameplayAbility::execInitializeEventTask)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Event);
	P_GET_UBOOL(Z_Param_bOnlyMatchExact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_WaitGameplayEvent**)Z_Param__Result=P_THIS->InitializeEventTask(Z_Param_Event,Z_Param_bOnlyMatchExact);
	P_NATIVE_END;
}
// End Class UNinjaCombatGameplayAbility Function InitializeEventTask

// Begin Class UNinjaCombatGameplayAbility
void UNinjaCombatGameplayAbility::StaticRegisterNativesUNinjaCombatGameplayAbility()
{
	UClass* Class = UNinjaCombatGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDebugMessage", &UNinjaCombatGameplayAbility::execAddDebugMessage },
		{ "FinishLatentTask", &UNinjaCombatGameplayAbility::execFinishLatentTask },
		{ "FinishLatentTasks", &UNinjaCombatGameplayAbility::execFinishLatentTasks },
		{ "GetCombatManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetCombatManagerComponentFromActorInfo },
		{ "GetComboManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetComboManagerComponentFromActorInfo },
		{ "GetDamageManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetDamageManagerComponentFromActorInfo },
		{ "GetDefenseManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetDefenseManagerComponentFromActorInfo },
		{ "GetMotionWarpingComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetMotionWarpingComponentFromActorInfo },
		{ "GetMovementComponent", &UNinjaCombatGameplayAbility::execGetMovementComponent },
		{ "GetTargetManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetTargetManagerComponentFromActorInfo },
		{ "GetWeaponManagerComponentFromActorInfo", &UNinjaCombatGameplayAbility::execGetWeaponManagerComponentFromActorInfo },
		{ "HandleEventReceived", &UNinjaCombatGameplayAbility::execHandleEventReceived },
		{ "InitializeEventTask", &UNinjaCombatGameplayAbility::execInitializeEventTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatGameplayAbility);
UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister()
{
	return UNinjaCombatGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Gameplay Ability that provides access to the Combat Component.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base Gameplay Ability that provides access to the Combat Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Combat Ability|Debug" },
		{ "Comment", "/** Toggles debug mode on and off. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Toggles debug mode on and off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToDisplayDebugInfo_MetaData[] = {
		{ "Category", "Combat Ability|Debug" },
		{ "Comment", "/** Display duration of debug information. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayAbility.h" },
		{ "ToolTip", "Display duration of debug information." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplayDebugInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_AddDebugMessage, "AddDebugMessage" }, // 440713129
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTask, "FinishLatentTask" }, // 4164106003
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_FinishLatentTasks, "FinishLatentTasks" }, // 2138955902
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetCombatManagerComponentFromActorInfo, "GetCombatManagerComponentFromActorInfo" }, // 1322069674
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetComboManagerComponentFromActorInfo, "GetComboManagerComponentFromActorInfo" }, // 4146954476
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDamageManagerComponentFromActorInfo, "GetDamageManagerComponentFromActorInfo" }, // 3288309719
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetDefenseManagerComponentFromActorInfo, "GetDefenseManagerComponentFromActorInfo" }, // 1324104992
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMotionWarpingComponentFromActorInfo, "GetMotionWarpingComponentFromActorInfo" }, // 2810170730
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetMovementComponent, "GetMovementComponent" }, // 4111768924
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetTargetManagerComponentFromActorInfo, "GetTargetManagerComponentFromActorInfo" }, // 2777490660
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_GetWeaponManagerComponentFromActorInfo, "GetWeaponManagerComponentFromActorInfo" }, // 1325976012
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_HandleEventReceived, "HandleEventReceived" }, // 1493121492
		{ &Z_Construct_UFunction_UNinjaCombatGameplayAbility_InitializeEventTask, "InitializeEventTask" }, // 3771631428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((UNinjaCombatGameplayAbility*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatGameplayAbility), &Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_TimeToDisplayDebugInfo = { "TimeToDisplayDebugInfo", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatGameplayAbility, TimeToDisplayDebugInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToDisplayDebugInfo_MetaData), NewProp_TimeToDisplayDebugInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::NewProp_TimeToDisplayDebugInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::ClassParams = {
	&UNinjaCombatGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatGameplayAbility.OuterSingleton, Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatGameplayAbility.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatGameplayAbility>()
{
	return UNinjaCombatGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatGameplayAbility);
UNinjaCombatGameplayAbility::~UNinjaCombatGameplayAbility() {}
// End Class UNinjaCombatGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatGameplayAbility, UNinjaCombatGameplayAbility::StaticClass, TEXT("UNinjaCombatGameplayAbility"), &Z_Registration_Info_UClass_UNinjaCombatGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatGameplayAbility), 295294968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_2766840909(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
