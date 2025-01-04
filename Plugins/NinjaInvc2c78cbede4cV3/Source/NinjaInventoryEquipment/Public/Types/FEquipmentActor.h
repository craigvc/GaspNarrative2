// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FEquipmentActor.generated.h"

class AActor;
class UNinjaEquipmentSceneComponentSelector;

/**
 * Defines an actor related to an equipment piece.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentActor
{
	
	GENERATED_BODY()

	/** Actor class to spawn. Must be a valid implementation of "EquipmentActorInterface". */
	UPROPERTY(EditDefaultsOnly, Category = "Actor", meta = (MustImplement = "/Script/NinjaInventoryEquipment.EquipmentActorInterface"))
	TSoftClassPtr<AActor> ActorClass;
	
	/** Selector for the scene component used to attach the actor. */
	UPROPERTY(EditDefaultsOnly, Category = "Actor", NoClear)
	TSoftClassPtr<UNinjaEquipmentSceneComponentSelector> SceneComponentSelectorClass;

	/**
	 * Gameplay Tag representing the slot used to attach the actor (i.e. Equipment.Slot.MainWeapon).
	 * It should be mapped to an actual socket in the Equipment Manager.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Actor", meta = (Categories = "Equipment.Slot"))
	FGameplayTag SlotTag;
	
	FEquipmentActor();
	
};
