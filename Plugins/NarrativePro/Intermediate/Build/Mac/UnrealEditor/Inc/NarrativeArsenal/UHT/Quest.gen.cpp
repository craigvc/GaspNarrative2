// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnQuestBranchCompleted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms
	{
		const UQuest* Quest;
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Quests\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Quests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestBranchCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestBranchCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestBranchCompleted, const UQuest* Quest, const UQuestBranch* Branch)
{
	struct _Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms
	{
		const UQuest* Quest;
		const UQuestBranch* Branch;
	};
	_Script_NarrativeArsenal_eventOnQuestBranchCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.Branch=Branch;
	OnQuestBranchCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestBranchCompleted

// Begin Delegate FOnQuestNewState
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestNewState_Parms
	{
		UQuest* Quest;
		const UQuestState* NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestNewState__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestNewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestNewState_DelegateWrapper(const FMulticastScriptDelegate& OnQuestNewState, UQuest* Quest, const UQuestState* NewState)
{
	struct _Script_NarrativeArsenal_eventOnQuestNewState_Parms
	{
		UQuest* Quest;
		const UQuestState* NewState;
	};
	_Script_NarrativeArsenal_eventOnQuestNewState_Parms Parms;
	Parms.Quest=Quest;
	Parms.NewState=NewState;
	OnQuestNewState.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestNewState

// Begin Delegate FOnQuestTaskProgressChanged
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* ProgressedTask;
		const UQuestBranch* Branch;
		int32 OldProgress;
		int32 NewProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressedTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask = { "ProgressedTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms, ProgressedTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressedTask_MetaData), NewProp_ProgressedTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_OldProgress = { "OldProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms, OldProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms, NewProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_ProgressedTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_Branch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_OldProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::NewProp_NewProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestTaskProgressChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestTaskProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskProgressChanged, const UQuest* Quest, const UNarrativeTask* ProgressedTask, const UQuestBranch* Branch, int32 OldProgress, int32 NewProgress)
{
	struct _Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* ProgressedTask;
		const UQuestBranch* Branch;
		int32 OldProgress;
		int32 NewProgress;
	};
	_Script_NarrativeArsenal_eventOnQuestTaskProgressChanged_Parms Parms;
	Parms.Quest=Quest;
	Parms.ProgressedTask=ProgressedTask;
	Parms.Branch=Branch;
	Parms.OldProgress=OldProgress;
	Parms.NewProgress=NewProgress;
	OnQuestTaskProgressChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestTaskProgressChanged

// Begin Delegate FOnQuestTaskCompleted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* CompletedTask;
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompletedTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask = { "CompletedTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms, CompletedTask), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedTask_MetaData), NewProp_CompletedTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_CompletedTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestTaskCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskCompleted, const UQuest* Quest, const UNarrativeTask* CompletedTask, const UQuestBranch* Branch)
{
	struct _Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* CompletedTask;
		const UQuestBranch* Branch;
	};
	_Script_NarrativeArsenal_eventOnQuestTaskCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.CompletedTask=CompletedTask;
	Parms.Branch=Branch;
	OnQuestTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestTaskCompleted

// Begin Delegate FOnQuestSucceeded
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestSucceeded_Parms
	{
		const UQuest* Quest;
		FText QuestSucceededMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSucceededMessage_MetaData), NewProp_QuestSucceededMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::NewProp_QuestSucceededMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestSucceeded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestSucceeded, const UQuest* Quest, FText const& QuestSucceededMessage)
{
	struct _Script_NarrativeArsenal_eventOnQuestSucceeded_Parms
	{
		const UQuest* Quest;
		FText QuestSucceededMessage;
	};
	_Script_NarrativeArsenal_eventOnQuestSucceeded_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestSucceededMessage=QuestSucceededMessage;
	OnQuestSucceeded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestSucceeded

// Begin Delegate FOnQuestFailed
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestFailed_Parms
	{
		const UQuest* Quest;
		FText QuestFailedMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFailedMessage_MetaData), NewProp_QuestFailedMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::NewProp_QuestFailedMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestFailed_DelegateWrapper(const FMulticastScriptDelegate& OnQuestFailed, const UQuest* Quest, FText const& QuestFailedMessage)
{
	struct _Script_NarrativeArsenal_eventOnQuestFailed_Parms
	{
		const UQuest* Quest;
		FText QuestFailedMessage;
	};
	_Script_NarrativeArsenal_eventOnQuestFailed_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestFailedMessage=QuestFailedMessage;
	OnQuestFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestFailed

// Begin Delegate FOnQuestStarted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestStarted_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestStarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStarted, const UQuest* Quest)
{
	struct _Script_NarrativeArsenal_eventOnQuestStarted_Parms
	{
		const UQuest* Quest;
	};
	_Script_NarrativeArsenal_eventOnQuestStarted_Parms Parms;
	Parms.Quest=Quest;
	OnQuestStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestStarted

// Begin Delegate FOnQuestPostLoad
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestPostLoad_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestPostLoad_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestPostLoad__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestPostLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestPostLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestPostLoad_DelegateWrapper(const FMulticastScriptDelegate& OnQuestPostLoad, const UQuest* Quest)
{
	struct _Script_NarrativeArsenal_eventOnQuestPostLoad_Parms
	{
		const UQuest* Quest;
	};
	_Script_NarrativeArsenal_eventOnQuestPostLoad_Parms Parms;
	Parms.Quest=Quest;
	OnQuestPostLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestPostLoad

// Begin Delegate FOnQuestForgotten
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestForgotten_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestForgotten__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnQuestForgotten, const UQuest* Quest)
{
	struct _Script_NarrativeArsenal_eventOnQuestForgotten_Parms
	{
		const UQuest* Quest;
	};
	_Script_NarrativeArsenal_eventOnQuestForgotten_Parms Parms;
	Parms.Quest=Quest;
	OnQuestForgotten.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestForgotten

// Begin Delegate FOnQuestRestarted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnQuestRestarted_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnQuestRestarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnQuestRestarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestRestarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnQuestRestarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestRestarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRestarted, const UQuest* Quest)
{
	struct _Script_NarrativeArsenal_eventOnQuestRestarted_Parms
	{
		const UQuest* Quest;
	};
	_Script_NarrativeArsenal_eventOnQuestRestarted_Parms Parms;
	Parms.Quest=Quest;
	OnQuestRestarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnQuestRestarted

// Begin Enum EQuestCompletion
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestCompletion;
static UEnum* EQuestCompletion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EQuestCompletion"));
	}
	return Z_Registration_Info_UEnum_EQuestCompletion.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EQuestCompletion>()
{
	return EQuestCompletion_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents the state of a particular quest\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "QC_Failed.DisplayName", "Failed" },
		{ "QC_Failed.Name", "EQuestCompletion::QC_Failed" },
		{ "QC_NotStarted.DisplayName", "Not Started" },
		{ "QC_NotStarted.Name", "EQuestCompletion::QC_NotStarted" },
		{ "QC_Started.DisplayName", "Started" },
		{ "QC_Started.Name", "EQuestCompletion::QC_Started" },
		{ "QC_Succeded.DisplayName", "Succeeded" },
		{ "QC_Succeded.Name", "EQuestCompletion::QC_Succeded" },
		{ "ToolTip", "Represents the state of a particular quest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestCompletion::QC_NotStarted", (int64)EQuestCompletion::QC_NotStarted },
		{ "EQuestCompletion::QC_Started", (int64)EQuestCompletion::QC_Started },
		{ "EQuestCompletion::QC_Succeded", (int64)EQuestCompletion::QC_Succeded },
		{ "EQuestCompletion::QC_Failed", (int64)EQuestCompletion::QC_Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EQuestCompletion",
	"EQuestCompletion",
	Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion()
{
	if (!Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestCompletion.InnerSingleton;
}
// End Enum EQuestCompletion

// Begin Class UQuest Function BPOnQuestBranchCompleted
struct Quest_eventBPOnQuestBranchCompleted_Parms
{
	const UQuest* Quest;
	const UQuestBranch* Branch;
};
static const FName NAME_UQuest_BPOnQuestBranchCompleted = FName(TEXT("BPOnQuestBranchCompleted"));
void UQuest::BPOnQuestBranchCompleted(const UQuest* Quest, const UQuestBranch* Branch)
{
	Quest_eventBPOnQuestBranchCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.Branch=Branch;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestBranchCompleted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Branch Taken" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestBranchCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestBranchCompleted

// Begin Class UQuest Function BPOnQuestFailed
struct Quest_eventBPOnQuestFailed_Parms
{
	const UQuest* Quest;
	FText QuestFailedMessage;
};
static const FName NAME_UQuest_BPOnQuestFailed = FName(TEXT("BPOnQuestFailed"));
void UQuest::BPOnQuestFailed(const UQuest* Quest, FText const& QuestFailedMessage)
{
	Quest_eventBPOnQuestFailed_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestFailedMessage=QuestFailedMessage;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestFailed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Failed" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailedMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFailedMessage_MetaData), NewProp_QuestFailedMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::NewProp_QuestFailedMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestFailed", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::PropPointers), sizeof(Quest_eventBPOnQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestFailed

// Begin Class UQuest Function BPOnQuestNewState
struct Quest_eventBPOnQuestNewState_Parms
{
	UQuest* Quest;
	const UQuestState* NewState;
};
static const FName NAME_UQuest_BPOnQuestNewState = FName(TEXT("BPOnQuestNewState"));
void UQuest::BPOnQuestNewState(UQuest* Quest, const UQuestState* NewState)
{
	Quest_eventBPOnQuestNewState_Parms Parms;
	Parms.Quest=Quest;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestNewState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest New State" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestNewState", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::PropPointers), sizeof(Quest_eventBPOnQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestNewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestNewState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestNewState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestNewState

// Begin Class UQuest Function BPOnQuestStarted
struct Quest_eventBPOnQuestStarted_Parms
{
	const UQuest* Quest;
};
static const FName NAME_UQuest_BPOnQuestStarted = FName(TEXT("BPOnQuestStarted"));
void UQuest::BPOnQuestStarted(const UQuest* Quest)
{
	Quest_eventBPOnQuestStarted_Parms Parms;
	Parms.Quest=Quest;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestStarted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Started" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestStarted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestStarted

// Begin Class UQuest Function BPOnQuestSucceeded
struct Quest_eventBPOnQuestSucceeded_Parms
{
	const UQuest* Quest;
	FText QuestSucceededMessage;
};
static const FName NAME_UQuest_BPOnQuestSucceeded = FName(TEXT("BPOnQuestSucceeded"));
void UQuest::BPOnQuestSucceeded(const UQuest* Quest, FText const& QuestSucceededMessage)
{
	Quest_eventBPOnQuestSucceeded_Parms Parms;
	Parms.Quest=Quest;
	Parms.QuestSucceededMessage=QuestSucceededMessage;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestSucceeded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Succeeded" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceededMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSucceededMessage_MetaData), NewProp_QuestSucceededMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::NewProp_QuestSucceededMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::PropPointers), sizeof(Quest_eventBPOnQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestSucceeded

// Begin Class UQuest Function BPOnQuestTaskCompleted
struct Quest_eventBPOnQuestTaskCompleted_Parms
{
	const UQuest* Quest;
	const UNarrativeTask* Task;
	const UQuestBranch* Step;
};
static const FName NAME_UQuest_BPOnQuestTaskCompleted = FName(TEXT("BPOnQuestTaskCompleted"));
void UQuest::BPOnQuestTaskCompleted(const UQuest* Quest, const UNarrativeTask* Task, const UQuestBranch* Step)
{
	Quest_eventBPOnQuestTaskCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.Task=Task;
	Parms.Step=Step;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestTaskCompleted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Task Completed" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskCompleted_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::PropPointers), sizeof(Quest_eventBPOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestTaskCompleted

// Begin Class UQuest Function BPOnQuestTaskProgressChanged
struct Quest_eventBPOnQuestTaskProgressChanged_Parms
{
	const UQuest* Quest;
	const UNarrativeTask* Task;
	const UQuestBranch* Step;
	int32 CurrentProgress;
	int32 RequiredProgress;
};
static const FName NAME_UQuest_BPOnQuestTaskProgressChanged = FName(TEXT("BPOnQuestTaskProgressChanged"));
void UQuest::BPOnQuestTaskProgressChanged(const UQuest* Quest, const UNarrativeTask* Task, const UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress)
{
	Quest_eventBPOnQuestTaskProgressChanged_Parms Parms;
	Parms.Quest=Quest;
	Parms.Task=Task;
	Parms.Step=Step;
	Parms.CurrentProgress=CurrentProgress;
	Parms.RequiredProgress=RequiredProgress;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPOnQuestTaskProgressChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Quest Objective Progress Made" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPOnQuestTaskProgressChanged_Parms, RequiredProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPOnQuestTaskProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::PropPointers), sizeof(Quest_eventBPOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPOnQuestTaskProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPOnQuestTaskProgressChanged

// Begin Class UQuest Function BPPreQuestStarted
struct Quest_eventBPPreQuestStarted_Parms
{
	const UQuest* Quest;
};
static const FName NAME_UQuest_BPPreQuestStarted = FName(TEXT("BPPreQuestStarted"));
void UQuest::BPPreQuestStarted(const UQuest* Quest)
{
	Quest_eventBPPreQuestStarted_Parms Parms;
	Parms.Quest=Quest;
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPPreQuestStarted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called before tasks are ready - a good place to set up data tasks depend on \n" },
		{ "DisplayName", "Pre Quest Started" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called before tasks are ready - a good place to set up data tasks depend on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventBPPreQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPPreQuestStarted", nullptr, nullptr, Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::PropPointers), sizeof(Quest_eventBPPreQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventBPPreQuestStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_BPPreQuestStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPPreQuestStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPPreQuestStarted

// Begin Class UQuest Function BPQuestPostLoad
static const FName NAME_UQuest_BPQuestPostLoad = FName(TEXT("BPQuestPostLoad"));
void UQuest::BPQuestPostLoad()
{
	UFunction* Func = FindFunctionChecked(NAME_UQuest_BPQuestPostLoad);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UQuest_BPQuestPostLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when the quest is loaded back in from disk\n" },
		{ "DisplayName", "On Quest Post Load" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when the quest is loaded back in from disk" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_BPQuestPostLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "BPQuestPostLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_BPQuestPostLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_BPQuestPostLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQuest_BPQuestPostLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_BPQuestPostLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UQuest Function BPQuestPostLoad

// Begin Class UQuest Function EnterState
struct Z_Construct_UFunction_UQuest_EnterState_Statics
{
	struct Quest_eventEnterState_Parms
	{
		UQuestState* NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "//Explicitly tell the quest to go to the given state\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Explicitly tell the quest to go to the given state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_EnterState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventEnterState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_EnterState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_EnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "EnterState", nullptr, nullptr, Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_EnterState_Statics::Quest_eventEnterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_EnterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_EnterState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_EnterState_Statics::Quest_eventEnterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_EnterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_EnterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execEnterState)
{
	P_GET_OBJECT(UQuestState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterState(Z_Param_NewState);
	P_NATIVE_END;
}
// End Class UQuest Function EnterState

// Begin Class UQuest Function FailQuest
struct Z_Construct_UFunction_UQuest_FailQuest_Statics
{
	struct Quest_eventFailQuest_Parms
	{
		FText QuestFailedMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFailedMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_FailQuest_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventFailQuest_Parms, QuestFailedMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_FailQuest_Statics::NewProp_QuestFailedMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "FailQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_FailQuest_Statics::Quest_eventFailQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_FailQuest_Statics::Quest_eventFailQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_FailQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execFailQuest)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_QuestFailedMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FailQuest(Z_Param_QuestFailedMessage);
	P_NATIVE_END;
}
// End Class UQuest Function FailQuest

// Begin Class UQuest Function GetBranch
struct Z_Construct_UFunction_UQuest_GetBranch_Statics
{
	struct Quest_eventGetBranch_Parms
	{
		FName ID;
		UQuestBranch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranch_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranch_Parms, ReturnValue), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetBranch", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetBranch_Statics::Quest_eventGetBranch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetBranch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetBranch_Statics::Quest_eventGetBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetBranch)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestBranch**)Z_Param__Result=P_THIS->GetBranch(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UQuest Function GetBranch

// Begin Class UQuest Function GetBranches
struct Z_Construct_UFunction_UQuest_GetBranches_Statics
{
	struct Quest_eventGetBranches_Parms
	{
		TArray<UQuestBranch*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetBranches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetBranches_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetBranches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetBranches", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetBranches_Statics::Quest_eventGetBranches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetBranches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetBranches_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetBranches_Statics::Quest_eventGetBranches_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetBranches()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetBranches_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetBranches)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuestBranch*>*)Z_Param__Result=P_THIS->GetBranches();
	P_NATIVE_END;
}
// End Class UQuest Function GetBranches

// Begin Class UQuest Function GetGroupMembers
struct Z_Construct_UFunction_UQuest_GetGroupMembers_Statics
{
	struct Quest_eventGetGroupMembers_Parms
	{
		TArray<APlayerController*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Return all players doing this quest if shared, or the owningcontroller if solo quest*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Return all players doing this quest if shared, or the owningcontroller if solo quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetGroupMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetGroupMembers", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Quest_eventGetGroupMembers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::Quest_eventGetGroupMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetGroupMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetGroupMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetGroupMembers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->GetGroupMembers();
	P_NATIVE_END;
}
// End Class UQuest Function GetGroupMembers

// Begin Class UQuest Function GetNodes
struct Z_Construct_UFunction_UQuest_GetNodes_Statics
{
	struct Quest_eventGetNodes_Parms
	{
		TArray<UQuestNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetNodes", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetNodes_Statics::Quest_eventGetNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetNodes_Statics::Quest_eventGetNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuestNode*>*)Z_Param__Result=P_THIS->GetNodes();
	P_NATIVE_END;
}
// End Class UQuest Function GetNodes

// Begin Class UQuest Function GetOwningComp
struct Z_Construct_UFunction_UQuest_GetOwningComp_Statics
{
	struct Quest_eventGetOwningComp_Parms
	{
		UTalesComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningComp_Parms, ReturnValue), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningComp", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Quest_eventGetOwningComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningComp_Statics::Quest_eventGetOwningComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetOwningComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetOwningComp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTalesComponent**)Z_Param__Result=P_THIS->GetOwningComp();
	P_NATIVE_END;
}
// End Class UQuest Function GetOwningComp

// Begin Class UQuest Function GetOwningController
struct Z_Construct_UFunction_UQuest_GetOwningController_Statics
{
	struct Quest_eventGetOwningController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Quest_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningController_Statics::Quest_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class UQuest Function GetOwningController

// Begin Class UQuest Function GetOwningPawn
struct Z_Construct_UFunction_UQuest_GetOwningPawn_Statics
{
	struct Quest_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Quest_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::Quest_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UQuest Function GetOwningPawn

// Begin Class UQuest Function GetQuestCompletion
struct Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics
{
	struct Quest_eventGetQuestCompletion_Parms
	{
		EQuestCompletion ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Grab the completion of the quest \n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Grab the completion of the quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestCompletion_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion, METADATA_PARAMS(0, nullptr) }; // 877263747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestCompletion", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Quest_eventGetQuestCompletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::Quest_eventGetQuestCompletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestCompletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestCompletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestCompletion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EQuestCompletion*)Z_Param__Result=P_THIS->GetQuestCompletion();
	P_NATIVE_END;
}
// End Class UQuest Function GetQuestCompletion

// Begin Class UQuest Function GetQuestDescription
struct Z_Construct_UFunction_UQuest_GetQuestDescription_Statics
{
	struct Quest_eventGetQuestDescription_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestDescription", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Quest_eventGetQuestDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::Quest_eventGetQuestDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetQuestDescription();
	P_NATIVE_END;
}
// End Class UQuest Function GetQuestDescription

// Begin Class UQuest Function GetQuestName
struct Z_Construct_UFunction_UQuest_GetQuestName_Statics
{
	struct Quest_eventGetQuestName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestName", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Quest_eventGetQuestName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestName_Statics::Quest_eventGetQuestName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetQuestName();
	P_NATIVE_END;
}
// End Class UQuest Function GetQuestName

// Begin Class UQuest Function GetQuestStartState
struct Z_Construct_UFunction_UQuest_GetQuestStartState_Statics
{
	struct Quest_eventGetQuestStartState_Parms
	{
		UQuestState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestStartState_Parms, ReturnValue), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestStartState", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Quest_eventGetQuestStartState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::Quest_eventGetQuestStartState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestStartState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestStartState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestStartState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestState**)Z_Param__Result=P_THIS->GetQuestStartState();
	P_NATIVE_END;
}
// End Class UQuest Function GetQuestStartState

// Begin Class UQuest Function GetState
struct Z_Construct_UFunction_UQuest_GetState_Statics
{
	struct Quest_eventGetState_Parms
	{
		FName ID;
		UQuestState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetState_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetState_Parms, ReturnValue), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetState_Statics::Quest_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetState_Statics::Quest_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestState**)Z_Param__Result=P_THIS->GetState(Z_Param_ID);
	P_NATIVE_END;
}
// End Class UQuest Function GetState

// Begin Class UQuest Function GetStates
struct Z_Construct_UFunction_UQuest_GetStates_Statics
{
	struct Quest_eventGetStates_Parms
	{
		TArray<UQuestState*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetStates", nullptr, nullptr, Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetStates_Statics::Quest_eventGetStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetStates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetStates_Statics::Quest_eventGetStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuestState*>*)Z_Param__Result=P_THIS->GetStates();
	P_NATIVE_END;
}
// End Class UQuest Function GetStates

// Begin Class UQuest Function IsTracked
struct Z_Construct_UFunction_UQuest_IsTracked_Statics
{
	struct Quest_eventIsTracked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuest_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Quest_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuest_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Quest_eventIsTracked_Parms), &Z_Construct_UFunction_UQuest_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_IsTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_IsTracked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "IsTracked", nullptr, nullptr, Z_Construct_UFunction_UQuest_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_IsTracked_Statics::Quest_eventIsTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_IsTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_IsTracked_Statics::Quest_eventIsTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_IsTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_IsTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execIsTracked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTracked();
	P_NATIVE_END;
}
// End Class UQuest Function IsTracked

// Begin Class UQuest Function OnQuestBranchCompleted
struct Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics
{
	struct Quest_eventOnQuestBranchCompleted_Parms
	{
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Quest_eventOnQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::Quest_eventOnQuestBranchCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_OnQuestBranchCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestBranchCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execOnQuestBranchCompleted)
{
	P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuestBranchCompleted(Z_Param_Branch);
	P_NATIVE_END;
}
// End Class UQuest Function OnQuestBranchCompleted

// Begin Class UQuest Function OnQuestTaskCompleted
struct Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics
{
	struct Quest_eventOnQuestTaskCompleted_Parms
	{
		const UNarrativeTask* Task;
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Quest_eventOnQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::Quest_eventOnQuestTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_OnQuestTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execOnQuestTaskCompleted)
{
	P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
	P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuestTaskCompleted(Z_Param_Task,Z_Param_Branch);
	P_NATIVE_END;
}
// End Class UQuest Function OnQuestTaskCompleted

// Begin Class UQuest Function OnQuestTaskProgressChanged
struct Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics
{
	struct Quest_eventOnQuestTaskProgressChanged_Parms
	{
		const UNarrativeTask* Task;
		const UQuestBranch* Step;
		int32 CurrentProgress;
		int32 RequiredProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Step;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, Step), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress = { "RequiredProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventOnQuestTaskProgressChanged_Parms, RequiredProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::NewProp_RequiredProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnQuestTaskProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Quest_eventOnQuestTaskProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::Quest_eventOnQuestTaskProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execOnQuestTaskProgressChanged)
{
	P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
	P_GET_OBJECT(UQuestBranch,Z_Param_Step);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
	P_GET_PROPERTY(FIntProperty,Z_Param_RequiredProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuestTaskProgressChanged(Z_Param_Task,Z_Param_Step,Z_Param_CurrentProgress,Z_Param_RequiredProgress);
	P_NATIVE_END;
}
// End Class UQuest Function OnQuestTaskProgressChanged

// Begin Class UQuest Function SetQuestDescription
struct Z_Construct_UFunction_UQuest_SetQuestDescription_Statics
{
	struct Quest_eventSetQuestDescription_Parms
	{
		FText NewDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription = { "NewDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSetQuestDescription_Parms, NewDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDescription_MetaData), NewProp_NewDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::NewProp_NewDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SetQuestDescription", nullptr, nullptr, Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Quest_eventSetQuestDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::Quest_eventSetQuestDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_SetQuestDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SetQuestDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execSetQuestDescription)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuestDescription(Z_Param_Out_NewDescription);
	P_NATIVE_END;
}
// End Class UQuest Function SetQuestDescription

// Begin Class UQuest Function SetQuestName
struct Z_Construct_UFunction_UQuest_SetQuestName_Statics
{
	struct Quest_eventSetQuestName_Parms
	{
		FText NewName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSetQuestName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SetQuestName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SetQuestName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SetQuestName", nullptr, nullptr, Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Quest_eventSetQuestName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SetQuestName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_SetQuestName_Statics::Quest_eventSetQuestName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_SetQuestName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SetQuestName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execSetQuestName)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuestName(Z_Param_Out_NewName);
	P_NATIVE_END;
}
// End Class UQuest Function SetQuestName

// Begin Class UQuest Function SetTracked
struct Z_Construct_UFunction_UQuest_SetTracked_Statics
{
	struct Quest_eventSetTracked_Parms
	{
		bool bNewTracked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "//Tell the quest that it is tracked - by default this will enable the quests navigation markers. \n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Tell the quest that it is tracked - by default this will enable the quests navigation markers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewTracked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuest_SetTracked_Statics::NewProp_bNewTracked_SetBit(void* Obj)
{
	((Quest_eventSetTracked_Parms*)Obj)->bNewTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuest_SetTracked_Statics::NewProp_bNewTracked = { "bNewTracked", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Quest_eventSetTracked_Parms), &Z_Construct_UFunction_UQuest_SetTracked_Statics::NewProp_bNewTracked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewTracked_MetaData), NewProp_bNewTracked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SetTracked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SetTracked_Statics::NewProp_bNewTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetTracked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SetTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SetTracked", nullptr, nullptr, Z_Construct_UFunction_UQuest_SetTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetTracked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SetTracked_Statics::Quest_eventSetTracked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SetTracked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SetTracked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_SetTracked_Statics::Quest_eventSetTracked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_SetTracked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SetTracked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execSetTracked)
{
	P_GET_UBOOL(Z_Param_bNewTracked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTracked(Z_Param_bNewTracked);
	P_NATIVE_END;
}
// End Class UQuest Function SetTracked

// Begin Class UQuest Function SpawnQuestActor
struct Quest_eventSpawnQuestActor_Parms
{
	TSubclassOf<AActor> ActorClass;
	FTransform ActorTransform;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	Quest_eventSpawnQuestActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UQuest_SpawnQuestActor = FName(TEXT("SpawnQuestActor"));
AActor* UQuest::SpawnQuestActor(TSubclassOf<AActor> ActorClass, FTransform const& ActorTransform)
{
	UFunction* Func = FindFunctionChecked(NAME_UQuest_SpawnQuestActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Quest_eventSpawnQuestActor_Parms Parms;
		Parms.ActorClass=ActorClass;
		Parms.ActorTransform=ActorTransform;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return SpawnQuestActor_Implementation(ActorClass, ActorTransform);
	}
}
struct Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/*\n\x09* Spawn a quest actor! This will ensure the actors lifetime is managed automatically by the quest for you - when the quest ends, \n\x09* all of the spawned quest actors will be cleaned up from the level. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "* Spawn a quest actor! This will ensure the actors lifetime is managed automatically by the quest for you - when the quest ends,\n* all of the spawned quest actors will be cleaned up from the level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSpawnQuestActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SpawnQuestActor", nullptr, nullptr, Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::PropPointers), sizeof(Quest_eventSpawnQuestActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Quest_eventSpawnQuestActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_SpawnQuestActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SpawnQuestActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execSpawnQuestActor)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ActorTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnQuestActor_Implementation(Z_Param_ActorClass,Z_Param_Out_ActorTransform);
	P_NATIVE_END;
}
// End Class UQuest Function SpawnQuestActor

// Begin Class UQuest Function SucceedQuest
struct Z_Construct_UFunction_UQuest_SucceedQuest_Statics
{
	struct Quest_eventSucceedQuest_Parms
	{
		FText QuestSucceededMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Manually set the quest as succeeded. You'll need to provide some text for the UI as theres no node  the quest, you're manually succeeding it.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Manually set the quest as succeeded. You'll need to provide some text for the UI as theres no node  the quest, you're manually succeeding it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestSucceededMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuest_SucceedQuest_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventSucceedQuest_Parms, QuestSucceededMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_SucceedQuest_Statics::NewProp_QuestSucceededMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_SucceedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "SucceedQuest", nullptr, nullptr, Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Quest_eventSucceedQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UQuest_SucceedQuest_Statics::Quest_eventSucceedQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_SucceedQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_SucceedQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execSucceedQuest)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_QuestSucceededMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SucceedQuest(Z_Param_QuestSucceededMessage);
	P_NATIVE_END;
}
// End Class UQuest Function SucceedQuest

// Begin Class UQuest
void UQuest::StaticRegisterNativesUQuest()
{
	UClass* Class = UQuest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterState", &UQuest::execEnterState },
		{ "FailQuest", &UQuest::execFailQuest },
		{ "GetBranch", &UQuest::execGetBranch },
		{ "GetBranches", &UQuest::execGetBranches },
		{ "GetGroupMembers", &UQuest::execGetGroupMembers },
		{ "GetNodes", &UQuest::execGetNodes },
		{ "GetOwningComp", &UQuest::execGetOwningComp },
		{ "GetOwningController", &UQuest::execGetOwningController },
		{ "GetOwningPawn", &UQuest::execGetOwningPawn },
		{ "GetQuestCompletion", &UQuest::execGetQuestCompletion },
		{ "GetQuestDescription", &UQuest::execGetQuestDescription },
		{ "GetQuestName", &UQuest::execGetQuestName },
		{ "GetQuestStartState", &UQuest::execGetQuestStartState },
		{ "GetState", &UQuest::execGetState },
		{ "GetStates", &UQuest::execGetStates },
		{ "IsTracked", &UQuest::execIsTracked },
		{ "OnQuestBranchCompleted", &UQuest::execOnQuestBranchCompleted },
		{ "OnQuestTaskCompleted", &UQuest::execOnQuestTaskCompleted },
		{ "OnQuestTaskProgressChanged", &UQuest::execOnQuestTaskProgressChanged },
		{ "SetQuestDescription", &UQuest::execSetQuestDescription },
		{ "SetQuestName", &UQuest::execSetQuestName },
		{ "SetTracked", &UQuest::execSetTracked },
		{ "SpawnQuestActor", &UQuest::execSpawnQuestActor },
		{ "SucceedQuest", &UQuest::execSucceedQuest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuest);
UClass* Z_Construct_UClass_UQuest_NoRegister()
{
	return UQuest::StaticClass();
}
struct Z_Construct_UClass_UQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tales/Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The current state the player is at in this quest\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "The current state the player is at in this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTracked_MetaData[] = {
		{ "Category", "Quest Details" },
		{ "Comment", "//Whether or not the quest is marked as tracked. If tracked the navigation markers will be added, otherwise these will be hidden. \n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Whether or not the quest is marked as tracked. If tracked the navigation markers will be added, otherwise these will be hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableStates_Inner_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states, \n\x09""for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n\x09""could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states,\n       for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n       could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritableStates_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states, \n\x09""for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n\x09""could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Child quests don't inherit quest graph nodes, however sometimes you'd like children to inherit some states,\n       for example your parent quest could have a state in here called \"RanOutOfTime\", and that way any child quests\n       could inherit the \"RanOutOfTime\" state instead of having to manually have one added to every quest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestCompletion_MetaData[] = {
		{ "Comment", "/**Current quest progress*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Current quest progress" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStartState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//The beginning state of this quest\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "The beginning state of this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
		{ "Comment", "//Holds all of the states in the quest\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Holds all of the states in the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[] = {
		{ "Comment", "//Holds all of the branches in the quest\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Holds all of the branches in the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestActors_MetaData[] = {
		{ "Comment", "//Holds all the spawned quest actors\n" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Holds all the spawned quest actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedStates_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "All the states we've reached so far. Useful for a quest journal, where we need to show the player what they have done so far" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "Category", "Quests" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestBranchCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective has been completed.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest objective has been completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestNewState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective is updated and we've received a new objective*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest objective is updated and we've received a new objective" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskProgressChanged_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a branch has made progress. ie 6 out of 10 coins found*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest task in a branch has made progress. ie 6 out of 10 coins found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task on a branch is completed ie 10 out of 10 coins found*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest task on a branch is completed ie 10 out of 10 coins found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestSucceeded_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is completed.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest is completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFailed_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is failed.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest is failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is started.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest is started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestPostLoad_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when the quest has been loaded back in.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when the quest has been loaded back in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestForgotten_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is forgotten.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest is forgotten." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestRestarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is restarted.*/" },
		{ "ModuleRelativePath", "Public/Tales/Quest.h" },
		{ "ToolTip", "Called when a quest is restarted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
	static void NewProp_bTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTracked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InheritableStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InheritableStates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestCompletion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestCompletion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestStartState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_States_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReachedStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReachedStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestBranchCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestNewState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestTaskProgressChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestTaskCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestSucceeded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestPostLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestForgotten;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestRestarted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_BPOnQuestBranchCompleted, "BPOnQuestBranchCompleted" }, // 1212072447
		{ &Z_Construct_UFunction_UQuest_BPOnQuestFailed, "BPOnQuestFailed" }, // 3853360738
		{ &Z_Construct_UFunction_UQuest_BPOnQuestNewState, "BPOnQuestNewState" }, // 1512827653
		{ &Z_Construct_UFunction_UQuest_BPOnQuestStarted, "BPOnQuestStarted" }, // 4089609665
		{ &Z_Construct_UFunction_UQuest_BPOnQuestSucceeded, "BPOnQuestSucceeded" }, // 2783974900
		{ &Z_Construct_UFunction_UQuest_BPOnQuestTaskCompleted, "BPOnQuestTaskCompleted" }, // 1453148290
		{ &Z_Construct_UFunction_UQuest_BPOnQuestTaskProgressChanged, "BPOnQuestTaskProgressChanged" }, // 959612900
		{ &Z_Construct_UFunction_UQuest_BPPreQuestStarted, "BPPreQuestStarted" }, // 4063340079
		{ &Z_Construct_UFunction_UQuest_BPQuestPostLoad, "BPQuestPostLoad" }, // 1841038938
		{ &Z_Construct_UFunction_UQuest_EnterState, "EnterState" }, // 617211806
		{ &Z_Construct_UFunction_UQuest_FailQuest, "FailQuest" }, // 281414319
		{ &Z_Construct_UFunction_UQuest_GetBranch, "GetBranch" }, // 2107244509
		{ &Z_Construct_UFunction_UQuest_GetBranches, "GetBranches" }, // 1257932477
		{ &Z_Construct_UFunction_UQuest_GetGroupMembers, "GetGroupMembers" }, // 598796852
		{ &Z_Construct_UFunction_UQuest_GetNodes, "GetNodes" }, // 1483376022
		{ &Z_Construct_UFunction_UQuest_GetOwningComp, "GetOwningComp" }, // 2991633091
		{ &Z_Construct_UFunction_UQuest_GetOwningController, "GetOwningController" }, // 276654514
		{ &Z_Construct_UFunction_UQuest_GetOwningPawn, "GetOwningPawn" }, // 2570481679
		{ &Z_Construct_UFunction_UQuest_GetQuestCompletion, "GetQuestCompletion" }, // 2422716922
		{ &Z_Construct_UFunction_UQuest_GetQuestDescription, "GetQuestDescription" }, // 2796714180
		{ &Z_Construct_UFunction_UQuest_GetQuestName, "GetQuestName" }, // 4144171898
		{ &Z_Construct_UFunction_UQuest_GetQuestStartState, "GetQuestStartState" }, // 972902250
		{ &Z_Construct_UFunction_UQuest_GetState, "GetState" }, // 2648575516
		{ &Z_Construct_UFunction_UQuest_GetStates, "GetStates" }, // 1508416129
		{ &Z_Construct_UFunction_UQuest_IsTracked, "IsTracked" }, // 907939638
		{ &Z_Construct_UFunction_UQuest_OnQuestBranchCompleted, "OnQuestBranchCompleted" }, // 2876085498
		{ &Z_Construct_UFunction_UQuest_OnQuestTaskCompleted, "OnQuestTaskCompleted" }, // 3341865306
		{ &Z_Construct_UFunction_UQuest_OnQuestTaskProgressChanged, "OnQuestTaskProgressChanged" }, // 3697714320
		{ &Z_Construct_UFunction_UQuest_SetQuestDescription, "SetQuestDescription" }, // 3624441903
		{ &Z_Construct_UFunction_UQuest_SetQuestName, "SetQuestName" }, // 1427830415
		{ &Z_Construct_UFunction_UQuest_SetTracked, "SetTracked" }, // 762785013
		{ &Z_Construct_UFunction_UQuest_SpawnQuestActor, "SpawnQuestActor" }, // 3050918710
		{ &Z_Construct_UFunction_UQuest_SucceedQuest, "SucceedQuest" }, // 2482404193
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, CurrentState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
void Z_Construct_UClass_UQuest_Statics::NewProp_bTracked_SetBit(void* Obj)
{
	((UQuest*)Obj)->bTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_bTracked = { "bTracked", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuest), &Z_Construct_UClass_UQuest_Statics::NewProp_bTracked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTracked_MetaData), NewProp_bTracked_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner = { "InheritableStates", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableStates_Inner_MetaData), NewProp_InheritableStates_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates = { "InheritableStates", nullptr, (EPropertyFlags)0x002008800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, InheritableStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritableStates_MetaData), NewProp_InheritableStates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion = { "QuestCompletion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestCompletion), Z_Construct_UEnum_NarrativeArsenal_EQuestCompletion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestCompletion_MetaData), NewProp_QuestCompletion_MetaData) }; // 877263747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState = { "QuestStartState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestStartState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStartState_MetaData), NewProp_QuestStartState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, States), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_States_MetaData), NewProp_States_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branches_MetaData), NewProp_Branches_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_Inner = { "QuestActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors = { "QuestActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestActors_MetaData), NewProp_QuestActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner = { "ReachedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates = { "ReachedStates", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, ReachedStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedStates_MetaData), NewProp_ReachedStates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningComp), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPawn_MetaData), NewProp_OwningPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted = { "QuestBranchCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestBranchCompleted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestBranchCompleted_MetaData), NewProp_QuestBranchCompleted_MetaData) }; // 302668507
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState = { "QuestNewState", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestNewState), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestNewState_MetaData), NewProp_QuestNewState_MetaData) }; // 297653773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged = { "QuestTaskProgressChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestTaskProgressChanged), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTaskProgressChanged_MetaData), NewProp_QuestTaskProgressChanged_MetaData) }; // 1326950483
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted = { "QuestTaskCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestTaskCompleted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTaskCompleted_MetaData), NewProp_QuestTaskCompleted_MetaData) }; // 3788866643
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded = { "QuestSucceeded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestSucceeded), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSucceeded_MetaData), NewProp_QuestSucceeded_MetaData) }; // 1022381631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed = { "QuestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestFailed), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFailed_MetaData), NewProp_QuestFailed_MetaData) }; // 3885059523
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted = { "QuestStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestStarted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStarted_MetaData), NewProp_QuestStarted_MetaData) }; // 2237310530
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OnQuestPostLoad = { "OnQuestPostLoad", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OnQuestPostLoad), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestPostLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestPostLoad_MetaData), NewProp_OnQuestPostLoad_MetaData) }; // 3088340500
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten = { "QuestForgotten", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestForgotten), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestForgotten_MetaData), NewProp_QuestForgotten_MetaData) }; // 1349934784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted = { "QuestRestarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestRestarted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestRestarted_MetaData), NewProp_QuestRestarted_MetaData) }; // 2479810187
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_bTracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InheritableStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestCompletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStartState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_Branches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_ReachedStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestBranchCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestNewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskProgressChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestTaskCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OnQuestPostLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestForgotten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestRestarted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
	&UQuest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuest()
{
	if (!Z_Registration_Info_UClass_UQuest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuest.OuterSingleton, Z_Construct_UClass_UQuest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuest.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UQuest>()
{
	return UQuest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
UQuest::~UQuest() {}
// End Class UQuest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestCompletion_StaticEnum, TEXT("EQuestCompletion"), &Z_Registration_Info_UEnum_EQuestCompletion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 877263747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuest, UQuest::StaticClass, TEXT("UQuest"), &Z_Registration_Info_UClass_UQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuest), 543601102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_3439298933(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
