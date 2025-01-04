// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/Notifies/AnimNotify_LaunchProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMeshComponent;
class UNinjaCombatProjectileRequest;
#ifdef NINJACOMBAT_AnimNotify_LaunchProjectile_generated_h
#error "AnimNotify_LaunchProjectile.generated.h already included, missing '#pragma once' in AnimNotify_LaunchProjectile.h"
#endif
#define NINJACOMBAT_AnimNotify_LaunchProjectile_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<AActor> GetProjectileClass_Implementation(const AActor* Owner) const; \
	virtual UNinjaCombatProjectileRequest* CreateRequestInstance_Implementation(AActor* Owner, UMeshComponent* SourceMesh) const; \
	DECLARE_FUNCTION(execGetProjectileClass); \
	DECLARE_FUNCTION(execCreateRequestInstance); \
	DECLARE_FUNCTION(execGetRangedMesh); \
	DECLARE_FUNCTION(execGetWeaponActor);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotify_LaunchProjectile(); \
	friend struct Z_Construct_UClass_UAnimNotify_LaunchProjectile_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify_LaunchProjectile, UNinjaCombatAnimNotify, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify_LaunchProjectile)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotify_LaunchProjectile(UAnimNotify_LaunchProjectile&&); \
	UAnimNotify_LaunchProjectile(const UAnimNotify_LaunchProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify_LaunchProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify_LaunchProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNotify_LaunchProjectile) \
	NO_API virtual ~UAnimNotify_LaunchProjectile();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UAnimNotify_LaunchProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_LaunchProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
