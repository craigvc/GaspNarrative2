// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_Evading.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_Evading::UCombatEffect_Evading()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;
	
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_Evading);
	MyTags.Added.AddTagFast(Tag_Combat_Effect_Cancel_Regeneration_Stamina);
	
	UTargetTagsGameplayEffectComponent* TargetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	TargetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(TargetTags);

	UAdditionalEffectsGameplayEffectComponent* AdditionalEffects = CreateDefaultSubobject<UAdditionalEffectsGameplayEffectComponent>("AdditionalEffects");
	AdditionalEffects->OnCompleteAlways.Add(UCombatEffect_CancelStaminaRegeneration::StaticClass());
	GEComponents.Add(AdditionalEffects);
}
