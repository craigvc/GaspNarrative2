// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Damage/NinjaCombatDamageHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FGameplayCueParameters;
#ifdef NINJACOMBAT_NinjaCombatDamageHandler_generated_h
#error "NinjaCombatDamageHandler.generated.h already included, missing '#pragma once' in NinjaCombatDamageHandler.h"
#endif
#define NINJACOMBAT_NinjaCombatDamageHandler_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, FGameplayCueParameters const& Parameters) const; \
	DECLARE_FUNCTION(execIsTargetLocallyController); \
	DECLARE_FUNCTION(execIsTargetAuthoritative); \
	DECLARE_FUNCTION(execIsSourceLocallyController); \
	DECLARE_FUNCTION(execIsSourceAuthoritative); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsFatalHit); \
	DECLARE_FUNCTION(execIsCriticalHit); \
	DECLARE_FUNCTION(execIsStaggerHit); \
	DECLARE_FUNCTION(execIsBreakerHit); \
	DECLARE_FUNCTION(execIsBlockedHit); \
	DECLARE_FUNCTION(execIsRangedDamage); \
	DECLARE_FUNCTION(execIsMeleeDamage); \
	DECLARE_FUNCTION(execHandleDamage);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatDamageHandler(); \
	friend struct Z_Construct_UClass_UNinjaCombatDamageHandler_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatDamageHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatDamageHandler)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaCombatDamageHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatDamageHandler(UNinjaCombatDamageHandler&&); \
	UNinjaCombatDamageHandler(const UNinjaCombatDamageHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatDamageHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatDamageHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatDamageHandler) \
	NO_API virtual ~UNinjaCombatDamageHandler();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatDamageHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
