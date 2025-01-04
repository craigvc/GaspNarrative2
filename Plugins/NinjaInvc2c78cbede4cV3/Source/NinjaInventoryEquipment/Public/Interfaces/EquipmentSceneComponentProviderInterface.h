// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "EquipmentSceneComponentProviderInterface.generated.h"

class UNinjaEquipment;
class USceneComponent;

UINTERFACE(MinimalAPI, Blueprintable)
class UEquipmentSceneComponentProviderInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows more complex selection of scene components in the owner, based on the provided criteria.
 *
 * This is useful to perform smart selection of parts of the character, for example gloves for a sword,
 * head for a hoodie, or for more complex character setups like an IK Retarget character.
 */
class NINJAINVENTORYEQUIPMENT_API IEquipmentSceneComponentProviderInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides a scene component for an Equipment/Tags.
	 *
	 * @param Equipment		Equipment instance being assigned.
	 * @param SelectorTags	Additional Tags that may further describe the scenario.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Equipment Scene Component Provider")
	USceneComponent* GetSceneComponent(const UNinjaEquipment* Equipment, const FGameplayTagContainer& SelectorTags) const;
	
};