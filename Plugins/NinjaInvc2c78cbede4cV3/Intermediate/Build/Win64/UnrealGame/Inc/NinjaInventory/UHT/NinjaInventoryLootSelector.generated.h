// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryLootSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;
class UNinjaInventorySubsystem;
class UWorld;
#ifdef NINJAINVENTORY_NinjaInventoryLootSelector_generated_h
#error "NinjaInventoryLootSelector.generated.h already included, missing '#pragma once' in NinjaInventoryLootSelector.h"
#endif
#define NINJAINVENTORY_NinjaInventoryLootSelector_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 RollQuantity_Implementation(const UNinjaInventoryManagerComponent* Requester, FVector2D QuantityRange, TArray<UNinjaInventoryLoot*> const& SelectedLoot) const; \
	virtual bool RollItem_Implementation(const UNinjaInventoryManagerComponent* Requester, float DropChance, TArray<UNinjaInventoryLoot*> const& SelectedLoot) const; \
	DECLARE_FUNCTION(execGetInventorySubsystem); \
	DECLARE_FUNCTION(execGetStackSize); \
	DECLARE_FUNCTION(execRollQuantity); \
	DECLARE_FUNCTION(execRollItem);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryLootSelector(); \
	friend struct Z_Construct_UClass_UNinjaInventoryLootSelector_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryLootSelector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryLootSelector)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryLootSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryLootSelector(UNinjaInventoryLootSelector&&); \
	UNinjaInventoryLootSelector(const UNinjaInventoryLootSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryLootSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryLootSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryLootSelector) \
	NO_API virtual ~UNinjaInventoryLootSelector();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryLootSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
