// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ActivateGameplayAbility() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAGAS_API UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility();
NINJAGAS_API UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility_NoRegister();
NINJAGAS_API UEnum* Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UBTTask_ActivateGameplayAbility Function HandleFinishedAbility
struct Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics
{
	struct BTTask_ActivateGameplayAbility_eventHandleFinishedAbility_Parms
	{
		FAbilityEndedData Data;
		UBehaviorTreeComponent* OwnerComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Effectively handles an ability that has finished.\n     *\n     * @param Data\x09\x09\x09    Information the ability that finished executing.\n     * @param OwnerComp\x09\x09    Behavior Tree component that owns this task.\n     */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Effectively handles an ability that has finished.\n\n@param Data                         Information the ability that finished executing.\n@param OwnerComp                    Behavior Tree component that owns this task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_ActivateGameplayAbility_eventHandleFinishedAbility_Parms, Data), Z_Construct_UScriptStruct_FAbilityEndedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3618296056
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_ActivateGameplayAbility_eventHandleFinishedAbility_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComp_MetaData), NewProp_OwnerComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::NewProp_OwnerComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_ActivateGameplayAbility, nullptr, "HandleFinishedAbility", nullptr, nullptr, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::BTTask_ActivateGameplayAbility_eventHandleFinishedAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::BTTask_ActivateGameplayAbility_eventHandleFinishedAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_ActivateGameplayAbility::execHandleFinishedAbility)
{
	P_GET_STRUCT_REF(FAbilityEndedData,Z_Param_Out_Data);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFinishedAbility(Z_Param_Out_Data,Z_Param_OwnerComp);
	P_NATIVE_END;
}
// End Class UBTTask_ActivateGameplayAbility Function HandleFinishedAbility

// Begin Class UBTTask_ActivateGameplayAbility Function OnAbilityEnded_Tags
struct Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics
{
	struct BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Tags_Parms
	{
		FAbilityEndedData Data;
		UBehaviorTreeComponent* OwnerComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * Callback triggered when the ability has finished executing.\n     *\n     * It uses a container as a reference to check if the ability that ended is the one expected.\n     *\n     * @param Data\x09\x09\x09    Information the ability that finished executing.\n     * @param OwnerComp\x09\x09    Behavior Tree component that owns this task.\n     */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Callback triggered when the ability has finished executing.\n\nIt uses a container as a reference to check if the ability that ended is the one expected.\n\n@param Data                         Information the ability that finished executing.\n@param OwnerComp                    Behavior Tree component that owns this task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Tags_Parms, Data), Z_Construct_UScriptStruct_FAbilityEndedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3618296056
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Tags_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComp_MetaData), NewProp_OwnerComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::NewProp_OwnerComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_ActivateGameplayAbility, nullptr, "OnAbilityEnded_Tags", nullptr, nullptr, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Tags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::BTTask_ActivateGameplayAbility_eventOnAbilityEnded_Tags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_ActivateGameplayAbility::execOnAbilityEnded_Tags)
{
	P_GET_STRUCT_REF(FAbilityEndedData,Z_Param_Out_Data);
	P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityEnded_Tags(Z_Param_Out_Data,Z_Param_OwnerComp);
	P_NATIVE_END;
}
// End Class UBTTask_ActivateGameplayAbility Function OnAbilityEnded_Tags

// Begin Class UBTTask_ActivateGameplayAbility
void UBTTask_ActivateGameplayAbility::StaticRegisterNativesUBTTask_ActivateGameplayAbility()
{
	UClass* Class = UBTTask_ActivateGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleFinishedAbility", &UBTTask_ActivateGameplayAbility::execHandleFinishedAbility },
		{ "OnAbilityEnded_Tags", &UBTTask_ActivateGameplayAbility::execOnAbilityEnded_Tags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ActivateGameplayAbility);
UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility_NoRegister()
{
	return UBTTask_ActivateGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n * Activates a gameplay ability using the request activation mode.\n */" },
		{ "DisplayName", "Activate Gameplay Ability" },
		{ "IncludePath", "AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Activates a gameplay ability using the request activation mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationMode_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** Determines how we want to activate the ability. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Determines how we want to activate the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClassKey_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** The blackboard location used to retrieve the ability class. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::BlackboardClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "The blackboard location used to retrieve the ability class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** Ability Class directly provided to this task, used for activation. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::AbilityClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Ability Class directly provided to this task, used for activation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTriggerTags_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** Gameplay Tags used to activate the ability. All Tags must be present. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::GameplayTags" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Gameplay Tags used to activate the ability. All Tags must be present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAbilityToEnd_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** Should we wait for the ability to end? */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Should we wait for the ability to end?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatCancelledAbilityAsSuccess_MetaData[] = {
		{ "Category", "Gameplay Ability Activation" },
		{ "Comment", "/** Determines if a cancelled ability should be handled as success. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_ActivateGameplayAbility.h" },
		{ "ToolTip", "Determines if a cancelled ability should be handled as success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityClassKey;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTriggerTags;
	static void NewProp_bWaitForAbilityToEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAbilityToEnd;
	static void NewProp_bTreatCancelledAbilityAsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatCancelledAbilityAsSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_HandleFinishedAbility, "HandleFinishedAbility" }, // 1814540553
		{ &Z_Construct_UFunction_UBTTask_ActivateGameplayAbility_OnAbilityEnded_Tags, "OnAbilityEnded_Tags" }, // 2413169958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ActivateGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_ActivationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_ActivationMode = { "ActivationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateGameplayAbility, ActivationMode), Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationMode_MetaData), NewProp_ActivationMode_MetaData) }; // 3428651183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityClassKey = { "AbilityClassKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateGameplayAbility, AbilityClassKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClassKey_MetaData), NewProp_AbilityClassKey_MetaData) }; // 3940742986
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateGameplayAbility, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityTriggerTags = { "AbilityTriggerTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_ActivateGameplayAbility, AbilityTriggerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTriggerTags_MetaData), NewProp_AbilityTriggerTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bWaitForAbilityToEnd_SetBit(void* Obj)
{
	((UBTTask_ActivateGameplayAbility*)Obj)->bWaitForAbilityToEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bWaitForAbilityToEnd = { "bWaitForAbilityToEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ActivateGameplayAbility), &Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bWaitForAbilityToEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForAbilityToEnd_MetaData), NewProp_bWaitForAbilityToEnd_MetaData) };
void Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bTreatCancelledAbilityAsSuccess_SetBit(void* Obj)
{
	((UBTTask_ActivateGameplayAbility*)Obj)->bTreatCancelledAbilityAsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bTreatCancelledAbilityAsSuccess = { "bTreatCancelledAbilityAsSuccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_ActivateGameplayAbility), &Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bTreatCancelledAbilityAsSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatCancelledAbilityAsSuccess_MetaData), NewProp_bTreatCancelledAbilityAsSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_ActivationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_ActivationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityClassKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_AbilityTriggerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bWaitForAbilityToEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::NewProp_bTreatCancelledAbilityAsSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::ClassParams = {
	&UBTTask_ActivateGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ActivateGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton, Z_Construct_UClass_UBTTask_ActivateGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UBTTask_ActivateGameplayAbility>()
{
	return UBTTask_ActivateGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ActivateGameplayAbility);
UBTTask_ActivateGameplayAbility::~UBTTask_ActivateGameplayAbility() {}
// End Class UBTTask_ActivateGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_ActivateGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ActivateGameplayAbility, UBTTask_ActivateGameplayAbility::StaticClass, TEXT("UBTTask_ActivateGameplayAbility"), &Z_Registration_Info_UClass_UBTTask_ActivateGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ActivateGameplayAbility), 186094498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_ActivateGameplayAbility_h_1700077501(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_ActivateGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_ActivateGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
