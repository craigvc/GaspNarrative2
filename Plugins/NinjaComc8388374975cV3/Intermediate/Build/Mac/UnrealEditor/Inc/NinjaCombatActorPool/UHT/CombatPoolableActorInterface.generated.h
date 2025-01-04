// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatPoolableActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaCombatActorPoolComponent;
#ifdef NINJACOMBATACTORPOOL_CombatPoolableActorInterface_generated_h
#error "CombatPoolableActorInterface.generated.h already included, missing '#pragma once' in CombatPoolableActorInterface.h"
#endif
#define NINJACOMBATACTORPOOL_CombatPoolableActorInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyPoolDestroyed_Implementation() {}; \
	virtual void Deactivate_Implementation() {}; \
	virtual void Activate_Implementation() {}; \
	virtual void Reserve_Implementation() {}; \
	virtual bool IsActive_Implementation() const { return false; }; \
	virtual bool IsReserved_Implementation() const { return false; }; \
	virtual bool IsInactive_Implementation() const { return false; }; \
	virtual bool IsManagedByPool_Implementation() const { return false; }; \
	virtual void InitializedByPool_Implementation(UNinjaCombatActorPoolComponent* InPool) {}; \
	DECLARE_FUNCTION(execNotifyPoolDestroyed); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execReserve); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsReserved); \
	DECLARE_FUNCTION(execIsInactive); \
	DECLARE_FUNCTION(execIsManagedByPool); \
	DECLARE_FUNCTION(execInitializedByPool);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBATACTORPOOL_API UCombatPoolableActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatPoolableActorInterface(UCombatPoolableActorInterface&&); \
	UCombatPoolableActorInterface(const UCombatPoolableActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBATACTORPOOL_API, UCombatPoolableActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatPoolableActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatPoolableActorInterface) \
	NINJACOMBATACTORPOOL_API virtual ~UCombatPoolableActorInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatPoolableActorInterface(); \
	friend struct Z_Construct_UClass_UCombatPoolableActorInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatPoolableActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombatActorPool"), NINJACOMBATACTORPOOL_API) \
	DECLARE_SERIALIZER(UCombatPoolableActorInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatPoolableActorInterface() {} \
public: \
	typedef UCombatPoolableActorInterface UClassType; \
	typedef ICombatPoolableActorInterface ThisClass; \
	static void Execute_Activate(UObject* O); \
	static void Execute_Deactivate(UObject* O); \
	static void Execute_InitializedByPool(UObject* O, UNinjaCombatActorPoolComponent* InPool); \
	static bool Execute_IsActive(const UObject* O); \
	static bool Execute_IsInactive(const UObject* O); \
	static bool Execute_IsManagedByPool(const UObject* O); \
	static bool Execute_IsReserved(const UObject* O); \
	static void Execute_NotifyPoolDestroyed(UObject* O); \
	static void Execute_Reserve(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<class UCombatPoolableActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolableActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
