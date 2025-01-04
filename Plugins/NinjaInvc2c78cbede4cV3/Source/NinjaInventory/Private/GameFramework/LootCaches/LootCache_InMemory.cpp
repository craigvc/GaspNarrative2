// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/LootCaches/LootCache_InMemory.h"

#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/Actor.h"
#include "Types/FInventoryCache_Loot.h"

void ULootCache_InMemory::FilterLootByRequester_Implementation(const UNinjaInventoryManagerComponent* Requester, TArray<UNinjaInventoryLoot*>& OutLoot) const
{
	TArray<FInventoryCachedLoot> FilteredLoot = CachedLoot.FilterByPredicate([Requester](const FInventoryCachedLoot& Loot)
		{ return Loot.RequesterActor == Requester->GetOwner(); });

	OutLoot.Empty();
	for (FInventoryCachedLoot& Loot : FilteredLoot)
	{
		OutLoot.Append(Loot.SelectedLoot);
	}
}

void ULootCache_InMemory::SaveOrUpdateLoot_Implementation(const UNinjaInventoryManagerComponent* Requester, const TArray<UNinjaInventoryLoot*>& NewLoot)
{
	EvictLoot(Requester);
	
	FInventoryCachedLoot& LootEntry = CachedLoot.AddDefaulted_GetRef();
	LootEntry.RequesterActor = Requester->GetOwner();
	LootEntry.SelectedLoot = NewLoot;

	// Remove the loot when the actor is destroyed.
	Requester->GetOwner()->OnDestroyed.AddUniqueDynamic(this, &ThisClass::HandleActorDestroyed);
}

int32 ULootCache_InMemory::EvictLoot_Implementation(const UNinjaInventoryManagerComponent* Requester)
{
	return CachedLoot.RemoveAll([Requester](const FInventoryCachedLoot& Loot)
		{ return Loot.RequesterActor == Requester->GetOwner(); });
}

void ULootCache_InMemory::HandleActorDestroyed(AActor* DestroyedActor)
{
	CachedLoot.RemoveAll([DestroyedActor](const FInventoryCachedLoot& Loot)
		{ return Loot.RequesterActor == DestroyedActor; });
}
