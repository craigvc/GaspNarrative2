// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeComponent.h"
#include "NarrativeArsenal/Public/Tales/Dialogue.h"
#include "NarrativeArsenal/Public/Tales/DialogueSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueNode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueNode_NPC_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueNode_Player_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDataTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativePartyComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestState_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EUpdateType();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueInfo();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLine();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FDialoguePlayParams();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeUpdate();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedQuestBranch();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FDialogueInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueInfo;
class UScriptStruct* FDialogueInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueInfo, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("DialogueInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueInfo.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FDialogueInfo>()
{
	return FDialogueInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueInfo, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueInfo, NPC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_MetaData), NewProp_NPC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewProp_NPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"DialogueInfo",
	Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::PropPointers),
	sizeof(FDialogueInfo),
	alignof(FDialogueInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton, Z_Construct_UScriptStruct_FDialogueInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueInfo.InnerSingleton;
}
// End ScriptStruct FDialogueInfo

// Begin Enum EUpdateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateType;
static UEnum* EUpdateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EUpdateType, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EUpdateType"));
	}
	return Z_Registration_Info_UEnum_EUpdateType.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EUpdateType>()
{
	return EUpdateType_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "UT_BeginQuest.Name", "EUpdateType::UT_BeginQuest" },
		{ "UT_CompleteTask.Name", "EUpdateType::UT_CompleteTask" },
		{ "UT_ForgetQuest.Name", "EUpdateType::UT_ForgetQuest" },
		{ "UT_None.Name", "EUpdateType::UT_None" },
		{ "UT_QuestNewState.Name", "EUpdateType::UT_QuestNewState" },
		{ "UT_RestartQuest.Name", "EUpdateType::UT_RestartQuest" },
		{ "UT_TaskProgressMade.Name", "EUpdateType::UT_TaskProgressMade" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateType::UT_None", (int64)EUpdateType::UT_None },
		{ "EUpdateType::UT_CompleteTask", (int64)EUpdateType::UT_CompleteTask },
		{ "EUpdateType::UT_BeginQuest", (int64)EUpdateType::UT_BeginQuest },
		{ "EUpdateType::UT_ForgetQuest", (int64)EUpdateType::UT_ForgetQuest },
		{ "EUpdateType::UT_RestartQuest", (int64)EUpdateType::UT_RestartQuest },
		{ "EUpdateType::UT_QuestNewState", (int64)EUpdateType::UT_QuestNewState },
		{ "EUpdateType::UT_TaskProgressMade", (int64)EUpdateType::UT_TaskProgressMade },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EUpdateType",
	"EUpdateType",
	Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EUpdateType()
{
	if (!Z_Registration_Info_UEnum_EUpdateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateType.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EUpdateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateType.InnerSingleton;
}
// End Enum EUpdateType

// Begin ScriptStruct FNarrativeUpdate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeUpdate;
class UScriptStruct* FNarrativeUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeUpdate, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NarrativeUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeUpdate.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNarrativeUpdate>()
{
	return FNarrativeUpdate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nUQuests aren't replicated the proper UE way (replicated flag on objects), because this is really complex and hasn't been very successful in testing.\nIt would also hog a lot more network performance, as quests often have hundreds of states, tasks, and branches,\nall of which would be sending network updates and replicating. \n\nSo in the meantime, the server authoritatively Begins, Forgets, Restarts, Updates quests etc, and then informs the client about\nthese changes via the FNarrativeUpdate stream so the clients can \"replay\" these actions in the order they happened and keep sync with the server. \n\nUsing this mechanism instead of RPCs ensures the updates are sent in the correct order. This is really important\nfor ensuring the client correctly stays in sync with the server. \n*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "UQuests aren't replicated the proper UE way (replicated flag on objects), because this is really complex and hasn't been very successful in testing.\nIt would also hog a lot more network performance, as quests often have hundreds of states, tasks, and branches,\nall of which would be sending network updates and replicating.\n\nSo in the meantime, the server authoritatively Begins, Forgets, Restarts, Updates quests etc, and then informs the client about\nthese changes via the FNarrativeUpdate stream so the clients can \"replay\" these actions in the order they happened and keep sync with the server.\n\nUsing this mechanism instead of RPCs ensures the updates are sent in the correct order. This is really important\nfor ensuring the client correctly stays in sync with the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateType_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//What sort of update this is\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "What sort of update this is" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestClass_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//The quest that was updated \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The quest that was updated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "//Optional payload with some string data about the update\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Optional payload with some string data about the update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntPayload_MetaData[] = {
		{ "Comment", "//Some updates need to send some ints over the network, for example TaskProgressMade uses task idx and new progress \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Some updates need to send some ints over the network, for example TaskProgressMade uses task idx and new progress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntPayload_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, UpdateType), Z_Construct_UEnum_NarrativeArsenal_EUpdateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateType_MetaData), NewProp_UpdateType_MetaData) }; // 2687819460
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestClass_MetaData), NewProp_QuestClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, Payload), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_Inner = { "IntPayload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload = { "IntPayload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeUpdate, IntPayload), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntPayload_MetaData), NewProp_IntPayload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_UpdateType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewProp_IntPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NarrativeUpdate",
	Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::PropPointers),
	sizeof(FNarrativeUpdate),
	alignof(FNarrativeUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeUpdate.InnerSingleton;
}
// End ScriptStruct FNarrativeUpdate

// Begin ScriptStruct FSavedQuestBranch
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedQuestBranch;
class UScriptStruct* FSavedQuestBranch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedQuestBranch, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedQuestBranch"));
	}
	return Z_Registration_Info_UScriptStruct_SavedQuestBranch.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedQuestBranch>()
{
	return FSavedQuestBranch::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedQuestBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchID_MetaData[] = {
		{ "Comment", "//The ID of the branch \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The ID of the branch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TasksProgress_MetaData[] = {
		{ "Comment", "//All we need to save a branch is remember what progress the tasks had. Tasks always have the same order, so just save their progress \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "All we need to save a branch is remember what progress the tasks had. Tasks always have the same order, so just save their progress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BranchID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TasksProgress_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedQuestBranch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_BranchID = { "BranchID", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedQuestBranch, BranchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchID_MetaData), NewProp_BranchID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_TasksProgress_Inner = { "TasksProgress", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_TasksProgress = { "TasksProgress", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedQuestBranch, TasksProgress), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TasksProgress_MetaData), NewProp_TasksProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_BranchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_TasksProgress_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewProp_TasksProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedQuestBranch",
	Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::PropPointers),
	sizeof(FSavedQuestBranch),
	alignof(FSavedQuestBranch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedQuestBranch()
{
	if (!Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton, Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedQuestBranch.InnerSingleton;
}
// End ScriptStruct FSavedQuestBranch

// Begin ScriptStruct FNarrativeSavedQuest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSavedQuest;
class UScriptStruct* FNarrativeSavedQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSavedQuest, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NarrativeSavedQuest"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNarrativeSavedQuest>()
{
	return FNarrativeSavedQuest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestClass_MetaData[] = {
		{ "Comment", "//The class of the quest that was active\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The class of the quest that was active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateID_MetaData[] = {
		{ "Comment", "//The state the quest was at when the player saved \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The state the quest was at when the player saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestBranches_MetaData[] = {
		{ "Comment", "//The saved branch data\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The saved branch data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachedStateNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentStateID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestBranches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestBranches;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReachedStateNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReachedStateNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSavedQuest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedQuest, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestClass_MetaData), NewProp_QuestClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID = { "CurrentStateID", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedQuest, CurrentStateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStateID_MetaData), NewProp_CurrentStateID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestBranches_Inner = { "QuestBranches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedQuestBranch, METADATA_PARAMS(0, nullptr) }; // 2806415205
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestBranches = { "QuestBranches", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedQuest, QuestBranches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestBranches_MetaData), NewProp_QuestBranches_MetaData) }; // 2806415205
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_Inner = { "ReachedStateNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames = { "ReachedStateNames", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedQuest, ReachedStateNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachedStateNames_MetaData), NewProp_ReachedStateNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_CurrentStateID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestBranches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_QuestBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewProp_ReachedStateNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NarrativeSavedQuest",
	Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::PropPointers),
	sizeof(FNarrativeSavedQuest),
	alignof(FNarrativeSavedQuest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedQuest()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedQuest.InnerSingleton;
}
// End ScriptStruct FNarrativeSavedQuest

// Begin Delegate FOnNarrativeTaskCompleted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms
	{
		const UNarrativeDataTask* NarrativeTask;
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//General\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "General" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeTask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeTask_MetaData), NewProp_NarrativeTask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_NarrativeTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnNarrativeTaskCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNarrativeTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnNarrativeTaskCompleted, const UNarrativeDataTask* NarrativeTask, const FString& Name)
{
	struct _Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms
	{
		const UNarrativeDataTask* NarrativeTask;
		FString Name;
	};
	_Script_NarrativeArsenal_eventOnNarrativeTaskCompleted_Parms Parms;
	Parms.NarrativeTask=NarrativeTask;
	Parms.Name=Name;
	OnNarrativeTaskCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNarrativeTaskCompleted

// Begin Delegate FOnDialogueBegan
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnDialogueBegan_Parms
	{
		UDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Dialogue\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnDialogueBegan__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDialogueBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDialogueBegan_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueBegan_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueBegan, UDialogue* Dialogue)
{
	struct _Script_NarrativeArsenal_eventOnDialogueBegan_Parms
	{
		UDialogue* Dialogue;
	};
	_Script_NarrativeArsenal_eventOnDialogueBegan_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnDialogueBegan.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueBegan

// Begin Delegate FOnDialogueFinished
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnDialogueFinished_Parms
	{
		UDialogue* Dialogue;
		bool bStartingNewDialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartingNewDialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static void NewProp_bStartingNewDialogue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartingNewDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_SetBit(void* Obj)
{
	((_Script_NarrativeArsenal_eventOnDialogueFinished_Parms*)Obj)->bStartingNewDialogue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue = { "bStartingNewDialogue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NarrativeArsenal_eventOnDialogueFinished_Parms), &Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartingNewDialogue_MetaData), NewProp_bStartingNewDialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::NewProp_bStartingNewDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnDialogueFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, UDialogue* Dialogue, bool bStartingNewDialogue)
{
	struct _Script_NarrativeArsenal_eventOnDialogueFinished_Parms
	{
		UDialogue* Dialogue;
		bool bStartingNewDialogue;
	};
	_Script_NarrativeArsenal_eventOnDialogueFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.bStartingNewDialogue=bStartingNewDialogue ? true : false;
	OnDialogueFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueFinished

// Begin Delegate FDialogueOptionSelected
struct Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventDialogueOptionSelected_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* PlayerReply;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventDialogueOptionSelected_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::NewProp_PlayerReply = { "PlayerReply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventDialogueOptionSelected_Parms, PlayerReply), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::NewProp_PlayerReply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "DialogueOptionSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::_Script_NarrativeArsenal_eventDialogueOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::_Script_NarrativeArsenal_eventDialogueOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& DialogueOptionSelected, UDialogue* Dialogue, UDialogueNode_Player* PlayerReply)
{
	struct _Script_NarrativeArsenal_eventDialogueOptionSelected_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* PlayerReply;
	};
	_Script_NarrativeArsenal_eventDialogueOptionSelected_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.PlayerReply=PlayerReply;
	DialogueOptionSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueOptionSelected

// Begin Delegate FDialogueRepliesAvailable
struct Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms
	{
		UDialogue* Dialogue;
		TArray<UDialogueNode_Player*> PlayerReplies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReplies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerReplies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerReplies_MetaData), NewProp_PlayerReplies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::NewProp_PlayerReplies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "DialogueRepliesAvailable__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::_Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueRepliesAvailable_DelegateWrapper(const FMulticastScriptDelegate& DialogueRepliesAvailable, UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies)
{
	struct _Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms
	{
		UDialogue* Dialogue;
		TArray<UDialogueNode_Player*> PlayerReplies;
	};
	_Script_NarrativeArsenal_eventDialogueRepliesAvailable_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.PlayerReplies=PlayerReplies;
	DialogueRepliesAvailable.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueRepliesAvailable

// Begin Delegate FNPCDialogueLineStarted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) }; // 1719779596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::NewProp_Speaker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "NPCDialogueLineStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNPCDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
{
	struct _Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	_Script_NarrativeArsenal_eventNPCDialogueLineStarted_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	Parms.Speaker=Speaker;
	NPCDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNPCDialogueLineStarted

// Begin Delegate FNPCDialogueLineFinished
struct Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NPC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) }; // 1719779596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::NewProp_Speaker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "NPCDialogueLineFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNPCDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker)
{
	struct _Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_NPC* Node;
		FDialogueLine DialogueLine;
		FSpeakerInfo Speaker;
	};
	_Script_NarrativeArsenal_eventNPCDialogueLineFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	Parms.Speaker=Speaker;
	NPCDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNPCDialogueLineFinished

// Begin Delegate FPlayerDialogueLineStarted
struct Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::NewProp_DialogueLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "PlayerDialogueLineStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
{
	struct _Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	_Script_NarrativeArsenal_eventPlayerDialogueLineStarted_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	PlayerDialogueLineStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayerDialogueLineStarted

// Begin Delegate FPlayerDialogueLineFinished
struct Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::NewProp_DialogueLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "PlayerDialogueLineFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine)
{
	struct _Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode_Player* Node;
		FDialogueLine DialogueLine;
	};
	_Script_NarrativeArsenal_eventPlayerDialogueLineFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Node=Node;
	Parms.DialogueLine=DialogueLine;
	PlayerDialogueLineFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayerDialogueLineFinished

// Begin Delegate FOnJoinedParty
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnJoinedParty_Parms
	{
		UNarrativePartyComponent* NewParty;
		UNarrativePartyComponent* LeftParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Parties\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Parties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParty_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftParty_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty = { "NewParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnJoinedParty_Parms, NewParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParty_MetaData), NewProp_NewParty_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty = { "LeftParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnJoinedParty_Parms, LeftParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftParty_MetaData), NewProp_LeftParty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::NewProp_NewParty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::NewProp_LeftParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnJoinedParty__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnJoinedParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnJoinedParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinedParty_DelegateWrapper(const FMulticastScriptDelegate& OnJoinedParty, UNarrativePartyComponent* NewParty, UNarrativePartyComponent* LeftParty)
{
	struct _Script_NarrativeArsenal_eventOnJoinedParty_Parms
	{
		UNarrativePartyComponent* NewParty;
		UNarrativePartyComponent* LeftParty;
	};
	_Script_NarrativeArsenal_eventOnJoinedParty_Parms Parms;
	Parms.NewParty=NewParty;
	Parms.LeftParty=LeftParty;
	OnJoinedParty.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinedParty

// Begin Delegate FOnLeaveParty
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnLeaveParty_Parms
	{
		UNarrativePartyComponent* LeftParty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftParty_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftParty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty = { "LeftParty", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnLeaveParty_Parms, LeftParty), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftParty_MetaData), NewProp_LeftParty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::NewProp_LeftParty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnLeaveParty__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnLeaveParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnLeaveParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeaveParty_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveParty, UNarrativePartyComponent* LeftParty)
{
	struct _Script_NarrativeArsenal_eventOnLeaveParty_Parms
	{
		UNarrativePartyComponent* LeftParty;
	};
	_Script_NarrativeArsenal_eventOnLeaveParty_Parms Parms;
	Parms.LeftParty=LeftParty;
	OnLeaveParty.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLeaveParty

// Begin Class UNarrativeComponent Function BeginDialogue
struct Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics
{
	struct NarrativeComponent_eventBeginDialogue_Parms
	{
		TSubclassOf<UDialogue> Dialogue;
		FDialoguePlayParams PlayParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\x09* \n\x09@param Dialogue The dialogue to begin \n\x09@param DefaultNPCAvatar The NPC Avatar to use. For multi-NPC dialogues each speaker obviously needs their own avatar assigned - see the functions comment on how to do this.  \n\x09@param StartFromID The ID of the node you want to jump to. Can be left empty and the dialogue will begin from the root node.\n\n\x09@return Whether the dialogue was successfully started \n\x09*/" },
		{ "CPP_Default_PlayParams", "()" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Only callable on the server. Server grabs root dialogue node, validates its conditions, and sends it to the client via ClientRecieveDialogueOptions\n\n       @param Dialogue The dialogue to begin\n       @param DefaultNPCAvatar The NPC Avatar to use. For multi-NPC dialogues each speaker obviously needs their own avatar assigned - see the functions comment on how to do this.\n       @param StartFromID The ID of the node you want to jump to. Can be left empty and the dialogue will begin from the root node.\n\n       @return Whether the dialogue was successfully started" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayParams;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_PlayParams = { "PlayParams", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginDialogue_Parms, PlayParams), Z_Construct_UScriptStruct_FDialoguePlayParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayParams_MetaData), NewProp_PlayParams_MetaData) }; // 735790521
void Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventBeginDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventBeginDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_PlayParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NarrativeComponent_eventBeginDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::NarrativeComponent_eventBeginDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execBeginDialogue)
{
	P_GET_OBJECT(UClass,Z_Param_Dialogue);
	P_GET_STRUCT(FDialoguePlayParams,Z_Param_PlayParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginDialogue(Z_Param_Dialogue,Z_Param_PlayParams);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function BeginDialogue

// Begin Class UNarrativeComponent Function BeginQuest
struct Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics
{
	struct NarrativeComponent_eventBeginQuest_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		FName StartFromID;
		UQuest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Begin a given quest. Return quest if success. \n\x09\n\x09@param QuestAsset The quest to use\n\x09@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest from the start\n\n\x09@return The created UQuest instance\n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Begin a given quest. Return quest if success.\n\n@param QuestAsset The quest to use\n@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest from the start\n\n@return The created UQuest instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventBeginQuest_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_StartFromID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "BeginQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NarrativeComponent_eventBeginQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::NarrativeComponent_eventBeginQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_BeginQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_BeginQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execBeginQuest)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuest**)Z_Param__Result=P_THIS->BeginQuest(Z_Param_QuestClass,Z_Param_StartFromID);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function BeginQuest

// Begin Class UNarrativeComponent Function ClientBeginDialogue
struct NarrativeComponent_eventClientBeginDialogue_Parms
{
	TSubclassOf<UDialogue> Dialogue;
	TArray<FName> NPCReplyChainIDs;
	TArray<FName> AvailableResponseIDs;
};
static const FName NAME_UNarrativeComponent_ClientBeginDialogue = FName(TEXT("ClientBeginDialogue"));
void UNarrativeComponent::ClientBeginDialogue(TSubclassOf<UDialogue> Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
{
	NarrativeComponent_eventClientBeginDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.NPCReplyChainIDs=NPCReplyChainIDs;
	Parms.AvailableResponseIDs=AvailableResponseIDs;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientBeginDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to start dialogue. Also sends the initial chunk*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to start dialogue. Also sends the initial chunk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCReplyChainIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChainIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableResponseIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponseIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCReplyChainIDs_MetaData), NewProp_NPCReplyChainIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginDialogue_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableResponseIDs_MetaData), NewProp_AvailableResponseIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_NPCReplyChainIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::NewProp_AvailableResponseIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientBeginDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::PropPointers), sizeof(NarrativeComponent_eventClientBeginDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventClientBeginDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientBeginDialogue)
{
	P_GET_OBJECT(UClass,Z_Param_Dialogue);
	P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
	P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientBeginDialogue_Implementation(Z_Param_Dialogue,Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientBeginDialogue

// Begin Class UNarrativeComponent Function ClientBeginPartyDialogue
struct NarrativeComponent_eventClientBeginPartyDialogue_Parms
{
	TSubclassOf<UDialogue> Dialogue;
	TArray<FName> NPCReplyChainIDs;
	TArray<FName> AvailableResponseIDs;
};
static const FName NAME_UNarrativeComponent_ClientBeginPartyDialogue = FName(TEXT("ClientBeginPartyDialogue"));
void UNarrativeComponent::ClientBeginPartyDialogue(TSubclassOf<UDialogue> Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
{
	NarrativeComponent_eventClientBeginPartyDialogue_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.NPCReplyChainIDs=NPCReplyChainIDs;
	Parms.AvailableResponseIDs=AvailableResponseIDs;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientBeginPartyDialogue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to inform client to start party dialogue. Also sends the initial chunk*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to inform client to start party dialogue. Also sends the initial chunk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCReplyChainIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChainIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableResponseIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponseIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCReplyChainIDs_MetaData), NewProp_NPCReplyChainIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientBeginPartyDialogue_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableResponseIDs_MetaData), NewProp_AvailableResponseIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_NPCReplyChainIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::NewProp_AvailableResponseIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientBeginPartyDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::PropPointers), sizeof(NarrativeComponent_eventClientBeginPartyDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventClientBeginPartyDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientBeginPartyDialogue)
{
	P_GET_OBJECT(UClass,Z_Param_Dialogue);
	P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
	P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientBeginPartyDialogue_Implementation(Z_Param_Dialogue,Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientBeginPartyDialogue

// Begin Class UNarrativeComponent Function ClientExitDialogue
static const FName NAME_UNarrativeComponent_ClientExitDialogue = FName(TEXT("ClientExitDialogue"));
void UNarrativeComponent::ClientExitDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientExitDialogue);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to end dialogue*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to end dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientExitDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientExitDialogue_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientExitDialogue

// Begin Class UNarrativeComponent Function ClientExitPartyDialogue
static const FName NAME_UNarrativeComponent_ClientExitPartyDialogue = FName(TEXT("ClientExitPartyDialogue"));
void UNarrativeComponent::ClientExitPartyDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientExitPartyDialogue);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to tell client to end dialogue*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to tell client to end dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientExitPartyDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientExitPartyDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientExitPartyDialogue_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientExitPartyDialogue

// Begin Class UNarrativeComponent Function ClientReceiveSave
struct NarrativeComponent_eventClientReceiveSave_Parms
{
	TArray<FNarrativeSavedQuest> InSavedQuests;
	TArray<FString> Tasks;
	TArray<int32> Quantities;
};
static const FName NAME_UNarrativeComponent_ClientReceiveSave = FName(TEXT("ClientReceiveSave"));
void UNarrativeComponent::ClientReceiveSave(TArray<FNarrativeSavedQuest> const& InSavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities)
{
	NarrativeComponent_eventClientReceiveSave_Parms Parms;
	Parms.InSavedQuests=InSavedQuests;
	Parms.Tasks=Tasks;
	Parms.Quantities=Quantities;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientReceiveSave);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**\n\x09Once server loads a save in, it sends all the info to the client via this RPC so it can load it in. We do this so loading save\n\x09games can be done by the server and flow down to the client.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Once server loads a save in, it sends all the info to the client via this RPC so it can load it in. We do this so loading save\ngames can be done by the server and flow down to the client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSavedQuests_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSavedQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSavedQuests;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_InSavedQuests_Inner = { "InSavedQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedQuest, METADATA_PARAMS(0, nullptr) }; // 1448157801
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_InSavedQuests = { "InSavedQuests", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, InSavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSavedQuests_MetaData), NewProp_InSavedQuests_MetaData) }; // 1448157801
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_Inner = { "Quantities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities = { "Quantities", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientReceiveSave_Parms, Quantities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantities_MetaData), NewProp_Quantities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_InSavedQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_InSavedQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::NewProp_Quantities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientReceiveSave", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::PropPointers), sizeof(NarrativeComponent_eventClientReceiveSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventClientReceiveSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientReceiveSave)
{
	P_GET_TARRAY(FNarrativeSavedQuest,Z_Param_InSavedQuests);
	P_GET_TARRAY(FString,Z_Param_Tasks);
	P_GET_TARRAY(int32,Z_Param_Quantities);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReceiveSave_Implementation(Z_Param_InSavedQuests,Z_Param_Tasks,Z_Param_Quantities);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientReceiveSave

// Begin Class UNarrativeComponent Function ClientRecieveDialogueChunk
struct NarrativeComponent_eventClientRecieveDialogueChunk_Parms
{
	TArray<FName> NPCReplyChainIDs;
	TArray<FName> AvailableResponseIDs;
};
static const FName NAME_UNarrativeComponent_ClientRecieveDialogueChunk = FName(TEXT("ClientRecieveDialogueChunk"));
void UNarrativeComponent::ClientRecieveDialogueChunk(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs)
{
	NarrativeComponent_eventClientRecieveDialogueChunk_Parms Parms;
	Parms.NPCReplyChainIDs=NPCReplyChainIDs;
	Parms.AvailableResponseIDs=AvailableResponseIDs;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientRecieveDialogueChunk);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Used by the server to send valid dialogue chunks to the client*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Used by the server to send valid dialogue chunks to the client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCReplyChainIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableResponseIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCReplyChainIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCReplyChainIDs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableResponseIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableResponseIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_Inner = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs = { "NPCReplyChainIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, NPCReplyChainIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCReplyChainIDs_MetaData), NewProp_NPCReplyChainIDs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_Inner = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs = { "AvailableResponseIDs", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientRecieveDialogueChunk_Parms, AvailableResponseIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableResponseIDs_MetaData), NewProp_AvailableResponseIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_NPCReplyChainIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::NewProp_AvailableResponseIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientRecieveDialogueChunk", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::PropPointers), sizeof(NarrativeComponent_eventClientRecieveDialogueChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventClientRecieveDialogueChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientRecieveDialogueChunk)
{
	P_GET_TARRAY(FName,Z_Param_NPCReplyChainIDs);
	P_GET_TARRAY(FName,Z_Param_AvailableResponseIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRecieveDialogueChunk_Implementation(Z_Param_NPCReplyChainIDs,Z_Param_AvailableResponseIDs);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientRecieveDialogueChunk

// Begin Class UNarrativeComponent Function ClientSelectDialogueOption
struct NarrativeComponent_eventClientSelectDialogueOption_Parms
{
	FName OptionID;
	APlayerState* Selector;
};
static const FName NAME_UNarrativeComponent_ClientSelectDialogueOption = FName(TEXT("ClientSelectDialogueOption"));
void UNarrativeComponent::ClientSelectDialogueOption(FName const& OptionID, APlayerState* Selector)
{
	NarrativeComponent_eventClientSelectDialogueOption_Parms Parms;
	Parms.OptionID=OptionID;
	Parms.Selector=Selector;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ClientSelectDialogueOption);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Allows the server to inform a client to select a dialogue option. Used by party dialogues */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Allows the server to inform a client to select a dialogue option. Used by party dialogues" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID = { "OptionID", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientSelectDialogueOption_Parms, OptionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionID_MetaData), NewProp_OptionID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventClientSelectDialogueOption_Parms, Selector), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_OptionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ClientSelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::PropPointers), sizeof(NarrativeComponent_eventClientSelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventClientSelectDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execClientSelectDialogueOption)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionID);
	P_GET_OBJECT(APlayerState,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSelectDialogueOption_Implementation(Z_Param_OptionID,Z_Param_Selector);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ClientSelectDialogueOption

// Begin Class UNarrativeComponent Function DialogueBegan
struct Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics
{
	struct NarrativeComponent_eventDialogueBegan_Parms
	{
		UDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueBegan_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueBegan", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NarrativeComponent_eventDialogueBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::NarrativeComponent_eventDialogueBegan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueBegan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueBegan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execDialogueBegan)
{
	P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueBegan(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function DialogueBegan

// Begin Class UNarrativeComponent Function DialogueFinished
struct Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics
{
	struct NarrativeComponent_eventDialogueFinished_Parms
	{
		UDialogue* Dialogue;
		bool bStartingNewDialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartingNewDialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static void NewProp_bStartingNewDialogue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartingNewDialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_SetBit(void* Obj)
{
	((NarrativeComponent_eventDialogueFinished_Parms*)Obj)->bStartingNewDialogue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue = { "bStartingNewDialogue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventDialogueFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartingNewDialogue_MetaData), NewProp_bStartingNewDialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NewProp_bStartingNewDialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NarrativeComponent_eventDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::NarrativeComponent_eventDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execDialogueFinished)
{
	P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
	P_GET_UBOOL(Z_Param_bStartingNewDialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueFinished(Z_Param_Dialogue,Z_Param_bStartingNewDialogue);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function DialogueFinished

// Begin Class UNarrativeComponent Function DialogueLineFinished
struct Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics
{
	struct NarrativeComponent_eventDialogueLineFinished_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode* Node;
		FDialogueLine DialogueLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineFinished_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NewProp_DialogueLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NarrativeComponent_eventDialogueLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::NarrativeComponent_eventDialogueLineFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execDialogueLineFinished)
{
	P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UDialogueNode,Z_Param_Node);
	P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueLineFinished(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function DialogueLineFinished

// Begin Class UNarrativeComponent Function DialogueLineStarted
struct Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics
{
	struct NarrativeComponent_eventDialogueLineStarted_Parms
	{
		UDialogue* Dialogue;
		UDialogueNode* Node;
		FDialogueLine DialogueLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, Node), Z_Construct_UClass_UDialogueNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueLineStarted_Parms, DialogueLine), Z_Construct_UScriptStruct_FDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueLine_MetaData), NewProp_DialogueLine_MetaData) }; // 4089597032
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NewProp_DialogueLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueLineStarted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NarrativeComponent_eventDialogueLineStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::NarrativeComponent_eventDialogueLineStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execDialogueLineStarted)
{
	P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UDialogueNode,Z_Param_Node);
	P_GET_STRUCT_REF(FDialogueLine,Z_Param_Out_DialogueLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueLineStarted(Z_Param_Dialogue,Z_Param_Node,Z_Param_Out_DialogueLine);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function DialogueLineStarted

// Begin Class UNarrativeComponent Function DialogueRepliesAvailable
struct Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics
{
	struct NarrativeComponent_eventDialogueRepliesAvailable_Parms
	{
		UDialogue* Dialogue;
		TArray<UDialogueNode_Player*> PlayerReplies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReplies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReplies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerReplies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner = { "PlayerReplies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies = { "PlayerReplies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventDialogueRepliesAvailable_Parms, PlayerReplies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerReplies_MetaData), NewProp_PlayerReplies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NewProp_PlayerReplies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "DialogueRepliesAvailable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NarrativeComponent_eventDialogueRepliesAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::NarrativeComponent_eventDialogueRepliesAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execDialogueRepliesAvailable)
{
	P_GET_OBJECT(UDialogue,Z_Param_Dialogue);
	P_GET_TARRAY_REF(UDialogueNode_Player*,Z_Param_Out_PlayerReplies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueRepliesAvailable(Z_Param_Dialogue,Z_Param_Out_PlayerReplies);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function DialogueRepliesAvailable

// Begin Class UNarrativeComponent Function ForgetQuest
struct Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics
{
	struct NarrativeComponent_eventForgetQuest_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Forget a given quest. The quest will be removed from the players quest list, \n\x09""and the quest can be started again later using BeginQuest() if desired.\n\n\x09@param QuestAsset The quest to use\n\x09@return Whether or not the quest was forgotten or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Forget a given quest. The quest will be removed from the players quest list,\nand the quest can be started again later using BeginQuest() if desired.\n\n@param QuestAsset The quest to use\n@return Whether or not the quest was forgotten or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventForgetQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventForgetQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventForgetQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ForgetQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NarrativeComponent_eventForgetQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::NarrativeComponent_eventForgetQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ForgetQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ForgetQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execForgetQuest)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ForgetQuest(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ForgetQuest

// Begin Class UNarrativeComponent Function GetAllQuests
struct Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics
{
	struct NarrativeComponent_eventGetAllQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all quests that are started, failed, or succeeded, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all quests that are started, failed, or succeeded, in chronological order." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetAllQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetAllQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NarrativeComponent_eventGetAllQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::NarrativeComponent_eventGetAllQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetAllQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetAllQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetAllQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetAllQuests();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetAllQuests

// Begin Class UNarrativeComponent Function GetCurrentDialogue
struct Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics
{
	struct NarrativeComponent_eventGetCurrentDialogue_Parms
	{
		UDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetCurrentDialogue_Parms, ReturnValue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NarrativeComponent_eventGetCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::NarrativeComponent_eventGetCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetCurrentDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogue**)Z_Param__Result=P_THIS->GetCurrentDialogue();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetCurrentDialogue

// Begin Class UNarrativeComponent Function GetFailedQuests
struct Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics
{
	struct NarrativeComponent_eventGetFailedQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all failed quests, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all failed quests, in chronological order." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetFailedQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetFailedQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NarrativeComponent_eventGetFailedQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::NarrativeComponent_eventGetFailedQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetFailedQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetFailedQuests();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetFailedQuests

// Begin Class UNarrativeComponent Function GetInProgressQuests
struct Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics
{
	struct NarrativeComponent_eventGetInProgressQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all quests that are in progress, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all quests that are in progress, in chronological order." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetInProgressQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetInProgressQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NarrativeComponent_eventGetInProgressQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::NarrativeComponent_eventGetInProgressQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetInProgressQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetInProgressQuests();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetInProgressQuests

// Begin Class UNarrativeComponent Function GetNumberOfTimesTaskWasCompleted
struct Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics
{
	struct NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms
	{
		const UNarrativeDataTask* Task;
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* \n\x09IN MULTIPLAYER GAMES, THIS FUNCTION WILL ONLY WORK ON THE SERVER. Please see MasterTaskList comment for more info. \n\n\x09""Check how many times the player has ever completed a narrative Task. Very efficient.\n\x09\n\x09Very powerful for scripting, for example we could check if the player has talked to an NPC at least 10 times and then change the dialogue\n\x09text to a more personalized greeting since the NPC would know the player better. \n\n\x09@return The number of times the Task has been completed by this narrative component. \n\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "IN MULTIPLAYER GAMES, THIS FUNCTION WILL ONLY WORK ON THE SERVER. Please see MasterTaskList comment for more info.\n\nCheck how many times the player has ever completed a narrative Task. Very efficient.\n\nVery powerful for scripting, for example we could check if the player has talked to an NPC at least 10 times and then change the dialogue\ntext to a more personalized greeting since the NPC would know the player better.\n\n@return The number of times the Task has been completed by this narrative component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetNumberOfTimesTaskWasCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::NarrativeComponent_eventGetNumberOfTimesTaskWasCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted)
{
	P_GET_OBJECT(UNarrativeDataTask,Z_Param_Task);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfTimesTaskWasCompleted(Z_Param_Task,Z_Param_Name);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetNumberOfTimesTaskWasCompleted

// Begin Class UNarrativeComponent Function GetOwningController
struct Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics
{
	struct NarrativeComponent_eventGetOwningController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NarrativeComponent_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::NarrativeComponent_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetOwningController

// Begin Class UNarrativeComponent Function GetOwningPawn
struct Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics
{
	struct NarrativeComponent_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NarrativeComponent_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::NarrativeComponent_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetOwningPawn

// Begin Class UNarrativeComponent Function GetParty
struct Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics
{
	struct NarrativeComponent_eventGetParty_Parms
	{
		UNarrativePartyComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**Return our parties component, if we have one*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return our parties component, if we have one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetParty_Parms, ReturnValue), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetParty", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NarrativeComponent_eventGetParty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::NarrativeComponent_eventGetParty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetParty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetParty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetParty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativePartyComponent**)Z_Param__Result=P_THIS->GetParty();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetParty

// Begin Class UNarrativeComponent Function GetQuestInstance
struct Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics
{
	struct NarrativeComponent_eventGetQuestInstance_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		UQuest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Given a Quest class return its active quest object if we've started this quest */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Given a Quest class return its active quest object if we've started this quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuestInstance_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetQuestInstance_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetQuestInstance", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NarrativeComponent_eventGetQuestInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::NarrativeComponent_eventGetQuestInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetQuestInstance)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuest**)Z_Param__Result=P_THIS->GetQuestInstance(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetQuestInstance

// Begin Class UNarrativeComponent Function GetSucceededQuests
struct Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics
{
	struct NarrativeComponent_eventGetSucceededQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Returns a list of all succeeded quests, in chronological order.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Returns a list of all succeeded quests, in chronological order." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventGetSucceededQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "GetSucceededQuests", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NarrativeComponent_eventGetSucceededQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::NarrativeComponent_eventGetSucceededQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execGetSucceededQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetSucceededQuests();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function GetSucceededQuests

// Begin Class UNarrativeComponent Function HasCompletedTask
struct Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics
{
	struct NarrativeComponent_eventHasCompletedTask_Parms
	{
		const UNarrativeDataTask* Task;
		FString Name;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09""Check if the player has ever completed a given data task. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc\n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Check if the player has ever completed a given data task. For example you could check if the player has ever talked to a given NPC, taken a certain item, etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Task), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasCompletedTask_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventHasCompletedTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasCompletedTask_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasCompletedTask", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NarrativeComponent_eventHasCompletedTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::NarrativeComponent_eventHasCompletedTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execHasCompletedTask)
{
	P_GET_OBJECT(UNarrativeDataTask,Z_Param_Task);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCompletedTask(Z_Param_Task,Z_Param_Name,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function HasCompletedTask

// Begin Class UNarrativeComponent Function HasDialogueAvailable
struct Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics
{
	struct NarrativeComponent_eventHasDialogueAvailable_Parms
	{
		TSubclassOf<UDialogue> Dialogue;
		FDialoguePlayParams PlayParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* \n\x09""Check if calling BeginDialogue on a given dialogue asset would actually play any dialogue.\n\x09\n\x09THIS WILL ONLY WORK ON THE AUTHORITY. Server should use this function then replicate any needed stuff to clients, this will always \n\x09return false on clients as they do not have the authority to begin dialogues. \n\n\x09""Essentially the same as BeginDialogue, just doesn't actually start the dialogue, just gives you\n\x09the bool return value to check if any dialogue would have started. \n\n\x09Same as BeginDialogue, however doesn't actually begin the dialogue.*/" },
		{ "CPP_Default_PlayParams", "()" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Check if calling BeginDialogue on a given dialogue asset would actually play any dialogue.\n\nTHIS WILL ONLY WORK ON THE AUTHORITY. Server should use this function then replicate any needed stuff to clients, this will always\nreturn false on clients as they do not have the authority to begin dialogues.\n\nEssentially the same as BeginDialogue, just doesn't actually start the dialogue, just gives you\nthe bool return value to check if any dialogue would have started.\n\nSame as BeginDialogue, however doesn't actually begin the dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayParams;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasDialogueAvailable_Parms, Dialogue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_PlayParams = { "PlayParams", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventHasDialogueAvailable_Parms, PlayParams), Z_Construct_UScriptStruct_FDialoguePlayParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayParams_MetaData), NewProp_PlayParams_MetaData) }; // 735790521
void Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventHasDialogueAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventHasDialogueAvailable_Parms), &Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_PlayParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "HasDialogueAvailable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NarrativeComponent_eventHasDialogueAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::NarrativeComponent_eventHasDialogueAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execHasDialogueAvailable)
{
	P_GET_OBJECT(UClass,Z_Param_Dialogue);
	P_GET_STRUCT(FDialoguePlayParams,Z_Param_PlayParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDialogueAvailable(Z_Param_Dialogue,Z_Param_PlayParams);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function HasDialogueAvailable

// Begin Class UNarrativeComponent Function IsInDialogue
struct Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics
{
	struct NarrativeComponent_eventIsInDialogue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Return true if we're in a dialogue \n\n\x09@return Whether true if we're in a dialogue, false otherwise \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if we're in a dialogue\n\n       @return Whether true if we're in a dialogue, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsInDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsInDialogue_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsInDialogue", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NarrativeComponent_eventIsInDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::NarrativeComponent_eventIsInDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsInDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsInDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsInDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDialogue();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsInDialogue

// Begin Class UNarrativeComponent Function IsQuestFailed
struct Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics
{
	struct NarrativeComponent_eventIsQuestFailed_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed and was failed\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed and was failed\n@param QuestAsset The quest to check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFailed_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsQuestFailed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFailed_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFailed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NarrativeComponent_eventIsQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::NarrativeComponent_eventIsQuestFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsQuestFailed)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuestFailed(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsQuestFailed

// Begin Class UNarrativeComponent Function IsQuestFinished
struct Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics
{
	struct NarrativeComponent_eventIsQuestFinished_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed, regardless of whether we failed or succeeded the quest\n\x09@param QuestAsset The quest to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed, regardless of whether we failed or succeeded the quest\n@param QuestAsset The quest to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestFinished_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsQuestFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NarrativeComponent_eventIsQuestFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::NarrativeComponent_eventIsQuestFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsQuestFinished)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuestFinished(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsQuestFinished

// Begin Class UNarrativeComponent Function IsQuestInProgress
struct Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics
{
	struct NarrativeComponent_eventIsQuestInProgress_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest is in progress but false if the quest is finished\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest is in progress but false if the quest is finished\n@param QuestAsset The quest to check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestInProgress_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsQuestInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestInProgress_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestInProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NarrativeComponent_eventIsQuestInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::NarrativeComponent_eventIsQuestInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsQuestInProgress)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuestInProgress(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsQuestInProgress

// Begin Class UNarrativeComponent Function IsQuestStartedOrFinished
struct Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics
{
	struct NarrativeComponent_eventIsQuestStartedOrFinished_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest is started or finished\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest is started or finished\n@param QuestAsset The quest to check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestStartedOrFinished_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsQuestStartedOrFinished_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestStartedOrFinished_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestStartedOrFinished", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NarrativeComponent_eventIsQuestStartedOrFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::NarrativeComponent_eventIsQuestStartedOrFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsQuestStartedOrFinished)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuestStartedOrFinished(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsQuestStartedOrFinished

// Begin Class UNarrativeComponent Function IsQuestSucceeded
struct Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics
{
	struct NarrativeComponent_eventIsQuestSucceeded_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Return true if a given quest has been completed and was succeeded\n\x09@param QuestAsset The quest to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Return true if a given quest has been completed and was succeeded\n@param QuestAsset The quest to check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventIsQuestSucceeded_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventIsQuestSucceeded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventIsQuestSucceeded_Parms), &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "IsQuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NarrativeComponent_eventIsQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::NarrativeComponent_eventIsQuestSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execIsQuestSucceeded)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsQuestSucceeded(Z_Param_QuestClass);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function IsQuestSucceeded

// Begin Class UNarrativeComponent Function NarrativeDataTaskCompleted
struct Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics
{
	struct NarrativeComponent_eventNarrativeDataTaskCompleted_Parms
	{
		const UNarrativeDataTask* NarrativeTask;
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeTask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask = { "NarrativeTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeDataTaskCompleted_Parms, NarrativeTask), Z_Construct_UClass_UNarrativeDataTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeTask_MetaData), NewProp_NarrativeTask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventNarrativeDataTaskCompleted_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_NarrativeTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "NarrativeDataTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NarrativeComponent_eventNarrativeDataTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::NarrativeComponent_eventNarrativeDataTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execNarrativeDataTaskCompleted)
{
	P_GET_OBJECT(UNarrativeDataTask,Z_Param_NarrativeTask);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NarrativeDataTaskCompleted(Z_Param_NarrativeTask,Z_Param_Name);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function NarrativeDataTaskCompleted

// Begin Class UNarrativeComponent Function OnRep_PartyComponent
struct Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics
{
	struct NarrativeComponent_eventOnRep_PartyComponent_Parms
	{
		UNarrativePartyComponent* OldPartyComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPartyComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPartyComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent = { "OldPartyComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventOnRep_PartyComponent_Parms, OldPartyComponent), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPartyComponent_MetaData), NewProp_OldPartyComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NewProp_OldPartyComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "OnRep_PartyComponent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NarrativeComponent_eventOnRep_PartyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::NarrativeComponent_eventOnRep_PartyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execOnRep_PartyComponent)
{
	P_GET_OBJECT(UNarrativePartyComponent,Z_Param_OldPartyComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PartyComponent(Z_Param_OldPartyComponent);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function OnRep_PartyComponent

// Begin Class UNarrativeComponent Function OnRep_PendingUpdateList
struct Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "OnRep_PendingUpdateList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execOnRep_PendingUpdateList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PendingUpdateList();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function OnRep_PendingUpdateList

// Begin Class UNarrativeComponent Function QuestBranchCompleted
struct Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics
{
	struct NarrativeComponent_eventQuestBranchCompleted_Parms
	{
		const UQuest* Quest;
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestBranchCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestBranchCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestBranchCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NarrativeComponent_eventQuestBranchCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::NarrativeComponent_eventQuestBranchCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestBranchCompleted)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestBranchCompleted(Z_Param_Quest,Z_Param_Branch);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestBranchCompleted

// Begin Class UNarrativeComponent Function QuestFailed
struct Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics
{
	struct NarrativeComponent_eventQuestFailed_Parms
	{
		const UQuest* Quest;
		FText QuestFailedMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage = { "QuestFailedMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestFailed_Parms, QuestFailedMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFailedMessage_MetaData), NewProp_QuestFailedMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NewProp_QuestFailedMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestFailed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NarrativeComponent_eventQuestFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::NarrativeComponent_eventQuestFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestFailed)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestFailedMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestFailed(Z_Param_Quest,Z_Param_Out_QuestFailedMessage);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestFailed

// Begin Class UNarrativeComponent Function QuestForgotten
struct Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics
{
	struct NarrativeComponent_eventQuestForgotten_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestForgotten_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestForgotten", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NarrativeComponent_eventQuestForgotten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::NarrativeComponent_eventQuestForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestForgotten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestForgotten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestForgotten)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestForgotten(Z_Param_Quest);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestForgotten

// Begin Class UNarrativeComponent Function QuestNewState
struct Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics
{
	struct NarrativeComponent_eventQuestNewState_Parms
	{
		UQuest* Quest;
		const UQuestState* NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestNewState_Parms, NewState), Z_Construct_UClass_UQuestState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestNewState", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NarrativeComponent_eventQuestNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::NarrativeComponent_eventQuestNewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestNewState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestNewState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestNewState)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_OBJECT(UQuestState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestNewState(Z_Param_Quest,Z_Param_NewState);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestNewState

// Begin Class UNarrativeComponent Function QuestStarted
struct Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics
{
	struct NarrativeComponent_eventQuestStarted_Parms
	{
		const UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestStarted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestStarted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NarrativeComponent_eventQuestStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::NarrativeComponent_eventQuestStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestStarted)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestStarted(Z_Param_Quest);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestStarted

// Begin Class UNarrativeComponent Function QuestSucceeded
struct Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics
{
	struct NarrativeComponent_eventQuestSucceeded_Parms
	{
		const UQuest* Quest;
		FText QuestSucceededMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage = { "QuestSucceededMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestSucceeded_Parms, QuestSucceededMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSucceededMessage_MetaData), NewProp_QuestSucceededMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NewProp_QuestSucceededMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestSucceeded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NarrativeComponent_eventQuestSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::NarrativeComponent_eventQuestSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestSucceeded)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_QuestSucceededMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestSucceeded(Z_Param_Quest,Z_Param_Out_QuestSucceededMessage);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestSucceeded

// Begin Class UNarrativeComponent Function QuestTaskCompleted
struct Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics
{
	struct NarrativeComponent_eventQuestTaskCompleted_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* Task;
		const UQuestBranch* Branch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskCompleted_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NewProp_Branch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NarrativeComponent_eventQuestTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::NarrativeComponent_eventQuestTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskCompleted)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
	P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestTaskCompleted(Z_Param_Quest,Z_Param_Task,Z_Param_Branch);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestTaskCompleted

// Begin Class UNarrativeComponent Function QuestTaskProgressMade
struct Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics
{
	struct NarrativeComponent_eventQuestTaskProgressMade_Parms
	{
		const UQuest* Quest;
		const UNarrativeTask* Task;
		const UQuestBranch* Branch;
		int32 OldProgress;
		int32 NewProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Branch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Branch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quest_MetaData), NewProp_Quest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Task), Z_Construct_UClass_UNarrativeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch = { "Branch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, Branch), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Branch_MetaData), NewProp_Branch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_OldProgress = { "OldProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, OldProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventQuestTaskProgressMade_Parms, NewProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_Branch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_OldProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NewProp_NewProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "QuestTaskProgressMade", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NarrativeComponent_eventQuestTaskProgressMade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::NarrativeComponent_eventQuestTaskProgressMade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execQuestTaskProgressMade)
{
	P_GET_OBJECT(UQuest,Z_Param_Quest);
	P_GET_OBJECT(UNarrativeTask,Z_Param_Task);
	P_GET_OBJECT(UQuestBranch,Z_Param_Branch);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldProgress);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestTaskProgressMade(Z_Param_Quest,Z_Param_Task,Z_Param_Branch,Z_Param_OldProgress,Z_Param_NewProgress);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function QuestTaskProgressMade

// Begin Class UNarrativeComponent Function RestartQuest
struct Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics
{
	struct NarrativeComponent_eventRestartQuest_Parms
	{
		TSubclassOf<UQuest> QuestClass;
		FName StartFromID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09Restart a given quest. Will only actually restart the quest if it has been started.\n\x09If the quest hasn't started,  this will do nothing.\n\n\x09@param QuestAsset The quest to use\n\x09@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest its default start state\n\n\x09@return Whether or not the quest was restarted or not\n\x09*/" },
		{ "CPP_Default_StartFromID", "None" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Restart a given quest. Will only actually restart the quest if it has been started.\nIf the quest hasn't started,  this will do nothing.\n\n@param QuestAsset The quest to use\n@param StartFromID If this is set to a valid ID in the quest, we'll skip to this quest state instead of playing the quest its default start state\n\n@return Whether or not the quest was restarted or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuestClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartFromID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_QuestClass = { "QuestClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, QuestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_StartFromID = { "StartFromID", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventRestartQuest_Parms, StartFromID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventRestartQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventRestartQuest_Parms), &Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_QuestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_StartFromID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "RestartQuest", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NarrativeComponent_eventRestartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::NarrativeComponent_eventRestartQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_RestartQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_RestartQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execRestartQuest)
{
	P_GET_OBJECT(UClass,Z_Param_QuestClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartFromID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RestartQuest(Z_Param_QuestClass,Z_Param_StartFromID);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function RestartQuest

// Begin Class UNarrativeComponent Function ServerSelectDialogueOption
struct NarrativeComponent_eventServerSelectDialogueOption_Parms
{
	FName OptionID;
};
static const FName NAME_UNarrativeComponent_ServerSelectDialogueOption = FName(TEXT("ServerSelectDialogueOption"));
void UNarrativeComponent::ServerSelectDialogueOption(FName const& OptionID)
{
	NarrativeComponent_eventServerSelectDialogueOption_Parms Parms;
	Parms.OptionID=OptionID;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ServerSelectDialogueOption);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Tell the server we've selected a dialogue option*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Tell the server we've selected a dialogue option" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID = { "OptionID", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventServerSelectDialogueOption_Parms, OptionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionID_MetaData), NewProp_OptionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::NewProp_OptionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerSelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::PropPointers), sizeof(NarrativeComponent_eventServerSelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeComponent_eventServerSelectDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execServerSelectDialogueOption)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSelectDialogueOption_Implementation(Z_Param_OptionID);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ServerSelectDialogueOption

// Begin Class UNarrativeComponent Function ServerTryExitDialogue
static const FName NAME_UNarrativeComponent_ServerTryExitDialogue = FName(TEXT("ServerTryExitDialogue"));
void UNarrativeComponent::ServerTryExitDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ServerTryExitDialogue);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerTryExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execServerTryExitDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerTryExitDialogue_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ServerTryExitDialogue

// Begin Class UNarrativeComponent Function ServerTrySkipCurrentDialogueLine
static const FName NAME_UNarrativeComponent_ServerTrySkipCurrentDialogueLine = FName(TEXT("ServerTrySkipCurrentDialogueLine"));
void UNarrativeComponent::ServerTrySkipCurrentDialogueLine()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeComponent_ServerTrySkipCurrentDialogueLine);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Attempt to skip the current dialogue line */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Attempt to skip the current dialogue line" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "ServerTrySkipCurrentDialogueLine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execServerTrySkipCurrentDialogueLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerTrySkipCurrentDialogueLine_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function ServerTrySkipCurrentDialogueLine

// Begin Class UNarrativeComponent Function TryExitDialogue
struct Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**\n\x09* Exit the dialogue, but authoritatively check we're allowed to before doing so. \n\x09* \n\x09@return Whether the dialogue was successfully exited\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Exit the dialogue, but authoritatively check we're allowed to before doing so.\n\n       @return Whether the dialogue was successfully exited" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TryExitDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execTryExitDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryExitDialogue();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function TryExitDialogue

// Begin Class UNarrativeComponent Function TrySelectDialogueOption
struct Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics
{
	struct NarrativeComponent_eventTrySelectDialogueOption_Parms
	{
		UDialogueNode_Player* Option;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called by the client when it tries selecting a dialogue option - the server ultimately decides if this goes through or not,\n\x09though the server validates replies before it sends them to you, so this should never fail */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called by the client when it tries selecting a dialogue option - the server ultimately decides if this goes through or not,\n       though the server validates replies before it sends them to you, so this should never fail" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Option;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeComponent_eventTrySelectDialogueOption_Parms, Option), Z_Construct_UClass_UDialogueNode_Player_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NewProp_Option,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TrySelectDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NarrativeComponent_eventTrySelectDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::NarrativeComponent_eventTrySelectDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execTrySelectDialogueOption)
{
	P_GET_OBJECT(UDialogueNode_Player,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrySelectDialogueOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function TrySelectDialogueOption

// Begin Class UNarrativeComponent Function TrySkipCurrentDialogueLine
struct Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics
{
	struct NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Attempt to skip the current dialogue line\n\x09Return true if we skipped the line, or if called on a client return true if we were able to ask server to skip the line (isn't guaranteed, server still needs to auth it)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Attempt to skip the current dialogue line\n       Return true if we skipped the line, or if called on a client return true if we were able to ask server to skip the line (isn't guaranteed, server still needs to auth it)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms), &Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeComponent, nullptr, "TrySkipCurrentDialogueLine", nullptr, nullptr, Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::NarrativeComponent_eventTrySkipCurrentDialogueLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeComponent::execTrySkipCurrentDialogueLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TrySkipCurrentDialogueLine();
	P_NATIVE_END;
}
// End Class UNarrativeComponent Function TrySkipCurrentDialogueLine

// Begin Class UNarrativeComponent
void UNarrativeComponent::StaticRegisterNativesUNarrativeComponent()
{
	UClass* Class = UNarrativeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginDialogue", &UNarrativeComponent::execBeginDialogue },
		{ "BeginQuest", &UNarrativeComponent::execBeginQuest },
		{ "ClientBeginDialogue", &UNarrativeComponent::execClientBeginDialogue },
		{ "ClientBeginPartyDialogue", &UNarrativeComponent::execClientBeginPartyDialogue },
		{ "ClientExitDialogue", &UNarrativeComponent::execClientExitDialogue },
		{ "ClientExitPartyDialogue", &UNarrativeComponent::execClientExitPartyDialogue },
		{ "ClientReceiveSave", &UNarrativeComponent::execClientReceiveSave },
		{ "ClientRecieveDialogueChunk", &UNarrativeComponent::execClientRecieveDialogueChunk },
		{ "ClientSelectDialogueOption", &UNarrativeComponent::execClientSelectDialogueOption },
		{ "DialogueBegan", &UNarrativeComponent::execDialogueBegan },
		{ "DialogueFinished", &UNarrativeComponent::execDialogueFinished },
		{ "DialogueLineFinished", &UNarrativeComponent::execDialogueLineFinished },
		{ "DialogueLineStarted", &UNarrativeComponent::execDialogueLineStarted },
		{ "DialogueRepliesAvailable", &UNarrativeComponent::execDialogueRepliesAvailable },
		{ "ForgetQuest", &UNarrativeComponent::execForgetQuest },
		{ "GetAllQuests", &UNarrativeComponent::execGetAllQuests },
		{ "GetCurrentDialogue", &UNarrativeComponent::execGetCurrentDialogue },
		{ "GetFailedQuests", &UNarrativeComponent::execGetFailedQuests },
		{ "GetInProgressQuests", &UNarrativeComponent::execGetInProgressQuests },
		{ "GetNumberOfTimesTaskWasCompleted", &UNarrativeComponent::execGetNumberOfTimesTaskWasCompleted },
		{ "GetOwningController", &UNarrativeComponent::execGetOwningController },
		{ "GetOwningPawn", &UNarrativeComponent::execGetOwningPawn },
		{ "GetParty", &UNarrativeComponent::execGetParty },
		{ "GetQuestInstance", &UNarrativeComponent::execGetQuestInstance },
		{ "GetSucceededQuests", &UNarrativeComponent::execGetSucceededQuests },
		{ "HasCompletedTask", &UNarrativeComponent::execHasCompletedTask },
		{ "HasDialogueAvailable", &UNarrativeComponent::execHasDialogueAvailable },
		{ "IsInDialogue", &UNarrativeComponent::execIsInDialogue },
		{ "IsQuestFailed", &UNarrativeComponent::execIsQuestFailed },
		{ "IsQuestFinished", &UNarrativeComponent::execIsQuestFinished },
		{ "IsQuestInProgress", &UNarrativeComponent::execIsQuestInProgress },
		{ "IsQuestStartedOrFinished", &UNarrativeComponent::execIsQuestStartedOrFinished },
		{ "IsQuestSucceeded", &UNarrativeComponent::execIsQuestSucceeded },
		{ "NarrativeDataTaskCompleted", &UNarrativeComponent::execNarrativeDataTaskCompleted },
		{ "OnRep_PartyComponent", &UNarrativeComponent::execOnRep_PartyComponent },
		{ "OnRep_PendingUpdateList", &UNarrativeComponent::execOnRep_PendingUpdateList },
		{ "QuestBranchCompleted", &UNarrativeComponent::execQuestBranchCompleted },
		{ "QuestFailed", &UNarrativeComponent::execQuestFailed },
		{ "QuestForgotten", &UNarrativeComponent::execQuestForgotten },
		{ "QuestNewState", &UNarrativeComponent::execQuestNewState },
		{ "QuestStarted", &UNarrativeComponent::execQuestStarted },
		{ "QuestSucceeded", &UNarrativeComponent::execQuestSucceeded },
		{ "QuestTaskCompleted", &UNarrativeComponent::execQuestTaskCompleted },
		{ "QuestTaskProgressMade", &UNarrativeComponent::execQuestTaskProgressMade },
		{ "RestartQuest", &UNarrativeComponent::execRestartQuest },
		{ "ServerSelectDialogueOption", &UNarrativeComponent::execServerSelectDialogueOption },
		{ "ServerTryExitDialogue", &UNarrativeComponent::execServerTryExitDialogue },
		{ "ServerTrySkipCurrentDialogueLine", &UNarrativeComponent::execServerTrySkipCurrentDialogueLine },
		{ "TryExitDialogue", &UNarrativeComponent::execTryExitDialogue },
		{ "TrySelectDialogueOption", &UNarrativeComponent::execTrySelectDialogueOption },
		{ "TrySkipCurrentDialogueLine", &UNarrativeComponent::execTrySkipCurrentDialogueLine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeComponent);
UClass* Z_Construct_UClass_UNarrativeComponent_NoRegister()
{
	return UNarrativeComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n* Add this component to your Player Controller. \n* Narrative Component acts as the connection to the Narrative system and allows you to start quests, dialogues, complete Tasks, etc.\n*/" },
		{ "DisplayName", "Narrative Component" },
		{ "IncludePath", "Tales/NarrativeComponent.h" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Add this component to your Player Controller.\nNarrative Component acts as the connection to the Narrative system and allows you to start quests, dialogues, complete Tasks, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedQuests_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterTaskList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/*A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n\x09""a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "A map of every narrative task the player has ever completed, where the key is the amount of times the action has been completed\n       a TMap means we can very efficiently track large numbers of actions, such as shooting where the player may shoot a gun thousands of times" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNarrativeDataTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a narrative data task is completed by the player */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a narrative data task is completed by the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestBranchCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective has been completed.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective has been completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestNewState_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest objective is updated and we've received a new objective*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest objective is updated and we've received a new objective" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTaskProgressChanged_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a quest step has made progress. ie 6 out of 10 wolves killed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestTaskCompleted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest task in a step is completed*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest task in a step is completed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestSucceeded_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is completed.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestFailed_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is failed.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestStarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is started.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestForgotten_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is forgotten.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is forgotten." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestRestarted_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**Called when a quest is restarted.*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a quest is restarted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinedParty_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when we've joined a party*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when we've joined a party" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaveParty_MetaData[] = {
		{ "Category", "Saving/Loading" },
		{ "Comment", "/**Called when we've left a party*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when we've left a party" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueBegan_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue starts*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue has been finished for any reason*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue has been finished for any reason" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueOptionSelected_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue option is selected*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue option is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRepliesAvailable_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when the NPC(s) have finished talking and the players replies are available*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when the NPC(s) have finished talking and the players replies are available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDialogueLineStarted_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line starts*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDialogueLineFinished_MetaData[] = {
		{ "Category", "Dialogues" },
		{ "Comment", "/**Called when a dialogue line finishes*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Called when a dialogue line finishes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingUpdateList_MetaData[] = {
		{ "Comment", "//Server replicates these back to client so client can keep its state machine in sync with the servers\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Server replicates these back to client so client can keep its state machine in sync with the servers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestList_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//A list of all the quests the player is involved in\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "A list of all the quests the player is involved in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[] = {
		{ "Category", "Quests" },
		{ "Comment", "//Current dialogue the player is in \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "Current dialogue the player is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyComponent_MetaData[] = {
		{ "Category", "Narrative" },
		{ "Comment", "/** The party we're in, if any. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "The party we're in, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[] = {
		{ "Comment", "//We cache the OwningController, we won't cache pawn as this might change\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeComponent.h" },
		{ "ToolTip", "We cache the OwningController, we won't cache pawn as this might change" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedQuests;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MasterTaskList_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterTaskList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MasterTaskList;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNarrativeDataTaskCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestBranchCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestNewState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTaskProgressChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestTaskCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestSucceeded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestForgotten;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestRestarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinedParty;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveParty;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueBegan;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueOptionSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRepliesAvailable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCDialogueLineStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCDialogueLineFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDialogueLineStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDialogueLineFinished;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingUpdateList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingUpdateList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginDialogue, "BeginDialogue" }, // 1697419997
		{ &Z_Construct_UFunction_UNarrativeComponent_BeginQuest, "BeginQuest" }, // 2576468292
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientBeginDialogue, "ClientBeginDialogue" }, // 591841679
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientBeginPartyDialogue, "ClientBeginPartyDialogue" }, // 604920958
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientExitDialogue, "ClientExitDialogue" }, // 4183175280
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientExitPartyDialogue, "ClientExitPartyDialogue" }, // 795332755
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientReceiveSave, "ClientReceiveSave" }, // 3874921266
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientRecieveDialogueChunk, "ClientRecieveDialogueChunk" }, // 2427371079
		{ &Z_Construct_UFunction_UNarrativeComponent_ClientSelectDialogueOption, "ClientSelectDialogueOption" }, // 2782508725
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueBegan, "DialogueBegan" }, // 1557382930
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueFinished, "DialogueFinished" }, // 1594825600
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineFinished, "DialogueLineFinished" }, // 2203921626
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueLineStarted, "DialogueLineStarted" }, // 2366591065
		{ &Z_Construct_UFunction_UNarrativeComponent_DialogueRepliesAvailable, "DialogueRepliesAvailable" }, // 2538705026
		{ &Z_Construct_UFunction_UNarrativeComponent_ForgetQuest, "ForgetQuest" }, // 1473352937
		{ &Z_Construct_UFunction_UNarrativeComponent_GetAllQuests, "GetAllQuests" }, // 1946691317
		{ &Z_Construct_UFunction_UNarrativeComponent_GetCurrentDialogue, "GetCurrentDialogue" }, // 3254489697
		{ &Z_Construct_UFunction_UNarrativeComponent_GetFailedQuests, "GetFailedQuests" }, // 1191249499
		{ &Z_Construct_UFunction_UNarrativeComponent_GetInProgressQuests, "GetInProgressQuests" }, // 1853277104
		{ &Z_Construct_UFunction_UNarrativeComponent_GetNumberOfTimesTaskWasCompleted, "GetNumberOfTimesTaskWasCompleted" }, // 252067391
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningController, "GetOwningController" }, // 4188108502
		{ &Z_Construct_UFunction_UNarrativeComponent_GetOwningPawn, "GetOwningPawn" }, // 1050497805
		{ &Z_Construct_UFunction_UNarrativeComponent_GetParty, "GetParty" }, // 2766908912
		{ &Z_Construct_UFunction_UNarrativeComponent_GetQuestInstance, "GetQuestInstance" }, // 4167714471
		{ &Z_Construct_UFunction_UNarrativeComponent_GetSucceededQuests, "GetSucceededQuests" }, // 1777096639
		{ &Z_Construct_UFunction_UNarrativeComponent_HasCompletedTask, "HasCompletedTask" }, // 4168227994
		{ &Z_Construct_UFunction_UNarrativeComponent_HasDialogueAvailable, "HasDialogueAvailable" }, // 3216351015
		{ &Z_Construct_UFunction_UNarrativeComponent_IsInDialogue, "IsInDialogue" }, // 56449233
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFailed, "IsQuestFailed" }, // 3569767198
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestFinished, "IsQuestFinished" }, // 1287303505
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestInProgress, "IsQuestInProgress" }, // 5645927
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestStartedOrFinished, "IsQuestStartedOrFinished" }, // 2174995099
		{ &Z_Construct_UFunction_UNarrativeComponent_IsQuestSucceeded, "IsQuestSucceeded" }, // 3366309625
		{ &Z_Construct_UFunction_UNarrativeComponent_NarrativeDataTaskCompleted, "NarrativeDataTaskCompleted" }, // 1823743676
		{ &Z_Construct_UFunction_UNarrativeComponent_OnRep_PartyComponent, "OnRep_PartyComponent" }, // 2357472594
		{ &Z_Construct_UFunction_UNarrativeComponent_OnRep_PendingUpdateList, "OnRep_PendingUpdateList" }, // 4012828162
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestBranchCompleted, "QuestBranchCompleted" }, // 1580148799
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestFailed, "QuestFailed" }, // 1945693241
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestForgotten, "QuestForgotten" }, // 2852333164
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestNewState, "QuestNewState" }, // 3665016948
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestStarted, "QuestStarted" }, // 1450979615
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestSucceeded, "QuestSucceeded" }, // 4230017707
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskCompleted, "QuestTaskCompleted" }, // 2647974799
		{ &Z_Construct_UFunction_UNarrativeComponent_QuestTaskProgressMade, "QuestTaskProgressMade" }, // 1334025129
		{ &Z_Construct_UFunction_UNarrativeComponent_RestartQuest, "RestartQuest" }, // 1164855369
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerSelectDialogueOption, "ServerSelectDialogueOption" }, // 145352072
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerTryExitDialogue, "ServerTryExitDialogue" }, // 4116971518
		{ &Z_Construct_UFunction_UNarrativeComponent_ServerTrySkipCurrentDialogueLine, "ServerTrySkipCurrentDialogueLine" }, // 2034205210
		{ &Z_Construct_UFunction_UNarrativeComponent_TryExitDialogue, "TryExitDialogue" }, // 3999219797
		{ &Z_Construct_UFunction_UNarrativeComponent_TrySelectDialogueOption, "TrySelectDialogueOption" }, // 2254415470
		{ &Z_Construct_UFunction_UNarrativeComponent_TrySkipCurrentDialogueLine, "TrySkipCurrentDialogueLine" }, // 2242912416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SavedQuests_Inner = { "SavedQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedQuest, METADATA_PARAMS(0, nullptr) }; // 1448157801
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SavedQuests = { "SavedQuests", nullptr, (EPropertyFlags)0x0010000001020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, SavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedQuests_MetaData), NewProp_SavedQuests_MetaData) }; // 1448157801
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_ValueProp = { "MasterTaskList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_Key_KeyProp = { "MasterTaskList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList = { "MasterTaskList", nullptr, (EPropertyFlags)0x0010000001000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, MasterTaskList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterTaskList_MetaData), NewProp_MasterTaskList_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted = { "OnNarrativeDataTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNarrativeDataTaskCompleted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnNarrativeTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNarrativeDataTaskCompleted_MetaData), NewProp_OnNarrativeDataTaskCompleted_MetaData) }; // 765540425
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted = { "OnQuestBranchCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestBranchCompleted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestBranchCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestBranchCompleted_MetaData), NewProp_OnQuestBranchCompleted_MetaData) }; // 302668507
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState = { "OnQuestNewState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestNewState), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestNewState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestNewState_MetaData), NewProp_OnQuestNewState_MetaData) }; // 297653773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged = { "OnQuestTaskProgressChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskProgressChanged), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestTaskProgressChanged_MetaData), NewProp_OnQuestTaskProgressChanged_MetaData) }; // 1326950483
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted = { "OnQuestTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestTaskCompleted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestTaskCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestTaskCompleted_MetaData), NewProp_OnQuestTaskCompleted_MetaData) }; // 3788866643
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded = { "OnQuestSucceeded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestSucceeded), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestSucceeded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestSucceeded_MetaData), NewProp_OnQuestSucceeded_MetaData) }; // 1022381631
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed = { "OnQuestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestFailed), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestFailed_MetaData), NewProp_OnQuestFailed_MetaData) }; // 3885059523
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted = { "OnQuestStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestStarted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestStarted_MetaData), NewProp_OnQuestStarted_MetaData) }; // 2237310530
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten = { "OnQuestForgotten", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestForgotten), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestForgotten__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestForgotten_MetaData), NewProp_OnQuestForgotten_MetaData) }; // 1349934784
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted = { "OnQuestRestarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnQuestRestarted), Z_Construct_UDelegateFunction_NarrativeArsenal_OnQuestRestarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestRestarted_MetaData), NewProp_OnQuestRestarted_MetaData) }; // 2479810187
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty = { "OnJoinedParty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnJoinedParty), Z_Construct_UDelegateFunction_NarrativeArsenal_OnJoinedParty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinedParty_MetaData), NewProp_OnJoinedParty_MetaData) }; // 956875328
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty = { "OnLeaveParty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnLeaveParty), Z_Construct_UDelegateFunction_NarrativeArsenal_OnLeaveParty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeaveParty_MetaData), NewProp_OnLeaveParty_MetaData) }; // 1888310283
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan = { "OnDialogueBegan", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueBegan), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueBegan__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueBegan_MetaData), NewProp_OnDialogueBegan_MetaData) }; // 2885393095
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueFinished), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueFinished_MetaData), NewProp_OnDialogueFinished_MetaData) }; // 3882022581
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected = { "OnDialogueOptionSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueOptionSelected), Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueOptionSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueOptionSelected_MetaData), NewProp_OnDialogueOptionSelected_MetaData) }; // 768786056
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable = { "OnDialogueRepliesAvailable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnDialogueRepliesAvailable), Z_Construct_UDelegateFunction_NarrativeArsenal_DialogueRepliesAvailable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueRepliesAvailable_MetaData), NewProp_OnDialogueRepliesAvailable_MetaData) }; // 1415942601
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted = { "OnNPCDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineStarted), Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNPCDialogueLineStarted_MetaData), NewProp_OnNPCDialogueLineStarted_MetaData) }; // 1166217290
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished = { "OnNPCDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnNPCDialogueLineFinished), Z_Construct_UDelegateFunction_NarrativeArsenal_NPCDialogueLineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNPCDialogueLineFinished_MetaData), NewProp_OnNPCDialogueLineFinished_MetaData) }; // 3882650316
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted = { "OnPlayerDialogueLineStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineStarted), Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDialogueLineStarted_MetaData), NewProp_OnPlayerDialogueLineStarted_MetaData) }; // 1274167243
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished = { "OnPlayerDialogueLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OnPlayerDialogueLineFinished), Z_Construct_UDelegateFunction_NarrativeArsenal_PlayerDialogueLineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDialogueLineFinished_MetaData), NewProp_OnPlayerDialogueLineFinished_MetaData) }; // 844323421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_Inner = { "PendingUpdateList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeUpdate, METADATA_PARAMS(0, nullptr) }; // 926172930
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList = { "PendingUpdateList", "OnRep_PendingUpdateList", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, PendingUpdateList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingUpdateList_MetaData), NewProp_PendingUpdateList_MetaData) }; // 926172930
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_Inner = { "QuestList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList = { "QuestList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, QuestList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestList_MetaData), NewProp_QuestList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, CurrentDialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogue_MetaData), NewProp_CurrentDialogue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent = { "PartyComponent", "OnRep_PartyComponent", (EPropertyFlags)0x002008010008003c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, PartyComponent), Z_Construct_UClass_UNarrativePartyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyComponent_MetaData), NewProp_PartyComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeComponent, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPC_MetaData), NewProp_OwnerPC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SavedQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_SavedQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_MasterTaskList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNarrativeDataTaskCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestBranchCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestNewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskProgressChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestTaskCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestForgotten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnQuestRestarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnJoinedParty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnLeaveParty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueBegan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueOptionSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnDialogueRepliesAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnNPCDialogueLineFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OnPlayerDialogueLineFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PendingUpdateList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_QuestList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_CurrentDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_PartyComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeComponent_Statics::NewProp_OwnerPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeComponent_Statics::ClassParams = {
	&UNarrativeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton, Z_Construct_UClass_UNarrativeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeComponent>()
{
	return UNarrativeComponent::StaticClass();
}
void UNarrativeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PendingUpdateList(TEXT("PendingUpdateList"));
	static const FName Name_PartyComponent(TEXT("PartyComponent"));
	const bool bIsValid = true
		&& Name_PendingUpdateList == ClassReps[(int32)ENetFields_Private::PendingUpdateList].Property->GetFName()
		&& Name_PartyComponent == ClassReps[(int32)ENetFields_Private::PartyComponent].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeComponent);
UNarrativeComponent::~UNarrativeComponent() {}
// End Class UNarrativeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdateType_StaticEnum, TEXT("EUpdateType"), &Z_Registration_Info_UEnum_EUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2687819460U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueInfo::StaticStruct, Z_Construct_UScriptStruct_FDialogueInfo_Statics::NewStructOps, TEXT("DialogueInfo"), &Z_Registration_Info_UScriptStruct_DialogueInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueInfo), 3772303221U) },
		{ FNarrativeUpdate::StaticStruct, Z_Construct_UScriptStruct_FNarrativeUpdate_Statics::NewStructOps, TEXT("NarrativeUpdate"), &Z_Registration_Info_UScriptStruct_NarrativeUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeUpdate), 926172930U) },
		{ FSavedQuestBranch::StaticStruct, Z_Construct_UScriptStruct_FSavedQuestBranch_Statics::NewStructOps, TEXT("SavedQuestBranch"), &Z_Registration_Info_UScriptStruct_SavedQuestBranch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedQuestBranch), 2806415205U) },
		{ FNarrativeSavedQuest::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics::NewStructOps, TEXT("NarrativeSavedQuest"), &Z_Registration_Info_UScriptStruct_NarrativeSavedQuest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSavedQuest), 1448157801U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeComponent, UNarrativeComponent::StaticClass, TEXT("UNarrativeComponent"), &Z_Registration_Info_UClass_UNarrativeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeComponent), 1001858579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_1399847381(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
