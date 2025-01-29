// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Activities/NPCActivityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNPCActivity;
class UNPCActivityConfiguration;
class UNPCActivitySchedule;
class UNPCGoalItem;
class UObject;
struct FNPCGoalContainer;
#ifdef NARRATIVEARSENAL_NPCActivityComponent_generated_h
#error "NPCActivityComponent.generated.h already included, missing '#pragma once' in NPCActivityComponent.h"
#endif
#define NARRATIVEARSENAL_NPCActivityComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGoalByKey); \
	DECLARE_FUNCTION(execGetGoals); \
	DECLARE_FUNCTION(execRemoveGoal); \
	DECLARE_FUNCTION(execAddGoal); \
	DECLARE_FUNCTION(execGetCurrentActivityGoal); \
	DECLARE_FUNCTION(execGetCurrentActivity); \
	DECLARE_FUNCTION(execStopCurrentActivity); \
	DECLARE_FUNCTION(execSetActivityConfiguration); \
	DECLARE_FUNCTION(execSetActivitySchedule); \
	DECLARE_FUNCTION(execRunActivity); \
	DECLARE_FUNCTION(execPerformActivitySelection);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCActivityComponent(); \
	friend struct Z_Construct_UClass_UNPCActivityComponent_Statics; \
public: \
	DECLARE_CLASS(UNPCActivityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNPCActivityComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNPCActivityComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCActivityComponent(UNPCActivityComponent&&); \
	UNPCActivityComponent(const UNPCActivityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCActivityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCActivityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNPCActivityComponent) \
	NO_API virtual ~UNPCActivityComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_42_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNPCActivityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
