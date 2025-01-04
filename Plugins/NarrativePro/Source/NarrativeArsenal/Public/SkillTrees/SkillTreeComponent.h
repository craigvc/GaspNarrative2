// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NarrativeSavableComponent.h"
#include "TreeSkill.h"
#include "SkillTreeComponent.generated.h"

USTRUCT()
struct FSavedPerk
{

GENERATED_BODY();

public: 

	FSavedPerk()
	{
		
	};

	//The perk class - we'll search for this when loading game. 
	UPROPERTY(SaveGame)
	TSubclassOf<UTreePerk> PerkClass;

	//The level to restore the perk to
	UPROPERTY(SaveGame)
	int32 PerkLevel;
};

USTRUCT()
struct FSavedSkill
{

GENERATED_BODY();

public: 

	FSavedSkill()
	{
		
	};

	//The skills class - we'll search for this when loading game. 
	UPROPERTY(SaveGame)
	TSubclassOf<UTreeSkill> SkillClass;

	//The level to restore the skill to
	UPROPERTY(SaveGame)
	int32 SkillLevel; 

	//The perks in the skill, and their info! 
	UPROPERTY(SaveGame)
	TArray<FSavedPerk> SavedPerks;

};

/**
Add to the PlayerState. 

The skill tree component holds the players skills! Skills consist of a linked number of nodes called perks. Both perks and skills have levels - you can have a stealth skill
which may be level 19, and within that skill you might have a perk called featherlight which may be purchased, and leveled up. IE 5% quieter footsteps at level 1, 10% at level 2, etc. 

Narrative ships with a Perk_AttributeMod which allows for easy attribute modifier perks, ie 5% higher attack damage, 10% higher sneak, etc. 

Perks are what you'd expect - hold 15% more weight, gain a new ability, etc! They are saved to disk via the FSavedPerk, which the component loads
back in automatically. 
*/
UCLASS( ClassGroup=(Narrative), meta=(BlueprintSpawnableComponent), within=PlayerState)
class NARRATIVEARSENAL_API USkillTreeComponent : public UActorComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USkillTreeComponent();

	//Give the player the given amount of skill points 
	UFUNCTION(BlueprintCallable, Category = "Tree Skill")
	virtual void GiveSkillPoints(const int32 Points);

	void PrepareForSave_Implementation() override;
	void Load_Implementation() override;

protected:

	virtual void BeginPlay() override;

	//The skills in the skill tree, and the perks. Current perks are only set on the server - replication has not yet been supported. 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	TArray<UTreeSkill*> SkillTreeSkills;

	//The save data for our skill tree skills and perks. 
	UPROPERTY(SaveGame, VisibleAnywhere, Category = "Tree Skill")
	TArray<FSavedSkill> SkillTreeSaveData;
	
	//The amount of skill tree points we have available. 
	UPROPERTY(SaveGame, VisibleAnywhere, BlueprintReadOnly, Category = "Tree Skill")
	int32 SkillTreePoints;

	//Attempt to buy a perk. Will check that the prerequisite perks are purchased first. 
	UFUNCTION(BlueprintCallable, Category = "Tree Skill")
	virtual bool BuyPerk(UTreePerk* Perk);

	//Return whether or not we can purchase a perk. 
	UFUNCTION(BlueprintPure, Category = "Tree Skill")
	virtual bool CanBuyPerk(UTreePerk* Perk, FText& OutCantBuyReason);

	//Return whether or not we've unlocked previous perks - doesn't take into account skill points or anything like that - use CanBuyPerk if you want that. 
	UFUNCTION(BlueprintPure, Category = "Tree Skill")
	virtual bool HasRequiredPerks(UTreePerk* Perk);

	//Check what level a given perk is 
	UFUNCTION(BlueprintPure, Category = "Tree Skill")
	int32 GetPerkLevel(TSubclassOf<UTreePerk> PerkClass);

private:

	FSavedSkill SkillToSaveData(const UTreeSkill* Skill) const;

};
