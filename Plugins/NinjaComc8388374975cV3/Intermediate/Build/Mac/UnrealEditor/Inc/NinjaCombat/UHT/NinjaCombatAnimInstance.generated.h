// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/NinjaCombatAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UActorComponent;
class UCharacterMovementComponent;
#ifdef NINJACOMBAT_NinjaCombatAnimInstance_generated_h
#error "NinjaCombatAnimInstance.generated.h already included, missing '#pragma once' in NinjaCombatAnimInstance.h"
#endif
#define NINJACOMBAT_NinjaCombatAnimInstance_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CalculateBlendValues_Implementation(float DeltaSeconds); \
	virtual void CalculateLocomotionValues_Implementation(float DeltaSeconds); \
	virtual void HandleBlockingStateChanged_Implementation(UActorComponent* DefenseManager, bool bIsBlocking); \
	virtual void HandleDyingState_Implementation(AActor* Actor); \
	virtual void HandleStaggeredStateChanged_Implementation(UActorComponent* DamageManager, bool bIsStaggered); \
	virtual void HandleCombatTargetChanged_Implementation(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget); \
	DECLARE_FUNCTION(execCalculateBlendValues); \
	DECLARE_FUNCTION(execCalculateLocomotionValues); \
	DECLARE_FUNCTION(execHandleBlockingStateChanged); \
	DECLARE_FUNCTION(execHandleDyingState); \
	DECLARE_FUNCTION(execHandleStaggeredStateChanged); \
	DECLARE_FUNCTION(execHandleCombatTargetChanged); \
	DECLARE_FUNCTION(execGetCharacterMovement); \
	DECLARE_FUNCTION(execTryGetCharacterOwner);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatAnimInstance(); \
	friend struct Z_Construct_UClass_UNinjaCombatAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatAnimInstance)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatAnimInstance(UNinjaCombatAnimInstance&&); \
	UNinjaCombatAnimInstance(const UNinjaCombatAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatAnimInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatAnimInstance) \
	NO_API virtual ~UNinjaCombatAnimInstance();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
