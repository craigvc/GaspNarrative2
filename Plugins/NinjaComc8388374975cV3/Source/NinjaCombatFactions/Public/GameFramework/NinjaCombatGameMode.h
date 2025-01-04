// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Interfaces/CombatDamageModifierInterface.h"
#include "NinjaCombatGameMode.generated.h"

class UNinjaCombatFactionDamageEvaluator;
/**
 * A game mode that can be used to modify damage, considering the Ninja Factions plugin. 
 */
UCLASS()
class NINJACOMBATFACTIONS_API ANinjaCombatGameMode : public AGameMode, public ICombatDamageModifierInterface
{
	
	GENERATED_BODY()

public:

	static FName DamageEvaluatorName;

	ANinjaCombatGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	virtual float ModifyDamage_Implementation(float Damage, const AActor* DamageInstigator, const AActor* DamageTarget,
		FGameplayTagContainer SourceTags, FGameplayTagContainer TargetTags) const override;

protected:

	/** Determines if friendly damage should be enabled or disabled. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Evaluator")
	bool bDisableFriendlyDamage;
	
	/** Damage Evaluator for the actual damage modification. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Damage Evaluator	")
	TObjectPtr<UNinjaCombatFactionDamageEvaluator> DamageEvaluator;
	
};
