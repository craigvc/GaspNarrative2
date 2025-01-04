// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/CombatTargetReceiverInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NINJACOMBAT_CombatTargetReceiverInterface_generated_h
#error "CombatTargetReceiverInterface.generated.h already included, missing '#pragma once' in CombatTargetReceiverInterface.h"
#endif
#define NINJACOMBAT_CombatTargetReceiverInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveCombatTarget_Implementation(AActor* CombatTarget) {}; \
	DECLARE_FUNCTION(execReceiveCombatTarget);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatTargetReceiverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatTargetReceiverInterface(UCombatTargetReceiverInterface&&); \
	UCombatTargetReceiverInterface(const UCombatTargetReceiverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatTargetReceiverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatTargetReceiverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatTargetReceiverInterface) \
	NINJACOMBAT_API virtual ~UCombatTargetReceiverInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatTargetReceiverInterface(); \
	friend struct Z_Construct_UClass_UCombatTargetReceiverInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatTargetReceiverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatTargetReceiverInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatTargetReceiverInterface() {} \
public: \
	typedef UCombatTargetReceiverInterface UClassType; \
	typedef ICombatTargetReceiverInterface ThisClass; \
	static void Execute_ReceiveCombatTarget(UObject* O, AActor* CombatTarget); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatTargetReceiverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
