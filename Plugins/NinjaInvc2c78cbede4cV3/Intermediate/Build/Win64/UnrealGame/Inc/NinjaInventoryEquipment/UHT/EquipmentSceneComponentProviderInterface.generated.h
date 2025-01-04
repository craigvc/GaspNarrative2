// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/EquipmentSceneComponentProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaEquipment;
class USceneComponent;
struct FGameplayTagContainer;
#ifdef NINJAINVENTORYEQUIPMENT_EquipmentSceneComponentProviderInterface_generated_h
#error "EquipmentSceneComponentProviderInterface.generated.h already included, missing '#pragma once' in EquipmentSceneComponentProviderInterface.h"
#endif
#define NINJAINVENTORYEQUIPMENT_EquipmentSceneComponentProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USceneComponent* GetSceneComponent_Implementation(const UNinjaEquipment* Equipment, FGameplayTagContainer const& SelectorTags) const { return NULL; }; \
	DECLARE_FUNCTION(execGetSceneComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYEQUIPMENT_API UEquipmentSceneComponentProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipmentSceneComponentProviderInterface(UEquipmentSceneComponentProviderInterface&&); \
	UEquipmentSceneComponentProviderInterface(const UEquipmentSceneComponentProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYEQUIPMENT_API, UEquipmentSceneComponentProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentSceneComponentProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentSceneComponentProviderInterface) \
	NINJAINVENTORYEQUIPMENT_API virtual ~UEquipmentSceneComponentProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipmentSceneComponentProviderInterface(); \
	friend struct Z_Construct_UClass_UEquipmentSceneComponentProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UEquipmentSceneComponentProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NINJAINVENTORYEQUIPMENT_API) \
	DECLARE_SERIALIZER(UEquipmentSceneComponentProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipmentSceneComponentProviderInterface() {} \
public: \
	typedef UEquipmentSceneComponentProviderInterface UClassType; \
	typedef IEquipmentSceneComponentProviderInterface ThisClass; \
	static USceneComponent* Execute_GetSceneComponent(const UObject* O, const UNinjaEquipment* Equipment, FGameplayTagContainer const& SelectorTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UEquipmentSceneComponentProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Interfaces_EquipmentSceneComponentProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
