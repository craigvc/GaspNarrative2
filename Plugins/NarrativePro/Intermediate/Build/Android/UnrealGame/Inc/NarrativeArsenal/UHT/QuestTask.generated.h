// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/QuestTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UQuestBranch;
#ifdef NARRATIVEARSENAL_QuestTask_generated_h
#error "QuestTask.generated.h already included, missing '#pragma once' in QuestTask.h"
#endif
#define NARRATIVEARSENAL_QuestTask_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FTaskNavigationMarker>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsComplete); \
	DECLARE_FUNCTION(execGetTaskNodeDescription); \
	DECLARE_FUNCTION(execGetTaskProgressText); \
	DECLARE_FUNCTION(execGetTaskDescription); \
	DECLARE_FUNCTION(execGetNavigationMarkerAttachActor); \
	DECLARE_FUNCTION(execGetNavigationMarkerLocation); \
	DECLARE_FUNCTION(execSpawnNavigationMarker); \
	DECLARE_FUNCTION(execGetOwningBranch); \
	DECLARE_FUNCTION(execCompleteTask); \
	DECLARE_FUNCTION(execAddProgress); \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execTickTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeTask(); \
	friend struct Z_Construct_UClass_UNarrativeTask_Statics; \
public: \
	DECLARE_CLASS(UNarrativeTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeTask)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeTask(UNarrativeTask&&); \
	UNarrativeTask(const UNarrativeTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNarrativeTask) \
	NO_API virtual ~UNarrativeTask();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_59_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
