// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/CombatAnimationTaskInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBAT_CombatAnimationTaskInterface_generated_h
#error "CombatAnimationTaskInterface.generated.h already included, missing '#pragma once' in CombatAnimationTaskInterface.h"
#endif
#define NINJACOMBAT_CombatAnimationTaskInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BindToAnimationCancelled_Implementation(FCombatAnimationEventDelegate const& Delegate) {}; \
	virtual void BindToAnimationInterrupted_Implementation(FCombatAnimationEventDelegate const& Delegate) {}; \
	virtual void BindToAnimationBlendOut_Implementation(FCombatAnimationEventDelegate const& Delegate) {}; \
	virtual void BindToAnimationCompleted_Implementation(FCombatAnimationEventDelegate const& Delegate) {}; \
	DECLARE_FUNCTION(execBindToAnimationCancelled); \
	DECLARE_FUNCTION(execBindToAnimationInterrupted); \
	DECLARE_FUNCTION(execBindToAnimationBlendOut); \
	DECLARE_FUNCTION(execBindToAnimationCompleted);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatAnimationTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatAnimationTaskInterface(UCombatAnimationTaskInterface&&); \
	UCombatAnimationTaskInterface(const UCombatAnimationTaskInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatAnimationTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAnimationTaskInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatAnimationTaskInterface) \
	NINJACOMBAT_API virtual ~UCombatAnimationTaskInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatAnimationTaskInterface(); \
	friend struct Z_Construct_UClass_UCombatAnimationTaskInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatAnimationTaskInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatAnimationTaskInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatAnimationTaskInterface() {} \
public: \
	typedef UCombatAnimationTaskInterface UClassType; \
	typedef ICombatAnimationTaskInterface ThisClass; \
	static void Execute_BindToAnimationBlendOut(UObject* O, FCombatAnimationEventDelegate const& Delegate); \
	static void Execute_BindToAnimationCancelled(UObject* O, FCombatAnimationEventDelegate const& Delegate); \
	static void Execute_BindToAnimationCompleted(UObject* O, FCombatAnimationEventDelegate const& Delegate); \
	static void Execute_BindToAnimationInterrupted(UObject* O, FCombatAnimationEventDelegate const& Delegate); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatAnimationTaskInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatAnimationTaskInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
