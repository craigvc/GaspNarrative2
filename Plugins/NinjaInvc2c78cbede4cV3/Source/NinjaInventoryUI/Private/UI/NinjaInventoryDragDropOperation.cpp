// Ninja Bear Studio Inc., all rights reserved.
#include "UI/NinjaInventoryDragDropOperation.h"

#include "Blueprint/UserWidget.h"
#include "Components/NinjaInventoryLootComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryLoot.h"
#include "UObject/Package.h"

UNinjaInventoryDragDropOperation* UNinjaInventoryDragDropOperation::CreateItemOperation(UNinjaInventoryItem* Item)
{
	if (IsValid(Item))
	{
		UNinjaInventoryDragDropOperation* Operation = NewObject<UNinjaInventoryDragDropOperation>(GetTransientPackage());
		Operation->Payload = Item;
		return Operation;
	}

	return nullptr;
}

UNinjaInventoryDragDropOperation* UNinjaInventoryDragDropOperation::CreateLootOperation(UNinjaInventoryLoot* Loot)
{
	if (IsValid(Loot))
	{
		UNinjaInventoryDragDropOperation* Operation = NewObject<UNinjaInventoryDragDropOperation>(GetTransientPackage());
		Operation->Payload = Loot;
		return Operation;
	}

	return nullptr;
}

bool UNinjaInventoryDragDropOperation::HasItem() const
{
	return IsValid(Payload) && Payload->IsA<UNinjaInventoryItem>();
}

bool UNinjaInventoryDragDropOperation::HasLoot() const
{
	return IsValid(Payload) && Payload->IsA<UNinjaInventoryLoot>();
}

UNinjaInventoryItem* UNinjaInventoryDragDropOperation::GetItem() const
{
	return Cast<UNinjaInventoryItem>(Payload);
}

UNinjaInventoryLoot* UNinjaInventoryDragDropOperation::GetLoot() const
{
	return Cast<UNinjaInventoryLoot>(Payload);
}

UNinjaInventoryManagerComponent* UNinjaInventoryDragDropOperation::GetInventoryManager() const
{
	const UNinjaInventoryItem* Item = GetItem();
	if (IsValid(Item))
	{
		return Item->GetInventoryManager();
	}

	return nullptr;
}

UNinjaInventoryLootComponent* UNinjaInventoryDragDropOperation::GetLootManager() const
{
	const UNinjaInventoryLoot* Loot = GetLoot();
	if (IsValid(Loot))
	{
		return Loot->GetSource();
	}

	return nullptr;
}

bool UNinjaInventoryDragDropOperation::IsSourceForUnsupportedOperation(UUserWidget* Source) const
{
	return IsValid(UnsupportedDragSource) && UnsupportedDragSource == Source;
}

void UNinjaInventoryDragDropOperation::MarkUnsupportedOperation(UUserWidget* Source)
{
	if (IsValid(Source))
	{
		UnsupportedDragSource = Source;	
	}
}

void UNinjaInventoryDragDropOperation::ClearUnsupportedOperation()
{
	UnsupportedDragSource = nullptr;
}
