// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayCombatAnimation;
class UAnimInstance;
class UAnimMontage;
class UGameplayAbility;
#ifdef NINJACOMBAT_AbilityTask_PlayCombatAnimation_generated_h
#error "AbilityTask_PlayCombatAnimation.generated.h already included, missing '#pragma once' in AbilityTask_PlayCombatAnimation.h"
#endif
#define NINJACOMBAT_AbilityTask_PlayCombatAnimation_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UAnimInstance* GetAnimInstance_Implementation(UGameplayAbility* GameplayAbility) const; \
	DECLARE_FUNCTION(execHandleOriginalAnimationInterrupted); \
	DECLARE_FUNCTION(execHandleOriginalAnimationCancelled); \
	DECLARE_FUNCTION(execHandleOriginalAnimationBlendOut); \
	DECLARE_FUNCTION(execHandleOriginalAnimationCompleted); \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execMoveToSection); \
	DECLARE_FUNCTION(execHasSection); \
	DECLARE_FUNCTION(execCreatePlayCombatAnimationProxy);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayCombatAnimation(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayCombatAnimation, UAbilityTask_PlayMontageAndWait, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayCombatAnimation) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilityTask_PlayCombatAnimation*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PlayCombatAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_PlayCombatAnimation(UAbilityTask_PlayCombatAnimation&&); \
	UAbilityTask_PlayCombatAnimation(const UAbilityTask_PlayCombatAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayCombatAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayCombatAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayCombatAnimation) \
	NO_API virtual ~UAbilityTask_PlayCombatAnimation();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UAbilityTask_PlayCombatAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
