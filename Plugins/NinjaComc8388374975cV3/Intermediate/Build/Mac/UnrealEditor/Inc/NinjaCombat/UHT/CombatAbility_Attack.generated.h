// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_Attack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaCombatMeleeScan;
class UNinjaCombatProjectileRequest;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEffectSpecHandle;
#ifdef NINJACOMBAT_CombatAbility_Attack_generated_h
#error "CombatAbility_Attack.generated.h already included, missing '#pragma once' in CombatAbility_Attack.h"
#endif
#define NINJACOMBAT_CombatAbility_Attack_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleProjectileLaunched_Implementation(const UNinjaCombatProjectileRequest* Request, AActor* Projectile); \
	virtual void HandleMeleeScanTargetsReceived_Implementation(const UNinjaCombatMeleeScan* MeleeScan, FGameplayAbilityTargetDataHandle const& Data); \
	virtual void HandleAttackStarting_Implementation(); \
	DECLARE_FUNCTION(execResetCurrentTargets); \
	DECLARE_FUNCTION(execCreateSpecHandleForMeleeHit); \
	DECLARE_FUNCTION(execHandleProjectileLaunched); \
	DECLARE_FUNCTION(execHandleMeleeScanTargetsReceived); \
	DECLARE_FUNCTION(execHandleAttackStarting); \
	DECLARE_FUNCTION(execInitializeProjectileTask); \
	DECLARE_FUNCTION(execInitializeMeleeScanTask); \
	DECLARE_FUNCTION(execGetComboCount);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_Attack(); \
	friend struct Z_Construct_UClass_UCombatAbility_Attack_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_Attack, UNinjaCombatAnimationAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_Attack) \
	virtual UObject* _getUObject() const override { return const_cast<UCombatAbility_Attack*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_Attack(UCombatAbility_Attack&&); \
	UCombatAbility_Attack(const UCombatAbility_Attack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_Attack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_Attack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAbility_Attack) \
	NO_API virtual ~UCombatAbility_Attack();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_22_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_Attack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Attack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
