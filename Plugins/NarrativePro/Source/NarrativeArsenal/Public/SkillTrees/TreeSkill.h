// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "TreeSkill.generated.h"

class UTreePerk;

/**
 * Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills!
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class NARRATIVEARSENAL_API UTreeSkill : public UObject
{
	GENERATED_BODY()
	
public:

	UTreeSkill(const FObjectInitializer& ObjectInitializer);

	//The root perk in the skill tree. 
	UPROPERTY(Instanced, EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	TObjectPtr<UTreePerk> RootPerk;

	//The display name of this skill. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	FText SkillDisplayName;

	//The description of this skill. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tree Skill")
	FText SkillDescription;

	//The level this skill is at
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tree Skill")
	int32 SkillLevel;

	UFUNCTION(BlueprintPure, Category = "Tree Skill")
	TArray<UTreePerk*> GetAllPerks() const;

	void AppendPerksToArray(TArray<UTreePerk*>& PerkArray, UTreePerk* Perk) const;
};
