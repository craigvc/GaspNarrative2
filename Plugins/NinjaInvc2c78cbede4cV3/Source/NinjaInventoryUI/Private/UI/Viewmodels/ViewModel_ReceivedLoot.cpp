// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_ReceivedLoot.h"

#include "Components/NinjaInventoryManagerComponent.h"

bool UViewModel_ReceivedLoot::HasLoot() const
{
	return bHasLoot;
}

TArray<UNinjaInventoryLoot*> UViewModel_ReceivedLoot::GetSelectedLoot() const
{
	return SelectedLoot;
}

void UViewModel_ReceivedLoot::BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	Super::BindToInventoryManager_Implementation(InventoryManager);

	if (IsValid(InventoryManager))
	{
		InventoryManager->OnLootReceived.AddUniqueDynamic(this, &ThisClass::HandleLootReceived);
		InventoryManager->OnLootDismissed.AddUniqueDynamic(this, &ThisClass::HandleLootDismissed);
	}
}

void UViewModel_ReceivedLoot::UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	if (IsValid(InventoryManager))
	{
		InventoryManager->OnLootReceived.RemoveAll(this);
		InventoryManager->OnLootDismissed.RemoveAll(this);
	}
}

void UViewModel_ReceivedLoot::HandleLootReceived_Implementation(UNinjaInventoryLootComponent* Source, const TArray<UNinjaInventoryLoot*>& NewSelectedLoot)
{
	SelectedLoot.Empty();
	SelectedLoot = NewSelectedLoot;

	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::SelectedLoot);
	UE_MVVM_SET_PROPERTY_VALUE(bHasLoot, true);
}

void UViewModel_ReceivedLoot::HandleLootDismissed_Implementation(UNinjaInventoryLootComponent* Source)
{
	SelectedLoot.Empty();

	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::SelectedLoot);
	UE_MVVM_SET_PROPERTY_VALUE(bHasLoot, false);
}
