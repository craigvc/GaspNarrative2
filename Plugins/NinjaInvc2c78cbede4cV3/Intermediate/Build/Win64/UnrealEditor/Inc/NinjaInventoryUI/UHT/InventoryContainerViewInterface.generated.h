// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/InventoryContainerViewInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UUserWidget;
class UWidget;
struct FNinjaInventoryItemView;
#ifdef NINJAINVENTORYUI_InventoryContainerViewInterface_generated_h
#error "InventoryContainerViewInterface.generated.h already included, missing '#pragma once' in InventoryContainerViewInterface.h"
#endif
#define NINJAINVENTORYUI_InventoryContainerViewInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ConfigureItemWidget_Implementation(UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer) {}; \
	virtual UUserWidget* CreateItemWidget_Implementation(UNinjaInventoryItem* Item, int32 PositionInContainer) { return NULL; }; \
	virtual UNinjaInventoryContainer* GetContainer_Implementation() const { return NULL; }; \
	virtual void SetItems_Implementation(TArray<FNinjaInventoryItemView> const& Items) {}; \
	DECLARE_FUNCTION(execConfigureItemWidget); \
	DECLARE_FUNCTION(execCreateItemWidget); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execSetItems);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYUI_API UInventoryContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryContainerViewInterface(UInventoryContainerViewInterface&&); \
	UInventoryContainerViewInterface(const UInventoryContainerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYUI_API, UInventoryContainerViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryContainerViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryContainerViewInterface) \
	NINJAINVENTORYUI_API virtual ~UInventoryContainerViewInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryContainerViewInterface(); \
	friend struct Z_Construct_UClass_UInventoryContainerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryContainerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NINJAINVENTORYUI_API) \
	DECLARE_SERIALIZER(UInventoryContainerViewInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryContainerViewInterface() {} \
public: \
	typedef UInventoryContainerViewInterface UClassType; \
	typedef IInventoryContainerViewInterface ThisClass; \
	static void Execute_ConfigureItemWidget(UObject* O, UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer); \
	static UUserWidget* Execute_CreateItemWidget(UObject* O, UNinjaInventoryItem* Item, int32 PositionInContainer); \
	static UNinjaInventoryContainer* Execute_GetContainer(const UObject* O); \
	static void Execute_SetItems(UObject* O, TArray<FNinjaInventoryItemView> const& Items); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UInventoryContainerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
