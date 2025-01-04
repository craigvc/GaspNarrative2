// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatPhysicalAnimationInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FCombatPhysicalAnimationSettings;
struct FGameplayEffectContextHandle;
#ifdef NINJACOMBAT_CombatPhysicalAnimationInterface_generated_h
#error "CombatPhysicalAnimationInterface.generated.h already included, missing '#pragma once' in CombatPhysicalAnimationInterface.h"
#endif
#define NINJACOMBAT_CombatPhysicalAnimationInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleImpact_Implementation(const AActor* EffectCauser, FGameplayEffectContextHandle const& Context) {}; \
	virtual void SetImpactSettings_Implementation(FCombatPhysicalAnimationSettings const& NewSettings) {}; \
	virtual float GetImpactReactionTimeLeft_Implementation() const { return 0; }; \
	virtual bool IsReactingToImpact_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execHandleImpact); \
	DECLARE_FUNCTION(execSetImpactSettings); \
	DECLARE_FUNCTION(execGetImpactReactionTimeLeft); \
	DECLARE_FUNCTION(execIsReactingToImpact);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatPhysicalAnimationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatPhysicalAnimationInterface(UCombatPhysicalAnimationInterface&&); \
	UCombatPhysicalAnimationInterface(const UCombatPhysicalAnimationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatPhysicalAnimationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatPhysicalAnimationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatPhysicalAnimationInterface) \
	NINJACOMBAT_API virtual ~UCombatPhysicalAnimationInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatPhysicalAnimationInterface(); \
	friend struct Z_Construct_UClass_UCombatPhysicalAnimationInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatPhysicalAnimationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatPhysicalAnimationInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatPhysicalAnimationInterface() {} \
public: \
	typedef UCombatPhysicalAnimationInterface UClassType; \
	typedef ICombatPhysicalAnimationInterface ThisClass; \
	static float Execute_GetImpactReactionTimeLeft(const UObject* O); \
	static void Execute_HandleImpact(UObject* O, const AActor* EffectCauser, FGameplayEffectContextHandle const& Context); \
	static bool Execute_IsReactingToImpact(const UObject* O); \
	static void Execute_SetImpactSettings(UObject* O, FCombatPhysicalAnimationSettings const& NewSettings); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatPhysicalAnimationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatPhysicalAnimationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
