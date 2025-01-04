// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InventoryPickupInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaInventoryItemDataAsset;
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORY_InventoryPickupInterface_generated_h
#error "InventoryPickupInterface.generated.h already included, missing '#pragma once' in InventoryPickupInterface.h"
#endif
#define NINJAINVENTORY_InventoryPickupInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetInitialLocation_Implementation(FVector InitialLocation, FVector& ActualLocation) {}; \
	virtual void SetSource_Implementation(AActor* Source) {}; \
	virtual AActor* GetSource_Implementation() const { return NULL; }; \
	virtual void SetItemMemories_Implementation(TArray<FInventoryDefaultItemMemory> const& NewItemMemories) {}; \
	virtual TArray<FInventoryDefaultItemMemory> GetItemMemories_Implementation() const { return TArray<FInventoryDefaultItemMemory>(); }; \
	virtual void SetItemData_Implementation(const UNinjaInventoryItemDataAsset* NewItemData) {}; \
	virtual const UNinjaInventoryItemDataAsset* GetItemData_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execSetInitialLocation); \
	DECLARE_FUNCTION(execSetSource); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execSetItemMemories); \
	DECLARE_FUNCTION(execGetItemMemories); \
	DECLARE_FUNCTION(execSetItemData); \
	DECLARE_FUNCTION(execGetItemData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORY_API UInventoryPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryPickupInterface(UInventoryPickupInterface&&); \
	UInventoryPickupInterface(const UInventoryPickupInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORY_API, UInventoryPickupInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryPickupInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryPickupInterface) \
	NINJAINVENTORY_API virtual ~UInventoryPickupInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryPickupInterface(); \
	friend struct Z_Construct_UClass_UInventoryPickupInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryPickupInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NINJAINVENTORY_API) \
	DECLARE_SERIALIZER(UInventoryPickupInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryPickupInterface() {} \
public: \
	typedef UInventoryPickupInterface UClassType; \
	typedef IInventoryPickupInterface ThisClass; \
	static const UNinjaInventoryItemDataAsset* Execute_GetItemData(const UObject* O); \
	static TArray<FInventoryDefaultItemMemory> Execute_GetItemMemories(const UObject* O); \
	static AActor* Execute_GetSource(const UObject* O); \
	static void Execute_SetInitialLocation(UObject* O, FVector InitialLocation, FVector& ActualLocation); \
	static void Execute_SetItemData(UObject* O, const UNinjaInventoryItemDataAsset* NewItemData); \
	static void Execute_SetItemMemories(UObject* O, TArray<FInventoryDefaultItemMemory> const& NewItemMemories); \
	static void Execute_SetSource(UObject* O, AActor* Source); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UInventoryPickupInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_InventoryPickupInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
