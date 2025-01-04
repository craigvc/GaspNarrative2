// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatGameMode.h"

#include "Components/NinjaCombatFactionDamageEvaluator.h"

FName ANinjaCombatGameMode::DamageEvaluatorName = TEXT("DamageEvaluator");

ANinjaCombatGameMode::ANinjaCombatGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bDisableFriendlyDamage = true;
	
	DamageEvaluator = CreateDefaultSubobject<UNinjaCombatFactionDamageEvaluator>(DamageEvaluatorName);
	DamageEvaluator->bDisableFriendlyDamage = bDisableFriendlyDamage;
}

float ANinjaCombatGameMode::ModifyDamage_Implementation(const float Damage, const AActor* DamageInstigator,
	const AActor* DamageTarget, const FGameplayTagContainer SourceTags, const FGameplayTagContainer TargetTags) const
{
	return Execute_ModifyDamage(DamageEvaluator, Damage, DamageInstigator, DamageTarget, SourceTags, TargetTags);
}
