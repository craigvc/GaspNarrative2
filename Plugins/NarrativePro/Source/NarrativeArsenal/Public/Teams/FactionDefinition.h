// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NarrativeArsenal.h"
#include <GameplayTagContainer.h>
#include "FactionDefinition.generated.h"

/**
 * Defines a faction, along with friendly factions, neutral, enemies, and so on. 
 */
UCLASS()
class NARRATIVEARSENAL_API UFactionDefinition : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UFactionDefinition(const FObjectInitializer& ObjectInitializer);

	//The faction this definition applies to - ideally this should use gameplaytags instead as C++ enum is annoying for BP users 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Faction")
	ENarrativeFactionID FactionID;

	//The tag identifying the faction - this needs to be converted to a uint8
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Faction")
	FGameplayTag FactionTag;

	//Factions we're friendly with 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Faction")
	TArray<ENarrativeFactionID> FriendlyFactions;

	//Factions we're enemies of 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Faction")
	TArray<ENarrativeFactionID> EnemyFactions;

};
