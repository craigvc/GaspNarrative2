// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaFactionDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaFactionDataAsset;
struct FFactionReputationTableRow;
struct FGameplayTag;
#ifdef NINJAFACTIONS_NinjaFactionDatabase_generated_h
#error "NinjaFactionDatabase.generated.h already included, missing '#pragma once' in NinjaFactionDatabase.h"
#endif
#define NINJAFACTIONS_NinjaFactionDatabase_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetReputationTier_Implementation(int32 Reputation, FFactionReputationTableRow& OutReputationTier) const; \
	virtual void GetReputationTiers_Implementation(TArray<FFactionReputationTableRow>& OutReputationTiers) const; \
	virtual void GetFactions_Implementation(TArray<UNinjaFactionDataAsset*>& OutFactions) const; \
	virtual UNinjaFactionDataAsset* GetFaction_Implementation(FGameplayTag const& FactionTag) const; \
	virtual void InitializeDatabase_Implementation(); \
	DECLARE_FUNCTION(execGetReputationTierByName); \
	DECLARE_FUNCTION(execGetReputationTier); \
	DECLARE_FUNCTION(execGetReputationTiers); \
	DECLARE_FUNCTION(execGetFactions); \
	DECLARE_FUNCTION(execGetFaction); \
	DECLARE_FUNCTION(execInitializeDatabase);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaFactionDatabase(); \
	friend struct Z_Construct_UClass_UNinjaFactionDatabase_Statics; \
public: \
	DECLARE_CLASS(UNinjaFactionDatabase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(UNinjaFactionDatabase)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaFactionDatabase(UNinjaFactionDatabase&&); \
	UNinjaFactionDatabase(const UNinjaFactionDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaFactionDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaFactionDatabase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaFactionDatabase) \
	NO_API virtual ~UNinjaFactionDatabase();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UNinjaFactionDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
