// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/CombatAbility_Cast.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaCombatCastRequest;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAbilityTargetingLocationInfo;
struct FTargetingRequestHandle;
#ifdef NINJACOMBAT_CombatAbility_Cast_generated_h
#error "CombatAbility_Cast.generated.h already included, missing '#pragma once' in CombatAbility_Cast.h"
#endif
#define NINJACOMBAT_CombatAbility_Cast_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTargetDataCancelled_Implementation(FGameplayAbilityTargetDataHandle const& Data); \
	virtual void HandleTargetDataConfirmed_Implementation(FGameplayAbilityTargetDataHandle const& Data); \
	virtual void HandleCastActorSpawned_Implementation(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor); \
	virtual void HandleCastActorReady_Implementation(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor); \
	virtual void HandleTargetsReady_Implementation(FTargetingRequestHandle TargetingRequestHandle); \
	virtual void CastToTargets_Implementation(TArray<AActor*> const& TargetsFound); \
	virtual FGameplayAbilityTargetingLocationInfo CreateTargetingSource_Implementation() const; \
	virtual FTransform GetTargetingSourceTransform_Implementation() const; \
	DECLARE_FUNCTION(execHandleTargetDataCancelled); \
	DECLARE_FUNCTION(execHandleTargetDataConfirmed); \
	DECLARE_FUNCTION(execHandleCastActorSpawned); \
	DECLARE_FUNCTION(execHandleCastActorReady); \
	DECLARE_FUNCTION(execHandleTargetsReady); \
	DECLARE_FUNCTION(execCastToTargets); \
	DECLARE_FUNCTION(execCreateTargetingSource); \
	DECLARE_FUNCTION(execGetTargetingSourceTransform); \
	DECLARE_FUNCTION(execSpawnTargetingActorAndWaitConfirmation); \
	DECLARE_FUNCTION(execSpawnCastActor); \
	DECLARE_FUNCTION(execCollectTargetsFromTargetingSystem); \
	DECLARE_FUNCTION(execStartCast);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAbility_Cast(); \
	friend struct Z_Construct_UClass_UCombatAbility_Cast_Statics; \
public: \
	DECLARE_CLASS(UCombatAbility_Cast, UNinjaCombatAnimationAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UCombatAbility_Cast) \
	virtual UObject* _getUObject() const override { return const_cast<UCombatAbility_Cast*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAbility_Cast(UCombatAbility_Cast&&); \
	UCombatAbility_Cast(const UCombatAbility_Cast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAbility_Cast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAbility_Cast); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAbility_Cast) \
	NO_API virtual ~UCombatAbility_Cast();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_109_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAbility_Cast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h


#define FOREACH_ENUM_ECOMBATCASTTRIGGER(op) \
	op(ECombatCastTrigger::AbilityActivation) \
	op(ECombatCastTrigger::GameplayEvent) 

enum class ECombatCastTrigger : uint8;
template<> struct TIsUEnumClass<ECombatCastTrigger> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastTrigger>();

#define FOREACH_ENUM_ECOMBATCASTTARGETING(op) \
	op(ECombatCastTargeting::TargetingSystem) \
	op(ECombatCastTargeting::SpawnActor) \
	op(ECombatCastTargeting::WaitForConfirmation) \
	op(ECombatCastTargeting::WaitForConfirmationAndSpawnActor) 

enum class ECombatCastTargeting : uint8;
template<> struct TIsUEnumClass<ECombatCastTargeting> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastTargeting>();

#define FOREACH_ENUM_ECOMBATCASTCOMMITTIME(op) \
	op(ECombatCastCommitTime::AbilityActivates) \
	op(ECombatCastCommitTime::CastStarts) \
	op(ECombatCastCommitTime::TargetsAcquired) 

enum class ECombatCastCommitTime : uint8;
template<> struct TIsUEnumClass<ECombatCastCommitTime> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastCommitTime>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
