// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Tasks/AbilityTask_SpawnProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SpawnProjectile;
class UGameplayAbility;
class UNinjaCombatProjectileRequest;
#ifdef NINJACOMBAT_AbilityTask_SpawnProjectile_generated_h
#error "AbilityTask_SpawnProjectile.generated.h already included, missing '#pragma once' in AbilityTask_SpawnProjectile.h"
#endif
#define NINJACOMBAT_AbilityTask_SpawnProjectile_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_17_DELEGATE \
static void FProjectileLaunch_DelegateWrapper(const FMulticastScriptDelegate& ProjectileLaunch, const UNinjaCombatProjectileRequest* Request, AActor* Projectile);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddProjectileRequest); \
	DECLARE_FUNCTION(execCreateTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_SpawnProjectile)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_SpawnProjectile(UAbilityTask_SpawnProjectile&&); \
	UAbilityTask_SpawnProjectile(const UAbilityTask_SpawnProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_SpawnProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SpawnProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_SpawnProjectile) \
	NO_API virtual ~UAbilityTask_SpawnProjectile();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UAbilityTask_SpawnProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
