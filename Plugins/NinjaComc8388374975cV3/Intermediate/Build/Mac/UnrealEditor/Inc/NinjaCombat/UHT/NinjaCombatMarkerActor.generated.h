// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatMarkerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
class UWidgetComponent;
#ifdef NINJACOMBAT_NinjaCombatMarkerActor_generated_h
#error "NinjaCombatMarkerActor.generated.h already included, missing '#pragma once' in NinjaCombatMarkerActor.h"
#endif
#define NINJACOMBAT_NinjaCombatMarkerActor_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DetachFromTarget_Implementation(); \
	virtual bool AttachToTarget_Implementation(USceneComponent* AnchorComponent); \
	virtual USceneComponent* FindAttachAnchor_Implementation(const AActor* Target) const; \
	DECLARE_FUNCTION(execHandleTargetCleared); \
	DECLARE_FUNCTION(execHandleTargetSet); \
	DECLARE_FUNCTION(execDetachFromTarget); \
	DECLARE_FUNCTION(execAttachToTarget); \
	DECLARE_FUNCTION(execFindAttachAnchor); \
	DECLARE_FUNCTION(execGetTargetLockWidget); \
	DECLARE_FUNCTION(execDismissTarget); \
	DECLARE_FUNCTION(execLockOnTarget); \
	DECLARE_FUNCTION(execGetCurrentTarget);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatMarkerActor(); \
	friend struct Z_Construct_UClass_ANinjaCombatMarkerActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatMarkerActor, ANinjaCombatPoolableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatMarkerActor)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaCombatMarkerActor(ANinjaCombatMarkerActor&&); \
	ANinjaCombatMarkerActor(const ANinjaCombatMarkerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatMarkerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatMarkerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANinjaCombatMarkerActor) \
	NO_API virtual ~ANinjaCombatMarkerActor();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_23_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class ANinjaCombatMarkerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMarkerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
