// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
struct FGameplayTag;
#ifdef NINJACOMBAT_NinjaCombatBaseComponent_generated_h
#error "NinjaCombatBaseComponent.generated.h already included, missing '#pragma once' in NinjaCombatBaseComponent.h"
#endif
#define NINJACOMBAT_NinjaCombatBaseComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindToAbilitySystemComponent); \
	DECLARE_FUNCTION(execSetAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetCachedAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromOwner); \
	DECLARE_FUNCTION(execHasGameplayTag); \
	DECLARE_FUNCTION(execOwnerIsLocalPlayer); \
	DECLARE_FUNCTION(execOwnerIsLocallyControlled); \
	DECLARE_FUNCTION(execOwnerHasAuthority);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatBaseComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatBaseComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatBaseComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatBaseComponent(UNinjaCombatBaseComponent&&); \
	UNinjaCombatBaseComponent(const UNinjaCombatBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatBaseComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatBaseComponent) \
	NO_API virtual ~UNinjaCombatBaseComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
