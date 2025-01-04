// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/BehaviorTree/BTService_AdvanceCombo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UBehaviorTreeComponent;
class UInputAction;
class UObject;
struct FGameplayTag;
#ifdef NINJACOMBATAI_BTService_AdvanceCombo_generated_h
#error "BTService_AdvanceCombo.generated.h already included, missing '#pragma once' in BTService_AdvanceCombo.h"
#endif
#define NINJACOMBATAI_BTService_AdvanceCombo_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTag GetComboGameplayTag_Implementation(const AActor* Owner) const; \
	virtual const UInputAction* GetComboInputAction_Implementation(const AActor* Owner) const; \
	virtual void HandleComboWindowChanged_Implementation(UActorComponent* ComboManager, bool bInComboWindow); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execCheckComboManager); \
	DECLARE_FUNCTION(execGetBehaviorTreeComponent); \
	DECLARE_FUNCTION(execGetComboGameplayTag); \
	DECLARE_FUNCTION(execGetComboInputAction); \
	DECLARE_FUNCTION(execHandleComboWindowChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_AdvanceCombo(); \
	friend struct Z_Construct_UClass_UBTService_AdvanceCombo_Statics; \
public: \
	DECLARE_CLASS(UBTService_AdvanceCombo, UBTService, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatAI"), NO_API) \
	DECLARE_SERIALIZER(UBTService_AdvanceCombo)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTService_AdvanceCombo(UBTService_AdvanceCombo&&); \
	UBTService_AdvanceCombo(const UBTService_AdvanceCombo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_AdvanceCombo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_AdvanceCombo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTService_AdvanceCombo) \
	NO_API virtual ~UBTService_AdvanceCombo();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATAI_API UClass* StaticClass<class UBTService_AdvanceCombo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTService_AdvanceCombo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
