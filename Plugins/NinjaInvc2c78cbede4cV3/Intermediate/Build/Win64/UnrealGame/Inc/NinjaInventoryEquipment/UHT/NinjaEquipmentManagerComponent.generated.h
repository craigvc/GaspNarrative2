// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaEquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMeshComponent;
class UNinjaEquipment;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
struct FEquipmentAbilityHandles;
struct FEquipmentSkeletalMesh;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagQuery;
#ifdef NINJAINVENTORYEQUIPMENT_NinjaEquipmentManagerComponent_generated_h
#error "NinjaEquipmentManagerComponent.generated.h already included, missing '#pragma once' in NinjaEquipmentManagerComponent.h"
#endif
#define NINJAINVENTORYEQUIPMENT_NinjaEquipmentManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_37_DELEGATE \
static void FManagedEquipmentEvent_DelegateWrapper(const FMulticastScriptDelegate& ManagedEquipmentEvent, UNinjaEquipment* Equipment);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ChangeEquipmentState_Validate(UNinjaEquipment* , FGameplayTag ); \
	virtual void Server_ChangeEquipmentState_Implementation(UNinjaEquipment* Equipment, FGameplayTag NewStateTag); \
	virtual float OnGetAverageGearLevel_Implementation(float AbsoluteGearLevel) const; \
	virtual void SetDefaultMeshToSlot_Implementation(FEquipmentSkeletalMesh const& SkeletalMesh, FGameplayTag SlotTag); \
	virtual USkeletalMeshComponent* GetMeshComponentForSlotTag_Implementation(FGameplayTag SlotTag) const; \
	virtual void RevertMeshesFromSlots_Implementation(FGameplayTagContainer& SlotsToRevert); \
	virtual void RevertMeshesFromRemovedEquipment_Implementation(const UNinjaEquipment* Equipment); \
	DECLARE_FUNCTION(execServer_ChangeEquipmentState); \
	DECLARE_FUNCTION(execDestroyEquipment); \
	DECLARE_FUNCTION(execOnGetAverageGearLevel); \
	DECLARE_FUNCTION(execSetDefaultMeshToSlot); \
	DECLARE_FUNCTION(execGetMeshComponentForSlotTag); \
	DECLARE_FUNCTION(execSelectDefaultMesh); \
	DECLARE_FUNCTION(execRevertMeshesFromSlots); \
	DECLARE_FUNCTION(execRevertMeshesFromRemovedEquipment); \
	DECLARE_FUNCTION(execInitializeEquipment); \
	DECLARE_FUNCTION(execTryConnectToInventoryManager); \
	DECLARE_FUNCTION(execClearMeshAsset); \
	DECLARE_FUNCTION(execSetSkeletalMeshAsset); \
	DECLARE_FUNCTION(execSetStaticMeshAsset); \
	DECLARE_FUNCTION(execShowEquipmentSlots); \
	DECLARE_FUNCTION(execHideEquipmentSlots); \
	DECLARE_FUNCTION(execGetHiddenEquipmentSlots); \
	DECLARE_FUNCTION(execGetSlotTagForAttachmentSocket); \
	DECLARE_FUNCTION(execGetSocketNameForEquipmentSlot); \
	DECLARE_FUNCTION(execHasEquipmentSlot); \
	DECLARE_FUNCTION(execGetAverageGearLevel); \
	DECLARE_FUNCTION(execCreateEquipmentActor); \
	DECLARE_FUNCTION(execRevokeFromAbilitySystem); \
	DECLARE_FUNCTION(execGrantToAbilitySystem); \
	DECLARE_FUNCTION(execRemoveEquipment); \
	DECLARE_FUNCTION(execChangeEquipmentState); \
	DECLARE_FUNCTION(execAddEquipment); \
	DECLARE_FUNCTION(execGetEquipmentStateFromContainer); \
	DECLARE_FUNCTION(execGetBestEquipmentState); \
	DECLARE_FUNCTION(execInitializeEquipmentForItem); \
	DECLARE_FUNCTION(execGetEquipmentByQuery); \
	DECLARE_FUNCTION(execGetEquipmentBySlot); \
	DECLARE_FUNCTION(execGetFirstEquipmentByQuery); \
	DECLARE_FUNCTION(execGetEquipmentByItem); \
	DECLARE_FUNCTION(execGetRelevantEquipmentContainers); \
	DECLARE_FUNCTION(execGetAllEquipmentContainers); \
	DECLARE_FUNCTION(execHasItemInInventoryQueue); \
	DECLARE_FUNCTION(execHasEquipment); \
	DECLARE_FUNCTION(execGetInventoryManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaEquipmentManagerComponent, UNinjaInventoryCoreComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NO_API) \
	DECLARE_SERIALIZER(UNinjaEquipmentManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ManagedEquipment=NETFIELD_REP_START, \
		NETFIELD_REP_END=ManagedEquipment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaEquipmentManagerComponent(UNinjaEquipmentManagerComponent&&); \
	UNinjaEquipmentManagerComponent(const UNinjaEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaEquipmentManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaEquipmentManagerComponent) \
	NO_API virtual ~UNinjaEquipmentManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_33_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UNinjaEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Components_NinjaEquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
