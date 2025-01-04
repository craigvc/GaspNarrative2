// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_TargetLock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTargetingPreset;
struct FTargetingRequestHandle;
#ifdef NINJACOMBAT_CombatAbility_TargetLock_generated_h
#error "CombatAbility_TargetLock.generated.h already included, missing '#pragma once' in CombatAbility_TargetLock.h"
#endif
#define NINJACOMBAT_CombatAbility_TargetLock_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTargetDeath_Implementation(AActor* Actor); \
	virtual void HandleDistanceExceeded_Implementation(const AActor* Target, float Distance); \
	virtual void HandleNewTarget_Implementation(AActor* NewTarget); \
	DECLARE_FUNCTION(execStopTrackingDistance); \
	DECLARE_FUNCTION(execStartTrackingDistance); \
	DECLARE_FUNCTION(execRemoveTargetLockEffect); \
	DECLARE_FUNCTION(execApplyTargetLockEffect); \
	DECLARE_FUNCTION(execHandleTargetDeath); \
	DECLARE_FUNCTION(execHandleDistanceExceeded); \
	DECLARE_FUNCTION(execHandleNewTarget); \
	DECLARE_FUNCTION(execHandleTargetReady); \
	DECLARE_FUNCTION(execDismissCurrentTarget); \
	DECLARE_FUNCTION(execCollectTarget); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execHasTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_TargetLock(); \
	friend struct Z_Construct_UClass_UCombatAbility_TargetLock_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_TargetLock, UNinjaCombatGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_TargetLock)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_TargetLock(UCombatAbility_TargetLock&&); \
	UCombatAbility_TargetLock(const UCombatAbility_TargetLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_TargetLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_TargetLock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatAbility_TargetLock) \
	NO_API virtual ~UCombatAbility_TargetLock();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_TargetLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
