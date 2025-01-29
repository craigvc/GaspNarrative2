// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NarrativeNPCSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANarrativeCharacter;
class ANarrativeNPCCharacter;
class UAsyncAction_FindOrSpawnNPC;
class UCharacterDefinition;
class UNPCDefinition;
class UObject;
struct FPrimaryAssetId;
#ifdef NARRATIVEARSENAL_NarrativeNPCSubsystem_generated_h
#error "NarrativeNPCSubsystem.generated.h already included, missing '#pragma once' in NarrativeNPCSubsystem.h"
#endif
#define NARRATIVEARSENAL_NarrativeNPCSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_14_DELEGATE \
NARRATIVEARSENAL_API void FOnRequestedNPCSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCSpawned, const UNPCDefinition* NPCData, ANarrativeNPCCharacter* Character);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_17_DELEGATE \
NARRATIVEARSENAL_API void FOnRequestedNPCReady_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCReady, ANarrativeNPCCharacter* Character);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNPCSpawned); \
	DECLARE_FUNCTION(execFindOrSpawnNPC);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_FindOrSpawnNPC(); \
	friend struct Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_FindOrSpawnNPC, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_FindOrSpawnNPC)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_FindOrSpawnNPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncAction_FindOrSpawnNPC(UAsyncAction_FindOrSpawnNPC&&); \
	UAsyncAction_FindOrSpawnNPC(const UAsyncAction_FindOrSpawnNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_FindOrSpawnNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_FindOrSpawnNPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_FindOrSpawnNPC) \
	NO_API virtual ~UAsyncAction_FindOrSpawnNPC();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_20_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UAsyncAction_FindOrSpawnNPC>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterArray_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FCharacterArray>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNPCArray_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FNPCArray>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execOnActorSpawned); \
	DECLARE_FUNCTION(execOnNPCClassLoaded); \
	DECLARE_FUNCTION(execIsCharacterSpawned); \
	DECLARE_FUNCTION(execFindCharacters); \
	DECLARE_FUNCTION(execFindNPCs); \
	DECLARE_FUNCTION(execFindCharacter); \
	DECLARE_FUNCTION(execFindNPC); \
	DECLARE_FUNCTION(execFindOrSpawnNPC); \
	DECLARE_FUNCTION(execSpawnNPC);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeNPCSubsystem(); \
	friend struct Z_Construct_UClass_UNarrativeNPCSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNPCSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNPCSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeNPCSubsystem(UNarrativeNPCSubsystem&&); \
	UNarrativeNPCSubsystem(const UNarrativeNPCSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNPCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNPCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeNPCSubsystem) \
	NO_API virtual ~UNarrativeNPCSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_110_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeNPCSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
