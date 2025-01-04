// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaCombatDamageDataAsset;
class UObject;
struct FDamageCalculationInput;
struct FDamageCalculationOutput;
struct FDamageEntry;
struct FGameplayEffectSpec;
#ifdef NINJACOMBAT_CombatDamageManagerInterface_generated_h
#error "CombatDamageManagerInterface.generated.h already included, missing '#pragma once' in CombatDamageManagerInterface.h"
#endif
#define NINJACOMBAT_CombatDamageManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FinishDying_Implementation() {}; \
	virtual void StartDying_Implementation() {}; \
	virtual void EnableRagdollPhysics_Implementation() {}; \
	virtual void HandleDamageReceived_Implementation(FDamageEntry const& DamageEntry) {}; \
	virtual void RegisterDamageReceived_Implementation(FGameplayEffectSpec const& EffectSpec) {}; \
	virtual void CalculateDamage_Implementation(FDamageCalculationInput const& Input, FDamageCalculationOutput& Output) const {}; \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual bool IsStaggered_Implementation() const { return false; }; \
	virtual const UNinjaCombatDamageDataAsset* GetDamageData_Implementation() const { return NULL; }; \
	virtual void UnbindFromOwnerFinishedDyingDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromOwnerDiedDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromDamageReceivedDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromStaggerStateChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void BindToOwnerFinishedDyingDelegate_Implementation(FOwnerDiedDelegate const& Delegate) {}; \
	virtual void BindToOwnerDiedDelegate_Implementation(FOwnerDiedDelegate const& Delegate) {}; \
	virtual void BindToDamageReceivedDelegate_Implementation(FDamageReceivedDelegate const& Delegate) {}; \
	virtual void BindToStaggerStateChangedDelegate_Implementation(FStaggeredStateChangedDelegate const& Delegate) {}; \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execStartDying); \
	DECLARE_FUNCTION(execEnableRagdollPhysics); \
	DECLARE_FUNCTION(execHandleDamageReceived); \
	DECLARE_FUNCTION(execRegisterDamageReceived); \
	DECLARE_FUNCTION(execCalculateDamage); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsStaggered); \
	DECLARE_FUNCTION(execGetDamageData); \
	DECLARE_FUNCTION(execUnbindFromOwnerFinishedDyingDelegate); \
	DECLARE_FUNCTION(execUnbindFromOwnerDiedDelegate); \
	DECLARE_FUNCTION(execUnbindFromDamageReceivedDelegate); \
	DECLARE_FUNCTION(execUnbindFromStaggerStateChangedDelegate); \
	DECLARE_FUNCTION(execBindToOwnerFinishedDyingDelegate); \
	DECLARE_FUNCTION(execBindToOwnerDiedDelegate); \
	DECLARE_FUNCTION(execBindToDamageReceivedDelegate); \
	DECLARE_FUNCTION(execBindToStaggerStateChangedDelegate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatDamageManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatDamageManagerInterface(UCombatDamageManagerInterface&&); \
	UCombatDamageManagerInterface(const UCombatDamageManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatDamageManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatDamageManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatDamageManagerInterface) \
	NINJACOMBAT_API virtual ~UCombatDamageManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatDamageManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatDamageManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatDamageManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatDamageManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatDamageManagerInterface() {} \
public: \
	typedef UCombatDamageManagerInterface UClassType; \
	typedef ICombatDamageManagerInterface ThisClass; \
	static void Execute_BindToDamageReceivedDelegate(UObject* O, FDamageReceivedDelegate const& Delegate); \
	static void Execute_BindToOwnerDiedDelegate(UObject* O, FOwnerDiedDelegate const& Delegate); \
	static void Execute_BindToOwnerFinishedDyingDelegate(UObject* O, FOwnerDiedDelegate const& Delegate); \
	static void Execute_BindToStaggerStateChangedDelegate(UObject* O, FStaggeredStateChangedDelegate const& Delegate); \
	static void Execute_CalculateDamage(const UObject* O, FDamageCalculationInput const& Input, FDamageCalculationOutput& Output); \
	static void Execute_EnableRagdollPhysics(UObject* O); \
	static void Execute_FinishDying(UObject* O); \
	static const UNinjaCombatDamageDataAsset* Execute_GetDamageData(const UObject* O); \
	static void Execute_HandleDamageReceived(UObject* O, FDamageEntry const& DamageEntry); \
	static bool Execute_IsDead(const UObject* O); \
	static bool Execute_IsStaggered(const UObject* O); \
	static void Execute_RegisterDamageReceived(UObject* O, FGameplayEffectSpec const& EffectSpec); \
	static void Execute_StartDying(UObject* O); \
	static void Execute_UnbindFromDamageReceivedDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromOwnerDiedDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromOwnerFinishedDyingDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromStaggerStateChangedDelegate(UObject* O, const UObject* Source); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatDamageManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatDamageManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
