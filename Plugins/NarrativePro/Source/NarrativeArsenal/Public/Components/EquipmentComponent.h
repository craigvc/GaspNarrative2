// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/EquippableItem.h"
#include <GameplayTagContainer.h>
#include "EquipmentComponent.generated.h"

/**Called on server when an item is added to this inventory*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemEquipped, const FGameplayTag, Slot, class UEquippableItem*, Equippable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemUnequipped, const FGameplayTag, Slot, class UEquippableItem*, Equippable);

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
	virtual void Initialize(TMap<FGameplayTag, USkeletalMeshComponent*> ClothingMeshes, class USkeletalMeshComponent* LeaderPoseComponent);

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	virtual void SetGroomMap(TMap<FGameplayTag, class UGroomComponent*> Grooms);

	//Return the item equipped at the given slot
	UFUNCTION(BlueprintPure, Category = "Equipment")
	class UEquippableItem* GetEquippedItemAtSlot(UPARAM(meta = (Categories = "Narrative.Equipment.Slot"))const FGameplayTag Slot); 

	//Return the items equipped that match the slot subtag
	UFUNCTION(BlueprintPure, Category = "Equipment")
	TArray<class UEquippableItem*> GetItemsWithSlot(UPARAM(meta = (Categories = "Narrative.Equipment.Slot"))const FGameplayTag Slot);

	//Return the items that match the given equippable class
	UFUNCTION(BlueprintCallable, Category="Equipment",  meta=(DeterminesOutputType="EquippableClass", DynamicOutputParam="OutEquippables"))
	void GetEquippedItemsOfClass( TSubclassOf<UEquippableItem> EquippableClass, TArray<UEquippableItem*>& OutEquippables);

	//Return the weapon equipped at the given slot
	UFUNCTION(BlueprintPure, Category = "Equipment")
	class UWeaponItem* GetEquippedWeaponAtSlot(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag Slot); 

	//Return the mesh for the given slot
	UFUNCTION(BlueprintPure, Category = "Equipment")
	class USkeletalMeshComponent* GetMeshComponentAtSlot( UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Mesh")) const FGameplayTag Slot);

	//Return the groom for the given slot
	UFUNCTION(BlueprintPure, Category = "Equipment")
	class UGroomComponent* GetGroomComponentAtSlot( UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Groom")) const FGameplayTag Slot);

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

	/**The skeletal meshes we'll be changing if a player equips an item*/
	UPROPERTY()
	TMap<FGameplayTag, USkeletalMeshComponent*> EquippableComponents;

	/**The grooms we'll be changing if a player equips an item*/
	UPROPERTY()
	TMap<FGameplayTag, class UGroomComponent*> GroomComponents;

	/**All of the items that are currently equipped are stored in here*/
	UPROPERTY(BlueprintReadOnly, Category = "Equipment")
	TMap<FGameplayTag, UEquippableItem*> EquippedItems;


public:

	FORCEINLINE class USkeletalMeshComponent* GetLeaderPoseComponent() const {return LeaderPoseComponent;};
	FORCEINLINE TMap<FGameplayTag, USkeletalMeshComponent*> GetEquippableComponents() const {return EquippableComponents;};

};
