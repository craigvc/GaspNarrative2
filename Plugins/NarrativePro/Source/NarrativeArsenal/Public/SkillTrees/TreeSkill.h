// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "SkillTrees/TreePerk.h"
#include "UObject/NoExportTypes.h"
#include <Templates/SubclassOf.h>

#include "TreeSkill.generated.h"

class UTreePerk;

//Represents a perk in our skill. 
USTRUCT(BlueprintType)
struct FPerkConfig
{
	GENERATED_BODY()

	FPerkConfig(){};

	//The perk 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Perk Config")
	TSubclassOf<UTreePerk> Perk;

	//The location the perk should display at inside the skill tree UI. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Perk Config")
	FVector2D PerkCords;

	//Child perks this skill should link to go in here. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Perk Config")
	TArray<TSubclassOf<UTreePerk>> LinkedTo;

};

/**
 * Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills by subclassing this! 
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class NARRATIVEARSENAL_API UTreeSkill : public UObject
{
	GENERATED_BODY()
	
public:

	UTreeSkill(const FObjectInitializer& ObjectInitializer);

	//All of the perks this skill should have go in here. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	TArray<FPerkConfig> Perks;

	//The display name of this skill. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	FText SkillDisplayName;

	//The description of this skill. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	FText SkillDescription;

	//The level this skill is at
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tree Skill")
	int32 SkillLevel;

};
