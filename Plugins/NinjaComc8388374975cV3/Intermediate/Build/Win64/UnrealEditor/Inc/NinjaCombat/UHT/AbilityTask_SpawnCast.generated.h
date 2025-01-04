// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Tasks/AbilityTask_SpawnCast.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SpawnCast;
class UGameplayAbility;
class UNinjaCombatCastRequest;
#ifdef NINJACOMBAT_AbilityTask_SpawnCast_generated_h
#error "AbilityTask_SpawnCast.generated.h already included, missing '#pragma once' in AbilityTask_SpawnCast.h"
#endif
#define NINJACOMBAT_AbilityTask_SpawnCast_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_17_DELEGATE \
static void FCastReady_DelegateWrapper(const FMulticastScriptDelegate& CastReady, const UNinjaCombatCastRequest* Request, AActor* CastActor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddCastRequest); \
	DECLARE_FUNCTION(execCreateTask);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_SpawnCast(); \
	friend struct Z_Construct_UClass_UAbilityTask_SpawnCast_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_SpawnCast, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_SpawnCast)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_SpawnCast(UAbilityTask_SpawnCast&&); \
	UAbilityTask_SpawnCast(const UAbilityTask_SpawnCast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_SpawnCast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SpawnCast); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityTask_SpawnCast) \
	NO_API virtual ~UAbilityTask_SpawnCast();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UAbilityTask_SpawnCast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_SpawnCast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
