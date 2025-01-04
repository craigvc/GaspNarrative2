// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/NinjaInventoryItemViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
#ifdef NINJAINVENTORYUI_NinjaInventoryItemViewModel_generated_h
#error "NinjaInventoryItemViewModel.generated.h already included, missing '#pragma once' in NinjaInventoryItemViewModel.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryItemViewModel_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UnbindFromItem_Implementation(UNinjaInventoryItem* Item); \
	virtual void BindToItem_Implementation(UNinjaInventoryItem* Item); \
	DECLARE_FUNCTION(execHandleItemRemoved); \
	DECLARE_FUNCTION(execHandleItemAdded); \
	DECLARE_FUNCTION(execUnbindFromItem); \
	DECLARE_FUNCTION(execBindToItem); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execIsSameItem);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItemViewModel(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItemViewModel_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItemViewModel, UNinjaInventoryItemDataViewModel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItemViewModel)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItemViewModel(UNinjaInventoryItemViewModel&&); \
	UNinjaInventoryItemViewModel(const UNinjaInventoryItemViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItemViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItemViewModel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryItemViewModel) \
	NO_API virtual ~UNinjaInventoryItemViewModel();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasItem) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasItem) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h_17_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryItemViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
