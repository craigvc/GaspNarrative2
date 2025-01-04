// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class AActor;
class AActor;
class APlayerController;
class UContextualAnimSceneActorComponent;
class UGameplayEffect;
class UNinjaCombatMeleeScan;
class UNinjaCombatProjectileRequest;
struct FCombatCameraAnimationParameters;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEffectSpecHandle;
struct FTargetingRequestHandle;
#ifdef NINJACOMBAT_CombatAbility_OpportunityAttack_generated_h
#error "CombatAbility_OpportunityAttack.generated.h already included, missing '#pragma once' in CombatAbility_OpportunityAttack.h"
#endif
#define NINJACOMBAT_CombatAbility_OpportunityAttack_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleOpportunityAttackStarting_Implementation(); \
	virtual FCombatCameraAnimationParameters BuildCameraAnimationParameters_Implementation() const; \
	virtual TMap<FName,AActor*> CollectAdditionalSceneActors_Implementation(); \
	virtual void HandleProjectileLaunched_Implementation(const UNinjaCombatProjectileRequest* Request, AActor* Projectile); \
	virtual void HandleMeleeScanTargetsReceived_Implementation(const UNinjaCombatMeleeScan* MeleeScan, FGameplayAbilityTargetDataHandle const& Data); \
	DECLARE_FUNCTION(execHandleOpportunityAttackStarting); \
	DECLARE_FUNCTION(execBuildCameraAnimationParameters); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execConfigureAndPlayCameraAnimation); \
	DECLARE_FUNCTION(execCreateSpecHandleForOpportunityHit); \
	DECLARE_FUNCTION(execInitializeProjectileTask); \
	DECLARE_FUNCTION(execInitializeMeleeScanTask); \
	DECLARE_FUNCTION(execHandleVictimDeath); \
	DECLARE_FUNCTION(execRemoveOpportunityGameplayEffects); \
	DECLARE_FUNCTION(execApplyOpportunityGameplayEffects); \
	DECLARE_FUNCTION(execExecuteOpportunityAttack); \
	DECLARE_FUNCTION(execCollectAdditionalSceneActors); \
	DECLARE_FUNCTION(execHandleProjectileLaunched); \
	DECLARE_FUNCTION(execHandleMeleeScanTargetsReceived); \
	DECLARE_FUNCTION(execHandleAvatarLeftScene); \
	DECLARE_FUNCTION(execHandleTargetReady); \
	DECLARE_FUNCTION(execUnlockTarget); \
	DECLARE_FUNCTION(execLockTarget); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetCurrentVictim); \
	DECLARE_FUNCTION(execHasVictim);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_OpportunityAttack(); \
	friend struct Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_OpportunityAttack, UNinjaCombatGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_OpportunityAttack) \
	virtual UObject* _getUObject() const override { return const_cast<UCombatAbility_OpportunityAttack*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_OpportunityAttack(UCombatAbility_OpportunityAttack&&); \
	UCombatAbility_OpportunityAttack(const UCombatAbility_OpportunityAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_OpportunityAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_OpportunityAttack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAbility_OpportunityAttack) \
	NO_API virtual ~UCombatAbility_OpportunityAttack();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_40_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_OpportunityAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
