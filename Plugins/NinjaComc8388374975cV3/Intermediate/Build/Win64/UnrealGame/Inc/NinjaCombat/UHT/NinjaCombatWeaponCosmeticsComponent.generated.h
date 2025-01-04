// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatWeaponCosmeticsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAudioComponent;
class UCameraShakeBase;
class UMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USoundBase;
struct FCombatImpactCosmetics;
struct FCombatMeleeTrailsCosmetics;
#ifdef NINJACOMBAT_NinjaCombatWeaponCosmeticsComponent_generated_h
#error "NinjaCombatWeaponCosmeticsComponent.generated.h already included, missing '#pragma once' in NinjaCombatWeaponCosmeticsComponent.h"
#endif
#define NINJACOMBAT_NinjaCombatWeaponCosmeticsComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatMeleeTrailsCosmetics_Statics; \
	NINJACOMBAT_API static class UScriptStruct* StaticStruct();


template<> NINJACOMBAT_API UScriptStruct* StaticStruct<struct FCombatMeleeTrailsCosmetics>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatImpactCosmetics_Statics; \
	NINJACOMBAT_API static class UScriptStruct* StaticStruct();


template<> NINJACOMBAT_API UScriptStruct* StaticStruct<struct FCombatImpactCosmetics>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetImpactCameraShakeScale_Implementation(FCombatImpactCosmetics const& Parameters) const; \
	virtual void ModifyImpactAudioComponent_Implementation(UAudioComponent* AudioComponent, FCombatImpactCosmetics const& Parameters) const; \
	virtual void ModifyImpactParticleComponent_Implementation(UNiagaraComponent* NiagaraComponent, FCombatImpactCosmetics const& Parameters) const; \
	virtual void HandleImpactCameraShake_Implementation(TSubclassOf<UCameraShakeBase> CameraShakeClass, FCombatImpactCosmetics const& Parameters) const; \
	virtual void HandleImpactSound_Implementation(USoundBase* Sound, FCombatImpactCosmetics const& Parameters) const; \
	virtual void HandleImpactParticles_Implementation(UNiagaraSystem* Particles, FCombatImpactCosmetics const& Parameters) const; \
	virtual void UpdateMeleeScanTrails_Implementation(); \
	DECLARE_FUNCTION(execGetImpactCameraShakeScale); \
	DECLARE_FUNCTION(execModifyImpactAudioComponent); \
	DECLARE_FUNCTION(execModifyImpactParticleComponent); \
	DECLARE_FUNCTION(execHandleImpactCameraShake); \
	DECLARE_FUNCTION(execHandleImpactSound); \
	DECLARE_FUNCTION(execHandleImpactParticles); \
	DECLARE_FUNCTION(execUpdateMeleeScanTrails); \
	DECLARE_FUNCTION(execFindScanSourceMesh); \
	DECLARE_FUNCTION(execHandleImpactDamageCosmetics); \
	DECLARE_FUNCTION(execStopMeleeScanCosmetics); \
	DECLARE_FUNCTION(execStartMeleeScanCosmetics);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatCosmeticsComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatCosmeticsComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatCosmeticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatCosmeticsComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatCosmeticsComponent(UNinjaCombatCosmeticsComponent&&); \
	UNinjaCombatCosmeticsComponent(const UNinjaCombatCosmeticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatCosmeticsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatCosmeticsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatCosmeticsComponent) \
	NO_API virtual ~UNinjaCombatCosmeticsComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_94_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatCosmeticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponCosmeticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
