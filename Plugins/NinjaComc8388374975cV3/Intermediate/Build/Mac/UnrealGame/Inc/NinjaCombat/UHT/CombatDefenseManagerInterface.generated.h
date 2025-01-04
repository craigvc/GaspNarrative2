// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatDefenseManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDamageCalculationInput;
struct FDamageCalculationOutput;
#ifdef NINJACOMBAT_CombatDefenseManagerInterface_generated_h
#error "CombatDefenseManagerInterface.generated.h already included, missing '#pragma once' in CombatDefenseManagerInterface.h"
#endif
#define NINJACOMBAT_CombatDefenseManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DefendDamage_Implementation(FDamageCalculationInput const& Input, FDamageCalculationOutput& Output) const {}; \
	virtual bool IsInvulnerable_Implementation() const { return false; }; \
	virtual bool CanBlock_Implementation(FDamageCalculationInput const& Input) const { return false; }; \
	virtual bool IsBlocking_Implementation() const { return false; }; \
	virtual void UnbindFromInvulnerabilityStateChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromBlockingStateChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void BindToInvulnerabilityStateChangedDelegate_Implementation(FInvulnerabilityStateChangedDelegate const& Delegate) {}; \
	virtual void BindToBlockingStateChangedDelegate_Implementation(FBlockingStateChangedDelegate const& Delegate) {}; \
	DECLARE_FUNCTION(execDefendDamage); \
	DECLARE_FUNCTION(execCommitLastStand); \
	DECLARE_FUNCTION(execCheckLastStand); \
	DECLARE_FUNCTION(execIsInvulnerable); \
	DECLARE_FUNCTION(execCanBlock); \
	DECLARE_FUNCTION(execIsBlocking); \
	DECLARE_FUNCTION(execUnbindFromInvulnerabilityStateChangedDelegate); \
	DECLARE_FUNCTION(execUnbindFromBlockingStateChangedDelegate); \
	DECLARE_FUNCTION(execBindToInvulnerabilityStateChangedDelegate); \
	DECLARE_FUNCTION(execBindToBlockingStateChangedDelegate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatDefenseManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatDefenseManagerInterface(UCombatDefenseManagerInterface&&); \
	UCombatDefenseManagerInterface(const UCombatDefenseManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatDefenseManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatDefenseManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatDefenseManagerInterface) \
	NINJACOMBAT_API virtual ~UCombatDefenseManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatDefenseManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatDefenseManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatDefenseManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatDefenseManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatDefenseManagerInterface() {} \
public: \
	typedef UCombatDefenseManagerInterface UClassType; \
	typedef ICombatDefenseManagerInterface ThisClass; \
	static void Execute_BindToBlockingStateChangedDelegate(UObject* O, FBlockingStateChangedDelegate const& Delegate); \
	static void Execute_BindToInvulnerabilityStateChangedDelegate(UObject* O, FInvulnerabilityStateChangedDelegate const& Delegate); \
	static bool Execute_CanBlock(const UObject* O, FDamageCalculationInput const& Input); \
	static bool Execute_CheckLastStand(const UObject* O); \
	static void Execute_CommitLastStand(UObject* O); \
	static void Execute_DefendDamage(const UObject* O, FDamageCalculationInput const& Input, FDamageCalculationOutput& Output); \
	static bool Execute_IsBlocking(const UObject* O); \
	static bool Execute_IsInvulnerable(const UObject* O); \
	static void Execute_UnbindFromBlockingStateChangedDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromInvulnerabilityStateChangedDelegate(UObject* O, const UObject* Source); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatDefenseManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDefenseManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
