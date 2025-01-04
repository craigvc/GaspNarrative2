// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaInventoryManagerComponent.h"

#include "AbilitySystemComponent.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "TimerManager.h"
#include "Async/NinjaInventoryAction_WaitForAbilitySystem.h"
#include "Components/NinjaInventoryLootComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "Data/NinjaInventoryLayoutDataAsset.h"
#include "Engine/ActorChannel.h"
#include "Engine/AssetManager.h"
#include "Engine/World.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "GameFramework/NinjaInventoryLoot.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "Interfaces/InventoryManagerProviderInterface.h"
#include "Interfaces/InventoryPickupInterface.h"
#include "Interfaces/Aspects/DroppableItemInterface.h"
#include "Interfaces/Aspects/StackableItemInterface.h"
#include "Interfaces/Aspects/StorableItemInterface.h"
#include "Interfaces/Context/ItemContextModifierInterface.h"
#include "Interfaces/Context/ItemContextValidatorInterface.h"
#include "Net/UnrealNetwork.h"
#include "Serialization/FInventorySerialization.h"
#include "Types/FInventoryStorageCache.h"
#include "Types/FInventoryDefaultItem.h"
#include "Types/FInventoryItemContext.h"

class UNinjaInventoryAction_WaitForAbilitySystem;

UNinjaInventoryManagerComponent::UNinjaInventoryManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, StoredContainers(this)
	, StoredItems(this)
{
	bWantsToInitializeItems = false;
	InitializationState = EInventoryInitializationState::NotInitialized;

	AbilitySystemPollInterval = 0.2f;
	AbilitySystemMaxWait = 3.f;
}

void UNinjaInventoryManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();

	// Reinforce the inventory manager for fast array serializers.
	//
	// Child-blueprints may get broken instances (GEN_VARIABLE) during construction, so we want to make
	// sure that, in case any of these serializers have invalid instances, they'll receive a valid one.
	//
	StoredContainers.SetInventoryManager(this);
	StoredItems.SetInventoryManager(this);	
}

void UNinjaInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	TryBindToPlayerState();
	TryInitializeInventory();
}

void UNinjaInventoryManagerComponent::TryBindToPlayerState()
{
	if (GetOwner()->IsA<APlayerState>())
	{
		APlayerState* PlayerStateOwner = Cast<APlayerState>(GetOwner());
		PlayerStateOwner->OnPawnSet.AddUniqueDynamic(this, &ThisClass::OnPlayerStatePawnSet);
	}
}

// ReSharper disable once CppParameterMayBeConstPtrOrRef
void UNinjaInventoryManagerComponent::OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn)
{
	if (IsValid(NewPawn))
	{
		InventoryAvatarPtr.Reset();
		TryInitializeInventory();
	}
}

void UNinjaInventoryManagerComponent::TryInitializeInventory()
{
	AActor* NewInventoryAvatar;
	if (GetOwner()->IsA<APlayerState>())
	{
		const APlayerState* PlayerStateOwner = Cast<APlayerState>(GetOwner());
		NewInventoryAvatar = PlayerStateOwner->GetPawn();
	}
	else
	{
		NewInventoryAvatar = GetOwner();
	}

	if (IsValid(NewInventoryAvatar) && NewInventoryAvatar != GetInventoryAvatar())
	{
		ResetInventory();
		InventoryAvatarPtr = NewInventoryAvatar;
		INVENTORY_LOG_ARGS(Log, "Inventory Avatar set to '%s'.", *GetNameSafe(NewInventoryAvatar));
	}

	if (IsValid(NewInventoryAvatar))
	{
		if (OwnerHasAuthority())
		{
			const UAbilitySystemComponent* AbilityComponent = GetAbilitySystemComponent();
			if (IsValidAbilitySystemComponent(AbilityComponent))
			{
				InitializeInventory();
			}
			else if (!IsValid(AbilityComponentAction))
			{
				AbilityComponentAction = UNinjaInventoryAction_WaitForAbilitySystem::CreateAction(this, NewInventoryAvatar, AbilitySystemPollInterval, AbilitySystemMaxWait);
				check(IsValid(AbilityComponentAction));

				INVENTORY_LOG(Verbose, "Waiting for Ability System...");
				AbilityComponentAction->OnCompleted.AddUniqueDynamic(this, &ThisClass::InitializeInventory);
				AbilityComponentAction->Activate();
			}
		}
		else if (OwnerIsLocallyControlled())
		{
			TryInitializeItems();
		}
	}
}

void UNinjaInventoryManagerComponent::InitializeInventory_Implementation()
{
	if (InitializationState != EInventoryInitializationState::NotInitialized)
	{
		INVENTORY_LOG(Warning, "Attempt to initialize an Inventory in the wrong state!");
		return;
	}
	
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Warning, "Attempt to initialize an Inventory without autority!");
		return;
	}

	const AActor* Avatar = GetInventoryAvatar();
	if (!IsValid(Avatar))
	{
		INVENTORY_LOG(Warning, "Attempt to initialize an Inventory without an avatar!");
		return;
	}
	
	InitializeDefaultContainers();
	
	InitializationState = EInventoryInitializationState::BoundToAbilitySystem;
	OnRep_InitializationState();
}

void UNinjaInventoryManagerComponent::ResetInventory_Implementation()
{
	if (!OwnerHasAuthority())
	{
		return;
		
	}
	
	const AActor* CurrentAvatar = GetInventoryAvatar();
	if (IsValid(CurrentAvatar))
	{
		StoredItems.RemoveAllEntries();
		StoredContainers.RemoveAllEntries();
		ItemsInContainerCache.Empty();
		PrimaryContainersWithItemCache.Empty();
	
		InitializationState = EInventoryInitializationState::NotInitialized;
		OnRep_InitializationState();
	
		INVENTORY_LOG_ARGS(Log, "Inventory has been reset from %s.", *GetNameSafe(CurrentAvatar));
	}
}

void UNinjaInventoryManagerComponent::InitializeDefaultContainers()
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	// The owner (usually a player state) can override the default value.
	LoadLayoutViaInterface(GetOwner());

	// The avatar has the highest priority on setting the layout.
	const AActor* InventoryAvatar = GetInventoryAvatar();
	LoadLayoutViaInterface(InventoryAvatar);
	
	if (!IsValid(InventoryLayout))
	{
		return;
	}
	
	INVENTORY_LOG_ARGS(Log, "Initializing inventory for %s using layout %s.", *GetNameSafe(InventoryAvatar), *GetNameSafe(InventoryLayout));

	for (const UNinjaInventoryContainerDataAsset* ContainerData : InventoryLayout->Containers)
	{
		FInventoryContainerContext ContainerContext = FInventoryContainerContext::EmptyContext();
		ContainerContext.SetContainerData(ContainerData);

		FInventoryContainerContext ResultContext;
		AddContainer(ContainerContext, ResultContext);
	}
}

void UNinjaInventoryManagerComponent::InitializeDefaultItems()
{
	if (OwnerHasAuthority())
	{
		LoadDefaultItemsViaInterface(GetOwner());

		const AActor* InventoryAvatar = GetInventoryAvatar();
		LoadDefaultItemsViaInterface(InventoryAvatar);
		
		for (const FInventoryItemContextEntry& DefaultItem : DefaultItems)
		{
			FInventoryItemContext Result;
			FInventoryItemContext ItemContext = FInventoryItemContext::EmptyContext();
			ItemContext.Request = DefaultItem;
			AddItem(ItemContext, Result);
		}

		InitializationState = EInventoryInitializationState::Initialized;
		OnRep_InitializationState();
	}
}

bool UNinjaInventoryManagerComponent::HasContainer(const UNinjaInventoryContainer* Container) const
{
	if (IsValid(Container))
	{
		const int32 ContainerIdx = StoredContainers.IndexOfByContainer(Container);
		return ContainerIdx != INDEX_NONE;
	}

	INVENTORY_LOG(Warning, "Invalid container provided.");
	return false;
}

bool UNinjaInventoryManagerComponent::IsDefaultContainer(const UNinjaInventoryContainer* Container) const
{
	if (IsValid(InventoryLayout))
	{
		FGameplayTagContainer ContainerTags;
		Container->GetOwnedGameplayTags(ContainerTags);
		
		return InventoryLayout->DefaultContainerQuery.Matches(ContainerTags);
	}

	return false;
}

bool UNinjaInventoryManagerComponent::HasItem(const UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		const int32 ContainerIdx = StoredItems.IndexOfByItem(Item);
		return ContainerIdx != INDEX_NONE;
	}

	return false;
}

int32 UNinjaInventoryManagerComponent::CountContainers() const
{
	return StoredContainers.Count();
}

int32 UNinjaInventoryManagerComponent::CountContainerData(const UNinjaInventoryContainerDataAsset* ContainerData) const
{
	if (IsValid(ContainerData))
	{
		const int32 ContainerCount = GetContainersByData(ContainerData).Num();
		return ContainerCount;
	}
	
	return 0;	
}

int32 UNinjaInventoryManagerComponent::CountItemData(const UNinjaInventoryItemDataAsset* ItemData) const
{
	if (IsValid(ItemData))
	{
		const int32 ItemCount = StoredItems.FilterByItemData(ItemData).Num();
		return ItemCount;
	}
	
	return 0;
}

int32 UNinjaInventoryManagerComponent::CountTotalSlotsInContainer(const UNinjaInventoryContainer* Container) const
{
	const int32 ContainerIdx = StoredContainers.IndexOfByContainer(Container);
	if (ContainerIdx != INDEX_NONE)
	{
		const FInventoryContainerEntry* Entry = StoredContainers.GetEntry(ContainerIdx);
		return Entry->Container->GetData()->GetSlots(this);
	}
	
	return 0;
}

int32 UNinjaInventoryManagerComponent::CountAvailableSlotsInContainer(const UNinjaInventoryContainer* Container) const
{
	if (!IsValid(Container))
	{
		return 0;
	}

	const FGuid& ContainerId = Container->GetContainerId();
	if (!ItemsInContainerCache.Contains(ContainerId))
	{
		return 0;
	}

	const int32 TotalSlots = Container->GetData()->GetSlots(this);
	const int32 UsedSlots = ItemsInContainerCache.Find(ContainerId)->Num();
	
	return TotalSlots - UsedSlots;
}

int32 UNinjaInventoryManagerComponent::CountAvailableSlotsForItem(const UNinjaInventoryItemDataAsset* ItemData) const
{
	TArray<FInventoryContainerEntry> ContainersForItem = StoredContainers.FilterAvailableContainersForItemData(ItemData);
	if (ContainersForItem.IsEmpty())
	{
		return 0;
	}
	
	int32 AvailableSlots = 0;
	for (const FInventoryContainerEntry& Entry : ContainersForItem)
	{
		const int32 TotalSlots = Entry.Container->GetData()->GetSlots(this);
		int32 UsedSlots = 0;

		const FGuid& ContainerId = Entry.Container->GetContainerId();
		if (ItemsInContainerCache.Contains(ContainerId))
		{
			UsedSlots = ItemsInContainerCache.Find(ContainerId)->Num();
		}
		
		AvailableSlots += TotalSlots - UsedSlots;
	}
	
	return AvailableSlots;
}

int32 UNinjaInventoryManagerComponent::CountItems() const
{
	return StoredItems.Count();
}

int32 UNinjaInventoryManagerComponent::CountTotalStacksForItem(const UNinjaInventoryItemDataAsset* ItemData) const
{
	if (!IsValid(ItemData))
	{
		return 0;
	}

	int32 Count = 0;
	
	TArray<UNinjaInventoryItem*> Items = GetItemsByData(ItemData);
	for (const UNinjaInventoryItem* Item : Items)
	{
		const UNinjaInventoryItemFragment* Fragment = Item->FindFragmentByInterface(UStackableItemInterface::StaticClass());
		const IStackableItemInterface* Stackable = Cast<IStackableItemInterface>(Fragment);

		if (Stackable != nullptr)
		{
			Count += Stackable->GetStackSize(Item);
		}
	}

	return Count;
}

int32 UNinjaInventoryManagerComponent::CountItemsInContainer(const UNinjaInventoryContainer* Container) const
{
	if (!IsValid(Container))
	{
		return 0;
	}

	const FGuid& ContainerId = Container->GetContainerId();
	if (!ItemsInContainerCache.Contains(ContainerId))
	{
		return 0;
	}

	return ItemsInContainerCache.Find(ContainerId)->Num();
}

UNinjaInventoryContainer* UNinjaInventoryManagerComponent::GetContainer(const FGuid& ContainerId) const
{
	if (ContainerId.IsValid())
	{
		const int32 ContainerIdx = StoredContainers.IndexOfById(ContainerId);
		if (ContainerIdx != INDEX_NONE)
		{
			return StoredContainers.GetEntry(ContainerIdx)->Container;
		}
	}

	return nullptr;
}

UNinjaInventoryContainer* UNinjaInventoryManagerComponent::GetDefaultContainer() const
{
	TArray<UNinjaInventoryContainer*> DefaultContainers = GetDefaultContainers();
	if (DefaultContainers.IsValidIndex(0))
	{
		return DefaultContainers[0];
	}

	return nullptr;
}

UNinjaInventoryContainer* UNinjaInventoryManagerComponent::GetPrimaryContainerForItem(const UNinjaInventoryItem* Item) const
{
	if (!IsValid(Item))
	{
		return nullptr;
	}

	const FGuid& ItemId = Item->GetItemId();
	if (!PrimaryContainersWithItemCache.Contains(ItemId))
	{
		return nullptr;
	}

	const TPair<FGuid, int32>& Pair = *PrimaryContainersWithItemCache.Find(ItemId);
	const FGuid& ContainerId = Pair.Key;
	return GetContainer(ContainerId);
}

UNinjaInventoryContainer* UNinjaInventoryManagerComponent::GetFirstContainerByData(const UNinjaInventoryContainerDataAsset* ContainerData) const
{
	TArray<UNinjaInventoryContainer*> Containers = GetContainersByData(ContainerData);
	if (Containers.IsValidIndex(0))
	{
		return Containers[0];
	}

	return nullptr;
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetContainers() const
{
	const TArray<FInventoryContainerEntry>& Entries = StoredContainers.GetEntries();
	return ConvertStoredContainerEntries(Entries);
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetDefaultContainers() const
{
	check(IsValid(InventoryLayout));
	return GetContainersByQuery(InventoryLayout->DefaultContainerQuery);
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetContainersByData(const UNinjaInventoryContainerDataAsset* ContainerData) const
{
	if (IsValid(ContainerData))
	{
		const TArray<FInventoryContainerEntry>& Entries = StoredContainers.FilterByContainerData(ContainerData);
		return ConvertStoredContainerEntries(Entries);
	}
	
	return TArray<UNinjaInventoryContainer*>();
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetContainersByQuery(const FGameplayTagQuery& TagQuery) const
{
	const TArray<FInventoryContainerEntry> Entries = StoredContainers.FilterByQuery(TagQuery);
	return ConvertStoredContainerEntries(Entries);
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetContainersOwnedByItem(const UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		const TArray<FInventoryContainerEntry> Entries = StoredContainers.FilterByOwningItem(Item);
		return ConvertStoredContainerEntries(Entries);
	}

	return TArray<UNinjaInventoryContainer*>();
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetAvailableContainersForItem(const UNinjaInventoryItem* Item) const
{
	const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();
	return GetAvailableContainersForItemData(ItemData);
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::GetAvailableContainersForItemData(const UNinjaInventoryItemDataAsset* ItemData) const
{
	TArray<UNinjaInventoryContainer*> Containers;
	
	TArray<FInventoryContainerEntry> ContainersForItem = StoredContainers.FilterAvailableContainersForItemData(ItemData);
	if (ContainersForItem.Num() == 1)
	{
		// We only have one possible container, so we can skip everything else.
		Containers.Add(ContainersForItem[0].Container);
	}
	else if (!ContainersForItem.IsEmpty())
	{
		SortContainers(ContainersForItem);
		Containers.Reserve(ContainersForItem.Num());
		
		for (const FInventoryContainerEntry& Entry : ContainersForItem)
		{
			Containers.Add(Entry.Container);
		}
	}

	Containers.Shrink();
	return Containers;	
}

TArray<FInventoryContainerRecord> UNinjaInventoryManagerComponent::GetContainerRecordsForSerialization() const
{
	TArray<FInventoryContainerRecord> Results;
	Results.Reserve(StoredContainers.Count());
	
	const TArray<FInventoryContainerEntry>& Entries = StoredContainers.GetEntries();
	for (const FInventoryContainerEntry& Entry : Entries)
	{
		TOptional<FInventoryContainerRecord> Record = Internal_CreateContainerRecord(Entry);
		if (Record.IsSet())
		{
			Results.Add(Record.GetValue());
		}
	}

	return Results;
}

bool UNinjaInventoryManagerComponent::CreateContainerRecord(const FInventoryContainerEntry& Entry, FInventoryContainerRecord& OutRecord) const
{
	TOptional<FInventoryContainerRecord> OptionalRecord = Internal_CreateContainerRecord(Entry);
	if (OptionalRecord.IsSet())
	{
		OutRecord = OptionalRecord.GetValue();
		return true;
	}

	return false;
}

TOptional<FInventoryContainerRecord> UNinjaInventoryManagerComponent::Internal_CreateContainerRecord(const FInventoryContainerEntry& Entry) const
{
	FInventoryContainerRecord Record;
	Record.ContainerId = Entry.ContainerId;

	const FName InstanceName = Entry.Container->GetFName();
	Record.InstanceName = InstanceName;
		
	const FSoftObjectPath DataAssetPath = FSoftObjectPath(Entry.Container->GetData());
	Record.DataAssetPath = DataAssetPath.ToString();

	const UNinjaInventoryItem* Item = GetItemByOwnedContainer(Entry.Container);
	if (IsValid(Item))
	{
		const FGuid ItemId = Item->GetItemId();
		Record.OwningItemId = ItemId.ToString();
	}

	return Record;	
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::GetItem(const FGuid& ItemId) const
{
	if (ItemId.IsValid())
	{
		const int32 ItemIdx = StoredItems.IndexOfById(ItemId);
		if (ItemIdx != INDEX_NONE)
		{
			return StoredItems.GetEntry(ItemIdx)->Item;
		}
	}

	return nullptr;
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::GetItemByContainerAndPosition(
	const UNinjaInventoryContainer* Container, const int32 Position) const
{
	if (!IsValid(Container) || Position == INDEX_NONE)
	{
		return nullptr;
	}
	
	const FGuid& ContainerId = Container->GetContainerId();
	if (!ItemsInContainerCache.Contains(ContainerId))
	{
		return nullptr;
	}

	const TMap<int32, FGuid>& Containers = *ItemsInContainerCache.Find(ContainerId);
	if (!Containers.Contains(Position))
	{
		return nullptr;
	}
	
	const FGuid& ItemId = *Containers.Find(Position);
	return GetItem(ItemId);
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::GetItemByContainerDataAndPosition(
	const UNinjaInventoryContainerDataAsset* ContainerData, const int32 Position) const
{
	if (!IsValid(ContainerData) || Position == INDEX_NONE)
	{
		return nullptr;
	}

	const TArray<UNinjaInventoryContainer*> Containers = GetContainersByData(ContainerData);
	if (Containers.IsEmpty())
	{
		return nullptr;
	}
	
	const UNinjaInventoryContainer* Container = Containers[0];
	return GetItemByContainerAndPosition(Container, Position);
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::GetItemByOwnedContainer(
	const UNinjaInventoryContainer* Container) const
{
	if (!IsValid(Container))
	{
		return nullptr;
	}

	const FInventoryContainerEntry* Entry = StoredContainers.FindByContainer(Container);
	if (Entry == nullptr)
	{
		return nullptr;
	}

	return Entry->OwningItem;
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::GetFirstItemByQuery(const FGameplayTagQuery& TagQuery) const
{
	TArray<UNinjaInventoryItem*> Items = GetItemsByQuery(TagQuery);
	if (Items.IsValidIndex(0))
	{
		return Items[0];
	}

	return nullptr;
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItems() const
{
	const TArray<FInventoryItemEntry> Entries = StoredItems.GetEntries();
	return ConvertStoredItemEntries(Entries);
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItemsByData(const UNinjaInventoryItemDataAsset* ItemData) const
{
	if (IsValid(ItemData))
	{
		const TArray<FInventoryItemEntry> Entries = StoredItems.FilterByItemData(ItemData);
		return ConvertStoredItemEntries(Entries);
	}

	return TArray<UNinjaInventoryItem*>();	
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItemsByContainer(const UNinjaInventoryContainer* Container, const bool OnlyPrimaryContainers) const
{
	TArray<UNinjaInventoryItem*> Results;
	
	if (!IsValid(Container))
	{
		return Results;
	}

	const FGuid& ContainerId = Container->GetContainerId(); 
	if (!ItemsInContainerCache.Contains(ContainerId))
	{
		return Results;
	}

	const TMap<int32, FGuid>& Containers = *ItemsInContainerCache.Find(ContainerId);
	if (Containers.IsEmpty())
	{
		return Results;
	}

	Results.Reserve(Containers.Num());
	for (const TPair<int32, FGuid>& Pair : Containers)
	{
		UNinjaInventoryItem* Item = GetItem(Pair.Value);
		Results.Add(Item);
	}

	return Results;
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItemsByContainerData(const UNinjaInventoryContainerDataAsset* ContainerData, bool OnlyPrimaryContainers) const
{
	TArray<UNinjaInventoryItem*> Items;
	
	TArray<UNinjaInventoryContainer*> Containers = GetContainersByData(ContainerData);
	for (const UNinjaInventoryContainer* Container : Containers)
	{
		for (UNinjaInventoryItem* Item : GetItemsByContainer(Container, OnlyPrimaryContainers))
		{
			Items.Add(Item);			
		}
	}

	Items.Shrink();
	return Items;
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItemsByQuery(const FGameplayTagQuery& TagQuery) const
{
	const TArray<FInventoryItemEntry> Entries = StoredItems.FilterByQuery(TagQuery);
	return ConvertStoredItemEntries(Entries);
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetItemsWithIncompleteStacks(const UNinjaInventoryItemDataAsset* ItemData) const
{
	if (IsValid(ItemData))
	{
		const TArray<FInventoryItemEntry> Entries = StoredItems.FilterByIncompleteStacks(ItemData);
		return ConvertStoredItemEntries(Entries);
	}
	
	return TArray<UNinjaInventoryItem*>();
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::GetLootableItems() const
{
	const TArray<FInventoryItemEntry> Entries = StoredItems.FilterByLootableItem();
	return ConvertStoredItemEntries(Entries);
}

TArray<FInventoryItemRecord> UNinjaInventoryManagerComponent::GetItemRecordsForSerialization() const
{
	TArray<FInventoryItemRecord> Results;
	Results.Reserve(StoredItems.Count());
	
	const TArray<FInventoryItemEntry>& Entries = StoredItems.GetEntries();
	for (const FInventoryItemEntry& Entry : Entries)
	{
		TOptional<FInventoryItemRecord> Record = Internal_CreateItemRecord(Entry);
		if (Record.IsSet())
		{
			Results.Add(Record.GetValue());
		}
	}

	return Results;
}

bool UNinjaInventoryManagerComponent::CreateItemRecord(const FInventoryItemEntry& Entry, FInventoryItemRecord& OutRecord) const
{
	TOptional<FInventoryItemRecord> OptionalRecord = Internal_CreateItemRecord(Entry);
	if (OptionalRecord.IsSet())
	{
		OutRecord = OptionalRecord.GetValue();
		return true;
	}

	return false;
}

TOptional<FInventoryItemRecord> UNinjaInventoryManagerComponent::Internal_CreateItemRecord(const FInventoryItemEntry& Entry) const
{
	FInventoryItemRecord Record;
	Record.ItemId = Entry.ItemId;

	const FName InstanceName = Entry.Item->GetFName();
	Record.InstanceName = InstanceName;
    	
	const FSoftObjectPath DataAssetPath = FSoftObjectPath(Entry.Item->GetData());
	Record.DataAssetPath = DataAssetPath.ToString();

	const TArray<FInventoryDefaultItemMemory>& Memories = Entry.Item->GetSerializableFragmentMemories(); 
	Record.Memories = Memories;
	
	return Record;
}

UNinjaInventoryContainer* UNinjaInventoryManagerComponent::CreateContainerInstance(const UNinjaInventoryContainerDataAsset* ContainerData, FName ObjectName)
{
	if (OwnerHasAuthority() && IsValid(ContainerData))
	{
		const TSubclassOf<UNinjaInventoryContainer> ContainerClass = ContainerData->GetDefaultContainerClass();
		check(IsValid(ContainerClass));
	
		UNinjaInventoryContainer* Container = NewObject<UNinjaInventoryContainer>(this, ContainerClass, ObjectName);
		Container->InitializeContainer(ContainerData);
		Container->SetInventoryManager(this);
		return Container;
	}
	
	return nullptr;
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::CreateItemInstance(const UNinjaInventoryItemDataAsset* ItemData, FName ObjectName)
{
	if (OwnerHasAuthority() && IsValid(ItemData))
	{
		const TSubclassOf<UNinjaInventoryItem> ItemClass = ItemData->GetDefaultInstanceClass();
		check(IsValid(ItemClass));

		UNinjaInventoryItem* Item = NewObject<UNinjaInventoryItem>(this, ItemClass, ObjectName);
		Item->InitializeItem(ItemData);
		Item->SetInventoryManager(this);
		Item->InitializeFragments();	
		return Item;
	}

	return nullptr;
}

bool UNinjaInventoryManagerComponent::CanAddContainer(const FInventoryContainerContext& ContainerContext) const
{
	if (!ContainerContext.IsValid())
	{
		INVENTORY_LOG(Verbose, "Invalid container context provided for validation.");
		return false;
	}

	const UNinjaInventoryItem* ItemOwner = ContainerContext.GetOwningItem();
	if (IsValid(ItemOwner))
	{
		const TArray<UNinjaInventoryContainer*> ExistingContainers = GetContainersOwnedByItem(ItemOwner);
		const UNinjaInventoryContainerDataAsset* ContainerData = ContainerContext.GetContainerData();

		if (ExistingContainers.ContainsByPredicate([ContainerData](const UNinjaInventoryContainer* Container){ return Container->GetData() == ContainerData; }))
		{
			INVENTORY_LOG_ARGS(Verbose, "Refused container '%s', it would generate a duplicate.", *GetNameSafe(ContainerData));
			return false;
		}
	}

	return true;
}

void UNinjaInventoryManagerComponent::AddContainer(FInventoryContainerContext ContainerContext, UPARAM(DisplayName = "Result") FInventoryContainerContext& OutResult)
{
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Verbose, "Attempted to add a container without authority.");
		OutResult.MarkAsFailed();
		return;
	}
	
	if (!CanAddContainer(ContainerContext))
	{
		const UNinjaInventoryContainerDataAsset* ContainerData = ContainerContext.GetContainerData();
		INVENTORY_LOG_ARGS(Verbose, "Validation failed for container '%s'.", *GetNameSafe(ContainerData));
		OutResult.MarkAsFailed();
		return;
	}

	UNinjaInventoryContainer* NewContainer;
	if (ContainerContext.HasContainer())
	{
		NewContainer = ContainerContext.GetContainer();
	}
	else
	{
		NewContainer = CreateContainerInstance(ContainerContext.GetContainerData());
		ContainerContext.SetContainer(NewContainer);
	}

	checkf(IsValid(NewContainer), TEXT("Sanity check: Container was supposed to be set."));
	
	NewContainer->SetInventoryManager(this);
	StoredContainers.AddEntry(NewContainer, ContainerContext.GetOwningItem(), ContainerContext.GetContainerId());

	OutResult.SetContainer(NewContainer);
	OutResult.SetContainerData(NewContainer->GetData());
	OutResult.SetContainerId(NewContainer->GetContainerId());
	OutResult.SetOwningItem(ContainerContext.GetOwningItem());
}

void UNinjaInventoryManagerComponent::HandleContainerAdded(const FInventoryContainerEntry& Entry, int32 Idx)
{
	check(IsValid(Entry.Container));
	AddReplicatedSubObject(Entry.Container);

	const FGuid& ContainerId = Entry.ContainerId;
	Entry.Container->SetContainerId(ContainerId); 
	Entry.Container->SetInventoryManager(this);

	const int32 ContainerSize = Entry.Container->GetData()->GetSlots(this);
	TMap<int32, FGuid> EmptyBag;
	EmptyBag.Reserve(ContainerSize);
	ItemsInContainerCache.Add(ContainerId, EmptyBag);
	
	Entry.Container->OnContainerAdded.Broadcast(Entry.Container);
	OnContainerAdded.Broadcast(Entry.Container);

	const FString ContainerName = GetNameSafe(Entry.Container->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	INVENTORY_LOG_ARGS(Verbose, "Added container '%s' on %s.", *ContainerName, *NetRoleName);	
}

bool UNinjaInventoryManagerComponent::CanAddItem(const FInventoryItemContext ItemContext) const
{
	if (!ItemContext.IsValid())
	{
		INVENTORY_LOG(Verbose, "Discarded invalid item context.");
		return false;
	}
	
	if (ItemContext.InventoryManager != this)
	{
		INVENTORY_LOG(Verbose, "Item context belongs to another inventory manager.");
		return false;
	}
	
	const UNinjaInventoryItemDataAsset* ItemData = ItemContext.Request.ItemData;
	if(!IsValid(ItemData))
	{
		INVENTORY_LOG(Warning, "Item Context does not have an Item Data in its request!");
		return false;
	}

	TArray<UNinjaInventoryItemFragment*> Validators = ItemData->FindFragmentsByInterface(UItemContextValidatorInterface::StaticClass());
	for (const UNinjaInventoryItemFragment* Fragment : Validators)
	{
		const IItemContextValidatorInterface* Validator = Cast<IItemContextValidatorInterface>(Fragment);
		if (Validator && !Validator->CanAddToInventory(ItemContext))
		{
			INVENTORY_LOG_ARGS(Verbose, "Fragment '%s' rejected item item context.", *GetNameSafe(Fragment));
			return false;
		}
	}

	// All validators successfully finished.
	return true;
}

void UNinjaInventoryManagerComponent::AddItem(FInventoryItemContext ItemContext, FInventoryItemContext& OutResult)
{
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Verbose, "Attempted to add items without authority.");
		return;
	}

	ItemContext.InventoryManager = this;
	if (CanAddItem(ItemContext))
	{
		Internal_AddItem(ItemContext);
		OutResult = ItemContext;
	}
}

void UNinjaInventoryManagerComponent::AddPickup(AActor* PickupActor, FInventoryItemContext& OutResult)
{
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Verbose, "Attempted to add pickup without authority.");
		return;
	}

	if (IsValid(PickupActor) && PickupActor->Implements<UInventoryPickupInterface>())
	{
		const FInventoryItemContext ItemContext = ConvertPickupToItemContext(PickupActor);
		AddItem(ItemContext, OutResult);
	}
}

void UNinjaInventoryManagerComponent::AddLoot(TArray<UNinjaInventoryLoot*> Loot, FInventoryItemContext& OutResult)
{
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Verbose, "Attempted to add loot without authority.");
		return;
	}

	if (!Loot.IsEmpty())
	{
		const FInventoryItemContext ItemContext = ConvertLootToItemContext(Loot);
		AddItem(ItemContext, OutResult);
	}
}

FInventoryItemContext UNinjaInventoryManagerComponent::ConvertPickupToItemContext(AActor* PickupActor) const
{
	FInventoryItemContext ItemContext;

	ItemContext.Request.ItemData = IInventoryPickupInterface::Execute_GetItemData(PickupActor);
	ItemContext.Request.FragmentMemories = IInventoryPickupInterface::Execute_GetItemMemories(PickupActor);
	
	return ItemContext;
}

FInventoryItemContext UNinjaInventoryManagerComponent::ConvertLootToItemContext(TArray<UNinjaInventoryLoot*>& Loot) const
{
	FInventoryItemContext ItemContext;
	
	for (const UNinjaInventoryLoot* LootEntry : Loot)
	{
		const UNinjaInventoryItemDataAsset* ItemData = LootEntry->GetItemData();
		const int32 Quantity = LootEntry->GetQuantity();

		if (IsValid(ItemData) && Quantity > 0)
		{
			FInventoryItemContextEntry& ItemEntry = ItemContext.ItemsToAdd.AddDefaulted_GetRef();
			ItemEntry.ItemData = ItemData;

			const TScriptInterface<IStackableItemInterface> Stackable = UNinjaInventoryFunctionLibrary::GetStackableItemAspect(ItemData);
			ItemEntry.FragmentMemories.Add(Stackable->CreateDefaultMemory(Quantity));
		}
	}

	return ItemContext;
}

void UNinjaInventoryManagerComponent::Internal_AddItem(FInventoryItemContext& ItemContext)
{
	ModifyItemRequest(ItemContext);
	AddMainItemFromAddRequest(ItemContext);
	AddExtraItemsFromAddRequest(ItemContext);
	UpdateItemsFromAddRequest(ItemContext);
	DropItemsFromAddRequest(ItemContext);
}

void UNinjaInventoryManagerComponent::ModifyItemRequest(FInventoryItemContext& ItemContext)
{
	if (ItemContext.IsValid() && !ItemContext.IsLoadOperation())
	{
		ItemContext.InventoryManager = this;
		
		const UNinjaInventoryItemDataAsset* ItemData = ItemContext.Request.ItemData;
		check(IsValid(ItemData));

		TArray<UNinjaInventoryItemFragment*> Modifiers = ItemData->FindFragmentsByInterface(UItemContextModifierInterface::StaticClass());
		for (const UNinjaInventoryItemFragment* Fragment : Modifiers)
		{
			const IItemContextModifierInterface* Modifier = Cast<IItemContextModifierInterface>(Fragment);
			Modifier->ModifyItemRequest(ItemContext);
		}
	}
}

void UNinjaInventoryManagerComponent::AddMainItemFromAddRequest(FInventoryItemContext& ItemContext)
{
	if (ItemContext.Request.IsValid())
	{
		FInventoryItemContextEntry& Request = ItemContext.Request;
		UNinjaInventoryItem* NewItem = AddItemEntry(Request);
		ItemContext.CreatedItems.Add(NewItem);
	}
}

void UNinjaInventoryManagerComponent::AddExtraItemsFromAddRequest(FInventoryItemContext& ItemContext)
{
	for (FInventoryItemContextEntry& ItemToAdd : ItemContext.ItemsToAdd)
	{
		if (ItemToAdd.IsValid())
		{
			UNinjaInventoryItem* NewItem = AddItemEntry(ItemToAdd);
			ItemContext.CreatedItems.Add(NewItem);
		}
	}
}

void UNinjaInventoryManagerComponent::UpdateItemsFromAddRequest(FInventoryItemContext& ItemContext)
{
	for (FInventoryItemContextEntry& ItemToUpdate : ItemContext.ItemsToUpdate)
	{
		UNinjaInventoryItem* Item = ItemToUpdate.Item;
		if (HasItem(Item))
		{
			Item->SaveDefaultFragmentMemories(ItemToUpdate.FragmentMemories);
			ItemContext.UpdatedItems.Add(Item);
		}
	}
}

void UNinjaInventoryManagerComponent::DropItemsFromAddRequest(FInventoryItemContext& ItemContext)
{
	for (FInventoryItemContextEntry& ItemToDrop : ItemContext.ItemsToDrop)
	{
		const FVector InitialLocation = FindDropLocationForEntry(ItemToDrop);
		FVector ActualLocation = InitialLocation;
		
		if (IsValid(ItemToDrop.Item))
		{
			
			TScriptInterface<IDroppableItemInterface> DropFragment = UNinjaInventoryFunctionLibrary::GetDroppableItemAspect(ItemToDrop.Item->GetData());
			if (DropFragment != nullptr)
			{
				DropFragment->DropItem(ItemToDrop.Item, InitialLocation, ActualLocation);
				ItemContext.DroppedItemsCount++;
			}
		}
		else if (IsValid(ItemToDrop.ItemData))
		{
			TScriptInterface<IDroppableItemInterface> DropFragment = UNinjaInventoryFunctionLibrary::GetDroppableItemAspect(ItemToDrop.ItemData);
			if (DropFragment != nullptr)
			{
				AActor* Source = GetPawn();
				DropFragment->DropItemData(Source, ItemToDrop.ItemData, InitialLocation, ActualLocation, ItemToDrop.FragmentMemories);
				ItemContext.DroppedItemsCount++;
			}
		}
	}
}

FVector UNinjaInventoryManagerComponent::FindDropLocationForItem(const UNinjaInventoryItem* ItemToDrop)
{
	return GetPawn()->GetActorLocation();
}

FVector UNinjaInventoryManagerComponent::FindDropLocationForEntry(const FInventoryItemContextEntry& EntryToDrop)
{
	return GetPawn()->GetActorLocation();
}

UNinjaInventoryItem* UNinjaInventoryManagerComponent::AddItemEntry(FInventoryItemContextEntry& Entry)
{
	check(Entry.IsValid())

	UNinjaInventoryItem* NewItem = CreateItemInstance(Entry.ItemData);
	const FGuid ItemId = Entry.ItemId.IsValid() ? Entry.ItemId : FGuid::NewGuid();
	
	Entry.Item = NewItem;
	Entry.Item->SetInventoryManager(this);
	Entry.Item->SetItemId(ItemId);
	StoredItems.AddEntry(Entry, ItemId);

	return NewItem;
}

bool UNinjaInventoryManagerComponent::CanRelocateItems(const TArray<UNinjaInventoryItem*>& Items)
{
	if (Items.IsEmpty())
	{
		return true;
	}
	
	int32 ItemsThatCanBeRelocatedOrDropped = 0;
	for (const UNinjaInventoryItem* Item : Items)
	{
		const UNinjaInventoryItemFragment* StorableFragment = Item->FindFragmentByInterface(UStorableItemInterface::StaticClass());
		if (IsValid(StorableFragment))
		{
			ItemsThatCanBeRelocatedOrDropped++;
		}
		else
		{
			const UNinjaInventoryItemFragment* DroppableFragment = Item->FindFragmentByInterface(UDroppableItemInterface::StaticClass());
			if (IsValid(DroppableFragment))
			{
				ItemsThatCanBeRelocatedOrDropped++;
			}
		}
	}

	const int32 ItemsThatMustBeHandled = Items.Num();
	return ItemsThatMustBeHandled == ItemsThatCanBeRelocatedOrDropped;
}

void UNinjaInventoryManagerComponent::RelocateItems(TArray<UNinjaInventoryItem*>& Items)
{
	for (UNinjaInventoryItem* Item : Items)
	{
		UNinjaInventoryItemFragment* StorableFragment = Item->FindFragmentByInterface(UStorableItemInterface::StaticClass());
		if (IsValid(StorableFragment))
		{
			IStorableItemInterface* StorableAspect = Cast<IStorableItemInterface>(StorableFragment);
			StorableAspect->SetBestContainerAndPositionForItem(Item);
		}
		else
		{
			UNinjaInventoryItemFragment* DroppableFragment = Item->FindFragmentByInterface(UDroppableItemInterface::StaticClass());
			if (IsValid(DroppableFragment))
			{
				const FVector InitialLocation = FindDropLocationForItem(Item);
				FVector ActualLocation = InitialLocation;
				
				IDroppableItemInterface* DroppableAspect = Cast<IDroppableItemInterface>(DroppableFragment);
				DroppableAspect->DropItem(Item, InitialLocation, ActualLocation);
			}
		}
	}
}

void UNinjaInventoryManagerComponent::PreItemAdded(const FInventoryItemEntry& Entry, int32 Idx)
{
	if (OwnerHasAuthority())
	{
		// Do this after adding the stored item to the list, as memories might need it.
		Entry.Item->InitializeFragmentMemories(Entry.InitialFragmentData);
		AddReplicatedSubObject(Entry.Item);
	}
}

void UNinjaInventoryManagerComponent::HandleItemAdded(const FInventoryItemEntry& Entry, const int32 Idx)
{
	check(IsValid(Entry.Item));
	check(Idx != INDEX_NONE);
	
	Entry.Item->SetItemId(Entry.ItemId);
	Entry.Item->SetInventoryManager(this);
	CacheNewItemEntry(Entry);
	
	Entry.Item->ApplyFragments();
	Entry.Item->OnItemAdded.Broadcast(Entry.Item);
	OnItemAdded.Broadcast(Entry.Item);

	const FString ItemName = GetNameSafe(Entry.Item->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	INVENTORY_LOG_ARGS(Verbose, "Added item %s on %s.", *ItemName, *NetRoleName);	
}

bool UNinjaInventoryManagerComponent::CanRelocateItemsInContainer(const UNinjaInventoryContainer* Container) const
{
	const TArray<UNinjaInventoryItem*> Items = GetItemsByContainer(Container);
	return CanRelocateItems(Items);
}

void UNinjaInventoryManagerComponent::RemoveContainer(UNinjaInventoryContainer* Container)
{
	if (OwnerHasAuthority() && HasContainer(Container) && CanRelocateItemsInContainer(Container))
	{
		// Get the items, remove the container and then relocate them.
		// This order is important because:
		//
		// 1. If the container is removed, items won't be found, putting the inventory in a corrupted state.
		// 2. Relocating the items while the container is still available will pick the container as a viable option.
		// 
		TArray<UNinjaInventoryItem*> Items = GetItemsByContainer(Container);
		StoredContainers.RemoveEntry(Container);
		RelocateItems(Items);
	}
}

void UNinjaInventoryManagerComponent::RemoveContainerById(const FGuid ContainerId)
{
	UNinjaInventoryContainer* ContainerToRemove = GetContainer(ContainerId);
	RemoveContainer(ContainerToRemove);
}

void UNinjaInventoryManagerComponent::RemoveContainersFromItem(UNinjaInventoryItem* Item)
{
	if (OwnerHasAuthority() && HasItem(Item))
	{
		StoredContainers.RemoveEntriesByItem(Item);
	}
}

void UNinjaInventoryManagerComponent::HandleContainerRemoved(const FInventoryContainerEntry& Entry, int32 Idx)
{
	UNinjaInventoryContainer* Container = Entry.Container;
	check(IsValid(Container));
	
	Container->OnContainerRemoved.Broadcast(Container);
	Container->SetInventoryManager(nullptr);
	
	OnContainerRemoved.Broadcast(Container);
	RemoveReplicatedSubObject(Container);

	const FGuid& ContainerId = Container->GetContainerId();
	ItemsInContainerCache.Remove(ContainerId);

	const FString ItemName = GetNameSafe(Container->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	INVENTORY_LOG_ARGS(Verbose, "Removed container %s on %s.", *ItemName, *NetRoleName);		
}

void UNinjaInventoryManagerComponent::RemoveItem(UNinjaInventoryItem* Item, const int32 Quantity)
{
	if (!OwnerHasAuthority() || !HasItem(Item))
	{
		return;
	}

	if (Quantity == 0)
	{
		StoredItems.RemoveEntry(Item);
	}
	
	IStackableItemInterface* Stack = Cast<IStackableItemInterface>(Item->FindFragmentByInterface(UStackableItemInterface::StaticClass()));
	if (Stack == nullptr)
	{
		StoredItems.RemoveEntry(Item);
	}

	const int32 CurrentStack = Stack->GetStackSize(Item);
	const int32 NewStackSize = FMath::Max(0, CurrentStack - Quantity);
	if (NewStackSize > 0)
	{
		Stack->SetStackSize(Item, NewStackSize);	
	}
	else
	{
		StoredItems.RemoveEntry(Item);
	}
}

void UNinjaInventoryManagerComponent::RemoveItemById(const FGuid& ItemId, const int32 Quantity)
{
	UNinjaInventoryItem* ItemToRemove = GetItem(ItemId);
	RemoveItem(ItemToRemove, Quantity);
}

void UNinjaInventoryManagerComponent::HandleItemRemoved(const FInventoryItemEntry& Entry, int32 Idx)
{
	UNinjaInventoryItem* Item = Entry.Item;
	check(IsValid(Item));

	// Broadcasts first, otherwise the items being broadcast will have all
	// fragments removed and might be in an unstable state.
	//
	OnItemRemoved.Broadcast(Item);
	Item->OnItemRemoved.Broadcast(Item);
	
	Item->RevertFragments();
	Item->SetInventoryManager(nullptr);
	EvictStoredItemInstance(Item);
	
	// Remove the replication last, at this point fragments were reverted and
	// the item has been fully deactivated. No further replication needed.
	//
	if (IsReplicatedSubObjectRegistered(Item))
	{
		RemoveReplicatedSubObject(Entry.Item);
	}
	
	const FString ItemName = GetNameSafe(Item->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	INVENTORY_LOG_ARGS(Verbose, "Removed item %s on %s.", *ItemName, *NetRoleName);	
}

void UNinjaInventoryManagerComponent::CacheNewItemEntry(const FInventoryItemEntry& Entry)
{
	const UNinjaInventoryItem* Item = Entry.Item;
	const FGuid ItemId = Item->GetItemId();
	
	const UNinjaInventoryItemFragment* StorableFragment = Item->FindFragmentByInterface(UStorableItemInterface::StaticClass());
	if (IsValid(StorableFragment))
	{
		const IStorableItemInterface* StorableAspect = Cast<IStorableItemInterface>(StorableFragment);

		const UNinjaInventoryContainer* Container = StorableAspect->GetPrimaryContainer(Item);
		const FGuid& ContainerId = Container->GetContainerId();
		const int32 Position = StorableAspect->GetPosition(Item);
		
		CacheItem(ItemId, ContainerId, Position);
	}
}

void UNinjaInventoryManagerComponent::CacheItem(const FGuid& ItemId, const FGuid& ContainerId, const int32 Position)
{
	// Update "ItemsInContainerCache", with the pair of Position and Item, mapped to a Container.
	//
	TMap<FPosition, FItemId>& ItemsInContainer = ItemsInContainerCache.FindOrAdd(ContainerId);
	ItemsInContainer.Add(Position, ItemId);

	// Update "ContainersWithItemCache", with the pair of Container and Position, mapped to an Item.
	//
	const TPair<FContainerId, FPosition> ContainersForItem = TPair<FContainerId, FPosition>(ContainerId, Position);
	PrimaryContainersWithItemCache.Add(ItemId, ContainersForItem);
}

void UNinjaInventoryManagerComponent::MoveCachedItem(const FGuid& ItemId, const FGuid& ContainerId, const int32 Position)
{
	FContainerId OldContainerId = FGuid();
	FPosition OldPosition = INDEX_NONE;
	
	// Retrieve the old primary container information.
	TPair<FContainerId, FPosition>* PrimaryContainerInfo = PrimaryContainersWithItemCache.Find(ItemId);
	if (PrimaryContainerInfo)
	{
		OldContainerId = PrimaryContainerInfo->Key;
		OldPosition = PrimaryContainerInfo->Value;

		PrimaryContainerInfo->Key = ContainerId;
		PrimaryContainerInfo->Value = Position;
	}
	else
	{
		const TPair<FContainerId, FPosition> NewPrimaryContainerData(ContainerId, Position);
		PrimaryContainersWithItemCache.Add(ItemId, NewPrimaryContainerData);

		TMap<FPosition, FItemId>& NewItemsMap = ItemsInContainerCache.FindOrAdd(ContainerId);
		NewItemsMap.Add(Position, ItemId);
	}

	// Remove the item from its old position, if not occupied by another item.
	if (TMap<FPosition, FItemId>* OldContainerMap = ItemsInContainerCache.Find(OldContainerId))
	{
		const FItemId* CurrentItemIdPtr = OldContainerMap->Find(OldPosition);
		if (CurrentItemIdPtr && *CurrentItemIdPtr == ItemId)
		{
			OldContainerMap->Remove(OldPosition);
		}
	}

	// Place the item in its new position.
	TMap<FPosition, FItemId>& NewContainerMap = ItemsInContainerCache.FindOrAdd(ContainerId);
	NewContainerMap.Add(Position, ItemId);
	
	// If there was an actual change, then broadcast it.
	if (ContainerId != OldContainerId || Position != OldPosition)
	{
		UNinjaInventoryItem* Item = GetItem(ItemId);
		UNinjaInventoryContainer* Container = GetContainer(ContainerId);
		OnItemStorageChanged.Broadcast(Item, Container, Position);
	}
}

void UNinjaInventoryManagerComponent::EvictStoredItemId(const FGuid& ItemId)
{
	UNinjaInventoryItem* Item = GetItem(ItemId);
	EvictStoredItemInstance(Item);
}

void UNinjaInventoryManagerComponent::EvictStoredItemInstance(UNinjaInventoryItem* Item)
{
	const FGuid& ItemId = Item->GetItemId();
	
	// Retrieve and remove the primary container information
	const TPair<FContainerId, FPosition>* PrimaryContainerInfo = PrimaryContainersWithItemCache.Find(ItemId);
	if (PrimaryContainerInfo)
	{
		const FContainerId& ContainerId = PrimaryContainerInfo->Key;
		const FPosition& Position = PrimaryContainerInfo->Value;

		// Remove from ItemsInContainerCache
		if (TMap<FPosition, FItemId>* ItemsMap = ItemsInContainerCache.Find(ContainerId))
		{
			ItemsMap->Remove(Position);
			
			UNinjaInventoryContainer* Container = GetContainer(ContainerId);
			OnItemStorageChanged.Broadcast(Item, Container, Position);
		}

		// Remove from PrimaryContainersWithItemCache
		PrimaryContainersWithItemCache.Remove(ItemId);
	}
}

void UNinjaInventoryManagerComponent::TryPerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentPayload& OperationPayload = Payload.Get<FInventoryFragmentPayload>();

	const UNinjaInventoryItem* Item = OperationPayload.Item;
	const FGameplayTag OperationTag = OperationPayload.OperationTag;

	if (!IsValid(Item) || !OperationTag.IsValid())
	{
		INVENTORY_LOG_ARGS(Warning, "Missing data for operation: [ Item: %s, Operation Tag: %s ].", *GetNameSafe(Item), *OperationTag.ToString());
		return;
	}

	if (!HasItem(Item))
	{
		INVENTORY_LOG_ARGS(Warning, "Item: %s is not owned by this inventory!.", *GetNameSafe(Item));
		return;
	}

	if (OwnerHasAuthority())
	{
		TArray<UNinjaInventoryItemFragment*> Fragments = Item->FindFragmentsByInterface(UOperableItemInterface::StaticClass());
		for (UNinjaInventoryItemFragment* Fragment : Fragments)
		{
			IOperableItemInterface* Operation = Cast<IOperableItemInterface>(Fragment);
			if (Operation->EvaluateOperation(Payload))
			{
				Operation->PerformOperation(Payload);
			}
		}
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_TryPerformOperation(Payload);	
	}
}

void UNinjaInventoryManagerComponent::PerformFragmentOperation(UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	if (!IsValid(Fragment) || !Fragment->Implements<UOperableItemInterface>())
	{
		INVENTORY_LOG_ARGS(Warning, "Fragment '%s' is invalid or does not implement OperableItemInterface.", *GetNameSafe(Fragment));
		return;
	}

	IOperableItemInterface* Operation = Cast<IOperableItemInterface>(Fragment);
	
	const FInventoryFragmentPayload& OperationPayload = Payload.Get<FInventoryFragmentPayload>();
	const FGameplayTag OperationTag = OperationPayload.OperationTag;
	
	if (!Operation->EvaluateOperation(Payload))
	{
		INVENTORY_LOG_ARGS(Warning, "Fragment '%s' blocked operation '%s'.", *GetNameSafe(Fragment), *OperationTag.GetTagName().ToString());
		return;
	}
	
	if (OwnerHasAuthority())
	{
		INVENTORY_LOG_ARGS(Verbose, "Fragment '%s' will perform operation '%s'.", *GetNameSafe(Fragment), *OperationTag.GetTagName().ToString());
		Operation->PerformOperation(Payload);
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_PerformFragmentOperation(Fragment, Payload);	
	}
}

void UNinjaInventoryManagerComponent::PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target)
{
	if (HasItem(Source) && HasItem(Target))
	{
		if (OwnerHasAuthority())
		{
			Internal_PerformFragmentOperationOnItems(Source, Target);
		}
		else if (OwnerIsLocallyControlled())
		{
			Server_PerformFragmentOperationOnItems(Source, Target);
		}
	}
}

void UNinjaInventoryManagerComponent::OnRep_InitializationState()
{
	switch (InitializationState)
	{
		case EInventoryInitializationState::NotInitialized:
			break;
		case EInventoryInitializationState::BoundToAbilitySystem:
			TryInitializeItems();
			break;	
		case EInventoryInitializationState::Initialized:
			OnInventoryInitialized.Broadcast();
			break;
	}
}

void UNinjaInventoryManagerComponent::TryInitializeItems()
{
	if (InitializationState != EInventoryInitializationState::BoundToAbilitySystem)
	{
		return;
	}

	const AActor* Avatar = GetInventoryAvatar();
	if (!HasBegunPlay() || !IsValid(Avatar))
	{
		bWantsToInitializeItems = true;
		return;
	}
	
	if (OwnerIsLocallyControlled())
	{
		bWantsToInitializeItems = false;
		Server_InitializeDefaultItems();
	}
}

void UNinjaInventoryManagerComponent::ReceiveLoot(UNinjaInventoryLootComponent* Source, TArray<UNinjaInventoryLoot*>& SelectedLoot)
{
	// Ensure that we have a valid source and we are running in the authoritative version.
	// We won't check if there's actual loot in the list, as want to react to empty loot.
	if (!IsValid(Source) || !OwnerHasAuthority())
	{
		return;
	}
	
	if (OwnerIsLocallyControlled())
	{
		// Owner is locally controlled and has authority.
		OnLootReceived.Broadcast(Source, SelectedLoot);
	}
	else
	{
		// We have authority but this is not the local player.
		Client_ReceiveLoot(Source, SelectedLoot);
	}
}

void UNinjaInventoryManagerComponent::Client_ReceiveLoot_Implementation(UNinjaInventoryLootComponent* Source, const TArray<UNinjaInventoryLoot*>& SelectedLoot)
{
	OnLootReceived.Broadcast(Source, SelectedLoot);
}

void UNinjaInventoryManagerComponent::DismissLoot(UNinjaInventoryLootComponent* Source)
{
	if (!IsValid(Source) || !OwnerHasAuthority())
	{
		return;
	}
	
	if (OwnerIsLocallyControlled())
	{
		// Owner is locally controlled and has authority.
		OnLootDismissed.Broadcast(Source);
	}
	else
	{
		// We have authority but this is not the local player.
		Client_DismissLoot(Source);
	}
}

void UNinjaInventoryManagerComponent::Client_DismissLoot_Implementation(UNinjaInventoryLootComponent* Source)
{
	OnLootDismissed.Broadcast(Source);
}

void UNinjaInventoryManagerComponent::Internal_PerformFragmentOperationOnItems(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target)
{
	check(IsValid(Source));
	check(IsValid(Target));
	
	TArray<UNinjaInventoryItemFragment*> Fragments = Source->GetData()->FindFragmentsByInterface(UOperableItemInterface::StaticClass());
	for (UNinjaInventoryItemFragment* Fragment : Fragments)
	{
		IStackableItemInterface* StackableItem = Cast<IStackableItemInterface>(Fragment);
		if (StackableItem && StackableItem->CanCombineStacks(Source, Target))
		{
			StackableItem->CombineStacks(Source, Target);
			return;	
		}

		IStorableItemInterface* StorableItem = Cast<IStorableItemInterface>(Fragment);
		if (StorableItem && StorableItem->CanSwapItems(Source, Target))
		{
			StorableItem->SwapItems(Source, Target);
			return;
		}
	}	
}

void UNinjaInventoryManagerComponent::LoadLayoutViaInterface(const AActor* Source)
{
	if (IsValid(Source) && Source->Implements<UInventoryManagerProviderInterface>())
	{
		const UNinjaInventoryLayoutDataAsset* NewInventoryLayout = IInventoryManagerProviderInterface::Execute_GetInventoryLayout(Source);
		if (IsValid(NewInventoryLayout))
		{
			InventoryLayout = NewInventoryLayout;
			INVENTORY_LOG_ARGS(Verbose, "Retrieved inventory from %s.", *GetNameSafe(Source));
		}
	}
}

void UNinjaInventoryManagerComponent::LoadDefaultItemsViaInterface(const AActor* Source)
{
	if (IsValid(Source) && Source->Implements<UInventoryManagerProviderInterface>())
	{
		TArray<FInventoryDefaultItem> AdditionalDefaultItems;
		if (IInventoryManagerProviderInterface::Execute_GetDefaultItems(Source, AdditionalDefaultItems))
		{
			for (const FInventoryDefaultItem& DefaultItem : AdditionalDefaultItems)
			{
				FInventoryItemContextEntry& Entry = DefaultItems.AddDefaulted_GetRef();
				Entry.ItemData = DefaultItem.ItemData;
				Entry.FragmentMemories = DefaultItem.InitialFragmentData;
			}
		}
	}
}

void UNinjaInventoryManagerComponent::SortContainers(TArray<FInventoryContainerEntry>& Containers) const
{
	Algo::Sort(Containers, [](const FInventoryContainerEntry& EntryA, const FInventoryContainerEntry& EntryB)
		{ return EntryA.Container->GetData()->GetPriority() < EntryB.Container->GetData()->GetPriority(); });	
}

TArray<UNinjaInventoryContainer*> UNinjaInventoryManagerComponent::ConvertStoredContainerEntries(const TArray<FInventoryContainerEntry>& Entries)
{
	TArray<UNinjaInventoryContainer*> Containers;
	Containers.Reserve(Entries.Num());

	for (const FInventoryContainerEntry& Entry : Entries)
	{
		Containers.Add(Entry.Container);
	}

	return Containers;	
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::ConvertStoredItemEntries(const TArray<FInventoryItemEntry>& Entries)
{
	TArray<UNinjaInventoryItem*> Items;
	Items.Reserve(Entries.Num());

	for (const FInventoryItemEntry& Entry : Entries)
	{
		Items.Add(Entry.Item);
	}

	return Items;	
}

TArray<UNinjaInventoryItem*> UNinjaInventoryManagerComponent::ConvertCachedItemEntries(const TArray<FInventoryStorageCache>& Entries)
{
	TArray<UNinjaInventoryItem*> Items;
	Items.Reserve(Entries.Num());

	for (const FInventoryStorageCache& Entry : Entries)
	{
		Items.Add(Entry.Item);
	}

	return Items;	
}

bool UNinjaInventoryManagerComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (const FInventoryItemEntry& Entry : StoredItems.GetEntries())
	{
		UNinjaInventoryItem* Item = Entry.Item;
		if (IsValid(Item))
		{
			bWroteSomething |= Channel->ReplicateSubobject(Item, *Bunch, *RepFlags);
		}
	}
	
	for (const FInventoryContainerEntry& Entry : StoredContainers.GetEntries())
	{
		UNinjaInventoryContainer* Container = Entry.Container;
		if (IsValid(Container))
		{
			bWroteSomething |= Channel->ReplicateSubobject(Container, *Bunch, *RepFlags);
		}
	}

	return bWroteSomething;
}

void UNinjaInventoryManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InitializationState);
	DOREPLIFETIME_CONDITION(ThisClass, StoredContainers, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ThisClass, StoredItems, COND_OwnerOnly);
}

AActor* UNinjaInventoryManagerComponent::GetInventoryAvatar() const
{
	if (InventoryAvatarPtr.IsValid() && InventoryAvatarPtr->IsValidLowLevelFast())
	{
		return InventoryAvatarPtr.Get();
	}

	return nullptr;
}

FInventoryManagerRecord UNinjaInventoryManagerComponent::GetInventoryRecordForSerialization() const
{
	if (!IsInventoryInitialized())
	{
		INVENTORY_LOG(Warning, "Requested a Manager Record from an unitialized inventory!");
	}

	FInventoryManagerRecord Record;
	Record.DataAssetPath = FSoftObjectPath(GetLayout()).ToString();
	Record.ContainerRecords = GetContainerRecordsForSerialization();
	Record.ItemRecords = GetItemRecordsForSerialization();
	return Record;
}

void UNinjaInventoryManagerComponent::LoadInventory(const FInventoryManagerRecord& InventoryRecord)
{
	if (!OwnerHasAuthority())
	{
		INVENTORY_LOG(Warning, "Attempt to load an inventory without network authority!");
		return;	
	}
	
	ResetInventory();

	TArray<FSoftObjectPath> AssetsToLoad;

	const FSoftObjectPath LayoutDataPath = FSoftObjectPath(InventoryRecord.DataAssetPath);
	AssetsToLoad.Add(LayoutDataPath);

	for (const FInventoryContainerRecord& Record : InventoryRecord.ContainerRecords)
	{
		const FSoftObjectPath ContainerDataPath = FSoftObjectPath(Record.DataAssetPath);
		AssetsToLoad.AddUnique(ContainerDataPath);
	}
	
	for (const FInventoryItemRecord& Record : InventoryRecord.ItemRecords)
	{
		const FSoftObjectPath ItemDataPath = FSoftObjectPath(Record.DataAssetPath);
		AssetsToLoad.AddUnique(ItemDataPath);
	}

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if (IsValid(AssetManager))
	{
		const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::HandleInventoryAssetsLoaded, InventoryRecord);
		AssetManager->LoadAssetList(AssetsToLoad, Delegate, FStreamableManager::AsyncLoadHighPriority);
	}
}

void UNinjaInventoryManagerComponent::HandleInventoryAssetsLoaded(FInventoryManagerRecord InventoryRecord)
{
	const FSoftObjectPath LayoutDataPath = FSoftObjectPath(InventoryRecord.DataAssetPath);
	const TSoftObjectPtr<UNinjaInventoryLayoutDataAsset> LayoutDataPtr = TSoftObjectPtr<UNinjaInventoryLayoutDataAsset>(LayoutDataPath);
	if (LayoutDataPtr.IsValid())
	{
		InventoryLayout = LayoutDataPtr.Get();
		INVENTORY_LOG_ARGS(Verbose, "Load Operation has set Inventory Layout %s.", *GetNameSafe(InventoryLayout));
	}
	else
	{
		INVENTORY_LOG(Warning, "Inventory Record does not point to a valid Layout Data Asset!");
	}
	
	for (const FInventoryContainerRecord& Record : InventoryRecord.ContainerRecords)
	{
		LoadContainerRecord(Record);
	}

	for (const FInventoryItemRecord& Record : InventoryRecord.ItemRecords)
	{
		LoadItemRecord(Record);
	}
}

void UNinjaInventoryManagerComponent::LoadContainerRecord_Implementation(const FInventoryContainerRecord& Record)
{
	const FSoftObjectPath ContainerDataPath = FSoftObjectPath(Record.DataAssetPath);
	const TSoftObjectPtr<UNinjaInventoryContainerDataAsset> ContainerDataPtr = TSoftObjectPtr<UNinjaInventoryContainerDataAsset>(ContainerDataPath);
	if (!ContainerDataPtr.IsValid())
	{
		INVENTORY_LOG(Warning, "Invalid container data for load operation!");
		return;
	}
	
	const FGuid ContainerId = Record.ContainerId;
	const FName ContainerObjectName = Record.InstanceName;
	const UNinjaInventoryContainerDataAsset* ContainerData = ContainerDataPtr.Get();
	UNinjaInventoryContainer* Container = CreateContainerInstance(ContainerData, ContainerObjectName);

	FInventoryContainerContext ContainerContext, ResultContext;
	ContainerContext.MarkLoadOperation();
	ContainerContext.SetContainerId(ContainerId);
	ContainerContext.SetContainerData(ContainerData);
	ContainerContext.SetContainer(Container);

	if (ContainerContext.IsValidForLoadOperation())
	{
		AddContainer(ContainerContext, ResultContext);
		if (ResultContext.IsSuccessful())
		{
			INVENTORY_LOG_ARGS(Verbose, "Load Operation added container '%s'.", *GetNameSafe(ContainerData));	
		}
	}	
}

void UNinjaInventoryManagerComponent::LoadItemRecord_Implementation(const FInventoryItemRecord& Record)
{
	const FSoftObjectPath ItemDataPath = FSoftObjectPath(Record.DataAssetPath);
	const TSoftObjectPtr<UNinjaInventoryItemDataAsset> ItemDataPtr = TSoftObjectPtr<UNinjaInventoryItemDataAsset>(ItemDataPath);
	if (!ItemDataPtr.IsValid())
	{
		INVENTORY_LOG(Warning, "Invalid item data for load operation!");
		return;
	}

	const FName ItemObjectName = Record.InstanceName;
	const UNinjaInventoryItemDataAsset* ItemData = ItemDataPtr.Get();
	UNinjaInventoryItem* Item = CreateItemInstance(ItemData, ItemObjectName);

	FInventoryItemContext ItemContext;
	ItemContext.MarkLoadOperation();
	ItemContext.Request.ItemId = Record.ItemId;
	ItemContext.Request.ItemData = ItemData;
	ItemContext.Request.Item = Item;
	ItemContext.Request.FragmentMemories = Record.Memories;
	
	if (ItemContext.IsValidForLoadOperation())
	{
		FInventoryItemContext Result;
		AddItem(ItemContext, Result);
		INVENTORY_LOG_ARGS(Verbose, "Load Operation will add item %s.", *GetNameSafe(ItemData));
	}	
}

APawn* UNinjaInventoryManagerComponent::GetPawn() const
{
	AActor* InventoryAvatar = GetInventoryAvatar();
	if (IsValid(InventoryAvatar) && InventoryAvatar->IsA<APawn>())
	{
		// Our avatar was set and it's a pawn. This is the priority value.
		return Cast<APawn>(InventoryAvatar);
	}

	return Super::GetPawn();
}

const UNinjaInventoryLayoutDataAsset* UNinjaInventoryManagerComponent::GetLayout() const
{
	return InventoryLayout;
}

void UNinjaInventoryManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (IsValid(AbilityComponentAction))
	{
		AbilityComponentAction->Cancel();
		AbilityComponentAction = nullptr;
	}
	
	Super::EndPlay(EndPlayReason);
}

void UNinjaInventoryManagerComponent::Server_InitializeDefaultItems_Implementation()
{
	InitializeDefaultItems();
}

bool UNinjaInventoryManagerComponent::Server_InitializeDefaultItems_Validate()
{
	return InitializationState == EInventoryInitializationState::BoundToAbilitySystem;
}

void UNinjaInventoryManagerComponent::Server_TryPerformOperation_Implementation(
	const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	TryPerformOperation(Payload);
}

bool UNinjaInventoryManagerComponent::Server_TryPerformOperation_Validate(
	const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentPayload& PayloadData = Payload.Get<FInventoryFragmentPayload>();
	const UNinjaInventoryItem* Item = PayloadData.Item;
	return !Item || HasItem(PayloadData.Item);
}

void UNinjaInventoryManagerComponent::Server_PerformFragmentOperation_Implementation(
	UNinjaInventoryItemFragment* Fragment, const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	PerformFragmentOperation(Fragment, Payload);
}

bool UNinjaInventoryManagerComponent::Server_PerformFragmentOperation_Validate(UNinjaInventoryItemFragment* Fragment,
	const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentPayload& PayloadData = Payload.Get<FInventoryFragmentPayload>();
	const UNinjaInventoryItem* Item = PayloadData.Item;
	return !Item || HasItem(PayloadData.Item);
}

void UNinjaInventoryManagerComponent::Server_PerformFragmentOperationOnItems_Implementation(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target)
{
	PerformFragmentOperationOnItems(Source, Target);
}

bool UNinjaInventoryManagerComponent::Server_PerformFragmentOperationOnItems_Validate(UNinjaInventoryItem* Source, UNinjaInventoryItem* Target)
{
	return HasItem(Source) && HasItem(Target);
}
