// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatPoolProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaCombatActorPoolComponent;
#ifdef NINJACOMBATACTORPOOL_CombatPoolProviderInterface_generated_h
#error "CombatPoolProviderInterface.generated.h already included, missing '#pragma once' in CombatPoolProviderInterface.h"
#endif
#define NINJACOMBATACTORPOOL_CombatPoolProviderInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActorPool);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBATACTORPOOL_API UCombatPoolProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatPoolProviderInterface(UCombatPoolProviderInterface&&); \
	UCombatPoolProviderInterface(const UCombatPoolProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBATACTORPOOL_API, UCombatPoolProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatPoolProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatPoolProviderInterface) \
	NINJACOMBATACTORPOOL_API virtual ~UCombatPoolProviderInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatPoolProviderInterface(); \
	friend struct Z_Construct_UClass_UCombatPoolProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatPoolProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombatActorPool"), NINJACOMBATACTORPOOL_API) \
	DECLARE_SERIALIZER(UCombatPoolProviderInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatPoolProviderInterface() {} \
public: \
	typedef UCombatPoolProviderInterface UClassType; \
	typedef ICombatPoolProviderInterface ThisClass; \
	static UNinjaCombatActorPoolComponent* Execute_GetActorPool(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<class UCombatPoolProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
