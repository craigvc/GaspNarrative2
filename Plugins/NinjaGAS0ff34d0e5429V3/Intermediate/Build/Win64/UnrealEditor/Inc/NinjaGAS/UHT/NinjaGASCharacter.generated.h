// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaGASCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJAGAS_NinjaGASCharacter_generated_h
#error "NinjaGASCharacter.generated.h already included, missing '#pragma once' in NinjaGASCharacter.h"
#endif
#define NINJAGAS_NinjaGASCharacter_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeFromPlayerState); \
	DECLARE_FUNCTION(execClearAbilitySystemComponent); \
	DECLARE_FUNCTION(execSetupAbilitySystemComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaGASCharacter(); \
	friend struct Z_Construct_UClass_ANinjaGASCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaGASCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaGAS"), NO_API) \
	DECLARE_SERIALIZER(ANinjaGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaGASCharacter*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaGASCharacter(ANinjaGASCharacter&&); \
	ANinjaGASCharacter(const ANinjaGASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaGASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaGASCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaGASCharacter) \
	NO_API virtual ~ANinjaGASCharacter();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAGAS_API UClass* StaticClass<class ANinjaGASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_GameFramework_NinjaGASCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
