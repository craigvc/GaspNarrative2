// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/TalesComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class APlayerState;
class UDialogue;
class UDialogueNode;
class UDialogueNode_NPC;
class UDialogueNode_Player;
class UNarrativeDataTask;
class UNarrativePartyComponent;
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestState;
struct FDialogueLine;
struct FDialoguePlayParams;
struct FNarrativeSavedQuest;
struct FSpeakerInfo;
#ifdef NARRATIVEARSENAL_TalesComponent_generated_h
#error "TalesComponent.generated.h already included, missing '#pragma once' in TalesComponent.h"
#endif
#define NARRATIVEARSENAL_TalesComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueInfo_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FDialogueInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeUpdate_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNarrativeUpdate>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSavedQuestBranch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSavedQuestBranch>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeSavedQuest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNarrativeSavedQuest>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_215_DELEGATE \
NARRATIVEARSENAL_API void FOnNarrativeTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnNarrativeTaskCompleted, const UNarrativeDataTask* NarrativeTask, const FString& Name);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_218_DELEGATE \
NARRATIVEARSENAL_API void FOnDialogueBegan_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueBegan, UDialogue* Dialogue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_219_DELEGATE \
NARRATIVEARSENAL_API void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, UDialogue* Dialogue, bool bStartingNewDialogue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_220_DELEGATE \
NARRATIVEARSENAL_API void FDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& DialogueOptionSelected, UDialogue* Dialogue, UDialogueNode_Player* PlayerReply);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_221_DELEGATE \
NARRATIVEARSENAL_API void FDialogueRepliesAvailable_DelegateWrapper(const FMulticastScriptDelegate& DialogueRepliesAvailable, UDialogue* Dialogue, TArray<UDialogueNode_Player*> const& PlayerReplies);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_222_DELEGATE \
NARRATIVEARSENAL_API void FNPCDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_223_DELEGATE \
NARRATIVEARSENAL_API void FNPCDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& NPCDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_NPC* Node, FDialogueLine const& DialogueLine, FSpeakerInfo const& Speaker);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_224_DELEGATE \
NARRATIVEARSENAL_API void FPlayerDialogueLineStarted_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineStarted, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_225_DELEGATE \
NARRATIVEARSENAL_API void FPlayerDialogueLineFinished_DelegateWrapper(const FMulticastScriptDelegate& PlayerDialogueLineFinished, UDialogue* Dialogue, UDialogueNode_Player* Node, FDialogueLine const& DialogueLine);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_228_DELEGATE \
NARRATIVEARSENAL_API void FOnJoinedParty_DelegateWrapper(const FMulticastScriptDelegate& OnJoinedParty, UNarrativePartyComponent* NewParty, UNarrativePartyComponent* LeftParty);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_229_DELEGATE \
NARRATIVEARSENAL_API void FOnLeaveParty_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveParty, UNarrativePartyComponent* LeftParty);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientReceiveSave_Implementation(TArray<FNarrativeSavedQuest> const& InSavedQuests, TArray<FString> const& Tasks, TArray<int32> const& Quantities); \
	virtual void ServerTryExitDialogue_Implementation(); \
	virtual void ServerTrySkipCurrentDialogueLine_Implementation(); \
	virtual void ServerSelectDialogueOption_Implementation(FName const& OptionID); \
	virtual void ClientSelectDialogueOption_Implementation(FName const& OptionID, APlayerState* Selector); \
	virtual void ClientRecieveDialogueChunk_Implementation(TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientExitPartyDialogue_Implementation(); \
	virtual void ClientExitDialogue_Implementation(); \
	virtual void ClientBeginPartyDialogue_Implementation(TSubclassOf<UDialogue> Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	virtual void ClientBeginDialogue_Implementation(TSubclassOf<UDialogue> Dialogue, TArray<FName> const& NPCReplyChainIDs, TArray<FName> const& AvailableResponseIDs); \
	DECLARE_FUNCTION(execClientReceiveSave); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetQuestInstance); \
	DECLARE_FUNCTION(execGetAllQuests); \
	DECLARE_FUNCTION(execGetInProgressQuests); \
	DECLARE_FUNCTION(execGetSucceededQuests); \
	DECLARE_FUNCTION(execGetFailedQuests); \
	DECLARE_FUNCTION(execGetNumberOfTimesTaskWasCompleted); \
	DECLARE_FUNCTION(execHasCompletedTask); \
	DECLARE_FUNCTION(execIsInDialogue); \
	DECLARE_FUNCTION(execServerTryExitDialogue); \
	DECLARE_FUNCTION(execTryExitDialogue); \
	DECLARE_FUNCTION(execServerTrySkipCurrentDialogueLine); \
	DECLARE_FUNCTION(execTrySkipCurrentDialogueLine); \
	DECLARE_FUNCTION(execServerSelectDialogueOption); \
	DECLARE_FUNCTION(execClientSelectDialogueOption); \
	DECLARE_FUNCTION(execTrySelectDialogueOption); \
	DECLARE_FUNCTION(execClientRecieveDialogueChunk); \
	DECLARE_FUNCTION(execClientExitPartyDialogue); \
	DECLARE_FUNCTION(execClientExitDialogue); \
	DECLARE_FUNCTION(execClientBeginPartyDialogue); \
	DECLARE_FUNCTION(execClientBeginDialogue); \
	DECLARE_FUNCTION(execBeginDialogue); \
	DECLARE_FUNCTION(execHasDialogueAvailable); \
	DECLARE_FUNCTION(execForgetQuest); \
	DECLARE_FUNCTION(execRestartQuest); \
	DECLARE_FUNCTION(execBeginQuest); \
	DECLARE_FUNCTION(execIsQuestFinished); \
	DECLARE_FUNCTION(execIsQuestFailed); \
	DECLARE_FUNCTION(execIsQuestSucceeded); \
	DECLARE_FUNCTION(execIsQuestInProgress); \
	DECLARE_FUNCTION(execIsQuestStartedOrFinished); \
	DECLARE_FUNCTION(execGetCurrentDialogue); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueBegan); \
	DECLARE_FUNCTION(execDialogueLineFinished); \
	DECLARE_FUNCTION(execDialogueLineStarted); \
	DECLARE_FUNCTION(execDialogueRepliesAvailable); \
	DECLARE_FUNCTION(execQuestBranchCompleted); \
	DECLARE_FUNCTION(execQuestTaskCompleted); \
	DECLARE_FUNCTION(execQuestTaskProgressMade); \
	DECLARE_FUNCTION(execQuestNewState); \
	DECLARE_FUNCTION(execQuestSucceeded); \
	DECLARE_FUNCTION(execQuestFailed); \
	DECLARE_FUNCTION(execQuestForgotten); \
	DECLARE_FUNCTION(execQuestStarted); \
	DECLARE_FUNCTION(execNarrativeDataTaskCompleted); \
	DECLARE_FUNCTION(execOnRep_PendingUpdateList); \
	DECLARE_FUNCTION(execOnRep_PartyComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTalesComponent(); \
	friend struct Z_Construct_UClass_UTalesComponent_Statics; \
public: \
	DECLARE_CLASS(UTalesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UTalesComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UTalesComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PendingUpdateList=NETFIELD_REP_START, \
		PartyComponent, \
		NETFIELD_REP_END=PartyComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTalesComponent(UTalesComponent&&); \
	UTalesComponent(const UTalesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTalesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTalesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTalesComponent) \
	NO_API virtual ~UTalesComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_235_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UTalesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_TalesComponent_h


#define FOREACH_ENUM_EUPDATETYPE(op) \
	op(EUpdateType::UT_None) \
	op(EUpdateType::UT_CompleteTask) \
	op(EUpdateType::UT_BeginQuest) \
	op(EUpdateType::UT_ForgetQuest) \
	op(EUpdateType::UT_RestartQuest) \
	op(EUpdateType::UT_QuestNewState) \
	op(EUpdateType::UT_TaskProgressMade) 

enum class EUpdateType : uint8;
template<> struct TIsUEnumClass<EUpdateType> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
