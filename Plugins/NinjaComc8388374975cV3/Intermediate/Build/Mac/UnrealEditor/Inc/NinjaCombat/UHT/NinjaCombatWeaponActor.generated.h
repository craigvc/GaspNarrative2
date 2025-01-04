// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatWeaponActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakeBase;
class UNiagaraSystem;
class USoundBase;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_NinjaCombatWeaponActor_generated_h
#error "NinjaCombatWeaponActor.generated.h already included, missing '#pragma once' in NinjaCombatWeaponActor.h"
#endif
#define NINJACOMBAT_NinjaCombatWeaponActor_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSoftClassPtr<UCameraShakeBase>  SelectMeleeImpactCameraShake_Implementation(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const; \
	virtual TSoftObjectPtr<USoundBase> SelectMeleeImpactSound_Implementation(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const; \
	virtual TSoftObjectPtr<UNiagaraSystem> SelectMeleeImpactParticles_Implementation(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const; \
	DECLARE_FUNCTION(execOnImpactHitAudioFinished); \
	DECLARE_FUNCTION(execSelectMeleeImpactCameraShake); \
	DECLARE_FUNCTION(execSelectMeleeImpactSound); \
	DECLARE_FUNCTION(execSelectMeleeImpactParticles);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatWeaponActor(); \
	friend struct Z_Construct_UClass_ANinjaCombatWeaponActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatWeaponActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatWeaponActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaCombatWeaponActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponTags=NETFIELD_REP_START, \
		NETFIELD_REP_END=WeaponTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaCombatWeaponActor(ANinjaCombatWeaponActor&&); \
	ANinjaCombatWeaponActor(const ANinjaCombatWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatWeaponActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCombatWeaponActor) \
	NO_API virtual ~ANinjaCombatWeaponActor();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_24_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class ANinjaCombatWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
