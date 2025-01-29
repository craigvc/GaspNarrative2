// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/Quest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class UNarrativeTask;
class UQuest;
class UQuestBranch;
class UQuestNode;
class UQuestState;
class UTalesComponent;
enum class EQuestCompletion : uint8;
#ifdef NARRATIVEARSENAL_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define NARRATIVEARSENAL_Quest_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_18_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestBranchCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestBranchCompleted, const UQuest* Quest, const UQuestBranch* Branch);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_19_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestNewState_DelegateWrapper(const FMulticastScriptDelegate& OnQuestNewState, UQuest* Quest, const UQuestState* NewState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_20_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestTaskProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskProgressChanged, const UQuest* Quest, const UNarrativeTask* ProgressedTask, const UQuestBranch* Branch, int32 OldProgress, int32 NewProgress);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_21_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestTaskCompleted, const UQuest* Quest, const UNarrativeTask* CompletedTask, const UQuestBranch* Branch);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_22_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestSucceeded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestSucceeded, const UQuest* Quest, FText const& QuestSucceededMessage);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_23_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestFailed_DelegateWrapper(const FMulticastScriptDelegate& OnQuestFailed, const UQuest* Quest, FText const& QuestFailedMessage);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_24_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestStarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStarted, const UQuest* Quest);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_25_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestPostLoad_DelegateWrapper(const FMulticastScriptDelegate& OnQuestPostLoad, const UQuest* Quest);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_26_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestForgotten_DelegateWrapper(const FMulticastScriptDelegate& OnQuestForgotten, const UQuest* Quest);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_27_DELEGATE \
NARRATIVEARSENAL_API void FOnQuestRestarted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRestarted, const UQuest* Quest);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGroupMembers); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execGetOwningComp); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetQuestCompletion); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execGetBranches); \
	DECLARE_FUNCTION(execGetStates); \
	DECLARE_FUNCTION(execGetQuestStartState); \
	DECLARE_FUNCTION(execSpawnQuestActor); \
	DECLARE_FUNCTION(execEnterState); \
	DECLARE_FUNCTION(execSetTracked); \
	DECLARE_FUNCTION(execOnQuestBranchCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskCompleted); \
	DECLARE_FUNCTION(execOnQuestTaskProgressChanged); \
	DECLARE_FUNCTION(execSucceedQuest); \
	DECLARE_FUNCTION(execFailQuest); \
	DECLARE_FUNCTION(execSetQuestDescription); \
	DECLARE_FUNCTION(execSetQuestName); \
	DECLARE_FUNCTION(execGetQuestDescription); \
	DECLARE_FUNCTION(execGetQuestName); \
	DECLARE_FUNCTION(execGetBranch); \
	DECLARE_FUNCTION(execGetState);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuest(UQuest&&); \
	UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest) \
	NO_API virtual ~UQuest();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_39_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::QC_NotStarted) \
	op(EQuestCompletion::QC_Started) \
	op(EQuestCompletion::QC_Succeded) \
	op(EQuestCompletion::QC_Failed) 

enum class EQuestCompletion : uint8;
template<> struct TIsUEnumClass<EQuestCompletion> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EQuestCompletion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
