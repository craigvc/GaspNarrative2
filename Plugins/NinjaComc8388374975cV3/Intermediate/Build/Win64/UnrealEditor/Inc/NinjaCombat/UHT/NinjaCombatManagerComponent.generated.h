// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UActorComponent;
class UNinjaCombatMeleeScan;
class USceneComponent;
struct FGameplayCueParameters;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_NinjaCombatManagerComponent_generated_h
#error "NinjaCombatManagerComponent.generated.h already included, missing '#pragma once' in NinjaCombatManagerComponent.h"
#endif
#define NINJACOMBAT_NinjaCombatManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetCombatTarget_Validate(AActor* ); \
	virtual void Server_SetCombatTarget_Implementation(AActor* NewCombatTarget); \
	virtual void RotateControllerToTarget_Implementation(AController* Controller, const AActor* CurrentTarget, float DeltaTime); \
	virtual float GetBlockAngle_Implementation() const; \
	virtual UActorComponent* CreateWeaponManagerComponent_Implementation() const; \
	virtual UActorComponent* CreateTargetManagerComponent_Implementation() const; \
	virtual UActorComponent* CreatePhysicalAnimationComponent_Implementation() const; \
	virtual UActorComponent* CreateMotionWarpingComponent_Implementation() const; \
	virtual UActorComponent* CreateDissolveManagerComponent_Implementation() const; \
	virtual UActorComponent* CreateDefenseManagerComponent_Implementation() const; \
	virtual UActorComponent* CreateDamageManagerComponent_Implementation() const; \
	virtual UActorComponent* CreateComboManagerComponent_Implementation() const; \
	virtual USceneComponent* CreateForwardReference_Implementation() const; \
	virtual void GameplayCue_Combat_Death_Implementation(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters); \
	virtual void GameplayCue_Combat_Hit_Implementation(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters); \
	virtual void GameplayCue_Combat_MeleeTrails_Implementation(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters); \
	DECLARE_FUNCTION(execServer_SetCombatTarget); \
	DECLARE_FUNCTION(execOnRep_IsDead); \
	DECLARE_FUNCTION(execOnRep_IsStaggered); \
	DECLARE_FUNCTION(execOnRep_IsInvulnerable); \
	DECLARE_FUNCTION(execOnRep_IsBlocking); \
	DECLARE_FUNCTION(execOnRep_CombatTarget); \
	DECLARE_FUNCTION(execSafelyDestroyOwner); \
	DECLARE_FUNCTION(execFinishDyingWrapper); \
	DECLARE_FUNCTION(execRotateControllerToTarget); \
	DECLARE_FUNCTION(execGetBlockAngle); \
	DECLARE_FUNCTION(execCreateWeaponManagerComponent); \
	DECLARE_FUNCTION(execCreateTargetManagerComponent); \
	DECLARE_FUNCTION(execCreatePhysicalAnimationComponent); \
	DECLARE_FUNCTION(execCreateMotionWarpingComponent); \
	DECLARE_FUNCTION(execCreateDissolveManagerComponent); \
	DECLARE_FUNCTION(execCreateDefenseManagerComponent); \
	DECLARE_FUNCTION(execCreateDamageManagerComponent); \
	DECLARE_FUNCTION(execCreateComboManagerComponent); \
	DECLARE_FUNCTION(execCreateForwardReference); \
	DECLARE_FUNCTION(execHandleCombatTargetDeath); \
	DECLARE_FUNCTION(execHandleCombatTargetDestroyed); \
	DECLARE_FUNCTION(execGameplayCue_Combat_Death); \
	DECLARE_FUNCTION(execGameplayCue_Combat_Hit); \
	DECLARE_FUNCTION(execGameplayCue_Combat_MeleeTrails); \
	DECLARE_FUNCTION(execTryEnableRagdollPhysics); \
	DECLARE_FUNCTION(execBroadcastAttack); \
	DECLARE_FUNCTION(execCancelMeleeScanRequest); \
	DECLARE_FUNCTION(execRegisterMeleeScanRequest); \
	DECLARE_FUNCTION(execGetAndCacheWeaponManager); \
	DECLARE_FUNCTION(execGetAndCachePhysicalAnimation); \
	DECLARE_FUNCTION(execGetAndCacheTargetManager); \
	DECLARE_FUNCTION(execGetAndCacheMotionWarping); \
	DECLARE_FUNCTION(execGetAndCacheDissolveManager); \
	DECLARE_FUNCTION(execGetAndCacheDefenseManager); \
	DECLARE_FUNCTION(execGetAndCacheDamageManager); \
	DECLARE_FUNCTION(execGetAndCacheComboManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatManagerComponent, UNinjaCombatBaseComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaCombatManagerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CombatTarget=NETFIELD_REP_START, \
		bIsBlocking, \
		bIsInvulnerable, \
		bIsStaggered, \
		bIsDead, \
		DamageTakenList, \
		NETFIELD_REP_END=DamageTakenList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatManagerComponent(UNinjaCombatManagerComponent&&); \
	UNinjaCombatManagerComponent(const UNinjaCombatManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatManagerComponent) \
	NO_API virtual ~UNinjaCombatManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
