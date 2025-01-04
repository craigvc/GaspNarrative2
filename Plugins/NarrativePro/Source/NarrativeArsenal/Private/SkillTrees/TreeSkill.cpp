// Copyright Narrative Tools 2024. 


#include "SkillTrees/TreeSkill.h"
#include "SkillTrees/TreePerk.h"

UTreeSkill::UTreeSkill(const FObjectInitializer& ObjectInitializer)
{
	SkillLevel = 1;
	SkillDisplayName = NSLOCTEXT("TreeSkill", "SkillDisplayName", "Unnamed Skill");
	SkillDescription = NSLOCTEXT("TreeSkill", "SkillDescription", "Add a description for this skill.");
}

TArray<UTreePerk*> UTreeSkill::GetAllPerks() const
{
	if (RootPerk)
	{
		TArray<UTreePerk*> Perks;

		//Recursively go through our perks, appending them to the array, then return it 
		AppendPerksToArray(Perks, RootPerk);

		return Perks;
	}

	return {};
}

void UTreeSkill::AppendPerksToArray(TArray<UTreePerk*>& PerkArray, UTreePerk* Perk) const
{
	if (Perk)
	{
		PerkArray.Add(Perk);

		for (auto& LinkedPerk : Perk->LinkedPerks)
		{
			AppendPerksToArray(PerkArray, LinkedPerk);
		}
	}
}
