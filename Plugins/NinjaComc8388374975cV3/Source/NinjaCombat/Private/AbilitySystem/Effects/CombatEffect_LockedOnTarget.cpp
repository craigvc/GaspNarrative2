// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Effects/CombatEffect_LockedOnTarget.h"

#include "NinjaCombatTags.h"
#include "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"

UCombatEffect_LockedOnTarget::UCombatEffect_LockedOnTarget()
{
	FInheritedTagContainer MyTags;
	MyTags.Added.AddTagFast(Tag_Combat_State_LockedOnTarget);
	
	UAssetTagsGameplayEffectComponent* AssetTags = CreateDefaultSubobject<UAssetTagsGameplayEffectComponent>("AssetTags");
	AssetTags->SetAndApplyAssetTagChanges(MyTags);
	GEComponents.Add(AssetTags);	
}
