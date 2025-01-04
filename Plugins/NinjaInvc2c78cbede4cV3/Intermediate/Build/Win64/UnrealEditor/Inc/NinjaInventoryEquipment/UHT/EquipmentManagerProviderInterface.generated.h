// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/EquipmentManagerProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaEquipmentManagerComponent;
#ifdef NINJAINVENTORYEQUIPMENT_EquipmentManagerProviderInterface_generated_h
#error "EquipmentManagerProviderInterface.generated.h already included, missing '#pragma once' in EquipmentManagerProviderInterface.h"
#endif
#define NINJAINVENTORYEQUIPMENT_EquipmentManagerProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquipmentManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYEQUIPMENT_API UEquipmentManagerProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipmentManagerProviderInterface(UEquipmentManagerProviderInterface&&); \
	UEquipmentManagerProviderInterface(const UEquipmentManagerProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYEQUIPMENT_API, UEquipmentManagerProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentManagerProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentManagerProviderInterface) \
	NINJAINVENTORYEQUIPMENT_API virtual ~UEquipmentManagerProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipmentManagerProviderInterface(); \
	friend struct Z_Construct_UClass_UEquipmentManagerProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UEquipmentManagerProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NINJAINVENTORYEQUIPMENT_API) \
	DECLARE_SERIALIZER(UEquipmentManagerProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipmentManagerProviderInterface() {} \
public: \
	typedef UEquipmentManagerProviderInterface UClassType; \
	typedef IEquipmentManagerProviderInterface ThisClass; \
	static UNinjaEquipmentManagerComponent* Execute_GetEquipmentManager(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UEquipmentManagerProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentManagerProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
