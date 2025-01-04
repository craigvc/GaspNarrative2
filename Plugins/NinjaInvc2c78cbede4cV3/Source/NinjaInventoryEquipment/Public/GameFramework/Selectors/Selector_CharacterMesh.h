// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/NinjaEquipmentSceneComponentSelector.h"
#include "Selector_CharacterMesh.generated.h"

/**
 * Selects the character mesh as the scene component.
 */
UCLASS(DisplayName = "Character Mesh Selector")
class NINJAINVENTORYEQUIPMENT_API USelector_CharacterMesh : public UNinjaEquipmentSceneComponentSelector
{
	
	GENERATED_BODY()

public:

	USelector_CharacterMesh();
	
	// -- Begin Scene Component Selector implementation
	virtual USceneComponent* SelectComponent_Implementation(const UNinjaEquipment* Equipment) const override;
	// -- End Scene Component Selector implementation

protected:

	/**
	 * An optional gameplay tag used to find the proper scene component.
	 *
	 * If set, attempts to retrieve a component using this tag, before attempting to cast
	 * the owning pawn into a character and retrieving its mesh.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Scene Component Selector", meta = (Categories = "Equipment.Component"))
	FGameplayTag ComponentTag;
	
};
