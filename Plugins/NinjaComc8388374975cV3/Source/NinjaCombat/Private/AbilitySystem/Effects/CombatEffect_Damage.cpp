 // Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_Damage.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_Dead.h"
#include "AbilitySystem/Effects/Executions/CombatExecution_Damage.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"

UCombatEffect_Damage::UCombatEffect_Damage()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;

	FGameplayEffectExecutionDefinition& DamageExecution = Executions.AddDefaulted_GetRef();
	DamageExecution.CalculationClass = UCombatExecution_Damage::StaticClass();
	
	AssetTags = CreateDefaultSubobject<UAssetTagsGameplayEffectComponent>("AssetTags");
	GEComponents.Add(AssetTags);

	AdditionalEffects = CreateDefaultSubobject<UAdditionalEffectsGameplayEffectComponent>("AdditionalEffects");
	AdditionalEffects->bOnApplicationCopyDataFromOriginalSpec = true;
	GEComponents.Add(AdditionalEffects);

	AddAdditionalEffect(UCombatEffect_Dead::StaticClass());
}

void UCombatEffect_Damage::AddAssetTags(const FGameplayTag& Tag) const
{
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag);
	AssetTags->SetAndApplyAssetTagChanges(MyTags);	
}

void UCombatEffect_Damage::AddAdditionalEffect(const TSubclassOf<UGameplayEffect>& EffectClass) const
{
	FConditionalGameplayEffect& AdditionalEffect = AdditionalEffects->OnApplicationGameplayEffects.AddDefaulted_GetRef();
	AdditionalEffect.EffectClass = EffectClass;
}
