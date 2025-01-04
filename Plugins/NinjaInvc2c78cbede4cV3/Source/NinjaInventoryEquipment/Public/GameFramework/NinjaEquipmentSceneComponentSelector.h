// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NinjaEquipmentSceneComponentSelector.generated.h"

class UNinjaEquipment;

/**
 * Allows custom logic to be applied when we are selecting a scene component to attach actors. 
 */
UCLASS(Abstract, Const, Blueprintable, BlueprintType)
class NINJAINVENTORYEQUIPMENT_API UNinjaEquipmentSceneComponentSelector : public UObject
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Selects the appropriate Scene Component for an Equipment Instance.
	 *
	 * From the Instance, you may want to consider its current Equipment State and you may
	 * also access the owning pawn to search from components from it.
	 * 
	 * @param Equipment		Equipment trying to attach a new actor.
	 * @return				The Scene Component to be used as a parent. 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Scene Component Selector")
	USceneComponent* SelectComponent(const UNinjaEquipment* Equipment) const;
	
};
