// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FInventoryItemContext.h"

bool FInventoryItemContextEntry::IsValid() const
{
	return ItemData != nullptr;
}

bool FInventoryItemContextEntry::IsValidForLoadOperation() const
{
	return ItemId.IsValid()
		&& ItemData != nullptr
		&& Item != nullptr;
}

void FInventoryItemContextEntry::Reset()
{
	Item = nullptr;
	ItemData = nullptr;
	FragmentMemories.Empty();
}

bool FInventoryItemContext::IsValid() const
{
	return Request.IsValid()
		|| !ItemsToAdd.IsEmpty()
		|| !ItemsToUpdate.IsEmpty()
		|| !ItemsToDrop.IsEmpty();
}

bool FInventoryItemContext::IsSuccessful() const
{
	return CreatedItems.Num() > 0 || UpdatedItems.Num() > 0;
}

bool FInventoryItemContext::IsValidForLoadOperation() const
{
	return bIsLoadOperation
		&& Request.IsValidForLoadOperation();
}

void FInventoryItemContext::MarkLoadOperation()
{
	bIsLoadOperation = true;
}

void FInventoryItemContext::SetInventoryManager(UNinjaInventoryManagerComponent* NewInventoryManager)
{
	if (NewInventoryManager != nullptr)
	{
		InventoryManager = NewInventoryManager;
		Request.InventoryManager = NewInventoryManager;

		for (FInventoryItemContextEntry& Entry: ItemsToAdd)
		{
			Entry.InventoryManager = NewInventoryManager;
		}

		for (FInventoryItemContextEntry& Entry: ItemsToUpdate)
		{
			Entry.InventoryManager = NewInventoryManager;
		}	
		
		for (FInventoryItemContextEntry& Entry: ItemsToDrop)
		{
			Entry.InventoryManager = NewInventoryManager;
		}		
	}
}

FInventoryItemContext FInventoryItemContext::EmptyContext()
{
	return FInventoryItemContext();
}
