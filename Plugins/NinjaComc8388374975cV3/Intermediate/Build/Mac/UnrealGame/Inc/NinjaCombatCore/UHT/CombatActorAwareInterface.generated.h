// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatActorAwareInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJACOMBATCORE_CombatActorAwareInterface_generated_h
#error "CombatActorAwareInterface.generated.h already included, missing '#pragma once' in CombatActorAwareInterface.h"
#endif
#define NINJACOMBATCORE_CombatActorAwareInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCombatActor_Implementation(AActor* NewCombatActor) {}; \
	DECLARE_FUNCTION(execSetCombatActor);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBATCORE_API UCombatActorAwareInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatActorAwareInterface(UCombatActorAwareInterface&&); \
	UCombatActorAwareInterface(const UCombatActorAwareInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBATCORE_API, UCombatActorAwareInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatActorAwareInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatActorAwareInterface) \
	NINJACOMBATCORE_API virtual ~UCombatActorAwareInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatActorAwareInterface(); \
	friend struct Z_Construct_UClass_UCombatActorAwareInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatActorAwareInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombatCore"), NINJACOMBATCORE_API) \
	DECLARE_SERIALIZER(UCombatActorAwareInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatActorAwareInterface() {} \
public: \
	typedef UCombatActorAwareInterface UClassType; \
	typedef ICombatActorAwareInterface ThisClass; \
	static void Execute_SetCombatActor(UObject* O, AActor* NewCombatActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_8_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATCORE_API UClass* StaticClass<class UCombatActorAwareInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
