// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Pickup.h"

#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryPickupActor.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "Interfaces/InventoryPickupInterface.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Pickup::UItemFragment_Pickup()
{
	bDroppedWhenUnassigned = true;
	PickupActorClass = ANinjaInventoryPickupActor::StaticClass();
	ItemTags.AddTagFast(Tag_Inventory_Item_Trait_Droppable);
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Drop);
}

UScriptStruct* UItemFragment_Pickup::GetPayloadStruct() const
{
	return FInventoryFragmentPickupOperationPayload::StaticStruct();
}

bool UItemFragment_Pickup::HasValidPickupActorClass() const
{
	return IsValid(PickupActorClass) && PickupActorClass->ImplementsInterface(UInventoryPickupInterface::StaticClass());
}

TSubclassOf<AActor> UItemFragment_Pickup::GetPickupActorClass() const
{
	return PickupActorClass;
}

bool UItemFragment_Pickup::CanDropItem(const UNinjaInventoryItem* Item) const
{
	return bDroppedWhenUnassigned && HasValidPickupActorClass() && IsValid(Item);
}

void UItemFragment_Pickup::DropItem(UNinjaInventoryItem* Item, const FVector InitialLocation, FVector& ActualLocation)
{
	UNinjaInventoryManagerComponent* InventoryManager = Item->GetInventoryManager();
	if (!IsValid(InventoryManager))
	{
		return;
	}

	AActor* Source = InventoryManager->GetPawn();
	const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();
	
	const TArray<FInventoryDefaultItemMemory> Memories = GetItemMemories(Item);
	DropItemData(Source, ItemData, InitialLocation, ActualLocation, Memories);
	InventoryManager->RemoveItem(Item);
}

FVector UItemFragment_Pickup::ModifyInitialLocation_Implementation(const AActor* Source, const FVector& InitialLocation)
{
	return InitialLocation;
}

TArray<FInventoryDefaultItemMemory> UItemFragment_Pickup::GetItemMemories(UNinjaInventoryItem* Item) const
{
	TArray<FInventoryDefaultItemMemory> RelevantItemMemories;
	
	TInstancedStruct<FInventoryFragmentMemory> StackMemory;
	if (Item->GetFragmentMemory(UItemFragment_Stack::StaticClass(), StackMemory))
	{
		FInventoryDefaultItemMemory DefaultStackMemory;
		DefaultStackMemory.FragmentClass = UItemFragment_Stack::StaticClass();
		DefaultStackMemory.Memory = StackMemory;
		RelevantItemMemories.Add(DefaultStackMemory);
	}

	return RelevantItemMemories;
}

void UItemFragment_Pickup::DropItemData(AActor* Source, const UNinjaInventoryItemDataAsset* ItemData, const FVector InitialLocation, FVector& ActualLocation, const TArray<FInventoryDefaultItemMemory>& Memories)
{
	if (!IsValid(ItemData))
	{
		return;
	}

	if (!IsValid(PickupActorClass))
	{
		INVENTORY_LOG_ARGS(Warning, "Pickup Actor class not set for item '%s'!", *GetNameSafe(ItemData));
		return;
	}
	
	FTransform ActorTransform;
	ActualLocation = ModifyInitialLocation(Source, InitialLocation);
	ActorTransform.SetLocation(ActualLocation);
	
	UWorld* World = Source->GetWorld();
	AActor* PickupActor = World->SpawnActorDeferred<AActor>(PickupActorClass, ActorTransform, Source);
	check(IsValid(PickupActor));

	IInventoryPickupInterface::Execute_SetItemData(PickupActor, ItemData);
	IInventoryPickupInterface::Execute_SetItemMemories(PickupActor, Memories);
	IInventoryPickupInterface::Execute_SetSource(PickupActor, Source);
	IInventoryPickupInterface::Execute_SetInitialLocation(PickupActor, ActualLocation, ActualLocation);
	HandlePickupSpawned(PickupActor);

	// Update the Initial Location in the transform, as it may have been modified by
	// the Actor implementing the interface, and we need to make sure we use that value.
	//
	ActorTransform.SetLocation(ActualLocation);
	PickupActor->FinishSpawning(ActorTransform);
}

bool UItemFragment_Pickup::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentPickupOperationPayload& DropPayload = Payload.Get<FInventoryFragmentPickupOperationPayload>();
	if (!DropPayload.IsDropOperation())
	{
		return false;
	}
	
	const UNinjaInventoryItem* Item = DropPayload.Item;
	return HasValidPickupActorClass() && CanDropItem(Item);
}

void UItemFragment_Pickup::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentPickupOperationPayload& DropPayload = Payload.Get<FInventoryFragmentPickupOperationPayload>();
	FVector InitialLocation = DropPayload.Location;

	FVector ActualLocation;
	if (DropPayload.Item)
	{
		DropItem(DropPayload.Item, InitialLocation, ActualLocation);
	}
	else if (DropPayload.ItemData && DropPayload.Source != nullptr)
	{
		DropItemData(DropPayload.Source, DropPayload.ItemData, InitialLocation, ActualLocation, DropPayload.Memories);
	}
}
