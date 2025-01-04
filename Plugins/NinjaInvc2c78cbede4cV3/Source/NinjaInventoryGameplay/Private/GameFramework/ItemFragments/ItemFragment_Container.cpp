// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Container.h"

#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/FInventoryFragmentMemoryUtils.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/StackableItemInterface.h"
#include "Types/FInventoryFragmentMemory.h"
#include "Types/FInventoryItemContext.h"
#include "Types/FItemFragmentMemories.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Container::UItemFragment_Container()
{
	PreferredContainerQuery = FGameplayTagQuery::EmptyQuery;
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Move);
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Swap);
}

void UItemFragment_Container::OnApplyFragment_Implementation(UNinjaInventoryItem* Item)
{
	UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	
	for (const UNinjaInventoryContainerDataAsset* ContainerData : Containers)
	{
		FInventoryContainerContext ContainerContext, ResultContext;
		ContainerContext.SetContainerData(ContainerData);
		ContainerContext.SetOwningItem(Item);
		InventoryManager->AddContainer(ContainerContext, ResultContext);

		if (ResultContext.IsSuccessful())
		{
			const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();
			INVENTORY_LOG_ARGS(Verbose, "Added Container '%s' from item %s.", *GetNameSafe(ContainerData), *GetNameSafe(ItemData));
		}
	}
}

void UItemFragment_Container::OnRevertFragment_Implementation(UNinjaInventoryItem* Item)
{
	UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	InventoryManager->RemoveContainersFromItem(Item);
}

bool UItemFragment_Container::IsPreferredContainer(const UNinjaInventoryContainer* Container) const
{
	if (IsValid(Container))
	{
		FGameplayTagContainer ContainerTags;
		Container->GetOwnedGameplayTags(ContainerTags);
		return PreferredContainerQuery.Matches(ContainerTags);	
	}
	
	return false;
}

bool UItemFragment_Container::IsValidPosition(const UNinjaInventoryContainer* Container, int32 Position) const
{
	if (IsValid(Container) && Position != INDEX_NONE)
	{
		const UNinjaInventoryManagerComponent* InventoryManager = Container->GetInventoryManager();
		if (IsValid(InventoryManager) && InventoryManager->CountAvailableSlotsInContainer(Container) > 0)
		{
			const TArray<UNinjaInventoryItem*> Items = InventoryManager->GetItemsByContainer(Container);
			return !Items.ContainsByPredicate([this, Position](const UNinjaInventoryItem* StoredItem)
				{ return GetPosition(StoredItem) == Position; });
		}
	}

	return false;
}

bool UItemFragment_Container::CanAddToInventory(const FInventoryItemContext& ItemContext) const
{
	const UNinjaInventoryItemDataAsset* ItemData = ItemContext.Request.ItemData;
	return !ItemContext.InventoryManager->GetAvailableContainersForItemData(ItemData).IsEmpty();
}

bool UItemFragment_Container::CanMoveItem(const UNinjaInventoryItem* Item, const UNinjaInventoryContainer* Container, const int32 Position) const
{
	return Position != INDEX_NONE
		&& IsValid(Item) && Item->GetInventoryManager()
		&& IsValid(Container) && IsValid(Container->GetInventoryManager())
		&& Item->GetInventoryManager()->HasItem(Item)
		&& Item->GetInventoryManager()->HasContainer(Container)
		&& Container->GetData()->SupportsItem(Item)
		&& IsValidPosition(Container, Position);
}

bool UItemFragment_Container::CanSwapItems(const UNinjaInventoryItem* Item, const UNinjaInventoryItem* ItemToSwap) const
{
	const IStackableItemInterface* StackableItem = Cast<IStackableItemInterface>(Item->FindFragmentByInterface(UStackableItemInterface::StaticClass()));
	if (StackableItem && StackableItem->CanCombineStacks(Item, ItemToSwap))
	{
		// Priority should be given to the stack operation.
		return false;
	}

	UNinjaInventoryContainer* ContainerA = nullptr;
	int32 PositionA = INDEX_NONE;
	GetDataForSwap(Item, ContainerA, PositionA);

	UNinjaInventoryContainer* ContainerB = nullptr;
	int32 PositionB = INDEX_NONE;
	GetDataForSwap(ItemToSwap, ContainerB, PositionB);
	
	return IsValid(Item) && IsValid(Item->GetInventoryManager())
		&& IsValid(ItemToSwap) && IsValid(ItemToSwap->GetInventoryManager())
		&& Item->GetInventoryManager() == ItemToSwap->GetInventoryManager()
		&& ContainerA->GetData()->SupportsItem(ItemToSwap)
		&& ContainerB->GetData()->SupportsItem(Item);
}

UNinjaInventoryContainer* UItemFragment_Container::GetPrimaryContainer(const UNinjaInventoryItem* Item) const
{
	FInventoryItemFragmentContainerMemory ContainerMemory;
	if (!GetMemory<FInventoryItemFragmentContainerMemory>(Item, ContainerMemory))
	{
		return nullptr;
	}

	const FGuid PrimaryContainerId = ContainerMemory.PrimaryContainerId;
	return Item->GetInventoryManager()->GetContainer(PrimaryContainerId);	
}

int32 UItemFragment_Container::GetPosition(const UNinjaInventoryItem* Item) const
{
	FInventoryItemFragmentContainerMemory ContainerMemory;
	if (!GetMemory<FInventoryItemFragmentContainerMemory>(Item, ContainerMemory))
	{
		return INDEX_NONE;
	}

	return ContainerMemory.Position;
}

void UItemFragment_Container::GetDataForSwap(const UNinjaInventoryItem* Item, UNinjaInventoryContainer*& OutContainer, int32& OutPosition) const
{
	FInventoryItemFragmentContainerMemory ContainerMemory;
	if (GetMemory<FInventoryItemFragmentContainerMemory>(Item, ContainerMemory))
	{
		const FGuid PrimaryContainerId = ContainerMemory.PrimaryContainerId;
		OutContainer = Item->GetInventoryManager()->GetContainer(PrimaryContainerId);
		OutPosition = ContainerMemory.Position;
	}
}

void UItemFragment_Container::SetPrimaryContainer(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container)
{
	if (!ItemHasAuthority(Item) || !IsValid(Container))
	{
		return;
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentContainerMemory>(Item, [this, Item, Container](FInventoryItemFragmentContainerMemory* FragmentMemory, bool bIsNew)
	{
		// Check if this is the same container. If it is, there's nothing to save.
		if (Container->GetContainerId() == FragmentMemory->PrimaryContainerId)
		{
			return false;
		}

		FragmentMemory->PrimaryContainerId = Container->GetContainerId();
		
		// If this is a new memory, then we need to find the best position for the item.
		if (bIsNew)
		{
			const int32 BestPosition = FindBestPositionForItemInContainer(Item, Container);
			FragmentMemory->Position = BestPosition;
		}

		return true;
	});
}

void UItemFragment_Container::SetPosition(UNinjaInventoryItem* Item, const int32 Position)
{
	if (!ItemHasAuthority(Item) || Position == INDEX_NONE)
	{
		return;	
	}
	
	SaveMemoryWithPredicate<FInventoryItemFragmentContainerMemory>(Item, [this, Position](FInventoryItemFragmentContainerMemory* FragmentMemory, bool bIsNew)
	{
		// Can't to save a position without a pre-existing container.
		if (bIsNew)
		{
			return false;
		}
		
		// Check if this is the same position. If it is, there's nothing to save.
		if (Position == FragmentMemory->Position)
		{
			return false;
		}

		FragmentMemory->Position = Position;
		return true;
	});
}

void UItemFragment_Container::SetBestContainerAndPositionForItem(UNinjaInventoryItem* Item)
{
	const UNinjaInventoryContainer* BestContainer = FindBestContainerForItem(Item);
	const int32 BestPosition = FindBestPositionForItem(Item);

	if (BestContainer != nullptr && BestPosition != INDEX_NONE)
	{
		TInstancedStruct<FInventoryFragmentMemory> InstancedMemory;
		if (Item->GetFragmentMemory(GetClass(), InstancedMemory))
		{
			FInventoryItemFragmentContainerMemory* ContainerMemory = InstancedMemory.GetMutablePtr<FInventoryItemFragmentContainerMemory>();
			ContainerMemory->PrimaryContainerId = BestContainer->GetContainerId();
			ContainerMemory->Position = BestPosition;
			SaveMemory<FInventoryItemFragmentContainerMemory>(Item, *ContainerMemory);
		}
	}
}

UNinjaInventoryContainer* UItemFragment_Container::FindBestContainerForItem(const UNinjaInventoryItem* Item) const
{
	const UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();

	if (!IsValid(InventoryManager) || !IsValid(ItemData))
	{
		return nullptr;
	}

	TArray<UNinjaInventoryContainer*> AvailableContainers = InventoryManager->GetAvailableContainersForItemData(ItemData);

	// Nothing else to do here.
	if (AvailableContainers.IsEmpty())
	{
		return nullptr;
	}

	// We only have one container, so that's the one to use.
	if (AvailableContainers.Num() == 1)
	{
		return AvailableContainers[0];
	}
	
	// We have a few choices, try to find a preferred container.
	TArray<UNinjaInventoryContainer*> PreferredContainers = AvailableContainers.FilterByPredicate(
		[this](const UNinjaInventoryContainer* Container)
			{ return IsPreferredContainer(Container); });

	if (PreferredContainers.IsValidIndex(0))
	{
		return PreferredContainers[0];
	}

	// Otherwise, try to find the default container in this inventory.
	TArray<UNinjaInventoryContainer*> DefaultContainers = AvailableContainers.FilterByPredicate(
		[InventoryManager](const UNinjaInventoryContainer* Container)
			{ return InventoryManager->IsDefaultContainer(Container); });

	if (DefaultContainers.IsValidIndex(0))
	{
		return DefaultContainers[0];
	}

	// Fallback to the first available container.
	return AvailableContainers[0];
}

UNinjaInventoryContainer* UItemFragment_Container::FindBestContainerForEntry(FInventoryItemContextEntry& ItemEntry,
	TMap<UNinjaInventoryContainer*, int32>& OutSlotsTaken) const
{
    const UNinjaInventoryManagerComponent* InventoryManager = ItemEntry.InventoryManager;
    const UNinjaInventoryItemDataAsset* ItemData = ItemEntry.ItemData;

    if (!IsValid(InventoryManager) || !IsValid(ItemData))
    {
        return nullptr;
    }

    FInventoryItemFragmentContainerMemory* ContainerMemory;

    FInventoryDefaultItemMemory* DefaultMemory = ItemEntry.FragmentMemories.FindByPredicate(
        [this](const FInventoryDefaultItemMemory& Memory) { return Memory.IsCompatibleWithFragment(this); });

    if (DefaultMemory)
    {
        ContainerMemory = DefaultMemory->Memory.GetMutablePtr<FInventoryItemFragmentContainerMemory>();
    	const UNinjaInventoryContainerDataAsset* DefaultContainerData = ContainerMemory->DefaultContainerData;

    	TArray<UNinjaInventoryContainer*> ContainersFromDefaultData = InventoryManager->GetContainersByData(DefaultContainerData);
    	for (UNinjaInventoryContainer* Container : ContainersFromDefaultData)
    	{
    		if (TryAddToContainer(InventoryManager, Container, OutSlotsTaken))
    		{
    			INVENTORY_LOG_ARGS(Verbose, "Using memory container %s for item %s.", *GetNameSafe(Container), *GetNameSafe(ItemData));
    			ContainerMemory->PrimaryContainerId = Container->GetContainerId();
    			return Container;
    		}
    	}
    }
    else
    {
    	const FInventoryDefaultItemMemory NewMemory = FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), FInventoryItemFragmentContainerMemory());
    	ItemEntry.FragmentMemories.Add(NewMemory);

    	DefaultMemory = ItemEntry.FragmentMemories.FindByPredicate(
			[this](const FInventoryDefaultItemMemory& Memory) { return Memory.IsCompatibleWithFragment(this); });

    	ContainerMemory = DefaultMemory->Memory.GetMutablePtr<FInventoryItemFragmentContainerMemory>();
    	INVENTORY_LOG_ARGS(Verbose, "Created empty container memory for item %s.", *GetNameSafe(ItemData));
    }

    TArray<UNinjaInventoryContainer*> AvailableContainers = InventoryManager->GetAvailableContainersForItemData(ItemData);
    if (AvailableContainers.Num() == 1)
    {
    	// Only one container, skip all filtering.
    	UNinjaInventoryContainer* SingleContainer = AvailableContainers[0];
    	if (TryAddToContainer(InventoryManager, SingleContainer, OutSlotsTaken))
    	{
    		INVENTORY_LOG_ARGS(Verbose, "Selected single container %s for item %s.", *GetNameSafe(SingleContainer), *GetNameSafe(ItemData));
    		ContainerMemory->PrimaryContainerId = SingleContainer->GetContainerId();
    		return SingleContainer;
    	}
    }
    else if (AvailableContainers.Num() > 1)
    {
    	// Try preferred containers first.
    	TArray<UNinjaInventoryContainer*> PreferredContainers = AvailableContainers.FilterByPredicate(
			[this](const UNinjaInventoryContainer* Container) { return IsPreferredContainer(Container); });

    	for (UNinjaInventoryContainer* PreferredContainer : PreferredContainers)
    	{
    		if (TryAddToContainer(InventoryManager, PreferredContainer, OutSlotsTaken))
    		{
    			INVENTORY_LOG_ARGS(Verbose, "Selected preferred container %s for item %s.", *GetNameSafe(PreferredContainer), *GetNameSafe(ItemData));
    			ContainerMemory->PrimaryContainerId = PreferredContainer->GetContainerId();
    			return PreferredContainer;
    		}
    	}

    	// Then try default containers.
    	TArray<UNinjaInventoryContainer*> DefaultContainers = AvailableContainers.FilterByPredicate(
			[InventoryManager](const UNinjaInventoryContainer* Container) { return InventoryManager->IsDefaultContainer(Container); });

    	for (UNinjaInventoryContainer* DefaultContainer : DefaultContainers)
    	{
    		if (TryAddToContainer(InventoryManager, DefaultContainer, OutSlotsTaken))
    		{
    			INVENTORY_LOG_ARGS(Verbose, "Selected default container %s for item %s.", *GetNameSafe(DefaultContainer), *GetNameSafe(ItemData));
    			ContainerMemory->PrimaryContainerId = DefaultContainer->GetContainerId();
    			return DefaultContainer;
    		}
    	}

    	// Finally, try any available container.
    	for (UNinjaInventoryContainer* AvailableContainer : AvailableContainers)
    	{
    		if (TryAddToContainer(InventoryManager, AvailableContainer, OutSlotsTaken))
    		{
    			INVENTORY_LOG_ARGS(Verbose, "Selected first available container %s for item %s.", *GetNameSafe(AvailableContainer), *GetNameSafe(ItemData));
    			ContainerMemory->PrimaryContainerId = AvailableContainer->GetContainerId();
    			return AvailableContainer;
    		}
    	}
    }

	INVENTORY_LOG_ARGS(Warning, "Unable to determine a primary container for item %s!", *GetNameSafe(ItemData));
	ContainerMemory->PrimaryContainerId = FGuid();
    return nullptr;
}

bool UItemFragment_Container::TryAddToContainer(const UNinjaInventoryManagerComponent* InventoryManager, UNinjaInventoryContainer* Container,
	TMap<UNinjaInventoryContainer*, int32>& OutSlotsTaken)
{
	const int32 AdditionalSlotsTaken = OutSlotsTaken.FindOrAdd(Container);
	const int32 AvailableSlots = InventoryManager->CountAvailableSlotsInContainer(Container);

	// Account for the amount of tokens plus whatever is set in the map.
	//
	// This is necessary because the context is not persistent yet, so we are keeping track
	// ourselves of all entries occupying additional slots in a container.
	//
	if (AvailableSlots - AdditionalSlotsTaken > 0)
	{
		const int32 NewTotalSlots = AdditionalSlotsTaken + 1;
		OutSlotsTaken.Add(Container, NewTotalSlots);
		return true;
	}

	return false;
}

int32 UItemFragment_Container::FindBestPositionForItem(const UNinjaInventoryItem* Item) const
{
	const UNinjaInventoryContainer* CurrentContainer = GetPrimaryContainer(Item);
	return FindBestPositionForItemInContainer(Item, CurrentContainer);
}

int32 UItemFragment_Container::FindBestPositionForItemInContainer(const UNinjaInventoryItem* Item, const UNinjaInventoryContainer* Container) const
{
	const UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();
	const int32 CurrentPosition = GetPosition(Item);

	if (!IsValid(InventoryManager) || !IsValid(ItemData) || !IsValid(Container))
	{
		return INDEX_NONE;
	}

	const int32 AvailableSlots = InventoryManager->CountAvailableSlotsInContainer(Container);
	if (AvailableSlots <= 0)
	{
		return INDEX_NONE;
	}

	// Check if the stored position is available.
	if (CurrentPosition != INDEX_NONE)
	{
		if (!IsPositionTaken(InventoryManager, Container, CurrentPosition, Item))
		{
			// The current position is valid.
			return CurrentPosition;
		}
	}

	// Find an empty slot if the current position is not valid or none is set.
	TArray<int32> DummyArray;
	return FindEmptyPosition(InventoryManager, Container, DummyArray);	
}

int32 UItemFragment_Container::FindBestPositionForEntry(FInventoryItemContextEntry& ItemEntry, TMap<UNinjaInventoryContainer*, TArray<int32>>& OutAdditionalPositions) const
{
	const UNinjaInventoryManagerComponent* InventoryManager = ItemEntry.InventoryManager;
	const UNinjaInventoryItemDataAsset* ItemData = ItemEntry.ItemData;

	if (!IsValid(InventoryManager) || !IsValid(ItemData))
	{
		return INDEX_NONE;
	}

	// The entry must provide a default memory for this fragment, with a valid container.
	FInventoryDefaultItemMemory* DefaultMemory = ItemEntry.FragmentMemories.FindByPredicate(
		[this](const FInventoryDefaultItemMemory& Memory) { return Memory.IsCompatibleWithFragment(this); });

	if (!DefaultMemory)
	{
		return INDEX_NONE;
	}

	// The memory must be valid, with the correct type expected by this fragment.
	FInventoryItemFragmentContainerMemory* ContainerMemory = DefaultMemory->Memory.GetMutablePtr<FInventoryItemFragmentContainerMemory>();
	if (!ContainerMemory)
	{
		return INDEX_NONE;
	}

	// The fragment memory must have a valid container, most likely set earlier.
	// Also, at this point we may assume that the container, if set, is valid.
	UNinjaInventoryContainer* Container = InventoryManager->GetContainer(ContainerMemory->PrimaryContainerId);
	if (!IsValid(Container))
	{
		return INDEX_NONE;
	}

	int32 BestPosition = ContainerMemory->Position;
	TArray<int32>& PositionsTaken = OutAdditionalPositions.FindOrAdd(Container);
	
	if (BestPosition != INDEX_NONE && (PositionsTaken.Contains(BestPosition) || IsPositionTaken(InventoryManager, Container, BestPosition)))
	{
		BestPosition = INDEX_NONE;
	}

	if (BestPosition == INDEX_NONE)
	{
		BestPosition = FindEmptyPosition(InventoryManager, Container, PositionsTaken);
	}

	ContainerMemory->Position = BestPosition;
	PositionsTaken.AddUnique(BestPosition);
	return BestPosition;
}

bool UItemFragment_Container::IsPositionTaken(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryContainer* Container,
	const int32 Position, const UNinjaInventoryItem* Item)
{
	const UNinjaInventoryItem* CurrentItem = InventoryManager->GetItemByContainerAndPosition(Container, Position);
	return IsValid(CurrentItem) && (!IsValid(Item) || CurrentItem != Item);
}

int32 UItemFragment_Container::FindEmptyPosition(const UNinjaInventoryManagerComponent* InventoryManager,
	const UNinjaInventoryContainer* Container, TArray<int32>& PositionsTaken)
{
	const auto ContainerData = Container->GetData();
	const int32 Slots = ContainerData->GetSlots(InventoryManager);

	for (int32 Idx = 0; Idx < Slots; ++Idx)
	{
		const UNinjaInventoryItem* CurrentItem = InventoryManager->GetItemByContainerAndPosition(Container, Idx);
		if (!IsValid(CurrentItem) && !PositionsTaken.Contains(Idx))
		{
			// No item in the current index, that is the best position.
			PositionsTaken.Add(Idx);
			return Idx;
		}
	}

	// No available position found.
	return INDEX_NONE;
}

void UItemFragment_Container::MoveItem(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container, const int32 Position)
{
	if (ItemHasAuthority(Item) && IsValid(Container) && Position != INDEX_NONE)
	{
		SaveMemoryWithPredicate<FInventoryItemFragmentContainerMemory>(Item, [Container, Position](FInventoryItemFragmentContainerMemory* Memory, bool bIsNew)
		{
			const FGuid& ContainerId = Container->GetContainerId();
			if (Memory->PrimaryContainerId == ContainerId && Memory->Position == Position)
			{
				// Same data - container and position. Nothing to save.
				return false;
			}
			
			Memory->PrimaryContainerId = Container->GetContainerId();
			Memory->Position = Position;
			return true;
		});
	}	
}

void UItemFragment_Container::SwapItems(UNinjaInventoryItem* Item, UNinjaInventoryItem* ItemToSwap)
{
	if (ItemHasAuthority(Item) && IsValid(ItemToSwap))
	{
		UNinjaInventoryContainer* ContainerA = nullptr;
		int32 PositionA = INDEX_NONE;
		GetDataForSwap(Item, ContainerA, PositionA);

		UNinjaInventoryContainer* ContainerB = nullptr;
		int32 PositionB = INDEX_NONE;
		GetDataForSwap(ItemToSwap, ContainerB, PositionB);		

		MoveItem(Item, ContainerB, PositionB);
		MoveItem(ItemToSwap, ContainerA, PositionA);
	}
}

FInventoryDefaultItemMemory UItemFragment_Container::CreateDefaultMemory(UNinjaInventoryContainer* Container, const int32 Position) const
{
	FInventoryItemFragmentContainerMemory ContainerMemory;
	ContainerMemory.PrimaryContainerId = Container->GetContainerId();
	ContainerMemory.Position = Position;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), ContainerMemory);
}

void UItemFragment_Container::ModifyItemRequest(FInventoryItemContext& ItemContext) const
{
	TMap<UNinjaInventoryContainer*, int32> AdditionalSlotsTaken;
	TMap<UNinjaInventoryContainer*, TArray<int32>> AdditionalPositions;

	FInventoryItemContextEntry& Request = ItemContext.Request;
	if (Request.IsValid())
	{
		Request.InventoryManager = ItemContext.InventoryManager;
		const UNinjaInventoryContainer* Container = FindBestContainerForEntry(Request, AdditionalSlotsTaken);
		const int32 Position = FindBestPositionForEntry(Request, AdditionalPositions);

		if (!IsValid(Container) || Position == INDEX_NONE)
		{
			ItemContext.ItemsToDrop.Add(Request);
			Request.Reset();
		}
	}

	// Adjust all new additional items, setting the best container and position.
	// If we can't add this item, then drop it and remove from the list.
	for (auto It = ItemContext.ItemsToAdd.CreateIterator(); It; ++It)
	{
		FInventoryItemContextEntry& Entry = *It;
		if (Entry.IsValid())
		{
			Entry.InventoryManager = ItemContext.InventoryManager;
			const UNinjaInventoryContainer* Container = FindBestContainerForEntry(Entry, AdditionalSlotsTaken);
			const int32 Position = FindBestPositionForEntry(Entry, AdditionalPositions);

			if (!IsValid(Container) || Position == INDEX_NONE)
			{
				ItemContext.ItemsToDrop.Add(Entry);
				It.RemoveCurrent();
			}			
		}
	}
}

bool UItemFragment_Container::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentStorageOperationPayload* StoragePayload = Payload.GetPtr<FInventoryFragmentStorageOperationPayload>();
	if (StoragePayload == nullptr)
	{
		return false;	
	}
	
	const UNinjaInventoryItem* Item = StoragePayload->Item;
	const UNinjaInventoryItem* ItemToSwap = StoragePayload->ItemToSwap;
	const UNinjaInventoryContainer* Container = StoragePayload->Container;
	const int32 Position = StoragePayload->Position;

	return (StoragePayload->IsMoveOperation() && CanMoveItem(Item, Container, Position))
		|| (StoragePayload->IsSwapOperation() && CanSwapItems(Item, ItemToSwap));
}

void UItemFragment_Container::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentStorageOperationPayload* StoragePayload = Payload.GetPtr<FInventoryFragmentStorageOperationPayload>();
	if (StoragePayload == nullptr)
	{
		INVENTORY_LOG(Error, "Invalid payload type to perform storage operation!");
		return;
	}
	
	UNinjaInventoryItem* Item = StoragePayload->Item;
	
	if (StoragePayload->IsSwapOperation())
	{
		UNinjaInventoryItem* ItemToSwap = StoragePayload->ItemToSwap;
		SwapItems(Item, ItemToSwap);	
	}
	else if (StoragePayload->IsMoveOperation())
	{
		UNinjaInventoryContainer* Container = StoragePayload->Container;
		const int32 Position = StoragePayload->Position;
		MoveItem(Item, Container, Position);
	}
}

void UItemFragment_Container::HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory)
{
	CacheContainerMemory(Item, InstancedMemory);
	BroadcastChanges(Item, InstancedMemory);	
}

void UItemFragment_Container::HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory)
{
	CacheContainerMemory(Item, InstancedMemory);
	BroadcastChanges(Item, InstancedMemory);
}

void UItemFragment_Container::CacheContainerMemory(UNinjaInventoryItem* Item, const TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory)
{
	const FInventoryItemFragmentContainerMemory* ContainerMemory = InstancedMemory.GetPtr<FInventoryItemFragmentContainerMemory>();
	if (ContainerMemory)
	{
		const FGuid& ItemId = Item->GetItemId();
		const FGuid& ContainerId = ContainerMemory->PrimaryContainerId;
		const int32 CurrentPosition = ContainerMemory->Position;
		
		Item->GetInventoryManager()->MoveCachedItem(ItemId, ContainerId, CurrentPosition);
	}
}

void UItemFragment_Container::BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	if (!IsValid(Item) || !FragmentMemory.IsValid())
	{
		return;
	}

	FInventoryItemFragmentContainerMemory* ContainerMemory = FragmentMemory.GetMutablePtr<FInventoryItemFragmentContainerMemory>();
	if (ContainerMemory == nullptr)
	{
		return;
	}

	bool bHasChanges = false;
	if (ContainerMemory->PrimaryContainerId != ContainerMemory->LastPrimaryContainerId)
	{
		UNinjaInventoryContainer* NewContainer = Item->GetInventoryManager()->GetContainer(ContainerMemory->PrimaryContainerId);
		ContainerMemory->LastPrimaryContainerId = ContainerMemory->PrimaryContainerId;
		OnContainerChanged.Broadcast(Item, NewContainer);
		bHasChanges = true;
	}

	if (ContainerMemory->Position != ContainerMemory->LastPosition)
	{
		ContainerMemory->LastPosition = ContainerMemory->Position;
		OnPositionChanged.Broadcast(Item, ContainerMemory->Position);
		bHasChanges = true;
	}

	if (bHasChanges)
	{
		// We are just synchronizing last values here.
		SaveMemory<FInventoryItemFragmentContainerMemory>(Item, *ContainerMemory);
	}
}

UScriptStruct* UItemFragment_Container::GetPayloadStruct() const
{
	return FInventoryFragmentStorageOperationPayload::StaticStruct();
}

void UItemFragment_Container::RestoreFromSavedMemory_Implementation(const FInventoryDefaultItemMemory& Memory)
{
}
