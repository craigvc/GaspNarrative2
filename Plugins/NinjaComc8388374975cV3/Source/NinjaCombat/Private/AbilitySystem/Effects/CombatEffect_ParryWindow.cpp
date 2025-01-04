// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_ParryWindow.h"

#include "NinjaCombatTags.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_ParryWindow::UCombatEffect_ParryWindow()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;
	
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_ParryWindow);
	
	UTargetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	AssetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(AssetTags);	
}
