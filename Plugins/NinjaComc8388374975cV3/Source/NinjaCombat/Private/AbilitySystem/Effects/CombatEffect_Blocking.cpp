// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_Blocking.h"

#include "NinjaCombatTags.h"
#include "AbilitySystem/Effects/CombatEffect_CancelStaminaRegeneration.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_Blocking::UCombatEffect_Blocking()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;
	
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_Blocking);
	MyTags.Added.AddTagFast(Tag_Combat_Effect_Cancel_Regeneration_Stamina);
	
	UTargetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	AssetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(AssetTags);
}
