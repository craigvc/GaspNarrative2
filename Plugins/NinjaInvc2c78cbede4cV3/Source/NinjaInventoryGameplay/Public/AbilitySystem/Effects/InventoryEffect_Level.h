// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "InventoryEffect_Level.generated.h"

/**
 * A gameplay effect that adds to the Equipment Level attribute.
 *
 * It's designed in a way that a Fragment can set the actual gear level externally, instead of requiring
 * that each item defines their own Gameplay Effect separately, which simplifies things a lot.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UInventoryEffect_Level : public UGameplayEffect
{
	
	GENERATED_BODY()

public:

	UInventoryEffect_Level();
	
};
