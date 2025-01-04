// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatProjectileInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
struct FGameplayEffectSpecHandle;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef NINJACOMBAT_CombatProjectileInterface_generated_h
#error "CombatProjectileInterface.generated.h already included, missing '#pragma once' in CombatProjectileInterface.h"
#endif
#define NINJACOMBAT_CombatProjectileInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<AActor*> GetActorsHit_Implementation() const { return TArray<AActor*>(); }; \
	virtual void SetImpactEffectHandle_Implementation(FGameplayEffectSpecHandle& Handle) {}; \
	virtual void Launch_Implementation() {}; \
	virtual void PrepareLaunch_Implementation() {}; \
	virtual float GetSpeed_Implementation() const { return 0; }; \
	DECLARE_FUNCTION(execHandleDestructionCosmetics); \
	DECLARE_FUNCTION(execHandleImpactCosmetics); \
	DECLARE_FUNCTION(execGetProjectileImpactStrength); \
	DECLARE_FUNCTION(execGetActorsHit); \
	DECLARE_FUNCTION(execGetPoiseConsumption); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execSetImpactEffectHandle); \
	DECLARE_FUNCTION(execGetImpactEffectLevel); \
	DECLARE_FUNCTION(execGetImpactEffectClass); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execPrepareLaunch); \
	DECLARE_FUNCTION(execGetSpeed);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatProjectileInterface(UCombatProjectileInterface&&); \
	UCombatProjectileInterface(const UCombatProjectileInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatProjectileInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatProjectileInterface) \
	NINJACOMBAT_API virtual ~UCombatProjectileInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatProjectileInterface(); \
	friend struct Z_Construct_UClass_UCombatProjectileInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatProjectileInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatProjectileInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatProjectileInterface() {} \
public: \
	typedef UCombatProjectileInterface UClassType; \
	typedef ICombatProjectileInterface ThisClass; \
	static TArray<AActor*> Execute_GetActorsHit(const UObject* O); \
	static bool Execute_GetDamage(const UObject* O, float& OutDamage); \
	static TSubclassOf<UGameplayEffect> Execute_GetImpactEffectClass(const UObject* O); \
	static float Execute_GetImpactEffectLevel(const UObject* O); \
	static bool Execute_GetPoiseConsumption(const UObject* O, float& OutPoiseConsumption); \
	static float Execute_GetProjectileImpactStrength(const UObject* O); \
	static float Execute_GetSpeed(const UObject* O); \
	static void Execute_HandleDestructionCosmetics(const UObject* O); \
	static void Execute_HandleImpactCosmetics(const UObject* O, FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags); \
	static void Execute_Launch(UObject* O); \
	static void Execute_PrepareLaunch(UObject* O); \
	static void Execute_SetImpactEffectHandle(UObject* O, FGameplayEffectSpecHandle& Handle); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatProjectileInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatProjectileInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
