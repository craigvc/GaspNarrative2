// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaCombatDelegates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UNinjaCombatManagerComponent;
struct FDamageEntry;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_NinjaCombatDelegates_generated_h
#error "NinjaCombatDelegates.generated.h already included, missing '#pragma once' in NinjaCombatDelegates.h"
#endif
#define NINJACOMBAT_NinjaCombatDelegates_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_9_DELEGATE \
NINJACOMBAT_API void FCombatTargetChangedDelegate_DelegateWrapper(const FScriptDelegate& CombatTargetChangedDelegate, UActorComponent* TargetManager, const AActor* NewCombatTarget, const AActor* OldCombatTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_10_DELEGATE \
NINJACOMBAT_API void FCombatTargetChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatTargetChangedMCDelegate, UActorComponent* TargetManager, const AActor* NewCombatTarget, const AActor* OldCombatTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_12_DELEGATE \
NINJACOMBAT_API void FBlockingStateChangedDelegate_DelegateWrapper(const FScriptDelegate& BlockingStateChangedDelegate, UActorComponent* DefenseManager, bool bIsBlocking);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_13_DELEGATE \
NINJACOMBAT_API void FBlockingStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlockingStateChangedMCDelegate, UActorComponent* DefenseManager, bool bIsBlocking);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_15_DELEGATE \
NINJACOMBAT_API void FInvulnerabilityStateChangedDelegate_DelegateWrapper(const FScriptDelegate& InvulnerabilityStateChangedDelegate, UActorComponent* DefenseManager, bool bIsInvulnerable);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_16_DELEGATE \
NINJACOMBAT_API void FInvulnerabilityStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InvulnerabilityStateChangedMCDelegate, UActorComponent* DefenseManager, bool bIsInvulnerable);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_18_DELEGATE \
NINJACOMBAT_API void FStaggeredStateChangedDelegate_DelegateWrapper(const FScriptDelegate& StaggeredStateChangedDelegate, UActorComponent* DamageManager, bool bIsStaggered);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_19_DELEGATE \
NINJACOMBAT_API void FStaggeredStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& StaggeredStateChangedMCDelegate, UActorComponent* DamageManager, bool bIsStaggered);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_21_DELEGATE \
NINJACOMBAT_API void FComboTargetCountChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboTargetCountChangedDelegate, UActorComponent* ComboManager, int32 TargetCount);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_22_DELEGATE \
NINJACOMBAT_API void FComboTargetCountMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboTargetCountMCDelegate, UActorComponent* ComboManager, int32 TargetCount);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_24_DELEGATE \
NINJACOMBAT_API void FComboWindowChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboWindowChangedDelegate, UActorComponent* ComboManager, bool bInComboWindow);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_25_DELEGATE \
NINJACOMBAT_API void FComboWindowChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboWindowChangedMCDelegate, UActorComponent* ComboManager, bool bInComboWindow);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_27_DELEGATE \
NINJACOMBAT_API void FComboCountChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboCountChangedDelegate, UActorComponent* ComboManager, int32 ComboCount);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_28_DELEGATE \
NINJACOMBAT_API void FComboCountChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboCountChangedMCDelegate, UActorComponent* ComboManager, int32 ComboCount);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_30_DELEGATE \
NINJACOMBAT_API void FComboFinishedDelegate_DelegateWrapper(const FScriptDelegate& ComboFinishedDelegate, UActorComponent* ComboManager, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_31_DELEGATE \
NINJACOMBAT_API void FComboFinishedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboFinishedMCDelegate, UActorComponent* ComboManager, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_33_DELEGATE \
NINJACOMBAT_API void FDamageReceivedDelegate_DelegateWrapper(const FScriptDelegate& DamageReceivedDelegate, AActor* Causer, AActor* Target, FDamageEntry const& DamageEntry);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_34_DELEGATE \
NINJACOMBAT_API void FDamageReceivedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& DamageReceivedMCDelegate, AActor* Causer, AActor* Target, FDamageEntry const& DamageEntry);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_36_DELEGATE \
NINJACOMBAT_API void FOwnerDiedDelegate_DelegateWrapper(const FScriptDelegate& OwnerDiedDelegate, AActor* Actor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_37_DELEGATE \
NINJACOMBAT_API void FOwnerDiedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OwnerDiedMCDelegate, AActor* Actor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_39_DELEGATE \
NINJACOMBAT_API void FCombatAnimationEventDelegate_DelegateWrapper(const FScriptDelegate& CombatAnimationEventDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_40_DELEGATE \
NINJACOMBAT_API void FCombatAnimationEventMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatAnimationEventMCDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_42_DELEGATE \
NINJACOMBAT_API void FAttackStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttackStartedMCDelegate, UNinjaCombatManagerComponent* CombatManager, FGameplayTagContainer AbilityTags, AActor* CurrentTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatDelegates(); \
	friend struct Z_Construct_UClass_UNinjaCombatDelegates_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatDelegates)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaCombatDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatDelegates(UNinjaCombatDelegates&&); \
	UNinjaCombatDelegates(const UNinjaCombatDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatDelegates) \
	NO_API virtual ~UNinjaCombatDelegates();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_44_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatDelegates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
