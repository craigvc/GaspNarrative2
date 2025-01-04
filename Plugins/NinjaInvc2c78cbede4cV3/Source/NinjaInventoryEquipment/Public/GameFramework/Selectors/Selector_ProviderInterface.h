// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/NinjaEquipmentSceneComponentSelector.h"
#include "Selector_ProviderInterface.generated.h"

/**
 * Retrieves a scene component via the EquipmentSceneComponentProviderInterface interface.
 */
UCLASS(DisplayName = "Provider Interface Selector")
class NINJAINVENTORYEQUIPMENT_API USelector_ProviderInterface : public UNinjaEquipmentSceneComponentSelector
{
	
	GENERATED_BODY()

public:

	USelector_ProviderInterface();
	
	// -- Begin Scene Component Selector implementation
	virtual USceneComponent* SelectComponent_Implementation(const UNinjaEquipment* Equipment) const override;
	// -- End Scene Component Selector implementation

protected:

	/** Gameplay Tags used to identify the scene component. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Scene Component Selector")
	FGameplayTagContainer ComponentTags;
	
};
