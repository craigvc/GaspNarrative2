// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/LootCaches/LootCache_None.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryLoot;
class UNinjaInventoryManagerComponent;
#ifdef NINJAINVENTORY_LootCache_None_generated_h
#error "LootCache_None.generated.h already included, missing '#pragma once' in LootCache_None.h"
#endif
#define NINJAINVENTORY_LootCache_None_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 EvictLoot_Implementation(const UNinjaInventoryManagerComponent* Requester); \
	virtual void SaveOrUpdateLoot_Implementation(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*> const& NewLoot); \
	virtual void FilterLootByRequester_Implementation(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const; \
	DECLARE_FUNCTION(execEvictLoot); \
	DECLARE_FUNCTION(execSaveOrUpdateLoot); \
	DECLARE_FUNCTION(execFilterLootByRequester); \
	DECLARE_FUNCTION(execClearCachedLoot); \
	DECLARE_FUNCTION(execCacheLootForRequester); \
	DECLARE_FUNCTION(execGetLootForRequester);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootCache_None(); \
	friend struct Z_Construct_UClass_ULootCache_None_Statics; \
public: \
	DECLARE_CLASS(ULootCache_None, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(ULootCache_None) \
	virtual UObject* _getUObject() const override { return const_cast<ULootCache_None*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootCache_None(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULootCache_None(ULootCache_None&&); \
	ULootCache_None(const ULootCache_None&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootCache_None); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootCache_None); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootCache_None) \
	NO_API virtual ~ULootCache_None();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class ULootCache_None>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_LootCaches_LootCache_None_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
