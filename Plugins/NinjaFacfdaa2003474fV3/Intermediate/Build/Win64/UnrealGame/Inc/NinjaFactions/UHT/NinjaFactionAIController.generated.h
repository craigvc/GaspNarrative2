// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NinjaFactionAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFactionMembership;
#ifdef NINJAFACTIONS_NinjaFactionAIController_generated_h
#error "NinjaFactionAIController.generated.h already included, missing '#pragma once' in NinjaFactionAIController.h"
#endif
#define NINJAFACTIONS_NinjaFactionAIController_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFactionAdded_Implementation(FFactionMembership const& FactionMembership); \
	DECLARE_FUNCTION(execOnFactionAdded); \
	DECLARE_FUNCTION(execRefreshPerceptionSystem); \
	DECLARE_FUNCTION(execInitializeDefaultTeam);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaFactionAIController(); \
	friend struct Z_Construct_UClass_ANinjaFactionAIController_Statics; \
public: \
	DECLARE_CLASS(ANinjaFactionAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(ANinjaFactionAIController)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaFactionAIController(ANinjaFactionAIController&&); \
	ANinjaFactionAIController(const ANinjaFactionAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaFactionAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaFactionAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANinjaFactionAIController) \
	NO_API virtual ~ANinjaFactionAIController();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_23_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class ANinjaFactionAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_AI_NinjaFactionAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
