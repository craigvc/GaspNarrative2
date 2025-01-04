// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatProjectileRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UMeshComponent;
class UNinjaCombatProjectileRequest;
class UObject;
#ifdef NINJACOMBAT_NinjaCombatProjectileRequest_generated_h
#error "NinjaCombatProjectileRequest.generated.h already included, missing '#pragma once' in NinjaCombatProjectileRequest.h"
#endif
#define NINJACOMBAT_NinjaCombatProjectileRequest_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ModifyProjectileActor_Implementation(AActor* ProjectileActor) const; \
	DECLARE_FUNCTION(execModifyProjectileActor); \
	DECLARE_FUNCTION(execSpawnProjectileActor); \
	DECLARE_FUNCTION(execReinforceProjectileClass); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execGetSourceRotation); \
	DECLARE_FUNCTION(execGetSourceLocation); \
	DECLARE_FUNCTION(execGetSocketName); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetRequestOwner); \
	DECLARE_FUNCTION(execHasValidRequestData); \
	DECLARE_FUNCTION(execGetRequestSource); \
	DECLARE_FUNCTION(execNewInstance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatProjectileRequest(); \
	friend struct Z_Construct_UClass_UNinjaCombatProjectileRequest_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatProjectileRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatProjectileRequest)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatProjectileRequest(UNinjaCombatProjectileRequest&&); \
	UNinjaCombatProjectileRequest(const UNinjaCombatProjectileRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatProjectileRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatProjectileRequest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatProjectileRequest) \
	NO_API virtual ~UNinjaCombatProjectileRequest();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatProjectileRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatProjectileRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
