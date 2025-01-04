// Ninja Bear Studio Inc., all rights reserved.
#include "Interfaces/InventoryManagerProviderInterface.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/Actor.h"

UNinjaInventoryManagerComponent* IInventoryManagerProviderInterface::GetInventoryManager_Implementation() const
{
	const AActor* SelfActor = Cast<AActor>(this);
	return IsValid(SelfActor) ? SelfActor->FindComponentByClass<UNinjaInventoryManagerComponent>() : nullptr;
}

const UNinjaInventoryLayoutDataAsset* IInventoryManagerProviderInterface::GetInventoryLayout_Implementation() const
{
	// Some classes like Player States most likely won't have a default layout.
	return nullptr;
}

bool IInventoryManagerProviderInterface::GetDefaultItems_Implementation(TArray<FInventoryDefaultItem>& OutDefaultItems) const
{
	// No default items are required by default. This is an opt-in functionality.
	return false;
}
