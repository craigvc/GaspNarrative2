// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaInventoryEquipmentStateAbility.h"
#include "InventoryAbility_ActivateEquipment.generated.h"

/**
 * Activates any equipment retrieved from the provided query.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UInventoryAbility_ActivateEquipment : public UNinjaInventoryEquipmentStateAbility
{
	
	GENERATED_BODY()

public:

	UInventoryAbility_ActivateEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); 
	
};
