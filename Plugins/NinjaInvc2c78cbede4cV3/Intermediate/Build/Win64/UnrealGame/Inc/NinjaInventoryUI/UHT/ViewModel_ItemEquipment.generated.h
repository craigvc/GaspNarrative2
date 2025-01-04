// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/ViewModel_ItemEquipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaEquipment;
#ifdef NINJAINVENTORYUI_ViewModel_ItemEquipment_generated_h
#error "ViewModel_ItemEquipment.generated.h already included, missing '#pragma once' in ViewModel_ItemEquipment.h"
#endif
#define NINJAINVENTORYUI_ViewModel_ItemEquipment_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleEquipmentRemoved); \
	DECLARE_FUNCTION(execHandleEquipmentStateChanged); \
	DECLARE_FUNCTION(execHandleEquipmentAdded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_ACCESSORS \
static void SetbHasEquipment_WrapperImpl(void* Object, const void* InValue); \
static void SetEquipmentStateTag_WrapperImpl(void* Object, const void* InValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_ItemEquipment(); \
	friend struct Z_Construct_UClass_UViewModel_ItemEquipment_Statics; \
public: \
	DECLARE_CLASS(UViewModel_ItemEquipment, UNinjaInventoryItemViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_ItemEquipment)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_ItemEquipment(UViewModel_ItemEquipment&&); \
	UViewModel_ItemEquipment(const UViewModel_ItemEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_ItemEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_ItemEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewModel_ItemEquipment) \
	NO_API virtual ~UViewModel_ItemEquipment();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasEquipment) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(EquipmentStateTag) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasEquipment) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(EquipmentStateTag) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_19_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UViewModel_ItemEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
