// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaFactionAttitudeSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaFactionComponent;
class UNinjaFactionDataAsset;
#ifdef NINJAFACTIONS_NinjaFactionAttitudeSolver_generated_h
#error "NinjaFactionAttitudeSolver.generated.h already included, missing '#pragma once' in NinjaFactionAttitudeSolver.h"
#endif
#define NINJAFACTIONS_NinjaFactionAttitudeSolver_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeSolver_Implementation(); \
	virtual ETeamAttitude::Type SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const; \
	DECLARE_FUNCTION(execGetMainFaction); \
	DECLARE_FUNCTION(execGetFactionComponent); \
	DECLARE_FUNCTION(execInitializeSolver); \
	DECLARE_FUNCTION(execSolveAttitude);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaFactionAttitudeSolver(); \
	friend struct Z_Construct_UClass_UNinjaFactionAttitudeSolver_Statics; \
public: \
	DECLARE_CLASS(UNinjaFactionAttitudeSolver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(UNinjaFactionAttitudeSolver)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaFactionAttitudeSolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaFactionAttitudeSolver(UNinjaFactionAttitudeSolver&&); \
	UNinjaFactionAttitudeSolver(const UNinjaFactionAttitudeSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaFactionAttitudeSolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaFactionAttitudeSolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaFactionAttitudeSolver) \
	NO_API virtual ~UNinjaFactionAttitudeSolver();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UNinjaFactionAttitudeSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionAttitudeSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
