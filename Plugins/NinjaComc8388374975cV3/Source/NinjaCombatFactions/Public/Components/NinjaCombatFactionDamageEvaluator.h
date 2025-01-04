// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/CombatDamageModifierInterface.h"
#include "NinjaCombatFactionDamageEvaluator.generated.h"

/**
 * Evaluates damage based on the target and instigator factions.
 * 
 * Can be added to a Game State or Game Mode, which are common implementations for
 * the Combat Damage Modifier interface, which is also implemented by this component.
 */
UCLASS(Blueprintable)
class NINJACOMBATFACTIONS_API UNinjaCombatFactionDamageEvaluator : public UActorComponent, public ICombatDamageModifierInterface
{
	
	GENERATED_BODY()

public:

	UNinjaCombatFactionDamageEvaluator();

	/**
	 * Determines if friendly damage is fully cancelled.
	 * This completely dismisses the damage, cancelling the damage flow.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Evaluator")
	bool bCancelFriendlyDamage;
	
	/**
	 * Determines if friendly damage is nullified.
	 * This still triggers other parts of the damage flow, such as hit reactions.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Evaluator")
	bool bDisableFriendlyDamage;

	virtual bool ShouldCancelDamage_Implementation(float Damage, const AActor* Instigator, const AActor* Target,
		FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const override;
	
	virtual float ModifyDamage_Implementation(float Damage, const AActor* Instigator, const AActor* Target,
		FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const override;

};
