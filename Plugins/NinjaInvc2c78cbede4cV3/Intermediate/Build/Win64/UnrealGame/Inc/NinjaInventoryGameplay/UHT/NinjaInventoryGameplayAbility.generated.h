// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaInventoryGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaEquipment;
class UNinjaEquipmentManagerComponent;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
struct FGameplayCueParameters;
#ifdef NINJAINVENTORYGAMEPLAY_NinjaInventoryGameplayAbility_generated_h
#error "NinjaInventoryGameplayAbility.generated.h already included, missing '#pragma once' in NinjaInventoryGameplayAbility.h"
#endif
#define NINJAINVENTORYGAMEPLAY_NinjaInventoryGameplayAbility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddEquipmentDetailsToCueParameters); \
	DECLARE_FUNCTION(execGetEquipmentManager); \
	DECLARE_FUNCTION(execGetInventoryManager); \
	DECLARE_FUNCTION(execGetItemInstance); \
	DECLARE_FUNCTION(execGetEquipmentInstance);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryGameplayAbility(); \
	friend struct Z_Construct_UClass_UNinjaInventoryGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryGameplayAbility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryGameplayAbility(UNinjaInventoryGameplayAbility&&); \
	UNinjaInventoryGameplayAbility(const UNinjaInventoryGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryGameplayAbility) \
	NO_API virtual ~UNinjaInventoryGameplayAbility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UNinjaInventoryGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
