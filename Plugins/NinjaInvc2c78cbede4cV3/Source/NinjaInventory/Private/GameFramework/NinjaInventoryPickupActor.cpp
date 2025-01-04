// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryPickupActor.h"

#include "Data/NinjaInventoryItemDataAsset.h"
#include "Net/UnrealNetwork.h"

ANinjaInventoryPickupActor::ANinjaInventoryPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bReplicates = true;
}

const UNinjaInventoryItemDataAsset* ANinjaInventoryPickupActor::GetItemData_Implementation() const
{
	return ItemData;
}

void ANinjaInventoryPickupActor::SetItemData_Implementation(const UNinjaInventoryItemDataAsset* NewItemData)
{
	if (HasAuthority())
	{
		ItemData = NewItemData;
		OnRep_ItemData();
	}
}

TArray<FInventoryDefaultItemMemory> ANinjaInventoryPickupActor::GetItemMemories_Implementation() const
{
	return ItemMemories;
}

void ANinjaInventoryPickupActor::SetItemMemories_Implementation(const TArray<FInventoryDefaultItemMemory>& NewItemMemories)
{
	ItemMemories = NewItemMemories;
}

AActor* ANinjaInventoryPickupActor::GetSource_Implementation() const
{
	if (SourcePtr.IsValid() && SourcePtr->IsValidLowLevelFast())
	{
		return SourcePtr.Get();
	}

	return nullptr;
}

void ANinjaInventoryPickupActor::SetSource_Implementation(AActor* Source)
{
	if (HasAuthority())
	{
		SourcePtr = Source;
		OnRep_Source();
	}
}

void ANinjaInventoryPickupActor::SetInitialLocation_Implementation(const FVector InitialLocation, FVector& ActualLocation)
{
	ActualLocation = InitialLocation;
	SetActorLocation(ActualLocation);
}

void ANinjaInventoryPickupActor::HandleItemDataUpdated_Implementation()
{
}

void ANinjaInventoryPickupActor::HandleSourceUpdated_Implementation()
{
}

void ANinjaInventoryPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, ItemData);
	DOREPLIFETIME(ThisClass, SourcePtr);
}

void ANinjaInventoryPickupActor::OnRep_ItemData()
{
	if (IsValid(ItemData))
	{
		HandleItemDataUpdated();
	}
}

void ANinjaInventoryPickupActor::OnRep_Source()
{
	if (SourcePtr.IsValid() && SourcePtr->IsValidLowLevelFast())
	{
		HandleSourceUpdated();
	}
}
