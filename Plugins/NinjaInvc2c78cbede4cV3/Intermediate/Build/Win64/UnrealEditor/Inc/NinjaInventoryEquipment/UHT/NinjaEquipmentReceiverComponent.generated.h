// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaEquipmentReceiverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef NINJAINVENTORYEQUIPMENT_NinjaEquipmentReceiverComponent_generated_h
#error "NinjaEquipmentReceiverComponent.generated.h already included, missing '#pragma once' in NinjaEquipmentReceiverComponent.h"
#endif
#define NINJAINVENTORYEQUIPMENT_NinjaEquipmentReceiverComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquipmentOwner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaEquipmentReceiverComponent(); \
	friend struct Z_Construct_UClass_UNinjaEquipmentReceiverComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaEquipmentReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NO_API) \
	DECLARE_SERIALIZER(UNinjaEquipmentReceiverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaEquipmentReceiverComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Equipment=NETFIELD_REP_START, \
		NETFIELD_REP_END=Equipment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaEquipmentReceiverComponent(UNinjaEquipmentReceiverComponent&&); \
	UNinjaEquipmentReceiverComponent(const UNinjaEquipmentReceiverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaEquipmentReceiverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaEquipmentReceiverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaEquipmentReceiverComponent) \
	NO_API virtual ~UNinjaEquipmentReceiverComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UNinjaEquipmentReceiverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentReceiverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
