// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Serialization/NinjaFactionSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaFactionComponent;
#ifdef NINJAFACTIONS_NinjaFactionSaveGame_generated_h
#error "NinjaFactionSaveGame.generated.h already included, missing '#pragma once' in NinjaFactionSaveGame.h"
#endif
#define NINJAFACTIONS_NinjaFactionSaveGame_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadFactions); \
	DECLARE_FUNCTION(execSaveFactions);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaFactionSaveGame(); \
	friend struct Z_Construct_UClass_UNinjaFactionSaveGame_Statics; \
public: \
	DECLARE_CLASS(UNinjaFactionSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(UNinjaFactionSaveGame)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaFactionSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaFactionSaveGame(UNinjaFactionSaveGame&&); \
	UNinjaFactionSaveGame(const UNinjaFactionSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaFactionSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaFactionSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaFactionSaveGame) \
	NO_API virtual ~UNinjaFactionSaveGame();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UNinjaFactionSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Serialization_NinjaFactionSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
