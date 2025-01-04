// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/InventoryItemViewInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
#ifdef NINJAINVENTORYUI_InventoryItemViewInterface_generated_h
#error "InventoryItemViewInterface.generated.h already included, missing '#pragma once' in InventoryItemViewInterface.h"
#endif
#define NINJAINVENTORYUI_InventoryItemViewInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPositionInContainer_Implementation(int32 NewPosition) {}; \
	virtual void SetContainer_Implementation(UNinjaInventoryContainer* NewContainer) {}; \
	virtual UNinjaInventoryContainer* GetContainer_Implementation() const { return NULL; }; \
	virtual void SetItem_Implementation(UNinjaInventoryItem* NewItem) {}; \
	virtual UNinjaInventoryItem* GetItem_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execCompareItem); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execSetPositionInContainer); \
	DECLARE_FUNCTION(execSetContainer); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execGetItem);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYUI_API UInventoryItemViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryItemViewInterface(UInventoryItemViewInterface&&); \
	UInventoryItemViewInterface(const UInventoryItemViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYUI_API, UInventoryItemViewInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemViewInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemViewInterface) \
	NINJAINVENTORYUI_API virtual ~UInventoryItemViewInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryItemViewInterface(); \
	friend struct Z_Construct_UClass_UInventoryItemViewInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NINJAINVENTORYUI_API) \
	DECLARE_SERIALIZER(UInventoryItemViewInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryItemViewInterface() {} \
public: \
	typedef UInventoryItemViewInterface UClassType; \
	typedef IInventoryItemViewInterface ThisClass; \
	static bool Execute_CompareItem(const UObject* O, UNinjaInventoryItem* OtherItem); \
	static UNinjaInventoryContainer* Execute_GetContainer(const UObject* O); \
	static UNinjaInventoryItem* Execute_GetItem(const UObject* O); \
	static bool Execute_HasItem(const UObject* O); \
	static void Execute_SetContainer(UObject* O, UNinjaInventoryContainer* NewContainer); \
	static void Execute_SetItem(UObject* O, UNinjaInventoryItem* NewItem); \
	static void Execute_SetPositionInContainer(UObject* O, int32 NewPosition); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UInventoryItemViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
