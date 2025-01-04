// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_OpportunityAttacker.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_Invulnerability.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_OpportunityAttacker::UCombatEffect_OpportunityAttacker()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_Opportunity_Attacker);
	
	UTargetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	AssetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(AssetTags);

	UAdditionalEffectsGameplayEffectComponent* AdditionalEffects = CreateDefaultSubobject<UAdditionalEffectsGameplayEffectComponent>("AdditionalEffects");
	FConditionalGameplayEffect& AdditionalEffect = AdditionalEffects->OnApplicationGameplayEffects.AddDefaulted_GetRef();
	AdditionalEffect.EffectClass = UCombatEffect_Invulnerability::StaticClass();
	GEComponents.Add(AdditionalEffects);
}
