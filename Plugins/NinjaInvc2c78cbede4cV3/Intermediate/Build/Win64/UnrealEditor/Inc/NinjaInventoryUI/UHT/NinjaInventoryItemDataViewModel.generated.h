// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/NinjaInventoryItemDataViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItemDataAsset;
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORYUI_NinjaInventoryItemDataViewModel_generated_h
#error "NinjaInventoryItemDataViewModel.generated.h already included, missing '#pragma once' in NinjaInventoryItemDataViewModel.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryItemDataViewModel_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitializeData); \
	DECLARE_FUNCTION(execSetDefaultMemories); \
	DECLARE_FUNCTION(execSetItemData); \
	DECLARE_FUNCTION(execGetItemData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItemDataViewModel(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItemDataViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItemDataViewModel)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItemDataViewModel(UNinjaInventoryItemDataViewModel&&); \
	UNinjaInventoryItemDataViewModel(const UNinjaInventoryItemDataViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItemDataViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItemDataViewModel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryItemDataViewModel) \
	NO_API virtual ~UNinjaInventoryItemDataViewModel();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasItemData) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(DefaultMemories) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasItemData) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(DefaultMemories) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_22_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryItemDataViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
