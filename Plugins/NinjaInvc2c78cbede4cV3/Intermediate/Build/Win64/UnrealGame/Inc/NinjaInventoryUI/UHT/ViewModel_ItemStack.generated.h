// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/ViewModel_ItemStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
#ifdef NINJAINVENTORYUI_ViewModel_ItemStack_generated_h
#error "ViewModel_ItemStack.generated.h already included, missing '#pragma once' in ViewModel_ItemStack.h"
#endif
#define NINJAINVENTORYUI_ViewModel_ItemStack_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStackSizeChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_ACCESSORS \
static void SetbHasStack_WrapperImpl(void* Object, const void* InValue); \
static void SetStackSize_WrapperImpl(void* Object, const void* InValue); \
static void SetStackLimit_WrapperImpl(void* Object, const void* InValue); \
static void SetMaximumLimit_WrapperImpl(void* Object, const void* InValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_ItemStack(); \
	friend struct Z_Construct_UClass_UViewModel_ItemStack_Statics; \
public: \
	DECLARE_CLASS(UViewModel_ItemStack, UNinjaInventoryItemViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_ItemStack)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_ItemStack(UViewModel_ItemStack&&); \
	UViewModel_ItemStack(const UViewModel_ItemStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_ItemStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_ItemStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewModel_ItemStack) \
	NO_API virtual ~UViewModel_ItemStack();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasStack) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(StackSize) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(StackLimit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(MaximumLimit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasStack) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(StackSize) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(StackLimit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(MaximumLimit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_17_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UViewModel_ItemStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
