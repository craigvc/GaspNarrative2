// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "NarrativeCheatManager.generated.h"

/**
 * Contains Narrative pro console commands that will be stripped from packaged game.
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeCheatManager : public UCheatManager
{
	GENERATED_BODY()
	
	public:

	//Gives the specified amount of skill points to the player
	UFUNCTION(Exec)
	void GiveSkillPoints(int32 Points=1);

	//Gives the specified amount of currency to the player
	UFUNCTION(Exec)
	void GiveCurrency(int32 Currency=1);
};