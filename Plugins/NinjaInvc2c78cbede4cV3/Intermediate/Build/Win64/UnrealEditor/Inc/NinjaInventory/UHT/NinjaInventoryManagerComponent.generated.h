// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaInventoryManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerState;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;
class UNinjaInventoryLayoutDataAsset;
class UNinjaInventoryLoot;
class UNinjaInventoryLootComponent;
struct FGameplayTagQuery;
struct FGuid;
struct FInventoryContainerContext;
struct FInventoryContainerEntry;
struct FInventoryContainerRecord;
struct FInventoryFragmentPayload;
template struct TInstancedStruct<FInventoryFragmentPayload>;
struct FInventoryItemContext;
struct FInventoryItemEntry;
struct FInventoryItemRecord;
struct FInventoryManagerRecord;
#ifdef NINJAINVENTORY_NinjaInventoryManagerComponent_generated_h
#error "NinjaInventoryManagerComponent.generated.h already included, missing '#pragma once' in NinjaInventoryManagerComponent.h"
#endif
#define NINJAINVENTORY_NinjaInventoryManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_61_DELEGATE \
static void FInventoryInitializedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryInitializedEventSignature);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_62_DELEGATE \
static void FInventoryContainerEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryContainerEventSignature, UNinjaInventoryContainer* Container);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_63_DELEGATE \
static void FInventoryItemEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemEventSignature, UNinjaInventoryItem* Item);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_64_DELEGATE \
static void FInventoryLootDismissedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryLootDismissedEventSignature, UNinjaInventoryLootComponent* Source);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_65_DELEGATE \
static void FInventoryLootReceivedEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryLootReceivedEventSignature, UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& SelectedLoot);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_66_DELEGATE \
static void FInventoryStorageEventSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryStorageEventSignature, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, int32 Position);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_PerformFragmentOperationOnItems_Validate(UNinjaInventoryItem* , UNinjaInventoryItem* ); \
	virtual void Server_PerformFragmentOperationOnItems_Implementation(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target); \
	virtual bool Server_PerformFragmentOperation_Validate(UNinjaInventoryItemFragment* , TInstancedStruct<FInventoryFragmentPayload> const& ); \
	virtual void Server_PerformFragmentOperation_Implementation(UNinjaInventoryItemFragment* Fragment, TInstancedStruct<FInventoryFragmentPayload> const& Payload); \
	virtual bool Server_TryPerformOperation_Validate(TInstancedStruct<FInventoryFragmentPayload> const& ); \
	virtual void Server_TryPerformOperation_Implementation(TInstancedStruct<FInventoryFragmentPayload> const& Payload); \
	virtual bool Server_InitializeDefaultItems_Validate(); \
	virtual void Server_InitializeDefaultItems_Implementation(); \
	virtual void Client_DismissLoot_Implementation(UNinjaInventoryLootComponent* Source); \
	virtual void Client_ReceiveLoot_Implementation(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*> const& SelectedLoot); \
	virtual void LoadItemRecord_Implementation(FInventoryItemRecord const& Record); \
	virtual void LoadContainerRecord_Implementation(FInventoryContainerRecord const& Record); \
	virtual void ResetInventory_Implementation(); \
	virtual void InitializeInventory_Implementation(); \
	DECLARE_FUNCTION(execServer_PerformFragmentOperationOnItems); \
	DECLARE_FUNCTION(execServer_PerformFragmentOperation); \
	DECLARE_FUNCTION(execServer_TryPerformOperation); \
	DECLARE_FUNCTION(execServer_InitializeDefaultItems); \
	DECLARE_FUNCTION(execClient_DismissLoot); \
	DECLARE_FUNCTION(execClient_ReceiveLoot); \
	DECLARE_FUNCTION(execOnRep_InitializationState); \
	DECLARE_FUNCTION(execLoadItemRecord); \
	DECLARE_FUNCTION(execLoadContainerRecord); \
	DECLARE_FUNCTION(execCreateItemRecord); \
	DECLARE_FUNCTION(execCreateContainerRecord); \
	DECLARE_FUNCTION(execResetInventory); \
	DECLARE_FUNCTION(execInitializeInventory); \
	DECLARE_FUNCTION(execOnPlayerStatePawnSet); \
	DECLARE_FUNCTION(execDismissLoot); \
	DECLARE_FUNCTION(execReceiveLoot); \
	DECLARE_FUNCTION(execPerformFragmentOperationOnItems); \
	DECLARE_FUNCTION(execPerformFragmentOperation); \
	DECLARE_FUNCTION(execTryPerformOperation); \
	DECLARE_FUNCTION(execEvictStoredItemInstance); \
	DECLARE_FUNCTION(execEvictStoredItemId); \
	DECLARE_FUNCTION(execMoveCachedItem); \
	DECLARE_FUNCTION(execRemoveItemById); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveContainersFromItem); \
	DECLARE_FUNCTION(execRemoveContainerById); \
	DECLARE_FUNCTION(execRemoveContainer); \
	DECLARE_FUNCTION(execCanRelocateItemsInContainer); \
	DECLARE_FUNCTION(execConvertLootToItemContext); \
	DECLARE_FUNCTION(execConvertPickupToItemContext); \
	DECLARE_FUNCTION(execAddLoot); \
	DECLARE_FUNCTION(execAddPickup); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execCanAddItem); \
	DECLARE_FUNCTION(execAddContainer); \
	DECLARE_FUNCTION(execCanAddContainer); \
	DECLARE_FUNCTION(execCreateItemInstance); \
	DECLARE_FUNCTION(execCreateContainerInstance); \
	DECLARE_FUNCTION(execGetItemRecordsForSerialization); \
	DECLARE_FUNCTION(execGetLootableItems); \
	DECLARE_FUNCTION(execGetItemsWithIncompleteStacks); \
	DECLARE_FUNCTION(execGetItemsByQuery); \
	DECLARE_FUNCTION(execGetItemsByContainerData); \
	DECLARE_FUNCTION(execGetItemsByContainer); \
	DECLARE_FUNCTION(execGetItemsByData); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetFirstItemByQuery); \
	DECLARE_FUNCTION(execGetItemByOwnedContainer); \
	DECLARE_FUNCTION(execGetItemByContainerDataAndPosition); \
	DECLARE_FUNCTION(execGetItemByContainerAndPosition); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetContainerRecordsForSerialization); \
	DECLARE_FUNCTION(execGetAvailableContainersForItemData); \
	DECLARE_FUNCTION(execGetAvailableContainersForItem); \
	DECLARE_FUNCTION(execGetContainersOwnedByItem); \
	DECLARE_FUNCTION(execGetContainersByQuery); \
	DECLARE_FUNCTION(execGetContainersByData); \
	DECLARE_FUNCTION(execGetDefaultContainers); \
	DECLARE_FUNCTION(execGetContainers); \
	DECLARE_FUNCTION(execGetFirstContainerByData); \
	DECLARE_FUNCTION(execGetPrimaryContainerForItem); \
	DECLARE_FUNCTION(execGetDefaultContainer); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execCountItemsInContainer); \
	DECLARE_FUNCTION(execCountTotalStacksForItem); \
	DECLARE_FUNCTION(execCountItems); \
	DECLARE_FUNCTION(execCountAvailableSlotsForItem); \
	DECLARE_FUNCTION(execCountAvailableSlotsInContainer); \
	DECLARE_FUNCTION(execCountTotalSlotsInContainer); \
	DECLARE_FUNCTION(execCountItemData); \
	DECLARE_FUNCTION(execCountContainerData); \
	DECLARE_FUNCTION(execCountContainers); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execIsDefaultContainer); \
	DECLARE_FUNCTION(execHasContainer); \
	DECLARE_FUNCTION(execGetLayout); \
	DECLARE_FUNCTION(execLoadInventory); \
	DECLARE_FUNCTION(execGetInventoryRecordForSerialization); \
	DECLARE_FUNCTION(execGetInventoryAvatar); \
	DECLARE_FUNCTION(execIsInventoryInitialized); \
	DECLARE_FUNCTION(execTryInitializeInventory);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryManagerComponent, UNinjaInventoryCoreComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StoredContainers=NETFIELD_REP_START, \
		StoredItems, \
		InitializationState, \
		NETFIELD_REP_END=InitializationState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryManagerComponent(UNinjaInventoryManagerComponent&&); \
	UNinjaInventoryManagerComponent(const UNinjaInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryManagerComponent) \
	NO_API virtual ~UNinjaInventoryManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_57_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Components_NinjaInventoryManagerComponent_h


#define FOREACH_ENUM_EINVENTORYINITIALIZATIONSTATE(op) \
	op(EInventoryInitializationState::NotInitialized) \
	op(EInventoryInitializationState::BoundToAbilitySystem) \
	op(EInventoryInitializationState::Initialized) 

enum class EInventoryInitializationState : uint8;
template<> struct TIsUEnumClass<EInventoryInitializationState> { enum { Value = true }; };
template<> NINJAINVENTORY_API UEnum* StaticEnum<EInventoryInitializationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
