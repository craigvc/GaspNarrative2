// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/DialogueSM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
#ifdef NARRATIVEARSENAL_DialogueSM_generated_h
#error "DialogueSM.generated.h already included, missing '#pragma once' in DialogueSM.h"
#endif
#define NARRATIVEARSENAL_DialogueSM_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_10_DELEGATE \
NARRATIVEARSENAL_API void FOnDialogueNodeFinishedPlaying_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueNodeFinishedPlaying);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpeakerSelector_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSpeakerSelector>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueLine_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FDialogueLine>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode(); \
	friend struct Z_Construct_UClass_UDialogueNode_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueNode(UDialogueNode&&); \
	UDialogueNode(const UDialogueNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode) \
	NO_API virtual ~UDialogueNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_120_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_124_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UDialogueNode>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpeakerID);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode_NPC(); \
	friend struct Z_Construct_UClass_UDialogueNode_NPC_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_NPC, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_NPC)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_NPC(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueNode_NPC(UDialogueNode_NPC&&); \
	UDialogueNode_NPC(const UDialogueNode_NPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_NPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode_NPC) \
	NO_API virtual ~UDialogueNode_NPC();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_210_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UDialogueNode_NPC>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execGetOptionText);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueNode_Player(); \
	friend struct Z_Construct_UClass_UDialogueNode_Player_Statics; \
public: \
	DECLARE_CLASS(UDialogueNode_Player, UDialogueNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UDialogueNode_Player)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueNode_Player(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueNode_Player(UDialogueNode_Player&&); \
	UDialogueNode_Player(const UDialogueNode_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueNode_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueNode_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueNode_Player) \
	NO_API virtual ~UDialogueNode_Player();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_238_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UDialogueNode_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueSM_h


#define FOREACH_ENUM_ELINEDURATION(op) \
	op(ELineDuration::LD_Default) \
	op(ELineDuration::LD_WhenAudioEnds) \
	op(ELineDuration::LD_WhenSequenceEnds) \
	op(ELineDuration::LD_AfterReadingTime) \
	op(ELineDuration::LD_AfterDuration) \
	op(ELineDuration::LD_Never) 

enum class ELineDuration : uint8;
template<> struct TIsUEnumClass<ELineDuration> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ELineDuration>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
