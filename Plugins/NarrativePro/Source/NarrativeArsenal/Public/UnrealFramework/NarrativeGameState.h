// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NarrativeSavableActor.h"
#include "Teams/FactionDefinition.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include "NarrativeGameState.generated.h"

// Delegate signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFactionAttitudeChanged, ENarrativeFactionID, Faction, ENarrativeFactionID, OtherFaction, ETeamAttitude::Type, NewAttitude);


//Contains information about which factions we're enemies of, neutral with, etc. 
USTRUCT(BlueprintType)
struct FFactionAttitudeData
{
	GENERATED_BODY()

	FFactionAttitudeData()
	{

	}

	//A map of a faction -> our attiude towards that faction
	UPROPERTY(BlueprintReadOnly, SaveGame, EditAnywhere, Category = "Faction")
	TMap<ENarrativeFactionID, TEnumAsByte<ETeamAttitude::Type>> AttitudeMap;
};

/**
 * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeGameState : public AGameStateBase, public INarrativeSavableActor
{
	GENERATED_BODY()
	
public:

	ANarrativeGameState(const FObjectInitializer& ObjectInitializer);

	//Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others. Also marked savegame so alliances will be preserved through play sessions. 
	UPROPERTY(SaveGame, EditAnywhere, BlueprintReadOnly, Category = "Factions")
	TMap<ENarrativeFactionID, FFactionAttitudeData> FactionAllianceMap;

	//Check how the source factions attitude towards the target faction 
	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual ETeamAttitude::Type GetAttitudeTowards(const ENarrativeFactionID SourceFaction, const ENarrativeFactionID TargetFaction);

	//Set a factions attitude towards another given faction
	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual void SetFactionAttitude(const ENarrativeFactionID SourceFaction, const ENarrativeFactionID TargetFaction, const ETeamAttitude::Type NewAttitude);

	//Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile 
	UPROPERTY(BlueprintAssignable, Category = "Factions")
	FOnFactionAttitudeChanged OnFactionAttitudeChanged;

};
