// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask;
class UAbilityTask_WaitGameplayEvent;
class UActorComponent;
class UMovementComponent;
class UNinjaCombatManagerComponent;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef NINJACOMBAT_NinjaCombatGameplayAbility_generated_h
#error "NinjaCombatGameplayAbility.generated.h already included, missing '#pragma once' in NinjaCombatGameplayAbility.h"
#endif
#define NINJACOMBAT_NinjaCombatGameplayAbility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleEventReceived); \
	DECLARE_FUNCTION(execAddDebugMessage); \
	DECLARE_FUNCTION(execInitializeEventTask); \
	DECLARE_FUNCTION(execFinishLatentTask); \
	DECLARE_FUNCTION(execFinishLatentTasks); \
	DECLARE_FUNCTION(execGetMovementComponent); \
	DECLARE_FUNCTION(execGetWeaponManagerComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetTargetManagerComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetMotionWarpingComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetDefenseManagerComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetDamageManagerComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetComboManagerComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetCombatManagerComponentFromActorInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatGameplayAbility(); \
	friend struct Z_Construct_UClass_UNinjaCombatGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatGameplayAbility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatGameplayAbility(UNinjaCombatGameplayAbility&&); \
	UNinjaCombatGameplayAbility(const UNinjaCombatGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatGameplayAbility) \
	NO_API virtual ~UNinjaCombatGameplayAbility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
