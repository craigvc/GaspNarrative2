// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaCombatAnimationAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask;
#ifdef NINJACOMBAT_NinjaCombatAnimationAbility_generated_h
#error "NinjaCombatAnimationAbility.generated.h already included, missing '#pragma once' in NinjaCombatAnimationAbility.h"
#endif
#define NINJACOMBAT_NinjaCombatAnimationAbility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupAndPlayAnimation_Implementation(); \
	virtual UAbilityTask* InitializeAnimationTask_Implementation(); \
	DECLARE_FUNCTION(execOnAnimationCancelled); \
	DECLARE_FUNCTION(execOnAnimationFinished); \
	DECLARE_FUNCTION(execOnAnimationStarted); \
	DECLARE_FUNCTION(execSetupAndPlayAnimation); \
	DECLARE_FUNCTION(execInitializeAnimationTask); \
	DECLARE_FUNCTION(execHasSection); \
	DECLARE_FUNCTION(execMoveToSection); \
	DECLARE_FUNCTION(execPlayAnimationMontage);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatAnimationAbility(); \
	friend struct Z_Construct_UClass_UNinjaCombatAnimationAbility_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatAnimationAbility, UNinjaCombatGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatAnimationAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaCombatAnimationAbility*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatAnimationAbility(UNinjaCombatAnimationAbility&&); \
	UNinjaCombatAnimationAbility(const UNinjaCombatAnimationAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatAnimationAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatAnimationAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatAnimationAbility) \
	NO_API virtual ~UNinjaCombatAnimationAbility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatAnimationAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAnimationAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
