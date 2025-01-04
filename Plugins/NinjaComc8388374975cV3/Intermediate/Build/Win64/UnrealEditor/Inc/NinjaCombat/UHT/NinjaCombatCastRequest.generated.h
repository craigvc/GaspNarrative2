// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatCastRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UNinjaCombatCastRequest;
class UObject;
#ifdef NINJACOMBAT_NinjaCombatCastRequest_generated_h
#error "NinjaCombatCastRequest.generated.h already included, missing '#pragma once' in NinjaCombatCastRequest.h"
#endif
#define NINJACOMBAT_NinjaCombatCastRequest_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ModifyCastActor_Implementation(AActor* CastActor) const; \
	DECLARE_FUNCTION(execModifyCastActor); \
	DECLARE_FUNCTION(execSpawnCastActor); \
	DECLARE_FUNCTION(execReinforceCastClass); \
	DECLARE_FUNCTION(execSetCastTransform); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execGetCastTransform); \
	DECLARE_FUNCTION(execGetSourceLocation); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetRequestOwner); \
	DECLARE_FUNCTION(execGetRequestSource); \
	DECLARE_FUNCTION(execNewInstance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatCastRequest(); \
	friend struct Z_Construct_UClass_UNinjaCombatCastRequest_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatCastRequest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatCastRequest)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatCastRequest(UNinjaCombatCastRequest&&); \
	UNinjaCombatCastRequest(const UNinjaCombatCastRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatCastRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatCastRequest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatCastRequest) \
	NO_API virtual ~UNinjaCombatCastRequest();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatCastRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
