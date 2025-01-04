// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaInventoryEquipmentStateAbility.h"
#include "InventoryAbility_DeactivateEquipment.generated.h"

/**
 * Deactivates any equipment retrieved from the provided query.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UInventoryAbility_DeactivateEquipment : public UNinjaInventoryEquipmentStateAbility
{
	
	GENERATED_BODY()

public:

	UInventoryAbility_DeactivateEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
};
