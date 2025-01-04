// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatWeaponManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTagQuery;
#ifdef NINJACOMBAT_NinjaCombatWeaponManagerComponent_generated_h
#error "NinjaCombatWeaponManagerComponent.generated.h already included, missing '#pragma once' in NinjaCombatWeaponManagerComponent.h"
#endif
#define NINJACOMBAT_NinjaCombatWeaponManagerComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_16_DELEGATE \
static void FCombatWeaponEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CombatWeaponEventSignature, AActor* Weapon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RemoveWeapon_Validate(AActor* ); \
	virtual void Server_RemoveWeapon_Implementation(AActor* Weapon); \
	virtual bool Server_AddWeaponClass_Validate(TSubclassOf<AActor> ); \
	virtual void Server_AddWeaponClass_Implementation(TSubclassOf<AActor> WeaponClass); \
	virtual bool Server_AddWeapon_Validate(AActor* ); \
	virtual void Server_AddWeapon_Implementation(AActor* Weapon); \
	virtual void AttachWeaponActor_Implementation(AActor* Weapon); \
	virtual AActor* SpawnWeaponActor_Implementation(TSubclassOf<AActor> WeaponClass); \
	DECLARE_FUNCTION(execServer_RemoveWeapon); \
	DECLARE_FUNCTION(execServer_AddWeaponClass); \
	DECLARE_FUNCTION(execServer_AddWeapon); \
	DECLARE_FUNCTION(execOnRep_Weapons); \
	DECLARE_FUNCTION(execAttachWeaponActor); \
	DECLARE_FUNCTION(execSpawnWeaponActor); \
	DECLARE_FUNCTION(execInitializeWeapons); \
	DECLARE_FUNCTION(execFindAttachedWeapons); \
	DECLARE_FUNCTION(execDestroyAllWeapons); \
	DECLARE_FUNCTION(execRemoveWeaponByQuery); \
	DECLARE_FUNCTION(execRemoveWeapon); \
	DECLARE_FUNCTION(execAddWeaponClass); \
	DECLARE_FUNCTION(execAddWeapon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatWeaponManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatWeaponManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatWeaponManagerComponent, UNinjaCombatBaseWeaponManagerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatWeaponManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Weapons=NETFIELD_REP_START, \
		NETFIELD_REP_END=Weapons	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatWeaponManagerComponent(UNinjaCombatWeaponManagerComponent&&); \
	UNinjaCombatWeaponManagerComponent(const UNinjaCombatWeaponManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatWeaponManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatWeaponManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatWeaponManagerComponent) \
	NO_API virtual ~UNinjaCombatWeaponManagerComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatWeaponManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatWeaponManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
