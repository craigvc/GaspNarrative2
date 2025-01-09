// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include <GameplayTagContainer.h>
#include "NarrativeTeamAgentInterface.generated.h"


/**In Narrative pro we use a custom team agent interface that uses gameplaytags for teams which are a bit cleaner and easier for designers to use. */
UINTERFACE()
class UNarrativeTeamAgentInterface : public UGenericTeamAgentInterface
{
	GENERATED_UINTERFACE_BODY()
};

class NARRATIVEARSENAL_API INarrativeTeamAgentInterface : public IGenericTeamAgentInterface
{
	GENERATED_IINTERFACE_BODY()

	/**Add a faction to the agent*/
	virtual void AddFaction(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& Faction){};

	/**Remove a faction from the agent*/
	virtual void RemoveFaction(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTag& Faction) {};

	/** Return the factions this agent is in. */
	virtual FGameplayTagContainer GetFactions() const { return FGameplayTagContainer::EmptyContainer; };

	/** Retrieved owner attitude toward given Other object */
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
};
