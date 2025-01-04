// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_RangedHit.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/Executions/CombatExecution_Damage.h"
#include "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"

UCombatEffect_RangedHit::UCombatEffect_RangedHit()
{
	AddAssetTags(Tag_Combat_Effect_Damage_Ranged);
	FGameplayEffectExecutionDefinition& DamageExecution = Executions.AddDefaulted_GetRef();
	DamageExecution.CalculationClass = UCombatExecution_Damage::StaticClass();
}
