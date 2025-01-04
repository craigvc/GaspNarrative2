// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatProjectileActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraSystem;
class UProjectileMovementComponent;
class USoundBase;
class USphereComponent;
struct FGameplayTag; 
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_NinjaCombatProjectileActor_generated_h
#error "NinjaCombatProjectileActor.generated.h already included, missing '#pragma once' in NinjaCombatProjectileActor.h"
#endif
#define NINJACOMBAT_NinjaCombatProjectileActor_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSoftObjectPtr<USoundBase> SelectHitImpactSound_Implementation(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const; \
	virtual TSoftObjectPtr<UNiagaraSystem> SelectHitImpactParticles_Implementation(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const; \
	virtual TMap<FGameplayTag,float> GetAdditionalSetByCallerMagnitudes_Implementation() const; \
	virtual FGameplayTagContainer GetDynamicGameplayTags_Implementation() const; \
	virtual void HandleProjectileExhausted_Implementation(); \
	virtual void HandleActorHit_Implementation(FHitResult const& ImpactResult); \
	virtual void AdjustHitResult_Implementation(FHitResult const& ImpactResult, FHitResult& AdjustedResult); \
	virtual void SetupIgnoredActors_Implementation(); \
	virtual FRotator GetInitialRotation_Implementation() const; \
	virtual void LaunchToLocation_Implementation(FVector Location); \
	virtual void LaunchToTarget_Implementation(const AActor* Target); \
	virtual void LaunchForward_Implementation(); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileStop); \
	DECLARE_FUNCTION(execSelectHitImpactSound); \
	DECLARE_FUNCTION(execSelectHitImpactParticles); \
	DECLARE_FUNCTION(execOnRep_LaunchVelocity); \
	DECLARE_FUNCTION(execOnImpactHitAudioFinished); \
	DECLARE_FUNCTION(execGetAdditionalSetByCallerMagnitudes); \
	DECLARE_FUNCTION(execGetDynamicGameplayTags); \
	DECLARE_FUNCTION(execHandleProjectileExhausted); \
	DECLARE_FUNCTION(execHandleActorHit); \
	DECLARE_FUNCTION(execAdjustHitResult); \
	DECLARE_FUNCTION(execSetupIgnoredActors); \
	DECLARE_FUNCTION(execGetInitialRotation); \
	DECLARE_FUNCTION(execSetInitialLocation); \
	DECLARE_FUNCTION(execGetInitialLocation); \
	DECLARE_FUNCTION(execLaunchToLocation); \
	DECLARE_FUNCTION(execLaunchToTarget); \
	DECLARE_FUNCTION(execLaunchForward); \
	DECLARE_FUNCTION(execGetBounceCount); \
	DECLARE_FUNCTION(execGetProjectileMovement); \
	DECLARE_FUNCTION(execGetCapsuleComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatProjectileActor(); \
	friend struct Z_Construct_UClass_ANinjaCombatProjectileActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatProjectileActor, ANinjaCombatPoolableActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatProjectileActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaCombatProjectileActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LaunchVelocity=NETFIELD_REP_START, \
		NETFIELD_REP_END=LaunchVelocity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaCombatProjectileActor(ANinjaCombatProjectileActor&&); \
	ANinjaCombatProjectileActor(const ANinjaCombatProjectileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatProjectileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatProjectileActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCombatProjectileActor) \
	NO_API virtual ~ANinjaCombatProjectileActor();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_33_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class ANinjaCombatProjectileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileActor_h


#define FOREACH_ENUM_EPROJECTILEAIMINGMODE(op) \
	op(EProjectileAimingMode::Forward) \
	op(EProjectileAimingMode::TargetingSystem) \
	op(EProjectileAimingMode::Location) 

enum class EProjectileAimingMode : uint8;
template<> struct TIsUEnumClass<EProjectileAimingMode> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<EProjectileAimingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
