// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryLoot.h"

#include "Components/NinjaInventoryLootComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/StackableItemInterface.h"

UNinjaInventoryLoot::UNinjaInventoryLoot()
{
}

const UNinjaInventoryContainerDataAsset* UNinjaInventoryLoot::GetContainerData() const
{
	return ContainerData;
}

void UNinjaInventoryLoot::SetContainerData(const UNinjaInventoryContainerDataAsset* NewContainerData)
{
	ContainerData = NewContainerData;
}

const UNinjaInventoryItemDataAsset* UNinjaInventoryLoot::GetItemData() const
{
	return ItemData;
}

void UNinjaInventoryLoot::SetItemData(UNinjaInventoryItemDataAsset* NewItemData)
{
	ItemData = NewItemData;
}

int32 UNinjaInventoryLoot::GetQuantity() const
{
	return Quantity;
}

void UNinjaInventoryLoot::SetQuantity(const int32 NewQuantity)
{
	Quantity = NewQuantity;
}

UNinjaInventoryLootComponent* UNinjaInventoryLoot::GetSource() const
{
	if (SourceComponent.IsValid() && SourceComponent->IsValidLowLevelFast())
	{
		return SourceComponent.Get();
	}

	return nullptr;
}

void UNinjaInventoryLoot::SetSource(UNinjaInventoryLootComponent* NewSource)
{
	SourceComponent = NewSource;
}

TArray<FInventoryDefaultItemMemory> UNinjaInventoryLoot::GetDefaultMemories() const
{
	TArray<FInventoryDefaultItemMemory> Memories;
	
	if (IsValid(ItemData) && Quantity > 0)
	{
		const IStackableItemInterface* Stack = Cast<IStackableItemInterface>(ItemData->FindFragmentByInterface(UStackableItemInterface::StaticClass()));
		if (Stack != nullptr)
		{
			const FInventoryDefaultItemMemory& DefaultStackMemory = Stack->CreateDefaultMemory(Quantity);
			Memories.Add(DefaultStackMemory);
		}
	}

	return Memories;
}
