// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/NinjaInventoryItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryDragDropOperation;
class UNinjaInventoryItemDragWidget;
class UNinjaInventoryTooltipWidget;
#ifdef NINJAINVENTORYUI_NinjaInventoryItemWidget_generated_h
#error "NinjaInventoryItemWidget.generated.h already included, missing '#pragma once' in NinjaInventoryItemWidget.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryItemWidget_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshFocusFromDropOperation); \
	DECLARE_FUNCTION(execRefreshLootViewModels); \
	DECLARE_FUNCTION(execRefreshItemViewModels); \
	DECLARE_FUNCTION(execRefreshItemTooltip); \
	DECLARE_FUNCTION(execIsSupportedDragOperation); \
	DECLARE_FUNCTION(execGetTooltipWidget); \
	DECLARE_FUNCTION(execCreateDragWidget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItemWidget(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItemWidget_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItemWidget, UNinjaInventoryCommonWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItemWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaInventoryItemWidget*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItemWidget(UNinjaInventoryItemWidget&&); \
	UNinjaInventoryItemWidget(const UNinjaInventoryItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItemWidget); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryItemWidget) \
	NO_API virtual ~UNinjaInventoryItemWidget();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_28_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
