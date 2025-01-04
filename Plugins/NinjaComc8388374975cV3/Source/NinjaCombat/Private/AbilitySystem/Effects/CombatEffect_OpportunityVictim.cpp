// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_OpportunityVictim.h"

#include "NinjaCombatTags.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_OpportunityVictim::UCombatEffect_OpportunityVictim()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;

	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_Opportunity_Victim);
	
	UTargetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	AssetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(AssetTags);	
}
