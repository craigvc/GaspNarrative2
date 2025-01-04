// Copyright Narrative Tools 2022. 

#include "Components/EquipmentComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{

}

void UEquipmentComponent::Initialize(TMap<EEquippableSlot, USkeletalMeshComponent*> ClothingMeshes, class USkeletalMeshComponent* InLeaderPoseComponent)
{
	LeaderPoseComponent = InLeaderPoseComponent;

	EquippableComponents = ClothingMeshes;

	for (auto& ClothingMeshKP : ClothingMeshes)
	{
		if (ClothingMeshKP.Value)
		{
			DefaultClothing.Add(ClothingMeshKP.Key, ClothingMeshKP.Value->GetSkeletalMeshAsset());
			DefaultClothingMaterials.Add(ClothingMeshKP.Key, FDefaultClothingMeshMaterials(ClothingMeshKP.Value->GetMaterials()));
		}
	}
}

class UEquippableItem* UEquipmentComponent::GetEquippedItemAtSlot(const EEquippableSlot Slot)
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
