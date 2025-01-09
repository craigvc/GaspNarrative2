// Copyright Narrative Tools 2024. 


#include "SkillTrees/TreePerk.h"
#include "SkillTrees/SkillTreeComponent.h"

UTreePerk::UTreePerk(const FObjectInitializer& ObjectInitializer)
{
	PerkLevel = -1;
	MaxLevels = 1;
	PerkDisplayName = NSLOCTEXT("TreePerk", "PerkDisplayName", "Unnamed Perk");
	PerkDescription = NSLOCTEXT("TreePerk", "PerkDescription", "Add a description for this Perk.");
}

void UTreePerk::SetPerkLevel_Implementation(const int32 NewPerkLevel)
{
	PerkLevel = NewPerkLevel;
}

FText UTreePerk::GetPerkDescription_Implementation()
{
	return PerkDescription;
}

class USkillTreeComponent* UTreePerk::GetOwningComponent() const
{
	return Cast<USkillTreeComponent>(GetOuter());
}
