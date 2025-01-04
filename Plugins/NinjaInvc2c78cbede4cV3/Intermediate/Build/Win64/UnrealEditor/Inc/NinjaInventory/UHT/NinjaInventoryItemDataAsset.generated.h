// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/NinjaInventoryItemDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterface;
class UNinjaInventoryItem;
class UNinjaInventoryItemFragment;
struct FGameplayTagContainer;
#ifdef NINJAINVENTORY_NinjaInventoryItemDataAsset_generated_h
#error "NinjaInventoryItemDataAsset.generated.h already included, missing '#pragma once' in NinjaInventoryItemDataAsset.h"
#endif
#define NINJAINVENTORY_NinjaInventoryItemDataAsset_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRevertFragments); \
	DECLARE_FUNCTION(execApplyFragments); \
	DECLARE_FUNCTION(execInitializeFragments); \
	DECLARE_FUNCTION(execFindFragmentsByInterface); \
	DECLARE_FUNCTION(execFindFragmentByInterface); \
	DECLARE_FUNCTION(execFindFragmentByClass); \
	DECLARE_FUNCTION(execHasFragment); \
	DECLARE_FUNCTION(execGetDefaultInstanceClass); \
	DECLARE_FUNCTION(execGetSupportedOperations); \
	DECLARE_FUNCTION(execGetGameplayTags);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItemDataAsset(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItemDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItemDataAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaInventoryItemDataAsset*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItemDataAsset(UNinjaInventoryItemDataAsset&&); \
	UNinjaInventoryItemDataAsset(const UNinjaInventoryItemDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItemDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryItemDataAsset) \
	NO_API virtual ~UNinjaInventoryItemDataAsset();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryItemDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
