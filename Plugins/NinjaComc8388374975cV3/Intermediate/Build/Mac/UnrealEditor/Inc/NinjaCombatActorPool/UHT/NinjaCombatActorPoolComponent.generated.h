// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatActorPoolComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGuid;
#ifdef NINJACOMBATACTORPOOL_NinjaCombatActorPoolComponent_generated_h
#error "NinjaCombatActorPoolComponent.generated.h already included, missing '#pragma once' in NinjaCombatActorPoolComponent.h"
#endif
#define NINJACOMBATACTORPOOL_NinjaCombatActorPoolComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnActor); \
	DECLARE_FUNCTION(execGetActorFromPool);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatActorPoolComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatActorPoolComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatActorPoolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatActorPool"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatActorPoolComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Pool=NETFIELD_REP_START, \
		NETFIELD_REP_END=Pool	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatActorPoolComponent(UNinjaCombatActorPoolComponent&&); \
	UNinjaCombatActorPoolComponent(const UNinjaCombatActorPoolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatActorPoolComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatActorPoolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatActorPoolComponent) \
	NO_API virtual ~UNinjaCombatActorPoolComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<class UNinjaCombatActorPoolComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Components_NinjaCombatActorPoolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
