// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeGameState.h"

ANarrativeGameState::ANarrativeGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

ETeamAttitude::Type ANarrativeGameState::GetAttitudeTowards(const ENarrativeFactionID SourceFaction, const ENarrativeFactionID TargetFaction)
{
	//Aligned factions are always friendly toward each other 
	if (SourceFaction == TargetFaction)
	{
		return ETeamAttitude::Friendly;
	}

	ETeamAttitude::Type SourceAttitudeTowardsTarget = ETeamAttitude::Neutral;
	ETeamAttitude::Type TargetAttitudeTowardsSource = ETeamAttitude::Neutral;

	//See how source feels about target 
	if (FactionAllianceMap.Contains(SourceFaction))
	{
		//See if we have data on record for the target 
		if (FactionAllianceMap[SourceFaction].AttitudeMap.Contains(TargetFaction))
		{
			SourceAttitudeTowardsTarget = FactionAllianceMap[SourceFaction].AttitudeMap[TargetFaction];
		}
	}

	//See how target feels about source 
	if (FactionAllianceMap.Contains(TargetFaction))
	{
		//See if we have data on record for the target 
		if (FactionAllianceMap[TargetFaction].AttitudeMap.Contains(SourceFaction))
		{
			TargetAttitudeTowardsSource = FactionAllianceMap[TargetFaction].AttitudeMap[SourceFaction];
		}
	}

	//If either faction is hostile towards the other, they should both be hostile 
	if (TargetAttitudeTowardsSource == ETeamAttitude::Hostile || SourceAttitudeTowardsTarget == ETeamAttitude::Hostile)
	{
		return ETeamAttitude::Hostile;
	}

	//Otherwise just return how source feels about target 
	return SourceAttitudeTowardsTarget;

}

void ANarrativeGameState::SetFactionAttitude(const ENarrativeFactionID SourceFaction, const ENarrativeFactionID TargetFaction, const ETeamAttitude::Type NewAttitude)
{
	if (FactionAllianceMap.Contains(SourceFaction))
	{
		auto& AllianceData = FactionAllianceMap[SourceFaction];
		
		auto& Attitude = AllianceData.AttitudeMap.FindOrAdd(TargetFaction, NewAttitude);
		Attitude = NewAttitude;

		OnFactionAttitudeChanged.Broadcast(SourceFaction, TargetFaction, NewAttitude);
	}
}
