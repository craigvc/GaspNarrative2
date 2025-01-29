// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/NarrativeSaveSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevel;
class UNarrativeSave;
class UWorld;
struct FGuid;
#ifdef NARRATIVESAVESYSTEM_NarrativeSaveSubsystem_generated_h
#error "NarrativeSaveSubsystem.generated.h already included, missing '#pragma once' in NarrativeSaveSubsystem.h"
#endif
#define NARRATIVESAVESYSTEM_NarrativeSaveSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_11_DELEGATE \
NARRATIVESAVESYSTEM_API void FOnSavePhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSavePhaseChanged);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelAddedToWorld); \
	DECLARE_FUNCTION(execPreLevelRemovedFromWorld); \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execOnActorSpawned); \
	DECLARE_FUNCTION(execOnActorPrespawned); \
	DECLARE_FUNCTION(execLookupActorByGUID); \
	DECLARE_FUNCTION(execGetSaveObject); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execIsSavingDisabled); \
	DECLARE_FUNCTION(execSetSavingDisabled); \
	DECLARE_FUNCTION(execRemoveSingleActor); \
	DECLARE_FUNCTION(execSaveSingleActor); \
	DECLARE_FUNCTION(execLoadSingleActor); \
	DECLARE_FUNCTION(execDeferredLoadPlayerData); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeSaveSubsystem(); \
	friend struct Z_Construct_UClass_UNarrativeSaveSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNarrativeSaveSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeSaveSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeSaveSubsystem(UNarrativeSaveSubsystem&&); \
	UNarrativeSaveSubsystem(const UNarrativeSaveSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeSaveSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeSaveSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeSaveSubsystem) \
	NO_API virtual ~UNarrativeSaveSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_22_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<class UNarrativeSaveSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
