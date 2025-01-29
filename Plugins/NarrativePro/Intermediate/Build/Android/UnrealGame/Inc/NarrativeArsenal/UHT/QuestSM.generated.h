// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/QuestSM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_QuestSM_generated_h
#error "QuestSM.generated.h already included, missing '#pragma once' in QuestSM.h"
#endif
#define NARRATIVEARSENAL_QuestSM_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTask_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FQuestTask>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestNode(); \
	friend struct Z_Construct_UClass_UQuestNode_Statics; \
public: \
	DECLARE_CLASS(UQuestNode, UNarrativeNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UQuestNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestNode(UQuestNode&&); \
	UQuestNode(const UQuestNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestNode) \
	NO_API virtual ~UQuestNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_88_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_92_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UQuestNode>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_123_DELEGATE \
NARRATIVEARSENAL_API void FOnStateReachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStateReachedEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestState(); \
	friend struct Z_Construct_UClass_UQuestState_Statics; \
public: \
	DECLARE_CLASS(UQuestState, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UQuestState)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_128_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestState(UQuestState&&); \
	UQuestState(const UQuestState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestState) \
	NO_API virtual ~UQuestState();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_125_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_128_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UQuestState>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestBranch(); \
	friend struct Z_Construct_UClass_UQuestBranch_Statics; \
public: \
	DECLARE_CLASS(UQuestBranch, UQuestNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UQuestBranch)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_153_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuestBranch(UQuestBranch&&); \
	UQuestBranch(const UQuestBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestBranch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestBranch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestBranch) \
	NO_API virtual ~UQuestBranch();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_149_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_153_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UQuestBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestSM_h


#define FOREACH_ENUM_ESTATENODETYPE(op) \
	op(EStateNodeType::Regular) \
	op(EStateNodeType::Success) \
	op(EStateNodeType::Failure) 

enum class EStateNodeType : uint8;
template<> struct TIsUEnumClass<EStateNodeType> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EStateNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
