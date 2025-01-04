// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryLoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryLootComponent;
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORY_NinjaInventoryLoot_generated_h
#error "NinjaInventoryLoot.generated.h already included, missing '#pragma once' in NinjaInventoryLoot.h"
#endif
#define NINJAINVENTORY_NinjaInventoryLoot_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultMemories); \
	DECLARE_FUNCTION(execSetSource); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execSetQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execSetItemData); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execSetContainerData); \
	DECLARE_FUNCTION(execGetContainerData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryLoot(); \
	friend struct Z_Construct_UClass_UNinjaInventoryLoot_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryLoot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryLoot)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryLoot(UNinjaInventoryLoot&&); \
	UNinjaInventoryLoot(const UNinjaInventoryLoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryLoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryLoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryLoot) \
	NO_API virtual ~UNinjaInventoryLoot();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryLoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryLoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
