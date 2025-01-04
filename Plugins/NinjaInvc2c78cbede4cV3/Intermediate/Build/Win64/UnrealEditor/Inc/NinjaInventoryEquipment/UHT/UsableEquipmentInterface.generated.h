// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UsableEquipmentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINVENTORYEQUIPMENT_UsableEquipmentInterface_generated_h
#error "UsableEquipmentInterface.generated.h already included, missing '#pragma once' in UsableEquipmentInterface.h"
#endif
#define NINJAINVENTORYEQUIPMENT_UsableEquipmentInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UseEquipment_Implementation() {}; \
	DECLARE_FUNCTION(execUseEquipment);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYEQUIPMENT_API UUsableEquipmentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUsableEquipmentInterface(UUsableEquipmentInterface&&); \
	UUsableEquipmentInterface(const UUsableEquipmentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYEQUIPMENT_API, UUsableEquipmentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsableEquipmentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsableEquipmentInterface) \
	NINJAINVENTORYEQUIPMENT_API virtual ~UUsableEquipmentInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUsableEquipmentInterface(); \
	friend struct Z_Construct_UClass_UUsableEquipmentInterface_Statics; \
public: \
	DECLARE_CLASS(UUsableEquipmentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NINJAINVENTORYEQUIPMENT_API) \
	DECLARE_SERIALIZER(UUsableEquipmentInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUsableEquipmentInterface() {} \
public: \
	typedef UUsableEquipmentInterface UClassType; \
	typedef IUsableEquipmentInterface ThisClass; \
	static void Execute_UseEquipment(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UUsableEquipmentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_UsableEquipmentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
