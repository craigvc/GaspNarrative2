// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/FactionSolvers/FactionSolver_TargetReputation.h"

#include "NinjaFactionSubsystem.h"
#include "Components/NinjaFactionComponent.h"
#include "Data/NinjaFactionDataAsset.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Types/FFactionReputationTableRow.h"

UFactionSolver_TargetReputation::UFactionSolver_TargetReputation()
{
}

ETeamAttitude::Type UFactionSolver_TargetReputation::SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const
{
    const TObjectPtr<UNinjaFactionSubsystem> FactionSubsystem = Source->GetWorld()->GetGameInstance()->GetSubsystem<UNinjaFactionSubsystem>();
    check(IsValid(FactionSubsystem));
    
    const TObjectPtr<UNinjaFactionDataAsset> SourceFactionData = GetMainFaction(Source);
    const TObjectPtr<UNinjaFactionComponent> FactionComponent = GetFactionComponent(Target);

    if (IsValid(SourceFactionData))
    {
        if (IsValid(FactionComponent))
        {
            FFactionMembership Membership;
            if (FactionComponent->GetFactionMembership(SourceFactionData, Membership))
            {
                FFactionReputationTableRow ReputationTier;
                FactionSubsystem->GetReputationTier(Membership.Reputation, ReputationTier);
                return ReputationTier.Attitude;
            }
        }
    	
        // No membership for this faction. Use the default attitude.
        return SourceFactionData->DefaultAttitudeTowardsOtherFactions;
    }

    return Super::SolveAttitude_Implementation(Source, Target);
}
