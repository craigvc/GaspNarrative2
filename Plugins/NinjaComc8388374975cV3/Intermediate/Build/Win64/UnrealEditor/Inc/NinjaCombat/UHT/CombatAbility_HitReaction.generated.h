// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_HitReaction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEventData;
struct FHitResult;
#ifdef NINJACOMBAT_CombatAbility_HitReaction_generated_h
#error "CombatAbility_HitReaction.generated.h already included, missing '#pragma once' in CombatAbility_HitReaction.h"
#endif
#define NINJACOMBAT_CombatAbility_HitReaction_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RotateToInstigator_Implementation(FGameplayEventData const& TriggerEventData); \
	virtual void ExecuteHitReaction_Implementation(FGameplayEventData const& TriggerEventData); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execRotateToInstigator); \
	DECLARE_FUNCTION(execExecuteHitReaction);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_HitReaction(); \
	friend struct Z_Construct_UClass_UCombatAbility_HitReaction_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_HitReaction, UNinjaCombatContextAnimationAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_HitReaction)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_HitReaction(UCombatAbility_HitReaction&&); \
	UCombatAbility_HitReaction(const UCombatAbility_HitReaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_HitReaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_HitReaction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAbility_HitReaction) \
	NO_API virtual ~UCombatAbility_HitReaction();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_HitReaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
