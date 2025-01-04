// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "DamageHandler_Widget.generated.h"

/**
 * Forwards the damage event to a widget component in the owner.
 *
 * It will expect to find one or more Ninja Combat Widget Components in the owner, by the provided Gameplay Tag.
 * For the components found, it will forward the Cue Parameters, applying any filter if necessary.
 */
UCLASS(DisplayName = "Widget Component")
class NINJACOMBATUI_API UDamageHandler_Widget : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_Widget();

	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation

protected:

	/** Component Tag used to retrieve the proper Combat Widget Component. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	FGameplayTag WidgetComponentTag;

	/**
	 * If set, only handles the event for the local Damage Instigator.
	 * Useful for a health bar or other aspects that should only be seen by the instigator.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler")
	bool bOnlyOnLocalInstigator;
	
	/** If set to true, enables filtering of the Cues. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler", meta = (InlineEditConditionToggle))
	bool bFilterCues;

	/** Gameplay Cues accepted by this handler. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler", meta = (EditCondition = "bFilterCues", GameplayTagFilter = "GameplayCue"))
	FGameplayTagContainer AcceptedCues;
	
};
