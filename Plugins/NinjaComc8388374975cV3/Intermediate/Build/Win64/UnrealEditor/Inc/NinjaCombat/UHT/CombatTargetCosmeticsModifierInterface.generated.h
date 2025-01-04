// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatTargetCosmeticsModifierInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UNiagaraComponent;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_CombatTargetCosmeticsModifierInterface_generated_h
#error "CombatTargetCosmeticsModifierInterface.generated.h already included, missing '#pragma once' in CombatTargetCosmeticsModifierInterface.h"
#endif
#define NINJACOMBAT_CombatTargetCosmeticsModifierInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ModifyParticleEffect_Implementation(UNiagaraComponent* Particles, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) {}; \
	virtual void ModifyAudioEffect_Implementation(UAudioComponent* Audio, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) {}; \
	DECLARE_FUNCTION(execModifyParticleEffect); \
	DECLARE_FUNCTION(execModifyAudioEffect);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatTargetCosmeticsModifierInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatTargetCosmeticsModifierInterface(UCombatTargetCosmeticsModifierInterface&&); \
	UCombatTargetCosmeticsModifierInterface(const UCombatTargetCosmeticsModifierInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatTargetCosmeticsModifierInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatTargetCosmeticsModifierInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatTargetCosmeticsModifierInterface) \
	NINJACOMBAT_API virtual ~UCombatTargetCosmeticsModifierInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatTargetCosmeticsModifierInterface(); \
	friend struct Z_Construct_UClass_UCombatTargetCosmeticsModifierInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatTargetCosmeticsModifierInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatTargetCosmeticsModifierInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatTargetCosmeticsModifierInterface() {} \
public: \
	typedef UCombatTargetCosmeticsModifierInterface UClassType; \
	typedef ICombatTargetCosmeticsModifierInterface ThisClass; \
	static void Execute_ModifyAudioEffect(UObject* O, UAudioComponent* Audio, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	static void Execute_ModifyParticleEffect(UObject* O, UNiagaraComponent* Particles, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatTargetCosmeticsModifierInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatTargetCosmeticsModifierInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
