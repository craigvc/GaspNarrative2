// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatMeleeInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
class UMeshComponent;
class UNiagaraComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_CombatMeleeInterface_generated_h
#error "CombatMeleeInterface.generated.h already included, missing '#pragma once' in CombatMeleeInterface.h"
#endif
#define NINJACOMBAT_CombatMeleeInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleMeleeDamageCosmetics); \
	DECLARE_FUNCTION(execStopMeleeTrailsCosmetics); \
	DECLARE_FUNCTION(execStartMeleeTrailsCosmetics); \
	DECLARE_FUNCTION(execGetImpactTrails); \
	DECLARE_FUNCTION(execGetMeleeImpactStrength); \
	DECLARE_FUNCTION(execGetAttackTrails); \
	DECLARE_FUNCTION(execGetPoiseConsumption); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetHitEffectLevel); \
	DECLARE_FUNCTION(execGetHitEffectClass); \
	DECLARE_FUNCTION(execGetMeleeMeshByTag); \
	DECLARE_FUNCTION(execGetMeleeMesh);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatMeleeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatMeleeInterface(UCombatMeleeInterface&&); \
	UCombatMeleeInterface(const UCombatMeleeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatMeleeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatMeleeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatMeleeInterface) \
	NINJACOMBAT_API virtual ~UCombatMeleeInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatMeleeInterface(); \
	friend struct Z_Construct_UClass_UCombatMeleeInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatMeleeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatMeleeInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatMeleeInterface() {} \
public: \
	typedef UCombatMeleeInterface UClassType; \
	typedef ICombatMeleeInterface ThisClass; \
	static TArray<UNiagaraComponent*> Execute_GetAttackTrails(const UObject* O); \
	static bool Execute_GetDamage(const UObject* O, float& OutDamage); \
	static TSubclassOf<UGameplayEffect> Execute_GetHitEffectClass(const UObject* O); \
	static float Execute_GetHitEffectLevel(const UObject* O); \
	static TArray<UNiagaraComponent*> Execute_GetImpactTrails(const UObject* O); \
	static float Execute_GetMeleeImpactStrength(const UObject* O); \
	static UMeshComponent* Execute_GetMeleeMesh(const UObject* O); \
	static UMeshComponent* Execute_GetMeleeMeshByTag(const UObject* O, FGameplayTag ComponentTag); \
	static bool Execute_GetPoiseConsumption(const UObject* O, float& OutPoiseConsumption); \
	static void Execute_HandleMeleeDamageCosmetics(const UObject* O, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	static void Execute_StartMeleeTrailsCosmetics(UObject* O, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	static void Execute_StopMeleeTrailsCosmetics(UObject* O, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatMeleeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatMeleeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
