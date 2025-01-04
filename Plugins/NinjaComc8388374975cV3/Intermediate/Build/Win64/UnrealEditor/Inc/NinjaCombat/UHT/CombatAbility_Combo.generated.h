// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_Combo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UInputAction;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef NINJACOMBAT_CombatAbility_Combo_generated_h
#error "CombatAbility_Combo.generated.h already included, missing '#pragma once' in CombatAbility_Combo.h"
#endif
#define NINJACOMBAT_CombatAbility_Combo_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboEventMapping_Statics; \
	NINJACOMBAT_API static class UScriptStruct* StaticStruct();


template<> NINJACOMBAT_API UScriptStruct* StaticStruct<struct FComboEventMapping>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_AdvanceCombo_Validate(FGameplayEventData const& ); \
	virtual void Server_AdvanceCombo_Implementation(FGameplayEventData const& Payload); \
	virtual const AActor* GetTargetHitFromEvent_Implementation(FGameplayEventData const& Payload) const; \
	virtual const UInputAction* GetInputActionFromEvent_Implementation(FGameplayEventData const& Payload) const; \
	DECLARE_FUNCTION(execServer_AdvanceCombo); \
	DECLARE_FUNCTION(execResetCurrentTargets); \
	DECLARE_FUNCTION(execRegisterTargetFromPayload); \
	DECLARE_FUNCTION(execRemoveComboWindowEffect); \
	DECLARE_FUNCTION(execApplyComboWindowEffect); \
	DECLARE_FUNCTION(execAdvanceCombo); \
	DECLARE_FUNCTION(execGetComboEventFromInputAction); \
	DECLARE_FUNCTION(execGetTargetHitFromEvent); \
	DECLARE_FUNCTION(execGetInputActionFromEvent); \
	DECLARE_FUNCTION(execHandleComboFinished); \
	DECLARE_FUNCTION(execGetComboCount); \
	DECLARE_FUNCTION(execInComboWindow);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_Combo(); \
	friend struct Z_Construct_UClass_UCombatAbility_Combo_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_Combo, UNinjaCombatGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_Combo)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_Combo(UCombatAbility_Combo&&); \
	UCombatAbility_Combo(const UCombatAbility_Combo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_Combo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_Combo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAbility_Combo) \
	NO_API virtual ~UCombatAbility_Combo();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_35_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_Combo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
