// Copyright Narrative Tools 2024. 


#include "SkillTrees/SkillTreeComponent.h"
#include "SkillTrees/TreePerk.h"

#define LOCTEXT_NAMESPACE "SkillTreeComponent"

// Sets default values for this component's properties
USkillTreeComponent::USkillTreeComponent()
{
	SetIsReplicatedByDefault(true);
}


// Called when the game starts
void USkillTreeComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool USkillTreeComponent::BuyPerk(UTreePerk* Perk)
{
	UTreeSkill* OwnerSkill = Perk->GetOwningSkill();

	check(OwnerSkill);

	if (OwnerSkill)
	{
		FText ErrText;
		if (Perk && CanBuyPerk(Perk, ErrText))
		{
			Perk->SetPerkLevel(Perk->PerkLevel + 1);

			//We now have 1 less point to spend, and buying a perk should level up the skill. 
			--SkillTreePoints;
			OwnerSkill->SkillLevel++;

			return true;
		}
	}

	return false; 
}

bool USkillTreeComponent::CanBuyPerk(UTreePerk* Perk, FText& OutCantBuyReason)
{

	if (!Perk)
	{
		return false; 
	}

	if (Perk->PerkLevel >= Perk->MaxLevels - 1) //PerkLevel is zero based so subtract 1 so designers so 1-based number 
	{
		OutCantBuyReason = LOCTEXT("CantBuyReason_MaxLevel", "Perk Maxed");
		return false;
	}
	
	if (!HasRequiredPerks(Perk))
	{
		OutCantBuyReason = LOCTEXT("CantBuyReason_Locked", "Locked");
		return false;
	}

	if (SkillTreePoints <= 0)
	{
		OutCantBuyReason = LOCTEXT("CantBuyReason_NoPoints", "Not Enough Points");
		return false;
	}

	return true;  
}

bool USkillTreeComponent::HasRequiredPerks(UTreePerk* Perk)
{
	UTreeSkill* OwnerSkill = Perk->GetOwningSkill();

	check(OwnerSkill);

	if (OwnerSkill)
	{
		//If we're not buying the root perk, we need to check we're purchased all previous perks. 
		if (OwnerSkill->RootPerk != Perk)
		{
			TArray<UTreePerk*> AllPerks = OwnerSkill->GetAllPerks();
			UTreePerk* PerkOwner = nullptr; 

			for (auto& PerkToCheck : AllPerks)
			{
				//If we're purchased the perk that owns us, we've purchased all previous perks. 
				if (PerkToCheck->LinkedPerks.Contains(Perk))
				{
					//Found the perk, check its purchased! 
					if (PerkToCheck->PerkLevel < 0)
					{
						return false; 
					}
				}
			}
		}

		return true; 
	}

	return false; 
}

void USkillTreeComponent::GiveSkillPoints(const int32 Points)
{
	SkillTreePoints += Points;
}

int32 USkillTreeComponent::GetPerkLevel(TSubclassOf<UTreePerk> PerkClass)
{
	//Inefficient, but since there isn't much data to sift through i'm okay with it
	for (auto& Skill : SkillTreeSkills)
	{
		for (auto& SkillPerk : Skill->GetAllPerks())
		{
			if (SkillPerk->GetClass() == PerkClass)
			{
				return SkillPerk->PerkLevel;
			}
		}
	}

	return -1; 
}

FSavedSkill USkillTreeComponent::SkillToSaveData(const UTreeSkill* Skill) const
{
	FSavedSkill SavedSkill;

	SavedSkill.SkillClass = Skill->GetClass();
	SavedSkill.SkillLevel = Skill->SkillLevel;

	TArray<UTreePerk*> SkillPerks = Skill->GetAllPerks();

	for (auto& Perk : SkillPerks)
	{
		FSavedPerk SavedPerk;

		SavedPerk.PerkClass = Perk->GetClass();
		SavedPerk.PerkLevel = Perk->PerkLevel;

		SavedSkill.SavedPerks.Add(SavedPerk);
	}

	return SavedSkill;
}

void USkillTreeComponent::Load_Implementation()
{
	//We need to iterate the save data, find the skills with that data and set them
	for(auto& SavedSkill : SkillTreeSaveData)
	{
		//Find the skill the saved skill refers to
		for (auto& Skill : SkillTreeSkills)
		{
			if (Skill->GetClass() == SavedSkill.SkillClass)
			{
				//We found the skill, set its data
				Skill->SkillLevel = SavedSkill.SkillLevel;

				//Set its perks
				for (auto& SkillPerk : Skill->GetAllPerks())
				{
					for (auto& SavedPerk : SavedSkill.SavedPerks)
					{
						if (SkillPerk->GetClass() == SavedPerk.PerkClass)
						{
							//Set the perks level back its saved one. 
							SkillPerk->SetPerkLevel(SavedPerk.PerkLevel);
							continue;
						}
					}
				}

				continue; 
			}
		}
	} 
}

void USkillTreeComponent::PrepareForSave_Implementation()
{
	//Iterate the skills, and store them in our structs which get serialized
	SkillTreeSaveData.Empty();

	for (auto& Skill : SkillTreeSkills)
	{
		SkillTreeSaveData.Add(SkillToSaveData(Skill));
	}
}

#undef LOCTEXT_NAMESPACE 