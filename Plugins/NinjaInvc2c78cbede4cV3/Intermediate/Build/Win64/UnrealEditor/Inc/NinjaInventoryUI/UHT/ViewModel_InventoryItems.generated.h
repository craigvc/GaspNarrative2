// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/ViewModel_InventoryItems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
struct FNinjaInventoryItemView;
#ifdef NINJAINVENTORYUI_ViewModel_InventoryItems_generated_h
#error "ViewModel_InventoryItems.generated.h already included, missing '#pragma once' in ViewModel_InventoryItems.h"
#endif
#define NINJAINVENTORYUI_ViewModel_InventoryItems_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleItemRemoved_Implementation(UNinjaInventoryItem* Item); \
	virtual void HandleItemStorageChanged_Implementation(UNinjaInventoryItem* Item, UNinjaInventoryContainer* OtherContainer, int32 Position); \
	virtual void HandleItemAdded_Implementation(UNinjaInventoryItem* Item); \
	DECLARE_FUNCTION(execHandleItemRemoved); \
	DECLARE_FUNCTION(execHandleItemStorageChanged); \
	DECLARE_FUNCTION(execHandleItemAdded); \
	DECLARE_FUNCTION(execGetItems);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_InventoryItems(); \
	friend struct Z_Construct_UClass_UViewModel_InventoryItems_Statics; \
public: \
	DECLARE_CLASS(UViewModel_InventoryItems, UNinjaInventoryContainerViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_InventoryItems)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_InventoryItems(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_InventoryItems(UViewModel_InventoryItems&&); \
	UViewModel_InventoryItems(const UViewModel_InventoryItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_InventoryItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_InventoryItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewModel_InventoryItems) \
	NO_API virtual ~UViewModel_InventoryItems();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetItems) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(GetItems) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_22_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UViewModel_InventoryItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
