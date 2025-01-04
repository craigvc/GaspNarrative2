// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaGASPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJAGAS_NinjaGASPawn_generated_h
#error "NinjaGASPawn.generated.h already included, missing '#pragma once' in NinjaGASPawn.h"
#endif
#define NINJAGAS_NinjaGASPawn_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeFromPlayerState); \
	DECLARE_FUNCTION(execClearAbilitySystemComponent); \
	DECLARE_FUNCTION(execSetupAbilitySystemComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaGASPawn(); \
	friend struct Z_Construct_UClass_ANinjaGASPawn_Statics; \
public: \
	DECLARE_CLASS(ANinjaGASPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaGAS"), NO_API) \
	DECLARE_SERIALIZER(ANinjaGASPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaGASPawn*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaGASPawn(ANinjaGASPawn&&); \
	ANinjaGASPawn(const ANinjaGASPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaGASPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaGASPawn); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaGASPawn) \
	NO_API virtual ~ANinjaGASPawn();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAGAS_API UClass* StaticClass<class ANinjaGASPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
