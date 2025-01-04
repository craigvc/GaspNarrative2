// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaInventoryLootComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IInventoryLootCacheInterface;
class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UNinjaInventoryLootSelector;
class UNinjaInventoryManagerComponent;
#ifdef NINJAINVENTORY_NinjaInventoryLootComponent_generated_h
#error "NinjaInventoryLootComponent.generated.h already included, missing '#pragma once' in NinjaInventoryLootComponent.h"
#endif
#define NINJAINVENTORY_NinjaInventoryLootComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SelectLoot_Validate(UNinjaInventoryManagerComponent* ); \
	virtual void Server_SelectLoot_Implementation(UNinjaInventoryManagerComponent* Requester); \
	DECLARE_FUNCTION(execServer_SelectLoot); \
	DECLARE_FUNCTION(execGetDefaultLootSelector); \
	DECLARE_FUNCTION(execSelectLoot); \
	DECLARE_FUNCTION(execPerformLootRolls); \
	DECLARE_FUNCTION(execGetLootCache);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryLootComponent(); \
	friend struct Z_Construct_UClass_UNinjaInventoryLootComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryLootComponent, UNinjaInventoryCoreComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryLootComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryLootComponent(UNinjaInventoryLootComponent&&); \
	UNinjaInventoryLootComponent(const UNinjaInventoryLootComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryLootComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryLootComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryLootComponent) \
	NO_API virtual ~UNinjaInventoryLootComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_23_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryLootComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryLootComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
