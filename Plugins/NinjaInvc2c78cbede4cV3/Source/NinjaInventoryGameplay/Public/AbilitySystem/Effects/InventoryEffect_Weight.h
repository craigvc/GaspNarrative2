// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "InventoryEffect_Weight.generated.h"

/**
 * A gameplay effect that adds to the Encumbrance attribute.
 *
 * It's designed in a way that a Fragment can set the actual weight externally, instead of requiring
 * that each item defines their own Gameplay Effect separately, which simplifies things a lot.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UInventoryEffect_Weight : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UInventoryEffect_Weight();
	
};
