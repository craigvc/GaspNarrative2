// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatPoolableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPoolableActorState : uint8;
#ifdef NINJACOMBATACTORPOOL_NinjaCombatPoolableActor_generated_h
#error "NinjaCombatPoolableActor.generated.h already included, missing '#pragma once' in NinjaCombatPoolableActor.h"
#endif
#define NINJACOMBATACTORPOOL_NinjaCombatPoolableActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_Deactivate_Validate(); \
	virtual void Server_Deactivate_Implementation(); \
	DECLARE_FUNCTION(execServer_Deactivate); \
	DECLARE_FUNCTION(execOnRep_PoolableActorState); \
	DECLARE_FUNCTION(execHandleTimerExpired); \
	DECLARE_FUNCTION(execOnDeactivation); \
	DECLARE_FUNCTION(execOnActivation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatPoolableActor(); \
	friend struct Z_Construct_UClass_ANinjaCombatPoolableActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatPoolableActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatActorPool"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatPoolableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaCombatPoolableActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PoolableActorState=NETFIELD_REP_START, \
		NETFIELD_REP_END=PoolableActorState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaCombatPoolableActor(ANinjaCombatPoolableActor&&); \
	ANinjaCombatPoolableActor(const ANinjaCombatPoolableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatPoolableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatPoolableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCombatPoolableActor) \
	NO_API virtual ~ANinjaCombatPoolableActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<class ANinjaCombatPoolableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_GameFramework_NinjaCombatPoolableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
