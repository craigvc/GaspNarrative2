// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_ComboWindow.h"

#include "NinjaCombatTags.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"

UCombatEffect_ComboWindow::UCombatEffect_ComboWindow()
{
	DurationPolicy = EGameplayEffectDurationType::Infinite;
	
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_ComboWindow);
	
	UTargetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UTargetTagsGameplayEffectComponent>("TargetTags");
	AssetTags->SetAndApplyTargetTagChanges(MyTags);
	GEComponents.Add(AssetTags);	
}
