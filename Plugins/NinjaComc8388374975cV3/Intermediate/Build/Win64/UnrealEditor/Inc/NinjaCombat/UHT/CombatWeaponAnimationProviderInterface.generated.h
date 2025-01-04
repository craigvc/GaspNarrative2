// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/CombatWeaponAnimationProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_CombatWeaponAnimationProviderInterface_generated_h
#error "CombatWeaponAnimationProviderInterface.generated.h already included, missing '#pragma once' in CombatWeaponAnimationProviderInterface.h"
#endif
#define NINJACOMBAT_CombatWeaponAnimationProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UAnimMontage* GetAnimationMontageForAbility_Implementation(FGameplayTagContainer const& AbilityTags) const { return NULL; }; \
	DECLARE_FUNCTION(execGetAnimationMontageForAbility);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatWeaponAnimationProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatWeaponAnimationProviderInterface(UCombatWeaponAnimationProviderInterface&&); \
	UCombatWeaponAnimationProviderInterface(const UCombatWeaponAnimationProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatWeaponAnimationProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatWeaponAnimationProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatWeaponAnimationProviderInterface) \
	NINJACOMBAT_API virtual ~UCombatWeaponAnimationProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatWeaponAnimationProviderInterface(); \
	friend struct Z_Construct_UClass_UCombatWeaponAnimationProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatWeaponAnimationProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatWeaponAnimationProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatWeaponAnimationProviderInterface() {} \
public: \
	typedef UCombatWeaponAnimationProviderInterface UClassType; \
	typedef ICombatWeaponAnimationProviderInterface ThisClass; \
	static UAnimMontage* Execute_GetAnimationMontageForAbility(const UObject* O, FGameplayTagContainer const& AbilityTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatWeaponAnimationProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatWeaponAnimationProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
