// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Providers/NinjaCombatAnimationProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UNinjaCombatGameplayAbility;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_NinjaCombatAnimationProvider_generated_h
#error "NinjaCombatAnimationProvider.generated.h already included, missing '#pragma once' in NinjaCombatAnimationProvider.h"
#endif
#define NINJACOMBAT_NinjaCombatAnimationProvider_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetPlayRate_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const; \
	virtual FName GetSectionName_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const; \
	virtual UAnimMontage* GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const; \
	DECLARE_FUNCTION(execGetAbilityTags); \
	DECLARE_FUNCTION(execGetAbilityPlayRate); \
	DECLARE_FUNCTION(execGetAbilitySectionName); \
	DECLARE_FUNCTION(execGetAbilityAnimationMontage); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetSectionName); \
	DECLARE_FUNCTION(execGetMontageToPlay);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatAnimationProvider(); \
	friend struct Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatAnimationProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatAnimationProvider)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatAnimationProvider(UNinjaCombatAnimationProvider&&); \
	UNinjaCombatAnimationProvider(const UNinjaCombatAnimationProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatAnimationProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatAnimationProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatAnimationProvider) \
	NO_API virtual ~UNinjaCombatAnimationProvider();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_18_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatAnimationProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
