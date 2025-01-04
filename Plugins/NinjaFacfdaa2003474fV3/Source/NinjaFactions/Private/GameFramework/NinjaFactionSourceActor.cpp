// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaFactionSourceActor.h"

#include "NinjaFactionTags.h"
#include "Components/NinjaFactionComponent.h"

ANinjaFactionSourceActor::ANinjaFactionSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;
	ReputationWorth = 10;
}

bool ANinjaFactionSourceActor::CanProvideFactionValues_Implementation(const UNinjaFactionDataAsset* Faction,
	const int32 Reputation, const FGameplayTag EventTag) const
{
	return Reputation <= ReputationWorth && EventTag.IsValid() && EventTag.MatchesTag(Tag_Factions_Event);
}

TMap<UNinjaFactionDataAsset*, int32> ANinjaFactionSourceActor::GetReputationRewards_Implementation(
	const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag) const
{
	TMap<UNinjaFactionDataAsset*, int32> Results;
	
	FFactionMembership MainFactionMembership;
	if (FactionMember->GetMainFactionMembership(MainFactionMembership))
	{
		Results.Add(MainFactionMembership.FactionData, ReputationWorth);
	}
	
	return Results;
}
