// Copyright Narrative Tools 2022. 

#include "Components/EquipmentComponent.h"
#include <GroomComponent.h>
#include "Components/SkeletalMeshComponent.h"
#include "Items/WeaponItem.h"


// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{

}

void UEquipmentComponent::Initialize(TMap<FGameplayTag, USkeletalMeshComponent*> ClothingMeshes, class USkeletalMeshComponent* InLeaderPoseComponent)
{
	LeaderPoseComponent = InLeaderPoseComponent;
	EquippableComponents = ClothingMeshes;
}

void UEquipmentComponent::SetGroomMap(TMap<FGameplayTag, UGroomComponent*> Grooms)
{
	GroomComponents = Grooms;
}

class UEquippableItem* UEquipmentComponent::GetEquippedItemAtSlot(const FGameplayTag Slot)
{
	if (EquippedItems.Contains(Slot))
	{
		return *EquippedItems.Find(Slot);
	}
	else
	{
		return nullptr;
	}
}

TArray<class UEquippableItem*> UEquipmentComponent::GetItemsWithSlot(const FGameplayTag Slot)
{
	TArray<class UEquippableItem*> Items;

	for (auto& EquippedItemKP : EquippedItems)
	{
		if (EquippedItemKP.Key.MatchesTag(Slot))
		{
			Items.Add(EquippedItemKP.Value);
		}
	}

	return Items;
}

void UEquipmentComponent::GetEquippedItemsOfClass(TSubclassOf<UEquippableItem> EquippableClass, TArray<UEquippableItem*>& OutEquippables)
{
	for (auto& EquippedItemKP : EquippedItems)
	{
		if (UEquippableItem* Equippable = EquippedItemKP.Value)
		{
			if (Equippable->GetClass()->IsChildOf(EquippableClass))
			{
				OutEquippables.Add(Equippable);
			}
		}
	}
}

class UWeaponItem* UEquipmentComponent::GetEquippedWeaponAtSlot(const FGameplayTag Slot)
{
	return Cast<UWeaponItem>(GetEquippedItemAtSlot(Slot));
}

class USkeletalMeshComponent* UEquipmentComponent::GetMeshComponentAtSlot(const FGameplayTag Slot)
{
	if (EquippableComponents.Contains(Slot))
	{
		return *EquippableComponents.Find(Slot);
	}

	return nullptr;
}

class UGroomComponent* UEquipmentComponent::GetGroomComponentAtSlot(const FGameplayTag Slot)
{
	if (GroomComponents.Contains(Slot))
	{
		return *GroomComponents.Find(Slot);
	}
	return nullptr; 
}

float UEquipmentComponent::GetEquippedItemsWeight() const
{
	float TotalWeight = 0.f;

	for (auto& EquippedItemKP : EquippedItems)
	{
		if (EquippedItemKP.Value)
		{
			TotalWeight += EquippedItemKP.Value->Weight;
		}
	}

	return TotalWeight;
}

void UEquipmentComponent::EquipItem(class UEquippableItem* Equippable)
{
	if (Equippable)
	{	
		//Remove the old item from our equipped items if one is already equipped
		if (EquippedItems.Contains(Equippable->EquippableSlot))
		{
			if (UEquippableItem* AlreadyEquippedItem = *EquippedItems.Find(Equippable->EquippableSlot))
			{
				AlreadyEquippedItem->SetActive(false);
			}
		}

		EquippedItems.Add(Equippable->EquippableSlot, Equippable);

		Equippable->HandleEquip();

		OnItemEquipped.Broadcast(Equippable->EquippableSlot, Equippable);
	}
}

void UEquipmentComponent::UnequipItem(class UEquippableItem* Equippable)
{
	if (Equippable)
	{
		EquippedItems.Remove(Equippable->EquippableSlot);

		Equippable->HandleUnequip();

		OnItemUnequipped.Broadcast(Equippable->EquippableSlot, Equippable);
	}
}
