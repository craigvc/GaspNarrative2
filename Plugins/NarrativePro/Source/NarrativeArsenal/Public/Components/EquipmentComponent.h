// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/EquippableItem.h"
#include "EquipmentComponent.generated.h"

/**Called on server when an item is added to this inventory*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemEquipped, const EEquippableSlot, Slot, class UEquippableItem*, Equippable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemUnequipped, const EEquippableSlot, Slot, class UEquippableItem*, Equippable);

USTRUCT()
struct FDefaultClothingMeshMaterials
{

	GENERATED_BODY()

	FDefaultClothingMeshMaterials(){};
	FDefaultClothingMeshMaterials(TArray<class UMaterialInterface*> InMaterials) : Materials(InMaterials){};

	UPROPERTY()
	TArray<class UMaterialInterface*> Materials;
};

/**

Add this to your pawn class, call Initialize on beginplay, and your player will be able to equip items - its that easy! 

Tracks what items are equipped, remembers what default clothing items the player should wear if an item isn't equipped, 
and generally just manages the players equipped items.
*/
UCLASS( ClassGroup=(Narrative), DisplayName = "Narrative Equipment", meta=(BlueprintSpawnableComponent) )
class NARRATIVEARSENAL_API UEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

	friend class UEquippableItem;
	friend class UEquippableItem_Clothing;

public:	
	// Sets default values for this component's properties
	UEquipmentComponent();

	/**Initialize the equipment component, by telling it which meshes link to which slot.
	
	@param ClothingMeshes The map which maps each clothing slot to the skeletal mesh component the clothing will equip to 
	@param LeaderPoseComponent the component all of the equipped items will be told to follow upon equipping. */
	UFUNCTION(BlueprintCallable, Category = "Equipment")
	virtual void Initialize(TMap<EEquippableSlot, USkeletalMeshComponent*> ClothingMeshes, class USkeletalMeshComponent* LeaderPoseComponent);

	//Return the item equipped at the given slot
	UFUNCTION(BlueprintPure, Category = "Equipment")
	class UEquippableItem* GetEquippedItemAtSlot(const EEquippableSlot Slot);

	//Return how much all of our equipped items weigh
	UFUNCTION(BlueprintPure, Category = "Equipment")
	virtual float GetEquippedItemsWeight() const;

	UPROPERTY(BlueprintAssignable, Category = "Equipment")
	FOnItemEquipped OnItemEquipped;

	UPROPERTY(BlueprintAssignable, Category = "Equipment")
	FOnItemUnequipped OnItemUnequipped;

protected:

	//Mark the item as equipped/unequipped
	virtual void EquipItem(class UEquippableItem* Equippable);
	virtual void UnequipItem(class UEquippableItem* Equippable);

	/**When we put a new item on, we need to tell it to follow the leader pose component, so we store that here. */
	UPROPERTY()
	class USkeletalMeshComponent* LeaderPoseComponent;

	/**We cache this so when an item is removed we can set it back to the default*/
	UPROPERTY()
	TMap<EEquippableSlot, USkeletalMesh*> DefaultClothing;

	/**We cache this so when an item is removed we can set it back to the default materials*/
	UPROPERTY()
	TMap<EEquippableSlot, FDefaultClothingMeshMaterials> DefaultClothingMaterials;

	/**The skeletal meshes we'll be changing if a player equips an item*/
	UPROPERTY()
	TMap<EEquippableSlot, USkeletalMeshComponent*> EquippableComponents;

	/**All of the items that are currently equipped are stored in here*/
	UPROPERTY(BlueprintReadOnly, Category = "Equipment")
	TMap<EEquippableSlot, UEquippableItem*> EquippedItems;


public:

	FORCEINLINE class USkeletalMeshComponent* GetLeaderPoseComponent() const {return LeaderPoseComponent;};
	FORCEINLINE TMap<EEquippableSlot, USkeletalMeshComponent*> GetEquippableComponents() const {return EquippableComponents;};
	FORCEINLINE TMap<EEquippableSlot, USkeletalMesh*> GetDefaultClothing() const {return DefaultClothing;};

};
