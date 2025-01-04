// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable CppUEBlueprintCallableFunctionUnused
#pragma once

#include "CoreMinimal.h"
#include "Components/NinjaInventoryCoreComponent.h"
#include "GameFramework/NinjaInventoryLootSelector.h"
#include "Interfaces/Aspects/OperableItemInterface.h"
#include "Misc/Optional.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Types/FInventoryContainer.h"
#include "Types/FInventoryContainerContext.h"
#include "Types/FInventoryItem.h"
#include "Types/FInventoryStorageCache.h"
#include "UObject/Object.h"
#include "NinjaInventoryManagerComponent.generated.h"

struct FInventoryContainerRecord;
struct FInventoryDefaultItem;
struct FInventoryItemContext;
struct FInventoryItemContextEntry;
struct FInventoryItemRecord;
struct FInventoryManagerRecord;

class IDroppableItemInterface;
class IStorableItemInterface;
class IStackableItemInterface;
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;
class UNinjaInventoryLayoutDataAsset;
class UNinjaInventoryLootSelector;
class UNinjaInventoryLootComponent;
class UNinjaInventoryAction_WaitForAbilitySystem;

/**
 * Informs where in the initialization workflow the inventory is currently in.
 */
UENUM(BlueprintType)
enum class EInventoryInitializationState : uint8
{
	/** Initialization has not started yet. */
	NotInitialized,

	/** Inventory is connected to the ASC and will initialize items. */
	BoundToAbilitySystem,

	/** Inventory has been fully initialized. */
	Initialized
};

/**
 * Manages stored inventory items.
 */
UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class NINJAINVENTORY_API UNinjaInventoryManagerComponent : public UNinjaInventoryCoreComponent
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryInitializedEventSignature);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryContainerEventSignature, UNinjaInventoryContainer*, Container);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemEventSignature, UNinjaInventoryItem*, Item);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryLootDismissedEventSignature, UNinjaInventoryLootComponent*, Source);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryLootReceivedEventSignature, UNinjaInventoryLootComponent*, Source, const TArray<UNinjaInventoryLoot*>&, SelectedLoot);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryStorageEventSignature, UNinjaInventoryItem*, Item, UNinjaInventoryContainer*, Container, int32, Position);
	
	GENERATED_BODY()

public:

	/** Broadcasts the inventory that has been initialized. */
	UPROPERTY(BlueprintAssignable)
	FInventoryInitializedEventSignature OnInventoryInitialized;
	
	/** Broadcasts a new container. */
	UPROPERTY(BlueprintAssignable)
	FInventoryContainerEventSignature OnContainerAdded;

	/** Broadcasts a removed container. */
	UPROPERTY(BlueprintAssignable)
	FInventoryContainerEventSignature OnContainerRemoved;
	
	/** Broadcasts an item added. */
	UPROPERTY(BlueprintAssignable)
	FInventoryItemEventSignature OnItemAdded;

	/** Broadcasts a change in the item's storage. */
	UPROPERTY(BlueprintAssignable)
	FInventoryStorageEventSignature OnItemStorageChanged;
	
	/** Broadcasts an item removed. */
	UPROPERTY(BlueprintAssignable)
	FInventoryItemEventSignature OnItemRemoved;

	/** Broadcasts loot being received. */
	UPROPERTY(BlueprintAssignable)
	FInventoryLootReceivedEventSignature OnLootReceived;

	/** Broadcasts loot that has been discarded. */
	UPROPERTY(BlueprintAssignable)
	FInventoryLootDismissedEventSignature OnLootDismissed;
	
	UNinjaInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// -- Begin Actor Component implementation
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual APawn* GetPawn() const override;
	// -- End Actor Component implementation
	
	/**
	 * Initializes this Inventory Manager, setting an avatar for it.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	void TryInitializeInventory();
	
	/**
	 * Checks if the inventory is initialized.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	bool IsInventoryInitialized() const { return InitializationState == EInventoryInitializationState::Initialized; }

	/**
	 * Provides the Inventory Avatar, meaning the Actor in the world using the Inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager")
	AActor* GetInventoryAvatar() const;

	/**
	 * Provides the Inventory Record that can be used for serialization.
	 * It contains records for all containers and items as well.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Inventory Record"))
	FInventoryManagerRecord GetInventoryRecordForSerialization() const;
	
	/**
	 * Restores this inventory data using the provided record.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	virtual void LoadInventory(const FInventoryManagerRecord& InventoryRecord);
	
	/**
	 * Provides the layout assigned to this inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Layout"))
	const UNinjaInventoryLayoutDataAsset* GetLayout() const;
	
	/**
	 * Evaluates if this Inventory owns the provided Container.
	 *
	 * @param Container				Container to evaluate.
	 * @return						True if this inventory has the container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Has Container?"))
	bool HasContainer(const UNinjaInventoryContainer* Container) const;

	/**
	 * Checks if a given container is a default container, based on the layout's query.
	 *
	 * @param Container				Container to evaluate.
	 * @return						True if the container is considered a default one. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Default Container?"))
	bool IsDefaultContainer(const UNinjaInventoryContainer* Container) const;
	
	/**
	 * Evaluates if this Inventory owns the provided Item.
	 *
	 * @param Item					Item to evaluate.
	 * @return						True if this inventory has the item.
	 */	
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Has Item?"))
	bool HasItem(const UNinjaInventoryItem* Item) const;

	/**
	 * Counts all containers stored in this Inventory Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Countainer Count"))
	int32 CountContainers() const;
	
	/**
	 * Counts how many instances of a given container, from its data, are stored in this inventory.
	 *
	 * @param ContainerData			Container data to evaluate.
	 * @return						The amount of instances generated from the provided data.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Countainer Count"))
	int32 CountContainerData(const UNinjaInventoryContainerDataAsset* ContainerData) const;

	/**
	 * Counts how many instances of a given item, from its data, are stored in this inventory.
	 *
	 * @param ItemData				Item data to evaluate
	 * @return						The amount of instances generated from the provided data.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item Count"))
	int32 CountItemData(const UNinjaInventoryItemDataAsset* ItemData) const;

	/**
	 * Counts the total amount of slots in a container.
	 *
	 * @param Container		Container instance to count slots for.
	 * @return						Total amount of slots in the container instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Slots"))
	int32 CountTotalSlotsInContainer(const UNinjaInventoryContainer* Container) const;

	/**
	 * Counts the amount of slots available in a container.
	 *
	 * @param Container		Container instance to count slots for.
	 * @return						Amount of slots available in the container instance.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Slots"))
	int32 CountAvailableSlotsInContainer(const UNinjaInventoryContainer* Container) const;
	
	/**
	 * Counts the amount of slots available for a given item data.
	 *
	 * @param ItemData				The item data to be evaluated.
	 * @return						The amount of slots available for the item.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Slots"))
	int32 CountAvailableSlotsForItem(const UNinjaInventoryItemDataAsset* ItemData) const;

	/**
	 * Counts all items stored in this Inventory Manager.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item Count"))
	int32 CountItems() const;

	/**
	 * Counts the total stack count for an item data.
	 *
	 * @param ItemData				The Item data to be counted.
	 * @return						Total amount of stack entries.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Stack Count"))
	int32 CountTotalStacksForItem(const UNinjaInventoryItemDataAsset* ItemData) const;

	/**
	 * Counts items stored in a given container.
	 *
	 * @param Container				Container to be evaluated.
	 * @return						Amount of items stored in this container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item Count"))
	int32 CountItemsInContainer(const UNinjaInventoryContainer* Container) const;

	/**
	 * Finds a container by its internal identifier.
	 *
	 * @parm ContainerId			Unique Identifier for the container.
	 * @return						Container for the provided identifier.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container"))
	UNinjaInventoryContainer* GetContainer(const FGuid& ContainerId) const;
	
	/**
	 * Provides the default container for this Inventory.
	 *
	 * If you can't assume one single Default Container, then use the "GetDefaultContainers"
	 * function instead, which will provide all default containers, as per the layout setup.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container"))
	UNinjaInventoryContainer* GetDefaultContainer() const;

	/**
	 * Provides the container cached for a given item.
	 *
	 * @param Item					Item stored in the container.
	 * @return						Cached container storing the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container"))
	UNinjaInventoryContainer* GetPrimaryContainerForItem(const UNinjaInventoryItem* Item) const;

	/**
	 * Retrieves the first container based on the provided Container Data Asset.
	 *
	 * This is useful if you know for sure that you only have one container for a given data,
	 * which is usually the case for equipment slots.
	 *
	 * @param ContainerData			Container Data used to filter containers.
	 * @return						The first container based on the Container Data Asset.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container"))
	UNinjaInventoryContainer* GetFirstContainerByData(const UNinjaInventoryContainerDataAsset* ContainerData) const;
	
	/**
	 * Retrieves all containers assigned to this inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetContainers() const;
	
	/**
	 * Retrieves all default containers for this inventory.
	 *
	 * Ideally only one container should be marked as default, but each game can decide
	 * how to approach this, by allowing one or many containers to be marked as default.
	 *
	 * If it's safe to assume that only one default item will ever be returned, then you
	 * can use the "GetDefaultContainer" function instead.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetDefaultContainers() const;

	/**
	 * Retrieves all containers based on the provided Container Data Asset.
	 *
	 * @param ContainerData			Container Data used to filter containers.
	 * @return						All containers based on the Container Data Asset.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetContainersByData(const UNinjaInventoryContainerDataAsset* ContainerData) const;
	
	/**
	 * Retrieves all containers matching the tag query.
	 *
	 * @param TagQuery				Gameplay Tag Query used to filter containers.
	 * @return						All containers matching the provided Tag Query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetContainersByQuery(const FGameplayTagQuery& TagQuery) const;

	/**
	 * Retrieves all containers owned by an item.
	 * 
	 * @param Item					Item that owns the containers. 
	 * @return						All containers owned by an item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetContainersOwnedByItem(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Retrieves all containers that could store an item, sorted by priority.
	 *
	 * @param Item					Item to evaluate. 
	 * @return						All containers that could store the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetAvailableContainersForItem(const UNinjaInventoryItem* Item) const;	

	/**
	 * Retrieves all containers that could store an item's data, sorted by priority.
	 *
	 * @param ItemData				Item Data to evaluate. 
	 * @return						All containers that could store the item data.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Containers"))
	TArray<UNinjaInventoryContainer*> GetAvailableContainersForItemData(const UNinjaInventoryItemDataAsset* ItemData) const;	

	/**
	 * Provides all serializable containers as their records.
	 *
	 * @return
	 *		A list of Container Records that can be used to serialize the current
	 *		containers managed by this inventory. Should match the full container list.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container Records"))
	TArray<FInventoryContainerRecord> GetContainerRecordsForSerialization() const;
	
	/**
	 * Finds an item by its internal identifier.
	 *
	 * @param ItemId				Unique Identifier for the item.
	 * @return						Item for the provided identifier.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	UNinjaInventoryItem* GetItem(const FGuid& ItemId) const;

	/**
	 * Finds an item stored in a container, in a position.
	 *
	 * @param Container				Container where the item is stored.
	 * @param Position				Position where the item is stored.
	 * @return						Item stored at the location or null, if no item was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	UNinjaInventoryItem* GetItemByContainerAndPosition(const UNinjaInventoryContainer* Container, int32 Position) const;	

	/**
	 * Finds an item stored in a container, in a position.
	 *
	 * @param ContainerData			Container data referring to the instance. If there are many containers, the first entry will be used.
	 * @param Position				Position where the item is stored.
	 * @return						Item stored at the location or null, if no item (or container) was found.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	UNinjaInventoryItem* GetItemByContainerDataAndPosition(const UNinjaInventoryContainerDataAsset* ContainerData, int32 Position) const;	
	
	/**
	 * Finds an item that owns a given container.
	 *
	 * @param Container				Container owned by the item.
	 * @return						Item instance that owns the container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	UNinjaInventoryItem* GetItemByOwnedContainer(const UNinjaInventoryContainer* Container) const;
	
	/**
	 * Finds the first available item by a given query.
	 *
	 * @param TagQuery				Gameplay Tag Query used to filter items.
	 * @return						The first item matching the provided Tag Query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	UNinjaInventoryItem* GetFirstItemByQuery(const FGameplayTagQuery& TagQuery) const;
	
	/**
	 * Retrieves all items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItems() const;
	
	/**
	 * Retrieves all items matching the item data.
	 *
	 * @param ItemData					Item Data used as a search criteria.
	 * @return							All stored items of a certain type.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItemsByData(const UNinjaInventoryItemDataAsset* ItemData) const;	
	
	/**
	 * Retrieves all items stored in the container instance.
	 *
	 * @param Container					Container storing the items.
	 * @param OnlyPrimaryContainers		If set to true, searches primary containers, discarding additional ones.
	 * @return							All items stored in a given container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItemsByContainer(const UNinjaInventoryContainer* Container, bool OnlyPrimaryContainers = true) const;	

	/**
	 * Retrieves all items stored in containers backed by the container definition.
	 *
	 * @param ContainerData				Container definition
	 * @param OnlyPrimaryContainers		If set to true, searches primary containers, discarding additional ones.
	 * @return							All items stored in a given container.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItemsByContainerData(const UNinjaInventoryContainerDataAsset* ContainerData, bool OnlyPrimaryContainers = true) const;	
	
	/**
	 * Retrieves all items matching the tag query.
	 *
	 * @param TagQuery				Gameplay Tag Query used to filter items.
	 * @return						All items matching the provided Tag Query.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItemsByQuery(const FGameplayTagQuery& TagQuery) const;

	/**
	 * Retrieves all stackable items of a certain type, with incomplete stacks.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetItemsWithIncompleteStacks(const UNinjaInventoryItemDataAsset* ItemData) const;	

	/**
	 * Retrieves all items in this inventory that can be looted.
	 * This excludes any actual roll for drop rates. It's just a flat view of items.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Items"))
	TArray<UNinjaInventoryItem*> GetLootableItems() const;

	/**
	 * Provides all serializable items as their records.
	 *
	 * @return
	 *		A list of Item Records that can be used to serialize the current items
	 *		managed by this inventory. Should match the full item list.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item Records"))
	TArray<FInventoryItemRecord> GetItemRecordsForSerialization() const;	
	
	/**
	 * Initializes an Container from a given data asset.
	 *
	 * @param ContainerData			Container definition used as a base for the instance.
	 * @param ObjectName			Optional name for the Container Instance.
	 * @return						The Container Instance fully configured.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Container"))
	virtual UNinjaInventoryContainer* CreateContainerInstance(const UNinjaInventoryContainerDataAsset* ContainerData, FName ObjectName = NAME_None);
	
	/**
	 * Initializes an Item from a given data asset.
	 *
	 * @param ItemData				Item definition used as a base for the instance.
	 * @param ObjectName			Optional name for the Item Instance.
	 * @return						The Inventory Item Instance fully configured.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Item"))
	virtual UNinjaInventoryItem* CreateItemInstance(const UNinjaInventoryItemDataAsset* ItemData, FName ObjectName = NAME_None);

	/**
	 * Checks if a container context can be added to this inventory.
	 *
	 * @param ContainerContext		Context to be evaluated.
	 * @return						True if the container can be added, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Can Add?"))
	virtual bool CanAddContainer(const FInventoryContainerContext& ContainerContext) const;
	
	/**
	 * Adds a new Container to this Inventory Manager.
	 *
	 * @param ContainerContext
	 *		Provides data for the operation and receives the new container.
	 *		The container must not be fulfilled yet, meaning no container instance was set.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void AddContainer(FInventoryContainerContext ContainerContext, UPARAM(DisplayName = "Result") FInventoryContainerContext& OutResult);

	/**
	 * Responds to the container being added via the fast array replication.
	 * Meant to be invoked from the FInventoryContainerList replication system.
	 */
	virtual void HandleContainerAdded(const FInventoryContainerEntry& Entry, int32 Idx);

	/**
	 * Checks if an item context can be added to this inventory.
	 *
	 * @param ItemContext			Context to be evaluated.
	 * @return						True if the item can be added, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Can Add?"))
	virtual bool CanAddItem(FInventoryItemContext ItemContext) const;
	
	/**
	 * Adds items to this Inventory Manager.
	 *
	 * @param ItemContext			Input context containing items that will be added.
	 * @param OutResult				Result context, containing all operations performed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void AddItem(FInventoryItemContext ItemContext, UPARAM(DisplayName = "Result") FInventoryItemContext& OutResult);

	/**
	 * Adds the item represented by a Pickup Actor to this Inventory Manager.
	 *
	 * @param PickupActor			Pickup actor containing item data, provided via the Inventory Pickup Interface.
	 * @param OutResult				Result context, containing all operations performed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void AddPickup(UPARAM(meta = (MustImplement = "/Script/NinjaInventory.InventoryPickupInterface")) AActor* PickupActor, UPARAM(DisplayName = "Result") FInventoryItemContext& OutResult);
	
	/**
	 * Adds loot to this Inventory Manager.
	 *
	 * @param Loot					All loot being granted.
	 * @param OutResult				Result context, containing all operations performed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void AddLoot(TArray<UNinjaInventoryLoot*> Loot, UPARAM(DisplayName = "Result") FInventoryItemContext& OutResult);

	/**
	 * Converts the provided pickup to an Item Context that can be added to the inventory.
	 *
	 * @param PickupActor	Pickup actor to be converted into an item context.
	 * return				Item context generated from the pickup, which can be added to the inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager")
	virtual FInventoryItemContext ConvertPickupToItemContext(UPARAM(meta = (MustImplement = "/Script/NinjaInventory.InventoryPickupInterface")) AActor* PickupActor) const; 
	
	/**
	 * Converts the provided loot to an Item Context that can be added to the inventory.
	 *
	 * @param Loot			Loot to be converted into an item context.
	 * return				Item context generated from the loot, which can be added to the inventory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager")
	virtual FInventoryItemContext ConvertLootToItemContext(TArray<UNinjaInventoryLoot*>& Loot) const; 

	/**
	 * A moment between adding the Item to the internal list and before broadcasting it.
	 * Meant to be invoked from the FInventoryItemList replication system.
	 */	
	virtual void PreItemAdded(const FInventoryItemEntry& Entry, int32 Idx);
	
	/**
	 * Responds to the item being added via the fast array replication.
	 * Meant to be invoked from the FInventoryItemList replication system.
	 */
	virtual void HandleItemAdded(const FInventoryItemEntry& Entry, int32 Idx);

	/**
	 * Checks if items can be relocated, in case a container is to be removed.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Inventory Manager", meta = (ReturnDisplayName = "Can Relocate?"))
	bool CanRelocateItemsInContainer(const UNinjaInventoryContainer* Container) const;
	
	/**
	 * Removes a Container from this Inventory Manager.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void RemoveContainer(UNinjaInventoryContainer* Container);

	/**
	 * Removes an Item from this Inventory Manager, by its unique ID.
	 *
	 * @param ContainerId	ID of the container to be removed, must be assigned to this inventory.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void RemoveContainerById(FGuid ContainerId);
	
	/**
	 * Removes all containers added by an item.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void RemoveContainersFromItem(UNinjaInventoryItem* Item);
	
	/**
	 * Responds to the container being removed via the fast array replication.
	 * Meant to be invoked from the FInventoryContainerList replication system.
	 */
	virtual void HandleContainerRemoved(const FInventoryContainerEntry& Entry, int32 Idx);
	
	/**
	 * Removes an Item from this Inventory Manager.
	 *
	 * @param Item			Item to be removed, must be assigned to this inventory.
	 * @param Quantity		Quantity removed if the item has a stack. Zero means all.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void RemoveItem(UNinjaInventoryItem* Item, int32 Quantity = 0);

	/**
	 * Removes an Item from this Inventory Manager, by its unique ID.
	 *
	 * @param ItemId		ID of the item to be removed, must be assigned to this inventory.
	 * @param Quantity		Quantity removed if the item has a stack. Zero means all.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void RemoveItemById(const FGuid& ItemId, int32 Quantity = 0);
	
	/**
	 * Responds to the item being removed via the fast array replication.
	 * Meant to be invoked from the FInventoryItemList replication system.
	 */
	virtual void HandleItemRemoved(const FInventoryItemEntry& Entry, int32 Idx);

	void CacheItem(const FGuid& ItemId, const FGuid& ContainerId, int32 Position);
	
	/**
	 * Caches information about an item that has been stored to a container.
	 * 
	 * @param ItemId				Item that is the key to this cache entry. 
	 * @param ContainerId			Container assigned to the item.
	 * @param Position				Position the item occupies in the container.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	void MoveCachedItem(const FGuid& ItemId, const FGuid& ContainerId, const int32 Position);
	
	/**
	 * Evicts information about an item's storage.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void EvictStoredItemId(const FGuid& ItemId);

	/**
	 * Evicts information about an item's storage.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	void EvictStoredItemInstance(UNinjaInventoryItem* Item);
	
	/**
	 * Executes an operation on a fragment that implements the Operable Item Interface.
	 *
	 * All fragments able to use the payload will be triggered.
	 * 
	 * This function will manage network RPCs as necessary, meaning that this should be the
	 * main entry-point for all fragment operations that must be replicated or authoritative.
	 *
	 * @param Payload				Information used by the fragment to perform the operation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	virtual void TryPerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload);
	
	/**
	 * Executes an operation on a fragment that implements the Operable Item Interface.
	 * 
	 * This function will manage network RPCs as necessary, meaning that this should be the
	 * main entry-point for all fragment operations that must be replicated or authoritative.
	 *
	 * @param Fragment				Fragment that will ultimately execute the operation.
	 * @param Payload				Information used by the fragment to perform the operation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	virtual void PerformFragmentOperation(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentPayload>& Payload);

	/**
	 * Evaluates which operation can be performed between items, considering available fragments.
	 *
	 * The actual evaluation/execution happens in the internal version of this method, which can
	 * be overriden to cover more scenarios, without needing to worry about the authority flow.
	 * 
	 * @param Source				Source item that will provide the fragment and receive the operation.
	 * @param Target				Target item that will be affected by the operation.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Inventory Manager")
	void PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target);
	
	/**
	 * Receives loot that has been previously requested.
	 *
	 * @param Source			Loot Component that generated this loot.
	 * @param SelectedLoot		All loot that has been selected for this source.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	virtual void ReceiveLoot(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*>& SelectedLoot);

	/**
	 * Dismisses loot that has been received from a source.
	 *
	 * @param Source
	 *		Source that has generated previous loot. There are a few reasons why loot
	 *		might be getting discarded: distance from the loot source, loot has been
	 *		collected by another requester, etc.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Inventory Manager")
	virtual void DismissLoot(UNinjaInventoryLootComponent* Source);

protected:

	using FItemId = FGuid;
	using FContainerId = FGuid;
	using FPosition = int32;
	
	/**
	 * How often the component will try to retrieve the Ability System Component from the avatar.
	 * This only happens during the Inventory Initialization, when the ASC must be available.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Manager")
	float AbilitySystemPollInterval;

	/**
	 * Determines for how long the component will wait for the Ability System Component.
	 * This only happens during the Inventory Initialization, when the ASC must be available.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Manager")
	float AbilitySystemMaxWait;
	
	/** Defines the layout for this inventory. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Manager")
	TObjectPtr<const UNinjaInventoryLayoutDataAsset> InventoryLayout;
	
	/** All items granted by default. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Manager")
	TArray<FInventoryItemContextEntry> DefaultItems;
	
	/** All containers in this inventory. */
	UPROPERTY(Replicated)
	FInventoryContainerList StoredContainers;
	
	/**
	 * All items managed by this inventory.
	 *
	 * This list only contains items and no additional information that is not the item
	 * instance itself, plus it's initial data. This is done in such way that allows
	 * extensions of this component to just create new cached structures as needed.
	 *
	 * The base inventory has a cached structure like that, to store the relationships
	 * between all items and containers, along with item positions.
	 */
	UPROPERTY(Replicated)
	FInventoryItemList StoredItems;

	/**
	 * Caches all items stored in a container. The Container is the key for this map.
	 * This should be seen as a matrix of Containers and Positions pointing to an item.
	 * Not replicated, so it must be updated locally.
	 */
	TMap<FContainerId, TMap<FPosition, FItemId>> ItemsInContainerCache;
	
	/**
	 * Caches all containers storing an item. The Item is the key for this map.
	 * This should be seen as a matrix of Items and Containers pointing to a position.
	 * Not replicated, must be updated locally.
	 */
	TMap<FItemId, TPair<FContainerId, FPosition>> PrimaryContainersWithItemCache;	

	/**
	 * Tries to bind to the player state, if that's the Inventory Owner.
	 */
	void TryBindToPlayerState();
	
	/**
	 * Initializes items, once the initial replication has finished, and we are connected to the ASC.
	 */
	virtual void TryInitializeItems();
	
	/**
	 * Reacts to the Pawn being set in the owning Player State.
	 */
	UFUNCTION()
	void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);

	/**
	 * Effectively initializes the Inventory, once the Ability System Component is ready.
	 * Only executes if the inventory has not been initialized yet. Requires authority.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintAuthorityOnly, Category = "Inventory Manager")
	void InitializeInventory();

	/**
	 * Resets the inventory to an empty state.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintAuthorityOnly, Category = "Inventory Manager")
	void ResetInventory();
	
	/**
	 * Loads the container from a source, using the appropriate interface.
	 */
	void LoadLayoutViaInterface(const AActor* Source);
	
	/**
	 * Loads default items from a source, using the appropriate interface.
	 */
	void LoadDefaultItemsViaInterface(const AActor* Source);
	
	/**
	 * Sets the Layout Class used by this inventory.
	 */
	virtual void InitializeDefaultContainers();

	/**
	 * Initializes the default items from the inventory.
	 */
	virtual void InitializeDefaultItems();

	/**
	 * Initializes the inventory from the provided record, after loading all necessary assets.
	 */
	virtual void HandleInventoryAssetsLoaded(FInventoryManagerRecord InventoryRecord);
	
	/**
	 * Sorts a list of containers based on their priorities or any other criteria.
	 */
	virtual void SortContainers(TArray<FInventoryContainerEntry>& Containers) const;

	/**
	 * Converts stored container entries into an array of container items.
	 */
	static TArray<UNinjaInventoryContainer*> ConvertStoredContainerEntries(const TArray<FInventoryContainerEntry>& Entries);
	
	/**
	 * Converts stored item entries into an array of inventory items.
	 */
	static TArray<UNinjaInventoryItem*> ConvertStoredItemEntries(const TArray<FInventoryItemEntry>& Entries);

	/**
	 * Converts cached item entries into an array of inventory items.
	 */
	static TArray<UNinjaInventoryItem*> ConvertCachedItemEntries(const TArray<FInventoryStorageCache>& Entries);
	
	/**
	 * Handles the actual operation of adding an item to the inventory.
	 */
	virtual void Internal_AddItem(FInventoryItemContext& ItemContext);

	/**
	 * Modifies a default item context, creating new instances and updating default memories.
	 */
	virtual void ModifyItemRequest(FInventoryItemContext& ItemContext);

	/**
	 * Adds the main item from an Item Request.
	 */
	virtual void AddMainItemFromAddRequest(FInventoryItemContext& ItemContext);

	/**
	 * Adds all extra items from an Item Request.
	 */
	virtual void AddExtraItemsFromAddRequest(FInventoryItemContext& ItemContext);
	
	/**
	 * Updates items that were modified by an Add Request.
	 */
	virtual void UpdateItemsFromAddRequest(FInventoryItemContext& ItemContext);
	
	/**
	 * Drops items that could not be stored from an Add Request.
	 */
	virtual void DropItemsFromAddRequest(FInventoryItemContext& ItemContext);

	/**
	 * Determines an appropriate drop location for the provided item.
	 *
	 * @param ItemToDrop		An Item instance that needs to be dropped.
	 * @return					Valid location in the world where the Pickup Actor can be spawned.
	 */
	virtual FVector FindDropLocationForItem(const UNinjaInventoryItem* ItemToDrop);
	
	/**
	 * Determines an appropriate drop location for the provided entry.
	 *
	 * @param EntryToDrop		An entry from the item context with information about the item to drop.
	 * @return					Valid location in the world where the Pickup Actor can be spawned.
	 */
	virtual FVector FindDropLocationForEntry(const FInventoryItemContextEntry& EntryToDrop);

	/**
	 * Adds one item entry from a context, returning the new instance.
	 */
	virtual UNinjaInventoryItem* AddItemEntry(FInventoryItemContextEntry& Entry);	

	/**
	 * Evaluates if items in the array can be relocated or dropped.
	 * This avoids the Inventory being in an invalid state.
	 */
	static bool CanRelocateItems(const TArray<UNinjaInventoryItem*>& Items);
	
	/**
	 * Relocate items that were most likely stored in a container that is being removed. 
	 */
	virtual void RelocateItems(TArray<UNinjaInventoryItem*>& Items);
	
	/**
	 * Caches a new entry in all cache structures.
	 */
	virtual void CacheNewItemEntry(const FInventoryItemEntry& Entry);
	
	/**
	 * Evaluates which operation can be performed between two items and executes it.
	 * Should only be used when both items are valid and confirmed to be managed by this instance.
	 */
	virtual void Internal_PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target);

	/**
	 * Creates a Container Record that can be used for serialization. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory Manager")
	bool CreateContainerRecord(const FInventoryContainerEntry& Entry, FInventoryContainerRecord& OutRecord) const;

	/**
	 * Creates an Item Record that can be used for serialization. 
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory Manager")
	bool CreateItemRecord(const FInventoryItemEntry& Entry, FInventoryItemRecord& OutRecord) const;	
	
	/**
	 * Creates a Container Record that can be used for serialization.
	 * Internal version compatible with Unreal Engine 5.3 and 5.4+, but requiring specific proxies.
	 */
	virtual TOptional<FInventoryContainerRecord> Internal_CreateContainerRecord(const FInventoryContainerEntry& Entry) const;

	/**
	 * Creates an Item Record that can be used for serialization.
	 * Internal version compatible with Unreal Engine 5.3 and 5.4+, but requiring specific proxies.
	 */
	virtual TOptional<FInventoryItemRecord> Internal_CreateItemRecord(const FInventoryItemEntry& Entry) const;	
	
	/**
	 * Loads a container record into the inventory.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory Manager")
	void LoadContainerRecord(const FInventoryContainerRecord& Record);

	/**
	 * Loads an item record into the inventory.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory Manager")
	void LoadItemRecord(const FInventoryItemRecord& Record);
	
	/**
	 * Notifies about changes in the inventory's initialization state.
	 */
	UFUNCTION()
	virtual void OnRep_InitializationState();
	
	/**
	 * Sends a client RPC to inform the local client about received loot.
	 */
	UFUNCTION(Client, Reliable)
	void Client_ReceiveLoot(UNinjaInventoryLootComponent* Source, const TArray<UNinjaInventoryLoot*>& SelectedLoot);

	/**
	 * Sends a client RPC to inform the local client about dismissed loot.
	 */
	UFUNCTION(Client, Reliable)
	void Client_DismissLoot(UNinjaInventoryLootComponent* Source);

	/**
	 * Requests the initialization of items from the client.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_InitializeDefaultItems();

	/**
	 * Sends a server RPC for an operation payload that can be used by any compatible fragments.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_TryPerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload);
	
	/**
	 * Sends a server RPC for the fragment operation.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PerformFragmentOperation(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentPayload>& Payload);

	/**
	 * Sends a server RPC for the best fragment operation found.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target);
	
private:

	/** Used to inform that items must be initialized during begin play/avatar set. */
	bool bWantsToInitializeItems;
	
	/** Current state for the inventory initialization. */
	UPROPERTY(ReplicatedUsing = OnRep_InitializationState)
	EInventoryInitializationState InitializationState; 

	/** Current avatar for this inventory. */
	TWeakObjectPtr<AActor> InventoryAvatarPtr;

	/**
	 * Action that waits for the Ability System Component to be ready.
	 * This is a pre-requisite for the Inventory Manager to initialize.
	 */
	UPROPERTY()
	TObjectPtr<UNinjaInventoryAction_WaitForAbilitySystem> AbilityComponentAction;
	
};
