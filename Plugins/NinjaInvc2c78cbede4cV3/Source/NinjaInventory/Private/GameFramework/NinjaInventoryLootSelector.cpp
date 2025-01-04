// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryLootSelector.h"

#include "NinjaInventorySubsystem.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/Aspects/StackableItemInterface.h"

bool UNinjaInventoryLootSelector::RollItem_Implementation(const UNinjaInventoryManagerComponent* Requester,
	const float DropChance, const TArray<UNinjaInventoryLoot*>& SelectedLoot) const
{
	if (!IsValid(Requester) || DropChance > 0.f)
	{
		return false;
	}

	const float DropRoll = GetInventorySubsystem(Requester->GetWorld())->GetRandomFloatInRange(0.f, 1.f);
	return DropRoll <= DropChance;
}

int32 UNinjaInventoryLootSelector::RollQuantity_Implementation(const UNinjaInventoryManagerComponent* Requester,
	 const FVector2D QuantityRange, const TArray<UNinjaInventoryLoot*>& SelectedLoot) const
{
	if (!IsValid(Requester))
	{
		return 0;
	}
	
	const float QuantityRoll = GetInventorySubsystem(Requester->GetWorld())->GetRandomFloatInRange(QuantityRange.X, QuantityRange.Y);
	return FMath::FloorToInt(QuantityRoll);
}

int32 UNinjaInventoryLootSelector::GetStackSize(const UNinjaInventoryItem* Item) const
{
	const IStackableItemInterface* Stackable = Cast<IStackableItemInterface>(Item->FindFragmentByInterface(UStackableItemInterface::StaticClass()));
	if (Stackable == nullptr)
	{
		return 1;
	}

	return Stackable->GetStackSize(Item);
}

UNinjaInventorySubsystem* UNinjaInventoryLootSelector::GetInventorySubsystem(const UWorld* World, const bool bChecked)
{
	check(IsValid(World));
	UNinjaInventorySubsystem* Subsystem = World->GetGameInstance()->GetSubsystem<UNinjaInventorySubsystem>();
	check(bChecked || IsValid(Subsystem));
	return Subsystem;
}
