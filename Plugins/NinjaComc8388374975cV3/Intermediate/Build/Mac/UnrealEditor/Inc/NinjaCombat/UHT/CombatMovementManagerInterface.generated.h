// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatMovementManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
#ifdef NINJACOMBAT_CombatMovementManagerInterface_generated_h
#error "CombatMovementManagerInterface.generated.h already included, missing '#pragma once' in CombatMovementManagerInterface.h"
#endif
#define NINJACOMBAT_CombatMovementManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetStrafing_Implementation(bool bNewIsStrafing) {}; \
	virtual void SetBlocking_Implementation(bool bNewIsBlocking) {}; \
	virtual void HandleBlockingStateChanged_Implementation(UActorComponent* DefenseManager, bool bNewIsBlocking) {}; \
	virtual void HandleCombatTargetChanged_Implementation(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget) {}; \
	DECLARE_FUNCTION(execSetStrafing); \
	DECLARE_FUNCTION(execSetBlocking); \
	DECLARE_FUNCTION(execHandleBlockingStateChanged); \
	DECLARE_FUNCTION(execHandleCombatTargetChanged);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatMovementManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatMovementManagerInterface(UCombatMovementManagerInterface&&); \
	UCombatMovementManagerInterface(const UCombatMovementManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatMovementManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatMovementManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatMovementManagerInterface) \
	NINJACOMBAT_API virtual ~UCombatMovementManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatMovementManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatMovementManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatMovementManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatMovementManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatMovementManagerInterface() {} \
public: \
	typedef UCombatMovementManagerInterface UClassType; \
	typedef ICombatMovementManagerInterface ThisClass; \
	static void Execute_HandleBlockingStateChanged(UObject* O, UActorComponent* DefenseManager, bool bNewIsBlocking); \
	static void Execute_HandleCombatTargetChanged(UObject* O, UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget); \
	static void Execute_SetBlocking(UObject* O, bool bNewIsBlocking); \
	static void Execute_SetStrafing(UObject* O, bool bNewIsStrafing); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_8_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatMovementManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatMovementManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
