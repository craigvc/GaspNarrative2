// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Pickup_generated_h
#error "ItemFragment_Pickup.generated.h already included, missing '#pragma once' in ItemFragment_Pickup.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Pickup_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector ModifyInitialLocation_Implementation(const AActor* Source, FVector const& InitialLocation); \
	DECLARE_FUNCTION(execModifyInitialLocation); \
	DECLARE_FUNCTION(execHandlePickupSpawned); \
	DECLARE_FUNCTION(execDropItemData); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execCanDropItem); \
	DECLARE_FUNCTION(execGetPickupActorClass); \
	DECLARE_FUNCTION(execHasValidPickupActorClass);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Pickup(); \
	friend struct Z_Construct_UClass_UItemFragment_Pickup_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Pickup, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Pickup) \
	virtual UObject* _getUObject() const override { return const_cast<UItemFragment_Pickup*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Pickup(UItemFragment_Pickup&&); \
	UItemFragment_Pickup(const UItemFragment_Pickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Pickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Pickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Pickup) \
	NO_API virtual ~UItemFragment_Pickup();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Pickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
