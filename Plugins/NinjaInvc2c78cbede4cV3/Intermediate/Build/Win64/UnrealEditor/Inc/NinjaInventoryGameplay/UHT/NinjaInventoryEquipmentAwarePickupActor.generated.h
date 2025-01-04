// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryEquipmentAwarePickupActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
struct FGameplayTag;
#ifdef NINJAINVENTORYGAMEPLAY_NinjaInventoryEquipmentAwarePickupActor_generated_h
#error "NinjaInventoryEquipmentAwarePickupActor.generated.h already included, missing '#pragma once' in NinjaInventoryEquipmentAwarePickupActor.h"
#endif
#define NINJAINVENTORYGAMEPLAY_NinjaInventoryEquipmentAwarePickupActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleItemQualityUpdated_Implementation(FGameplayTag QualityTag); \
	virtual void HandleSkeletalMeshAsset_Implementation(USkeletalMesh* SkeletalMeshAsset); \
	virtual void HandleStaticMeshAsset_Implementation(UStaticMesh* StaticMeshAsset); \
	virtual USkeletalMeshComponent* GetSkeletalMeshComponent_Implementation() const; \
	virtual UStaticMeshComponent* GetStaticMeshComponent_Implementation() const; \
	DECLARE_FUNCTION(execHandleItemQualityUpdated); \
	DECLARE_FUNCTION(execHandleSkeletalMeshAsset); \
	DECLARE_FUNCTION(execHandleStaticMeshAsset); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetStaticMeshComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaInventoryEquipmentAwarePickupActor(); \
	friend struct Z_Construct_UClass_ANinjaInventoryEquipmentAwarePickupActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaInventoryEquipmentAwarePickupActor, ANinjaInventoryPickupActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(ANinjaInventoryEquipmentAwarePickupActor)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaInventoryEquipmentAwarePickupActor(ANinjaInventoryEquipmentAwarePickupActor&&); \
	ANinjaInventoryEquipmentAwarePickupActor(const ANinjaInventoryEquipmentAwarePickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaInventoryEquipmentAwarePickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaInventoryEquipmentAwarePickupActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaInventoryEquipmentAwarePickupActor) \
	NO_API virtual ~ANinjaInventoryEquipmentAwarePickupActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class ANinjaInventoryEquipmentAwarePickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_NinjaInventoryEquipmentAwarePickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
