// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/NinjaEquipmentSceneComponentSelector.h"
#include "Selector_AttachedActor.generated.h"

/**
 * Selects a component in an attached actor, by a given component tag.
 */
UCLASS(DisplayName = "Attached Actor Selector")
class NINJAINVENTORYEQUIPMENT_API USelector_AttachedActor : public UNinjaEquipmentSceneComponentSelector
{
	
	GENERATED_BODY()

public:

	USelector_AttachedActor();
	
	// -- Begin Scene Component Selector implementation
	virtual USceneComponent* SelectComponent_Implementation(const UNinjaEquipment* Equipment) const override;
	// -- End Scene Component Selector implementation

protected:

	/** A gameplay tag used to filter a scene component in the attached actors. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Scene Component Selector", meta = (Categories = "Equipment.Component"))
	FGameplayTag ComponentTag;

};
