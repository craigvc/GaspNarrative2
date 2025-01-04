// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Viewmodels/ViewModel_ReceivedLoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
#ifdef NINJAINVENTORYUI_ViewModel_ReceivedLoot_generated_h
#error "ViewModel_ReceivedLoot.generated.h already included, missing '#pragma once' in ViewModel_ReceivedLoot.h"
#endif
#define NINJAINVENTORYUI_ViewModel_ReceivedLoot_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleLootDismissed_Implementation(UNinjaInventoryLootComponent* Source); \
	virtual void HandleLootReceived_Implementation(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& NewSelectedLoot); \
	DECLARE_FUNCTION(execHandleLootDismissed); \
	DECLARE_FUNCTION(execHandleLootReceived);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_ACCESSORS \
static void GetbHasLoot_WrapperImpl(const void* Object, void* OutValue); \
static void GetSelectedLoot_WrapperImpl(const void* Object, void* OutValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_ReceivedLoot(); \
	friend struct Z_Construct_UClass_UViewModel_ReceivedLoot_Statics; \
public: \
	DECLARE_CLASS(UViewModel_ReceivedLoot, UNinjaInventoryManagerViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_ReceivedLoot)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_ReceivedLoot(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_ReceivedLoot(UViewModel_ReceivedLoot&&); \
	UViewModel_ReceivedLoot(const UViewModel_ReceivedLoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_ReceivedLoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_ReceivedLoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewModel_ReceivedLoot) \
	NO_API virtual ~UViewModel_ReceivedLoot();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJAINVENTORYUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bHasLoot) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SelectedLoot) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bHasLoot) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(SelectedLoot) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h_19_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UViewModel_ReceivedLoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ReceivedLoot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
