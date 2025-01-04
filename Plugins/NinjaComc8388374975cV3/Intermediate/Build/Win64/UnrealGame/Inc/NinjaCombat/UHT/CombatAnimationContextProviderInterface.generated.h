// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Animation/CombatAnimationContextProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectContextHandle;
struct FGameplayTagContainer;
#ifdef NINJACOMBAT_CombatAnimationContextProviderInterface_generated_h
#error "CombatAnimationContextProviderInterface.generated.h already included, missing '#pragma once' in CombatAnimationContextProviderInterface.h"
#endif
#define NINJACOMBAT_CombatAnimationContextProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetEffectContext_Implementation(FGameplayEffectContextHandle& OutHandle) const { return false; }; \
	virtual bool GetAnimationContext_Implementation(FGameplayTagContainer& OutContextTags) const { return false; }; \
	DECLARE_FUNCTION(execGetEffectContext); \
	DECLARE_FUNCTION(execGetAnimationContext);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatAnimationContextProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAnimationContextProviderInterface(UCombatAnimationContextProviderInterface&&); \
	UCombatAnimationContextProviderInterface(const UCombatAnimationContextProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatAnimationContextProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAnimationContextProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAnimationContextProviderInterface) \
	NINJACOMBAT_API virtual ~UCombatAnimationContextProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatAnimationContextProviderInterface(); \
	friend struct Z_Construct_UClass_UCombatAnimationContextProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatAnimationContextProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatAnimationContextProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatAnimationContextProviderInterface() {} \
public: \
	typedef UCombatAnimationContextProviderInterface UClassType; \
	typedef ICombatAnimationContextProviderInterface ThisClass; \
	static bool Execute_GetAnimationContext(const UObject* O, FGameplayTagContainer& OutContextTags); \
	static bool Execute_GetEffectContext(const UObject* O, FGameplayEffectContextHandle& OutHandle); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAnimationContextProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Animation_CombatAnimationContextProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
