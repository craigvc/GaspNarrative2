// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/NinjaInventoryManagerViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryManagerComponent;
#ifdef NINJAINVENTORYUI_NinjaInventoryManagerViewModel_generated_h
#error "NinjaInventoryManagerViewModel.generated.h already included, missing '#pragma once' in NinjaInventoryManagerViewModel.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryManagerViewModel_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation(); \
	virtual void InitializeData_Implementation(); \
	virtual void UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager); \
	virtual void BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager); \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitializeData); \
	DECLARE_FUNCTION(execUnbindFromInventoryManager); \
	DECLARE_FUNCTION(execBindToInventoryManager); \
	DECLARE_FUNCTION(execSetInventoryManager); \
	DECLARE_FUNCTION(execGetInventoryManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryManagerViewModel(); \
	friend struct Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryManagerViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryManagerViewModel)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryManagerViewModel(UNinjaInventoryManagerViewModel&&); \
	UNinjaInventoryManagerViewModel(const UNinjaInventoryManagerViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryManagerViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryManagerViewModel); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryManagerViewModel) \
	NO_API virtual ~UNinjaInventoryManagerViewModel();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasInventoryManager) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasInventoryManager) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_17_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryManagerViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
