// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatMeleeScan.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
class UMeshComponent;
class UNinjaCombatMeleeScan;
enum class EMeleeScanMode : uint8;
struct FGameplayTag;
struct FHitResult;
#ifdef NINJACOMBAT_NinjaCombatMeleeScan_generated_h
#error "NinjaCombatMeleeScan.generated.h already included, missing '#pragma once' in NinjaCombatMeleeScan.h"
#endif
#define NINJACOMBAT_NinjaCombatMeleeScan_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<AActor*> GetIgnoredActors_Implementation() const; \
	virtual void ScanForTargets_Implementation(TArray<FHitResult>& OutHits); \
	DECLARE_FUNCTION(execGetIgnoredActors); \
	DECLARE_FUNCTION(execScanForTargets); \
	DECLARE_FUNCTION(execSnapshotSocketPositions); \
	DECLARE_FUNCTION(execSetTrailGameplayCue); \
	DECLARE_FUNCTION(execSetMeleeHitOverride); \
	DECLARE_FUNCTION(execGetTrailGameplayCueTag); \
	DECLARE_FUNCTION(execGetMeleeHitOverride); \
	DECLARE_FUNCTION(execHasValidScanData); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetCauser); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execNewInstance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatMeleeScan(); \
	friend struct Z_Construct_UClass_UNinjaCombatMeleeScan_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatMeleeScan, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatMeleeScan)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatMeleeScan(UNinjaCombatMeleeScan&&); \
	UNinjaCombatMeleeScan(const UNinjaCombatMeleeScan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatMeleeScan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatMeleeScan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatMeleeScan) \
	NO_API virtual ~UNinjaCombatMeleeScan();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatMeleeScan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
