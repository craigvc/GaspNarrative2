// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatSystemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class UAnimInstance;
class UNinjaCombatManagerComponent;
class USceneComponent;
class USkeletalMeshComponent;
#ifdef NINJACOMBAT_CombatSystemInterface_generated_h
#error "CombatSystemInterface.generated.h already included, missing '#pragma once' in CombatSystemInterface.h"
#endif
#define NINJACOMBAT_CombatSystemInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeaponManagerComponent); \
	DECLARE_FUNCTION(execGetTargetManagerComponent); \
	DECLARE_FUNCTION(execGetPhysicalAnimationComponent); \
	DECLARE_FUNCTION(execGetMotionWarpingComponent); \
	DECLARE_FUNCTION(execGetDissolveManagerComponent); \
	DECLARE_FUNCTION(execGetDefenseManagerComponent); \
	DECLARE_FUNCTION(execGetDamageManagerComponent); \
	DECLARE_FUNCTION(execGetComboManagerComponent); \
	DECLARE_FUNCTION(execGetCombatForwardReference); \
	DECLARE_FUNCTION(execGetCombatAnimInstance); \
	DECLARE_FUNCTION(execGetCombatMesh); \
	DECLARE_FUNCTION(execGetCombatManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatSystemInterface(UCombatSystemInterface&&); \
	UCombatSystemInterface(const UCombatSystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatSystemInterface) \
	NINJACOMBAT_API virtual ~UCombatSystemInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatSystemInterface(); \
	friend struct Z_Construct_UClass_UCombatSystemInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatSystemInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatSystemInterface() {} \
public: \
	typedef UCombatSystemInterface UClassType; \
	typedef ICombatSystemInterface ThisClass; \
	static UAnimInstance* Execute_GetCombatAnimInstance(const UObject* O); \
	static USceneComponent* Execute_GetCombatForwardReference(const UObject* O); \
	static UNinjaCombatManagerComponent* Execute_GetCombatManager(const UObject* O); \
	static USkeletalMeshComponent* Execute_GetCombatMesh(const UObject* O); \
	static UActorComponent* Execute_GetComboManagerComponent(const UObject* O); \
	static UActorComponent* Execute_GetDamageManagerComponent(const UObject* O); \
	static UActorComponent* Execute_GetDefenseManagerComponent(const UObject* O); \
	static UActorComponent* Execute_GetDissolveManagerComponent(const UObject* O); \
	static UActorComponent* Execute_GetMotionWarpingComponent(const UObject* O); \
	static UActorComponent* Execute_GetPhysicalAnimationComponent(const UObject* O); \
	static UActorComponent* Execute_GetTargetManagerComponent(const UObject* O); \
	static UActorComponent* Execute_GetWeaponManagerComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatSystemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatSystemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
