// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Serialization/InventorySerializableFragmentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORY_InventorySerializableFragmentInterface_generated_h
#error "InventorySerializableFragmentInterface.generated.h already included, missing '#pragma once' in InventorySerializableFragmentInterface.h"
#endif
#define NINJAINVENTORY_InventorySerializableFragmentInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RestoreFromSavedMemory_Implementation(FInventoryDefaultItemMemory const& Memory) {}; \
	DECLARE_FUNCTION(execRestoreFromSavedMemory); \
	DECLARE_FUNCTION(execCanBeSerialized);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORY_API UInventorySerializableFragmentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventorySerializableFragmentInterface(UInventorySerializableFragmentInterface&&); \
	UInventorySerializableFragmentInterface(const UInventorySerializableFragmentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORY_API, UInventorySerializableFragmentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySerializableFragmentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySerializableFragmentInterface) \
	NINJAINVENTORY_API virtual ~UInventorySerializableFragmentInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventorySerializableFragmentInterface(); \
	friend struct Z_Construct_UClass_UInventorySerializableFragmentInterface_Statics; \
public: \
	DECLARE_CLASS(UInventorySerializableFragmentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NINJAINVENTORY_API) \
	DECLARE_SERIALIZER(UInventorySerializableFragmentInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventorySerializableFragmentInterface() {} \
public: \
	typedef UInventorySerializableFragmentInterface UClassType; \
	typedef IInventorySerializableFragmentInterface ThisClass; \
	static bool Execute_CanBeSerialized(const UObject* O); \
	static void Execute_RestoreFromSavedMemory(UObject* O, FInventoryDefaultItemMemory const& Memory); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UInventorySerializableFragmentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Serialization_InventorySerializableFragmentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
