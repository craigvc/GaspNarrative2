// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatTargetManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANinjaCombatMarkerActor;
class UObject;
#ifdef NINJACOMBAT_CombatTargetManagerInterface_generated_h
#error "CombatTargetManagerInterface.generated.h already included, missing '#pragma once' in CombatTargetManagerInterface.h"
#endif
#define NINJACOMBAT_CombatTargetManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ANinjaCombatMarkerActor* GetTargetLockActor_Implementation() const { return NULL; }; \
	virtual void SetCombatTarget_Implementation(AActor* NewCombatTarget) {}; \
	virtual AActor* GetCombatTarget_Implementation() const { return NULL; }; \
	virtual void UnbindFromTargetChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void BindToCombatTargetChangedDelegate_Implementation(FCombatTargetChangedDelegate const& Delegate) {}; \
	DECLARE_FUNCTION(execGetTargetLockActor); \
	DECLARE_FUNCTION(execClearTargetingSource); \
	DECLARE_FUNCTION(execReceiveTargetingSource); \
	DECLARE_FUNCTION(execSetCombatTarget); \
	DECLARE_FUNCTION(execGetCombatTarget); \
	DECLARE_FUNCTION(execHasCombatTarget); \
	DECLARE_FUNCTION(execUnbindFromTargetChangedDelegate); \
	DECLARE_FUNCTION(execBindToCombatTargetChangedDelegate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatTargetManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatTargetManagerInterface(UCombatTargetManagerInterface&&); \
	UCombatTargetManagerInterface(const UCombatTargetManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatTargetManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatTargetManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatTargetManagerInterface) \
	NINJACOMBAT_API virtual ~UCombatTargetManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatTargetManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatTargetManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatTargetManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatTargetManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatTargetManagerInterface() {} \
public: \
	typedef UCombatTargetManagerInterface UClassType; \
	typedef ICombatTargetManagerInterface ThisClass; \
	static void Execute_BindToCombatTargetChangedDelegate(UObject* O, FCombatTargetChangedDelegate const& Delegate); \
	static void Execute_ClearTargetingSource(UObject* O, AActor* TargetingSource); \
	static AActor* Execute_GetCombatTarget(const UObject* O); \
	static ANinjaCombatMarkerActor* Execute_GetTargetLockActor(const UObject* O); \
	static bool Execute_HasCombatTarget(const UObject* O); \
	static void Execute_ReceiveTargetingSource(UObject* O, AActor* TargetingSource); \
	static void Execute_SetCombatTarget(UObject* O, AActor* NewCombatTarget); \
	static void Execute_UnbindFromTargetChangedDelegate(UObject* O, const UObject* Source); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatTargetManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatTargetManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
