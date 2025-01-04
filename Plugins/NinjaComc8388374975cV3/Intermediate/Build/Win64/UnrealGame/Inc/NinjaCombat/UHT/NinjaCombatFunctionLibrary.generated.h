// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaCombatFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ICombatMeleeInterface;
class ICombatRangedInterface;
class UActorComponent;
class UAnimInstance;
class UDecalComponent;
class UGameplayEffect;
class UMaterialInterface;
class UNiagaraSystem;
class UNinjaCombatManagerComponent;
class UObject;
class USkeletalMeshComponent;
struct FActiveGameplayEffect;
struct FActiveGameplayEffectHandle;
struct FBasicParticleData;
struct FDamageEntry;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;
struct FGameplayTag; 
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_NinjaCombatFunctionLibrary_generated_h
#error "NinjaCombatFunctionLibrary.generated.h already included, missing '#pragma once' in NinjaCombatFunctionLibrary.h"
#endif
#define NINJACOMBAT_NinjaCombatFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDetachedGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBreakActiveGameplayEffect); \
	DECLARE_FUNCTION(execSpawnBloodDecal); \
	DECLARE_FUNCTION(execCreateGameplayCueFromEffectContext); \
	DECLARE_FUNCTION(execRemoveGameplayCueLocally); \
	DECLARE_FUNCTION(execAddGameplayCueLocally); \
	DECLARE_FUNCTION(execExecuteGameplayCueLocally); \
	DECLARE_FUNCTION(execBreakDamageStruct); \
	DECLARE_FUNCTION(execCalculateHitAngleFromHitResult); \
	DECLARE_FUNCTION(execGetRangedScript); \
	DECLARE_FUNCTION(execGetMeleeScript); \
	DECLARE_FUNCTION(execIsValidWeaponManagerComponent); \
	DECLARE_FUNCTION(execIsValidTargetManagerComponent); \
	DECLARE_FUNCTION(execIsValidPhysicalAnimationComponent); \
	DECLARE_FUNCTION(execIsValidMotionWarpingComponent); \
	DECLARE_FUNCTION(execIsValidDissolveManagerComponent); \
	DECLARE_FUNCTION(execIsValidDefenseManagerComponent); \
	DECLARE_FUNCTION(execIsValidDamageManagerComponent); \
	DECLARE_FUNCTION(execIsValidComboManagerComponent); \
	DECLARE_FUNCTION(execGetWeaponManagerComponent); \
	DECLARE_FUNCTION(execGetTargetManagerComponent); \
	DECLARE_FUNCTION(execGetPhysicalAnimationComponent); \
	DECLARE_FUNCTION(execGetMotionWarpingComponent); \
	DECLARE_FUNCTION(execGetDissolveManagerComponent); \
	DECLARE_FUNCTION(execGetDefenseManagerComponent); \
	DECLARE_FUNCTION(execGetDamageManagerComponent); \
	DECLARE_FUNCTION(execGetComboManagerComponent); \
	DECLARE_FUNCTION(execGetAnimationInstance); \
	DECLARE_FUNCTION(execGetCombatMesh); \
	DECLARE_FUNCTION(execGetCombatManagerComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaCombatFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatFunctionLibrary(UNinjaCombatFunctionLibrary&&); \
	UNinjaCombatFunctionLibrary(const UNinjaCombatFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatFunctionLibrary) \
	NO_API virtual ~UNinjaCombatFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
