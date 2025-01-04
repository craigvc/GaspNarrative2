// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UsableEquipmentInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UUsableEquipmentInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Represents an Equipment Instance or related actor that is can react to the "Use" event.
 */
class NINJAINVENTORYEQUIPMENT_API IUsableEquipmentInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Triggers any operations related to the equipment usage.
	 *
	 * Even though the "heavy lifting" of the event is usually handled by a Gameplay Ability,
	 * the equipment or its actors may need to adjust their internal state or perform cosmetic
	 * elements, such as playing an animation, particles or sounds.
	 *
	 * The equipment instance first reacts to this event and then cascades the event down to its
	 * spawned actors. If these actors must access their owning equipment instance, they can do
	 * so via the "Equipment Instance Aware Interface".
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Usable Equipment")
	void UseEquipment();
	
};