// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/Dialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDialogueNode;
class UDialogueNode_NPC;
class UDialogueNode_Player;
class UNarrativeDialogueSequence;
struct FDialogueLine;
struct FSpeakerInfo;
#ifdef NARRATIVEARSENAL_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define NARRATIVEARSENAL_Dialogue_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpeakerInfo_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSpeakerInfo>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerSpeakerInfo_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct(); \
	typedef FSpeakerInfo Super;


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FPlayerSpeakerInfo>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialoguePlayParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FDialoguePlayParams>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConversationCenterPoint); \
	DECLARE_FUNCTION(execIsPartyDialogue); \
	DECLARE_FUNCTION(execBlendingOutFinished); \
	DECLARE_FUNCTION(execFinishPlayerDialogue); \
	DECLARE_FUNCTION(execFinishNPCDialogue); \
	DECLARE_FUNCTION(execPlayNextNPCReply); \
	DECLARE_FUNCTION(execStopDialogueSequence); \
	DECLARE_FUNCTION(execPlayDialogueSequence); \
	DECLARE_FUNCTION(execAdjustPlayerTransform); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineFinished); \
	DECLARE_FUNCTION(execOnPlayerDialogueLineStarted); \
	DECLARE_FUNCTION(execOnNPCDialogueLineFinished); \
	DECLARE_FUNCTION(execOnNPCDialogueLineStarted); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetLineDuration); \
	DECLARE_FUNCTION(execPlayPlayerDialogue); \
	DECLARE_FUNCTION(execPlayNPCDialogue); \
	DECLARE_FUNCTION(execFinishDialogueNode); \
	DECLARE_FUNCTION(execPlayDialogueNode); \
	DECLARE_FUNCTION(execPlayDialogueSound); \
	DECLARE_FUNCTION(execStopDialogueAnimation); \
	DECLARE_FUNCTION(execPlayDialogueAnimation); \
	DECLARE_FUNCTION(execDestroySpeakerAvatar); \
	DECLARE_FUNCTION(execLinkSpeakerAvatar); \
	DECLARE_FUNCTION(execTickDialogue); \
	DECLARE_FUNCTION(execGetSpeakerHeadLocation); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execGetPlayerAvatar); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execCanSkipCurrentLine); \
	DECLARE_FUNCTION(execSkipCurrentLine); \
	DECLARE_FUNCTION(execEndCurrentLine);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogue(UDialogue&&); \
	UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogue) \
	NO_API virtual ~UDialogue();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_118_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
