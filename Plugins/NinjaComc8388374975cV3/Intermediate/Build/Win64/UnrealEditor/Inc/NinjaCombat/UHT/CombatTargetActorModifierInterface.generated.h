// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
#ifdef NINJACOMBAT_CombatTargetActorModifierInterface_generated_h
#error "CombatTargetActorModifierInterface.generated.h already included, missing '#pragma once' in CombatTargetActorModifierInterface.h"
#endif
#define NINJACOMBAT_CombatTargetActorModifierInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ModifyActor_Implementation(AGameplayAbilityTargetActor* TargetActor) {}; \
	DECLARE_FUNCTION(execModifyActor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatTargetActorModifierInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatTargetActorModifierInterface(UCombatTargetActorModifierInterface&&); \
	UCombatTargetActorModifierInterface(const UCombatTargetActorModifierInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatTargetActorModifierInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatTargetActorModifierInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatTargetActorModifierInterface) \
	NINJACOMBAT_API virtual ~UCombatTargetActorModifierInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatTargetActorModifierInterface(); \
	friend struct Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatTargetActorModifierInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatTargetActorModifierInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatTargetActorModifierInterface() {} \
public: \
	typedef UCombatTargetActorModifierInterface UClassType; \
	typedef ICombatTargetActorModifierInterface ThisClass; \
	static void Execute_ModifyActor(UObject* O, AGameplayAbilityTargetActor* TargetActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatTargetActorModifierInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
