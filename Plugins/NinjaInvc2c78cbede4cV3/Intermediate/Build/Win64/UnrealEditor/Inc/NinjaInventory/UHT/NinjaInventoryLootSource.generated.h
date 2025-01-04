// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryLootSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;
#ifdef NINJAINVENTORY_NinjaInventoryLootSource_generated_h
#error "NinjaInventoryLootSource.generated.h already included, missing '#pragma once' in NinjaInventoryLootSource.h"
#endif
#define NINJAINVENTORY_NinjaInventoryLootSource_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SelectLoot_Implementation(UNinjaInventoryLootComponent* LootComponent, UNinjaInventoryManagerComponent* Requester, float CurrentBudget, TArray<UNinjaInventoryLoot*> const& CurrentLoot, float& ConsumedBudget, TArray<UNinjaInventoryLoot*>& SelectedLoot); \
	DECLARE_FUNCTION(execSelectLoot);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryLootSource(); \
	friend struct Z_Construct_UClass_UNinjaInventoryLootSource_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryLootSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryLootSource)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryLootSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryLootSource(UNinjaInventoryLootSource&&); \
	UNinjaInventoryLootSource(const UNinjaInventoryLootSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryLootSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryLootSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryLootSource) \
	NO_API virtual ~UNinjaInventoryLootSource();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryLootSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLootSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
