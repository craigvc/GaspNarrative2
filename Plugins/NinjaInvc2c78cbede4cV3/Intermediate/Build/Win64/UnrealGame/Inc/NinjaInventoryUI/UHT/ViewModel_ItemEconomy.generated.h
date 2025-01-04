// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/ViewModel_ItemEconomy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
#ifdef NINJAINVENTORYUI_ViewModel_ItemEconomy_generated_h
#error "ViewModel_ItemEconomy.generated.h already included, missing '#pragma once' in ViewModel_ItemEconomy.h"
#endif
#define NINJAINVENTORYUI_ViewModel_ItemEconomy_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTotalPriceChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_ACCESSORS \
static void SetbCanBeBought_WrapperImpl(void* Object, const void* InValue); \
static void SetbCanBeSold_WrapperImpl(void* Object, const void* InValue); \
static void SetUnitBuyPrice_WrapperImpl(void* Object, const void* InValue); \
static void SetTotalBuyPrice_WrapperImpl(void* Object, const void* InValue); \
static void SetUnitSellPrice_WrapperImpl(void* Object, const void* InValue); \
static void SetTotalSellPrice_WrapperImpl(void* Object, const void* InValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_ItemEconomy(); \
	friend struct Z_Construct_UClass_UViewModel_ItemEconomy_Statics; \
public: \
	DECLARE_CLASS(UViewModel_ItemEconomy, UNinjaInventoryItemViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_ItemEconomy)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_ItemEconomy(UViewModel_ItemEconomy&&); \
	UViewModel_ItemEconomy(const UViewModel_ItemEconomy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_ItemEconomy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_ItemEconomy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewModel_ItemEconomy) \
	NO_API virtual ~UViewModel_ItemEconomy();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bCanBeBought) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bCanBeSold) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(UnitBuyPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(TotalBuyPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(UnitSellPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(TotalSellPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bCanBeBought) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bCanBeSold) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(UnitBuyPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(TotalBuyPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(UnitSellPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(TotalSellPrice) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_15_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UViewModel_ItemEconomy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
