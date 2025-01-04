// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaFactionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaFactionComponent;
class UNinjaFactionDataAsset;
struct FFactionReputationTableRow;
struct FGameplayTag;
#ifdef NINJAFACTIONS_NinjaFactionSubsystem_generated_h
#error "NinjaFactionSubsystem.generated.h already included, missing '#pragma once' in NinjaFactionSubsystem.h"
#endif
#define NINJAFACTIONS_NinjaFactionSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttitude); \
	DECLARE_FUNCTION(execGetReputationTierByName); \
	DECLARE_FUNCTION(execGetReputationTier); \
	DECLARE_FUNCTION(execGetReputationTiers); \
	DECLARE_FUNCTION(execGetFactions); \
	DECLARE_FUNCTION(execGetFaction); \
	DECLARE_FUNCTION(execGetFactionComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaFactionSubsystem(); \
	friend struct Z_Construct_UClass_UNinjaFactionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNinjaFactionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(UNinjaFactionSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaFactionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaFactionSubsystem(UNinjaFactionSubsystem&&); \
	UNinjaFactionSubsystem(const UNinjaFactionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaFactionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaFactionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaFactionSubsystem) \
	NO_API virtual ~UNinjaFactionSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UNinjaFactionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_NinjaFactionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
