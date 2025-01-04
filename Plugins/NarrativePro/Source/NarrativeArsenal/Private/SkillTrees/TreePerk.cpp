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

class UTreeSkill* UTreePerk::GetOwningSkill() const
{
	//Simply work our way up the outer chain until we find the owning skill
	UObject* Outer = GetOuter();

	while (Outer)
	{
		if (UTreeSkill* Skill = Cast<UTreeSkill>(Outer))
		{
			return Skill;
		}

		Outer = Outer->GetOuter();
	}

	return nullptr; 
}

class USkillTreeComponent* UTreePerk::GetOwningComponent() const
{
	if (UTreeSkill* SkillOwner = GetOwningSkill())
	{
		return Cast<USkillTreeComponent>(SkillOwner->GetOuter());
	}

	return nullptr; 
}
