// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/QuestSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSM() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNodeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestNode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestNode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestState();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EStateNodeType();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTask();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EStateNodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateNodeType;
static UEnum* EStateNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EStateNodeType, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EStateNodeType"));
	}
	return Z_Registration_Info_UEnum_EStateNodeType.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EStateNodeType>()
{
	return EStateNodeType_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Used for checking the result of our state machine.\n*/" },
		{ "Failure.Comment", "// Fail, the quest will be failed when this state is reached \n" },
		{ "Failure.Name", "EStateNodeType::Failure" },
		{ "Failure.ToolTip", "Fail, the quest will be failed when this state is reached" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "Regular.Comment", "//This is a regular state and upon being reached the quest will be considered still in progress\n" },
		{ "Regular.Name", "EStateNodeType::Regular" },
		{ "Regular.ToolTip", "This is a regular state and upon being reached the quest will be considered still in progress" },
		{ "Success.Comment", "// Success, the quest will be completed when this state is reached\n" },
		{ "Success.Name", "EStateNodeType::Success" },
		{ "Success.ToolTip", "Success, the quest will be completed when this state is reached" },
		{ "ToolTip", "Used for checking the result of our state machine." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStateNodeType::Regular", (int64)EStateNodeType::Regular },
		{ "EStateNodeType::Success", (int64)EStateNodeType::Success },
		{ "EStateNodeType::Failure", (int64)EStateNodeType::Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EStateNodeType",
	"EStateNodeType",
	Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EStateNodeType()
{
	if (!Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EStateNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStateNodeType.InnerSingleton;
}
// End Enum EStateNodeType

// Begin ScriptStruct FQuestTask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTask;
class UScriptStruct* FQuestTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTask, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("QuestTask"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTask.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FQuestTask>()
{
	return FQuestTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch.\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "A quest is a series of state machines, branches are taken by completing all the FNarrativeTasks in that branch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The event the player needs to do to complete this task*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The event the player needs to do to complete this task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**The reference to be passed into the action*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The reference to be passed into the action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "1" },
		{ "Comment", "/**The amount of times we need to complete this action to move on to the next part of the quest*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The amount of times we need to complete this action to move on to the next part of the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Should this task be hidden from the player (Great for quests with hidden options)*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "Should this task be hidden from the player (Great for quests with hidden options)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should this task be optional?*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should this task be optional?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetroactive_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "SINGLE PLAYER ONLY: Should it count if the player has already done this task in the past?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDescription_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc... */" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this task. For example \"Kill 10 Goblins\", \"Obtain an Iron Sword\", \"Find the briefcase\", etc..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Argument;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static void NewProp_bOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
	static void NewProp_bRetroactive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetroactive;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Argument), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument_MetaData), NewProp_Argument_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((FQuestTask*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit(void* Obj)
{
	((FQuestTask*)Obj)->bOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptional_MetaData), NewProp_bOptional_MetaData) };
void Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit(void* Obj)
{
	((FQuestTask*)Obj)->bRetroactive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive = { "bRetroactive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestTask), &Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetroactive_MetaData), NewProp_bRetroactive_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription = { "TaskDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, TaskDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDescription_MetaData), NewProp_TaskDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestTask, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Argument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bOptional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_bRetroactive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_TaskDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTask_Statics::NewProp_CurrentProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"QuestTask",
	Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::PropPointers),
	sizeof(FQuestTask),
	alignof(FQuestTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestTask()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton, Z_Construct_UScriptStruct_FQuestTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestTask.InnerSingleton;
}
// End ScriptStruct FQuestTask

// Begin Class UQuestNode
void UQuestNode::StaticRegisterNativesUQuestNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestNode);
UClass* Z_Construct_UClass_UQuestNode_NoRegister()
{
	return UQuestNode::StaticClass();
}
struct Z_Construct_UClass_UQuestNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**Base class for states and branches in the quests state machine*/" },
		{ "IncludePath", "Tales/QuestSM.h" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "Base class for states and branches in the quests state machine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\" */" },
		{ "DisplayAfter", "ID" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Description for this quest node. For example \"Kill 10 Goblins\", \"Find the Gemstone\", or \"I've found the Gemstone, I need to return to King Edward\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredFuncName_MetaData[] = {
		{ "AdvancedDisplay", "TRUE" },
		{ "Category", "Details" },
		{ "Comment", "//Name of custom event to call when this state/branch is reached/taken\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "Name of custom event to call when this state/branch is reached/taken" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningQuest_MetaData[] = {
		{ "Comment", "//The quest object that owns this node. \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The quest object that owns this node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnEnteredFuncName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningQuest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName = { "OnEnteredFuncName", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, OnEnteredFuncName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnteredFuncName_MetaData), NewProp_OnEnteredFuncName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest = { "OwningQuest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestNode, OwningQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningQuest_MetaData), NewProp_OwningQuest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_OnEnteredFuncName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNode_Statics::NewProp_OwningQuest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestNode_Statics::ClassParams = {
	&UQuestNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestNode()
{
	if (!Z_Registration_Info_UClass_UQuestNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestNode.OuterSingleton, Z_Construct_UClass_UQuestNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestNode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UQuestNode>()
{
	return UQuestNode::StaticClass();
}
UQuestNode::UQuestNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNode);
UQuestNode::~UQuestNode() {}
// End Class UQuestNode

// Begin Delegate FOnStateReachedEvent
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnStateReachedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnStateReachedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStateReachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStateReachedEvent)
{
	OnStateReachedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStateReachedEvent

// Begin Class UQuestState
void UQuestState::StaticRegisterNativesUQuestState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestState);
UClass* Z_Construct_UClass_UQuestState_NoRegister()
{
	return UQuestState::StaticClass();
}
struct Z_Construct_UClass_UQuestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tales/QuestSM.h" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branches_MetaData[] = {
		{ "Category", "Quest State" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateNodeType_MetaData[] = {
		{ "Category", "Quest State" },
		{ "Comment", "/**Determines how the state is interpreted by the quest that has reached it .*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "Determines how the state is interpreted by the quest that has reached it ." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Branches;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateNodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateNodeType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner = { "Branches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestState, Branches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branches_MetaData), NewProp_Branches_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType = { "StateNodeType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestState, StateNodeType), Z_Construct_UEnum_NarrativeArsenal_EStateNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateNodeType_MetaData), NewProp_StateNodeType_MetaData) }; // 3284130415
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_Branches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestState_Statics::NewProp_StateNodeType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestState_Statics::ClassParams = {
	&UQuestState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestState()
{
	if (!Z_Registration_Info_UClass_UQuestState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestState.OuterSingleton, Z_Construct_UClass_UQuestState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestState.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UQuestState>()
{
	return UQuestState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestState);
UQuestState::~UQuestState() {}
// End Class UQuestState

// Begin Class UQuestBranch
void UQuestBranch::StaticRegisterNativesUQuestBranch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBranch);
UClass* Z_Construct_UClass_UQuestBranch_NoRegister()
{
	return UQuestBranch::StaticClass();
}
struct Z_Construct_UClass_UQuestBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tales/QuestSM.h" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTasks_Inner_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**\n\x09*The tasks that need to be completed to take this branch to its destination \n\x09* \n\x09* Plenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder \n\x09* for some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need. \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The tasks that need to be completed to take this branch to its destination\n\nPlenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder\nfor some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTasks_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/**\n\x09*The tasks that need to be completed to take this branch to its destination \n\x09* \n\x09* Plenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder \n\x09* for some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need. \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "The tasks that need to be completed to take this branch to its destination\n\nPlenty of quest tasks come with narrative, Please see the the Narrative/Content/DefaultTasks/ folder\nfor some examples. You can copy these and create custom ones for your game, like ObtainItem, KillEnemy, etc - whatever you need." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n\x09of the quest logic, but we don't want the UI to show)*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "Should this branch be hidden from the player on the narrative demo UI (Great for quests with hidden options that we want to be part\n       of the quest logic, but we don't want the UI to show)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationState_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**State where we will go if this branch is taken. Branch will be ignored if this is null*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestSM.h" },
		{ "ToolTip", "State where we will go if this branch is taken. Branch will be ignored if this is null" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestTasks;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBranch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner = { "QuestTasks", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTasks_Inner_MetaData), NewProp_QuestTasks_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks = { "QuestTasks", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBranch, QuestTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTasks_MetaData), NewProp_QuestTasks_MetaData) };
void Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UQuestBranch*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestBranch), &Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState = { "DestinationState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBranch, DestinationState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationState_MetaData), NewProp_DestinationState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_QuestTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBranch_Statics::NewProp_DestinationState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestBranch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBranch_Statics::ClassParams = {
	&UQuestBranch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestBranch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBranch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestBranch()
{
	if (!Z_Registration_Info_UClass_UQuestBranch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBranch.OuterSingleton, Z_Construct_UClass_UQuestBranch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestBranch.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UQuestBranch>()
{
	return UQuestBranch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBranch);
UQuestBranch::~UQuestBranch() {}
// End Class UQuestBranch

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStateNodeType_StaticEnum, TEXT("EStateNodeType"), &Z_Registration_Info_UEnum_EStateNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3284130415U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestTask::StaticStruct, Z_Construct_UScriptStruct_FQuestTask_Statics::NewStructOps, TEXT("QuestTask"), &Z_Registration_Info_UScriptStruct_QuestTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTask), 3108414290U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestNode, UQuestNode::StaticClass, TEXT("UQuestNode"), &Z_Registration_Info_UClass_UQuestNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestNode), 583584540U) },
		{ Z_Construct_UClass_UQuestState, UQuestState::StaticClass, TEXT("UQuestState"), &Z_Registration_Info_UClass_UQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestState), 4072128592U) },
		{ Z_Construct_UClass_UQuestBranch, UQuestBranch::StaticClass, TEXT("UQuestBranch"), &Z_Registration_Info_UClass_UQuestBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBranch), 3448656937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_2017027289(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
