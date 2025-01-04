// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/NinjaInventoryContainerDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef NINJAINVENTORY_NinjaInventoryContainerDataAsset_generated_h
#error "NinjaInventoryContainerDataAsset.generated.h already included, missing '#pragma once' in NinjaInventoryContainerDataAsset.h"
#endif
#define NINJAINVENTORY_NinjaInventoryContainerDataAsset_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSupportsItem); \
	DECLARE_FUNCTION(execSupportsItemData); \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execIsDefaultContainer); \
	DECLARE_FUNCTION(execGetDefaultStateTagOrElse); \
	DECLARE_FUNCTION(execGetDefaultStateTag); \
	DECLARE_FUNCTION(execGetGameplayTags); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetDefaultContainerClass); \
	DECLARE_FUNCTION(execGetDisplayName);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryContainerDataAsset(); \
	friend struct Z_Construct_UClass_UNinjaInventoryContainerDataAsset_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryContainerDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryContainerDataAsset)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryContainerDataAsset(UNinjaInventoryContainerDataAsset&&); \
	UNinjaInventoryContainerDataAsset(const UNinjaInventoryContainerDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryContainerDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryContainerDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryContainerDataAsset) \
	NO_API virtual ~UNinjaInventoryContainerDataAsset();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryContainerDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryContainerDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
