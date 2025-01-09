// Copyright Narrative Tools 2024. 


#include "SkillTrees/TreeSkill.h"
#include "SkillTrees/TreePerk.h"

UTreeSkill::UTreeSkill(const FObjectInitializer& ObjectInitializer)
{
	SkillLevel = 1;
	SkillDisplayName = NSLOCTEXT("TreeSkill", "SkillDisplayName", "Unnamed Skill");
	SkillDescription = NSLOCTEXT("TreeSkill", "SkillDescription", "Add a description for this skill.");
}
