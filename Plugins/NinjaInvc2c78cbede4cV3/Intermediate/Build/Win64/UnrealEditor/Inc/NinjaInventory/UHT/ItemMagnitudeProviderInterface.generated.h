// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ItemMagnitudeProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
struct FGameplayTag;
struct FGameplayTag; 
#ifdef NINJAINVENTORY_ItemMagnitudeProviderInterface_generated_h
#error "ItemMagnitudeProviderInterface.generated.h already included, missing '#pragma once' in ItemMagnitudeProviderInterface.h"
#endif
#define NINJAINVENTORY_ItemMagnitudeProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllMagnitudeValues); \
	DECLARE_FUNCTION(execGetMagnitudeForDataTag);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORY_API UItemMagnitudeValueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemMagnitudeValueInterface(UItemMagnitudeValueInterface&&); \
	UItemMagnitudeValueInterface(const UItemMagnitudeValueInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORY_API, UItemMagnitudeValueInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemMagnitudeValueInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemMagnitudeValueInterface) \
	NINJAINVENTORY_API virtual ~UItemMagnitudeValueInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemMagnitudeValueInterface(); \
	friend struct Z_Construct_UClass_UItemMagnitudeValueInterface_Statics; \
public: \
	DECLARE_CLASS(UItemMagnitudeValueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NINJAINVENTORY_API) \
	DECLARE_SERIALIZER(UItemMagnitudeValueInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemMagnitudeValueInterface() {} \
public: \
	typedef UItemMagnitudeValueInterface UClassType; \
	typedef IItemMagnitudeValueInterface ThisClass; \
	static TMap<FGameplayTag,float> Execute_GetAllMagnitudeValues(const UObject* O, const UNinjaInventoryItem* Item); \
	static float Execute_GetMagnitudeForDataTag(const UObject* O, const UNinjaInventoryItem* Item, FGameplayTag const& DataTag, float DefaultValue); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UItemMagnitudeValueInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_ItemMagnitudeProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
