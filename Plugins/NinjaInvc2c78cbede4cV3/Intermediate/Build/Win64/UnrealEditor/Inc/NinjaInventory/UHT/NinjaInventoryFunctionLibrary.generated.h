// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaInventoryFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDroppableItemInterface;
class ILootableItemInterface;
class IStackableItemInterface;
class IStorableItemInterface;
class IUpgradeableItemInterface;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;
class UObject;
enum class EInventoryContextState : uint8;
struct FInventoryContainerContext;
struct FInventoryDefaultItemMemory;
struct FInventoryItemContext;
#ifdef NINJAINVENTORY_NinjaInventoryFunctionLibrary_generated_h
#error "NinjaInventoryFunctionLibrary.generated.h already included, missing '#pragma once' in NinjaInventoryFunctionLibrary.h"
#endif
#define NINJAINVENTORY_NinjaInventoryFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemContextResult); \
	DECLARE_FUNCTION(execOnContainerContextResult); \
	DECLARE_FUNCTION(execHasDroppedItems); \
	DECLARE_FUNCTION(execHasCreatedOrUpdatedItems); \
	DECLARE_FUNCTION(execHasUpdatedItems); \
	DECLARE_FUNCTION(execHasCreatedItems); \
	DECLARE_FUNCTION(execWasFullyProcessed); \
	DECLARE_FUNCTION(execGetItemContextState); \
	DECLARE_FUNCTION(execGetContainerContextState); \
	DECLARE_FUNCTION(execGetUpgradeableItemAspect); \
	DECLARE_FUNCTION(execGetStorableItemAspect); \
	DECLARE_FUNCTION(execGetStackableItemAspect); \
	DECLARE_FUNCTION(execGetLootableItemAspect); \
	DECLARE_FUNCTION(execGetDroppableItemAspect); \
	DECLARE_FUNCTION(execCreateItemContext); \
	DECLARE_FUNCTION(execCreateContainerContext); \
	DECLARE_FUNCTION(execGetInventoryManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryFunctionLibrary(UNinjaInventoryFunctionLibrary&&); \
	UNinjaInventoryFunctionLibrary(const UNinjaInventoryFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryFunctionLibrary) \
	NO_API virtual ~UNinjaInventoryFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_30_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
