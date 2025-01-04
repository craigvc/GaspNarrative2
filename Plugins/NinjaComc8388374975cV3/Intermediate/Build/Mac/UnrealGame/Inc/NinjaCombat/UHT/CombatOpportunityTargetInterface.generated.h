// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatOpportunityTargetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UContextualAnimSceneAsset;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_CombatOpportunityTargetInterface_generated_h
#error "CombatOpportunityTargetInterface.generated.h already included, missing '#pragma once' in CombatOpportunityTargetInterface.h"
#endif
#define NINJACOMBAT_CombatOpportunityTargetInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UContextualAnimSceneAsset* GetContextualAnimSceneAsset_Implementation(FGameplayTagContainer AbilityTags) const { return NULL; }; \
	DECLARE_FUNCTION(execGetContextualAnimSceneAsset);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatOpportunityTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatOpportunityTargetInterface(UCombatOpportunityTargetInterface&&); \
	UCombatOpportunityTargetInterface(const UCombatOpportunityTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatOpportunityTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatOpportunityTargetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatOpportunityTargetInterface) \
	NINJACOMBAT_API virtual ~UCombatOpportunityTargetInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatOpportunityTargetInterface(); \
	friend struct Z_Construct_UClass_UCombatOpportunityTargetInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatOpportunityTargetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatOpportunityTargetInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatOpportunityTargetInterface() {} \
public: \
	typedef UCombatOpportunityTargetInterface UClassType; \
	typedef ICombatOpportunityTargetInterface ThisClass; \
	static UContextualAnimSceneAsset* Execute_GetContextualAnimSceneAsset(const UObject* O, FGameplayTagContainer AbilityTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatOpportunityTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatOpportunityTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
