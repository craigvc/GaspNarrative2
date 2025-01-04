// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"

#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "NinjaInventorySettings.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/FInventoryFragmentMemoryUtils.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "GameFramework/ItemFragments/ItemFragment_Pickup.h"
#include "Types/FInventoryFragmentMemory.h"
#include "Types/FInventoryItemContext.h"
#include "Types/FItemFragmentMemories.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Stack::UItemFragment_Stack()
{
	StackLimit = 1;
	MaximumLimit = 1;
	bAutomaticallyMergeNewItems = GetDefault<UNinjaInventorySettings>()->bAutomaticallyMergeNewItems;
	bPerformStrictStackChecks = GetDefault<UNinjaInventorySettings>()->bPerformStrictStackChecks;

	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Combine);
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Split);
}

UScriptStruct* UItemFragment_Stack::GetPayloadStruct() const
{
	return FInventoryFragmentStackOperationPayload::StaticStruct();
}

bool UItemFragment_Stack::CanAddToInventory(const FInventoryItemContext& ItemContext) const
{
	const UNinjaInventoryItemDataAsset* ItemData = ItemContext.Request.ItemData;

	// First, check if we have a Stack memory defining how many items we want to add.
	// The memory is not required and if not present, we'll consider a size 1 next.
	//
	const TArray<FInventoryDefaultItemMemory>& DefaultMemories = ItemContext.Request.FragmentMemories;
	for (const FInventoryDefaultItemMemory& DefaultMemory : DefaultMemories)
	{
		if (DefaultMemory.IsCompatibleWithFragment(this))
		{
			const FInventoryItemFragmentStackMemory& Memory = DefaultMemory.Memory.Get<FInventoryItemFragmentStackMemory>();
			const int32 BaseStack = Memory.StackSize;
			return CanAddStack(ItemContext.InventoryManager, ItemData, BaseStack);
		}
	}

	// No Stack memory, but we can be lenient with that and check if we can add
	// a single item to the inventory. If we can't, then reject the operation.
	//
	constexpr int32 MinimumStack = 1;
	return CanAddStack(ItemContext.InventoryManager, ItemData, MinimumStack);	
}

bool UItemFragment_Stack::CanAddStack(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItemDataAsset* ItemData, const int32 StackSize) const
{
	const int32 CurrentStackCount = CountTotalStackSize(InventoryManager, ItemData);
	const int32 PredictedStackSize = StackSize + CurrentStackCount;

	// Best case, we can add the entire stack.
	if (PredictedStackSize <= MaximumLimit)
	{
		return true;
	}

	// The new stack will go past our maximum limit, and we are strict about stack sizes.
	if (bPerformStrictStackChecks)
	{
		return false;
	}

	// We are not strict with stack sizes, and we are able to drop excess items.
	const UItemFragment_Pickup* PickupFragment = ItemData->FindFragment<UItemFragment_Pickup>();
	return IsValid(PickupFragment);
}

bool UItemFragment_Stack::CanCombineStacks(const UNinjaInventoryItem* ItemA, const UNinjaInventoryItem* ItemB) const
{
	return IsValid(ItemA) && IsValid(ItemB)
		&& IsValid(ItemA->FindFragment<UItemFragment_Stack>())
		&& IsValid(ItemA->GetInventoryManager())
		&& IsValid(ItemB->FindFragment<UItemFragment_Stack>())
		&& IsValid(ItemB->GetInventoryManager())
		&& ItemA->GetInventoryManager() == ItemB->GetInventoryManager()
		&& ItemA->HasSameData(ItemB)
		&& ItemA != ItemB
		&& GetStackSize(ItemA) < GetStackLimit();
}

bool UItemFragment_Stack::CanSplitStack(const UNinjaInventoryItem* Item, const int32 Amount) const
{
	return IsValid(Item)
		&& IsValid(Item->FindFragment<UItemFragment_Stack>())
		&& IsValid(Item->GetInventoryManager())
		&& GetStackSize(Item) - Amount > 0;	
}

int32 UItemFragment_Stack::CountTotalStackSize(const UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItemDataAsset* ItemData) const
{
	int32 TotalStack = 0;
	
	TArray<UNinjaInventoryItem*> Items = InventoryManager->GetItemsByData(ItemData);
	for (const UNinjaInventoryItem* Item : Items)
	{
		const int32 StackSize = GetStackSize(Item);
		TotalStack += StackSize;
	}

	return TotalStack;
}

int32 UItemFragment_Stack::GetStackLimit() const
{
	return StackLimit;
}

int32 UItemFragment_Stack::GetMaximumLimit() const
{
	return MaximumLimit;
}

int32 UItemFragment_Stack::GetStackSize(const UNinjaInventoryItem* Item) const
{
	TInstancedStruct<FInventoryFragmentMemory> InstancedMemory;
	if (Item->GetFragmentMemory(GetClass(), InstancedMemory))
	{
		const FInventoryItemFragmentStackMemory& Memory = InstancedMemory.Get<FInventoryItemFragmentStackMemory>();
		return Memory.StackSize;
	}

	return 0;
}

bool UItemFragment_Stack::GetStackSizeFromDefaultMemories(const TArray<FInventoryDefaultItemMemory>& DefaultMemories, int32& OutStack) const
{
	for (const FInventoryDefaultItemMemory& DefaultMemory : DefaultMemories)
	{
		const FInventoryItemFragmentStackMemory* StackMemory = DefaultMemory.Memory.GetPtr<FInventoryItemFragmentStackMemory>();
		if (StackMemory != nullptr)
		{
			OutStack = StackMemory->StackSize;
			return true;
		}
	}

	return false;
}

void UItemFragment_Stack::SetStackSize(UNinjaInventoryItem* Item, const int32 NewStackSize)
{
	if (!IsValid(Item) || !ItemHasAuthority(Item))
	{
		return;
	}
	
	if (NewStackSize == 0)
	{
		UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
		InventoryManager->RemoveItem(Item, NewStackSize);
	}

	SaveMemoryWithPredicate<FInventoryItemFragmentStackMemory>(Item, [this, NewStackSize](FInventoryItemFragmentStackMemory* FragmentMemory, bool bIsNew)
	{
		// Check if the stack has actually changed. If not, then there's nothing to save.
		if (FragmentMemory->StackSize == NewStackSize)
		{
			return false;
		}

		FragmentMemory->StackSize = NewStackSize;
		return true;
	});
}

void UItemFragment_Stack::OrganizeStacksInContext(FInventoryItemContext& ItemContext) const
{
	const FInventoryItemContextEntry& Request = ItemContext.Request;
	const UNinjaInventoryItemDataAsset* ItemData = Request.ItemData;

	int32 RequestedStack = CountStackFromContextRequest(ItemContext);
	int32 TotalInventoryStack = CountTotalStackSize(ItemContext.InventoryManager, ItemData);
	int32 PredictedInventoryStack = TotalInventoryStack + RequestedStack;
	int32 GlobalStackRoom = MaximumLimit - TotalInventoryStack;
	int32 HandledStack = 0;

	// First we'll try to go for the fastest scenarios, where can just add or drop an item.
	if (RequestedStack == 1 && StackLimit == 1)
	{
		// If we can't add this single item, then drop it.
		if (PredictedInventoryStack > GlobalStackRoom)
		{
			ItemContext.ItemsToDrop.Add(Request);
			ItemContext.Request.Reset();
		}

		// We can return and allow the Manager to either add or drop the request.
		return;
	}
	
	// If set to merge new items, then try to fill incomplete stacks first.
	//
	// Also make sure that this incoming stack was not created from a split operation, in
	// which case we do not want to merge it.
	//
	TOptional<FInventoryItemFragmentStackMemory> OptionalMemory = GetStackMemoryFromRequest(ItemContext);
	bool bShouldSkipMerging = !OptionalMemory.IsSet() || (OptionalMemory.IsSet() && OptionalMemory->bIsFromSplitOperation);
	if (bAutomaticallyMergeNewItems && !bShouldSkipMerging)
	{
		TArray<UNinjaInventoryItem*> IncompleteStacks = ItemContext.InventoryManager->GetItemsWithIncompleteStacks(ItemData);
		SortIncompleteStacks(IncompleteStacks);

		for (UNinjaInventoryItem* Item : IncompleteStacks)
		{
			const int32 ItemStack = GetStackSize(Item);	
			const int32 StackRoom = GetStackLimit() - ItemStack;
			const int32 ActualRoom = FMath::Min(StackRoom, GlobalStackRoom);
			const int32 AmountToAdd = FMath::Min(RequestedStack, ActualRoom);
			const int32 NewStackSize = ItemStack + AmountToAdd;

			if (AmountToAdd > 0)
			{
				FInventoryItemFragmentStackMemory StackMemory;
				StackMemory.StackSize = NewStackSize;

				FInventoryDefaultItemMemory InstancedMemory;
				InstancedMemory.FragmentClass = StaticClass();
				InstancedMemory.Memory = TInstancedStruct<FInventoryFragmentMemory>::Make<FInventoryItemFragmentStackMemory>(StackMemory);
	
				FInventoryItemContextEntry& UpdatedEntry = ItemContext.ItemsToUpdate.AddDefaulted_GetRef();
				UpdatedEntry.InventoryManager = ItemContext.InventoryManager;
				UpdatedEntry.Item = Item;
				UpdatedEntry.FragmentMemories.Add(InstancedMemory);

				RequestedStack -= AmountToAdd;
				GlobalStackRoom -= AmountToAdd;
				HandledStack += AmountToAdd;
			}

			// We finished the stack or ran out of room.
			if (RequestedStack == 0 || GlobalStackRoom == 0)
			{
				break;
			}
		}			
	}
	
	// Create new stacks until we are done or run out of inventory space.
	while (RequestedStack > 0)
	{
		const int32 NewStackSize = FMath::Min3(RequestedStack, StackLimit, GlobalStackRoom);
		if (NewStackSize > 0)
		{
			FInventoryItemFragmentStackMemory StackMemory;
			StackMemory.StackSize = NewStackSize;
			FInventoryDefaultItemMemory InstancedMemory = FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), StackMemory);

			FInventoryItemContextEntry& ItemToAdd = ItemContext.ItemsToAdd.AddDefaulted_GetRef();
			ItemToAdd.InventoryManager = ItemContext.InventoryManager;
			ItemToAdd.ItemData = ItemData;
			ItemToAdd.FragmentMemories.Add(InstancedMemory);

			RequestedStack -= NewStackSize;
			GlobalStackRoom -= NewStackSize;
			HandledStack += NewStackSize;
		}

		// No point going further if we ran out of space.
		if (GlobalStackRoom == 0)
		{
			break;
		}		
	}

	// If we still have items left, then we ran out of space. Drop the remainder.
	while (RequestedStack > 0)
	{
		const int32 NewStackSize = FMath::Min(RequestedStack, StackLimit);
		
		FInventoryItemFragmentStackMemory StackMemory;
		StackMemory.StackSize = NewStackSize;
		FInventoryDefaultItemMemory InstancedMemory = FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), StackMemory);

		FInventoryItemContextEntry& ItemToDrop = ItemContext.ItemsToDrop.AddDefaulted_GetRef();
		ItemToDrop.InventoryManager = ItemContext.InventoryManager;
		ItemToDrop.ItemData = ItemData;
		ItemToDrop.FragmentMemories.Add(InstancedMemory);

		RequestedStack -= NewStackSize;
		HandledStack += NewStackSize;
	}
	
	// Update the original request's stack size, with the amount of items we absorbed.
	SubtractFromContext(ItemContext, HandledStack);
}

FInventoryDefaultItemMemory UItemFragment_Stack::CreateDefaultMemory(const int32 StackSize) const
{
	FInventoryItemFragmentStackMemory StackMemory;
	StackMemory.StackSize = StackSize;
	return FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), StackMemory);
}

void UItemFragment_Stack::SubtractFromContext(FInventoryItemContext& ItemContext, const int32 AmountToSubtract)
{
	if (AmountToSubtract > 0)
	{
		bool bShouldRemoveOriginalRequest = false;
		for (FInventoryDefaultItemMemory& DefaultMemory : ItemContext.Request.FragmentMemories)
		{
			if (DefaultMemory.IsCompatibleWithFragmentClass(StaticClass()))
			{
				FInventoryItemFragmentStackMemory* Memory = DefaultMemory.Memory.GetMutablePtr<FInventoryItemFragmentStackMemory>();
				Memory->StackSize -= AmountToSubtract;
				bShouldRemoveOriginalRequest = Memory->StackSize == 0; 
				break;
			}
		}

		if (bShouldRemoveOriginalRequest)
		{
			// No stack left in the original request.
			ItemContext.Request.Reset();
		}
	}
}

TOptional<FInventoryItemFragmentStackMemory> UItemFragment_Stack::GetStackMemoryFromRequest(const FInventoryItemContext& ItemContext)
{
	for (const FInventoryDefaultItemMemory& DefaultMemory : ItemContext.Request.FragmentMemories)
	{
		if (DefaultMemory.IsCompatibleWithFragmentClass(StaticClass()))
		{
			const FInventoryItemFragmentStackMemory& Memory = DefaultMemory.Memory.Get<FInventoryItemFragmentStackMemory>();
			return TOptional(Memory);
		}
	}

	return TOptional<FInventoryItemFragmentStackMemory>();
}

int32 UItemFragment_Stack::CountStackFromContextRequest(const FInventoryItemContext& ItemContext)
{
	TOptional<FInventoryItemFragmentStackMemory> OptionalMemory = GetStackMemoryFromRequest(ItemContext);
	const FInventoryItemFragmentStackMemory* StackMemory = OptionalMemory.GetPtrOrNull();
	
	if (StackMemory == nullptr)
	{
		return 0;
	}

	return StackMemory->StackSize;
}

void UItemFragment_Stack::CacheStackMemory(UNinjaInventoryItem* Item, const TInstancedStruct<FInventoryFragmentMemory>& InstancedMemory)
{
	
}

void UItemFragment_Stack::SortIncompleteStacks(TArray<UNinjaInventoryItem*>& IncompleteStacks) const
{
	Algo::Sort(IncompleteStacks, [this](const UNinjaInventoryItem* ItemA, const UNinjaInventoryItem* ItemB)
		{ return GetStackSize(ItemA) < GetStackSize(ItemB); });
}

void UItemFragment_Stack::CombineStacks(UNinjaInventoryItem* ItemA, UNinjaInventoryItem* ItemB)
{
	if (ItemHasAuthority(ItemA))
	{
		const int32 StackSizeA = GetStackSize(ItemA);
		const int32 StackSizeB = GetStackSize(ItemB);
	
		const int32 MaximumQuantity = GetStackLimit() - StackSizeA;
		const int32 AddedQuantity = FMath::Min(StackSizeB, MaximumQuantity);

		const int32 FinalQuantity = StackSizeA + AddedQuantity;
		SetStackSize(ItemA, FinalQuantity);

		const int32 Remainder = StackSizeB - AddedQuantity;
		if (Remainder > 0)
		{
			SetStackSize(ItemB, Remainder);
		}
		else
		{
			UNinjaInventoryManagerComponent* InventoryManager = ItemB->GetInventoryManager();
			InventoryManager->RemoveItem(ItemB);
		}
	}
}

void UItemFragment_Stack::SplitStack(UNinjaInventoryItem* Item, const int32 Amount)
{
	if (ItemHasAuthority(Item))
	{
		FInventoryItemFragmentStackMemory StackMemory;
		StackMemory.StackSize = Amount;
		StackMemory.bIsFromSplitOperation = true;

		const FInventoryDefaultItemMemory InstancedMemory = FInventoryFragmentMemoryUtils::MakeDefaultMemory(GetClass(), StackMemory);
		
		FInventoryItemContext ItemContext;
		ItemContext.Request.ItemData = Item->GetData();
		ItemContext.Request.FragmentMemories.Add(InstancedMemory);
		
		UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
		FInventoryItemContext Result;
		InventoryManager->AddItem(ItemContext, Result);
		
		if (UNinjaInventoryFunctionLibrary::WasFullyProcessed(Result))
		{
			const int32 StackSize = GetStackSize(Item);
			const int32 NewStackSize = StackSize - Amount;
			SetStackSize(Item, NewStackSize);
		}
	}
}

void UItemFragment_Stack::ModifyItemRequest(FInventoryItemContext& ItemContext) const
{
	ReinforceStackMemories(ItemContext);
	OrganizeStacksInContext(ItemContext);
}

void UItemFragment_Stack::ReinforceStackMemories(FInventoryItemContext& ItemContext) const
{
	const TOptional<FInventoryItemFragmentStackMemory> OptionalMemory = GetStackMemoryFromRequest(ItemContext);
	if (!OptionalMemory.IsSet())
	{
		constexpr int32 DefaultStackSize = 1;
		const FInventoryDefaultItemMemory DefaultMemory = CreateDefaultMemory(DefaultStackSize);
		ItemContext.Request.FragmentMemories.Add(DefaultMemory);
	}
}

bool UItemFragment_Stack::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentStackOperationPayload& StackPayload = Payload.Get<FInventoryFragmentStackOperationPayload>();
	if (StackPayload.IsCombineOperation())
	{
		const UNinjaInventoryItem* ItemA = StackPayload.Item;
		const UNinjaInventoryItem* ItemB = StackPayload.ItemToCombine;
		return CanCombineStacks(ItemA, ItemB);
	}

	if (StackPayload.IsSplitOperation())
	{
		const UNinjaInventoryItem* Item = StackPayload.Item;
		const int32 Amount = StackPayload.SplitSize;
		return CanSplitStack(Item, Amount);
	}

	return false;
}

void UItemFragment_Stack::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentStackOperationPayload& StackPayload = Payload.Get<FInventoryFragmentStackOperationPayload>();
	UNinjaInventoryItem* Item = StackPayload.Item;
	
	if (StackPayload.IsCombineOperation())
	{
		UNinjaInventoryItem* ItemB = StackPayload.ItemToCombine;
		CombineStacks(Item, ItemB);
	}
	else if (StackPayload.IsSplitOperation())
	{
		const int32 Amount = StackPayload.SplitSize;
		SplitStack(Item, Amount);
	}
}

void UItemFragment_Stack::HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

void UItemFragment_Stack::HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	BroadcastChanges(Item, FragmentMemory);
}

void UItemFragment_Stack::BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	if (!IsValid(Item) || !FragmentMemory.IsValid())
	{
		return;
	}
	
	FInventoryItemFragmentStackMemory* StackMemory = FragmentMemory.GetMutablePtr<FInventoryItemFragmentStackMemory>();
	if (StackMemory == nullptr)
	{
		INVENTORY_LOG_ARGS(Error, "Stack memory for item '%s' should not be null!", *GetNameSafe(Item));
		return;
	}

	bool bHasChanges = false;
	if (StackMemory->StackSize != StackMemory->LastStackSize)
	{
		StackMemory->LastStackSize = StackMemory->StackSize;
		OnStackSizeChanged.Broadcast(Item, StackMemory->StackSize);
		bHasChanges = true;
	}

	if (bHasChanges)
	{
		SaveMemory<FInventoryItemFragmentStackMemory>(Item, *StackMemory);	
	}
}

void UItemFragment_Stack::RestoreFromSavedMemory_Implementation(const FInventoryDefaultItemMemory& Memory)
{
}