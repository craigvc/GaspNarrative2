// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaInventorySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;
struct FGameplayTag;
struct FInventoryItemQualityMappingTableRow;
#ifdef NINJAINVENTORY_NinjaInventorySubsystem_generated_h
#error "NinjaInventorySubsystem.generated.h already included, missing '#pragma once' in NinjaInventorySubsystem.h"
#endif
#define NINJAINVENTORY_NinjaInventorySubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteItemPlacementQuery); \
	DECLARE_FUNCTION(execDropItemInstances); \
	DECLARE_FUNCTION(execDropItemInstance); \
	DECLARE_FUNCTION(execDropItemDefinition); \
	DECLARE_FUNCTION(execGetQualityMapping); \
	DECLARE_FUNCTION(execGetRandomFloatInRange);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventorySubsystem(); \
	friend struct Z_Construct_UClass_UNinjaInventorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventorySubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventorySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventorySubsystem(UNinjaInventorySubsystem&&); \
	UNinjaInventorySubsystem(const UNinjaInventorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventorySubsystem) \
	NO_API virtual ~UNinjaInventorySubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_23_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
