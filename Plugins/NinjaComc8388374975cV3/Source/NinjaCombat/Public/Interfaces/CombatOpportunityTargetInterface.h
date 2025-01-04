// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CombatOpportunityTargetInterface.generated.h"

class UContextualAnimSceneAsset;

UINTERFACE(MinimalAPI)
class UCombatOpportunityTargetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Allows an opportunity target to provide specific data if applicable.
 */
class NINJACOMBAT_API ICombatOpportunityTargetInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Provides an optional Contextual Anim Scene Asset (CAS) that overrides the default one.
	 * 
	 * This is only necessary if the default CAS is configured for a character with a skeleton
	 * or proportions that are not compatible with this target.
	 *
	 * @param AbilityTags
	 *		Tags describing the Gameplay Ability performing the Opportunity Target Attack.
	 *		Can be used to filter specific Contextual Animation Assets for certain abilities.
	 *
	 * @return
	 *		The Contextual Animation Asset to use for this target, for a given animation. If no
	 *		override is necessary and the default one from the ability is correct, returns null.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Opportunity Target Interface")
	UContextualAnimSceneAsset* GetContextualAnimSceneAsset(FGameplayTagContainer AbilityTags) const;
	
};
