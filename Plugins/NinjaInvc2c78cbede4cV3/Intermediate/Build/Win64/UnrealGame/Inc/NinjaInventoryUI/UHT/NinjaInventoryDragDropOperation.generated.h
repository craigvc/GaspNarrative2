// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/NinjaInventoryDragDropOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryDragDropOperation;
class UNinjaInventoryItem;
class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
class UNinjaInventoryManagerComponent;
class UUserWidget;
#ifdef NINJAINVENTORYUI_NinjaInventoryDragDropOperation_generated_h
#error "NinjaInventoryDragDropOperation.generated.h already included, missing '#pragma once' in NinjaInventoryDragDropOperation.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryDragDropOperation_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearUnsupportedOperation); \
	DECLARE_FUNCTION(execMarkUnsupportedOperation); \
	DECLARE_FUNCTION(execIsSourceForUnsupportedOperation); \
	DECLARE_FUNCTION(execGetLootManager); \
	DECLARE_FUNCTION(execGetInventoryManager); \
	DECLARE_FUNCTION(execGetLoot); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execHasLoot); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execCreateLootOperation); \
	DECLARE_FUNCTION(execCreateItemOperation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryDragDropOperation(); \
	friend struct Z_Construct_UClass_UNinjaInventoryDragDropOperation_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryDragDropOperation, UDragDropOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryDragDropOperation)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryDragDropOperation(UNinjaInventoryDragDropOperation&&); \
	UNinjaInventoryDragDropOperation(const UNinjaInventoryDragDropOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryDragDropOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryDragDropOperation) \
	NO_API virtual ~UNinjaInventoryDragDropOperation();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryDragDropOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryDragDropOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS