// Ninja Bear Studio Inc., all rights reserved.
#include "UI/NinjaFactionListWidget.h"

#include "NinjaFactionFunctionLibrary.h"
#include "NinjaFactionSubsystem.h"
#include "Components/NinjaFactionComponent.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "UI/NinjaFactionMembershipView.h"

TArray<UNinjaFactionMembershipView*> UNinjaFactionListWidget::GetFactionMemberships() const
{
    TArray<UNinjaFactionMembershipView*> Results;
    
    const TObjectPtr<const APawn> OwningPawn = GetOwningPlayerPawn();
    const TObjectPtr<const UNinjaFactionComponent> FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(OwningPawn);
    if (IsValid(FactionComponent))
    {
        const TArray<FFactionMembership> MembershipList = FactionComponent->GetFactionMemberships();
        TArray<UNinjaFactionMembershipView*> ViewList = ProcessMemberships(MembershipList);
    }

    return Results;
}

TArray<UNinjaFactionMembershipView*> UNinjaFactionListWidget::ProcessMemberships(
    const TArray<FFactionMembership>& Memberships) const
{
    TArray<UNinjaFactionMembershipView*> Results;
    Results.Reserve(Memberships.Num());
    
    for (const FFactionMembership& Membership : Memberships)
    {
        TObjectPtr<UNinjaFactionMembershipView> MembershipView = NewObject<UNinjaFactionMembershipView>(GetOuter());
        if (IsValid(MembershipView))
        {
            MembershipView->FactionData = Membership.FactionData;
            MembershipView->Reputation = Membership.Reputation;
            MembershipView->ReputationTier = GetReputationTier(Membership.TierName);
        }
    }

    return Results;
}

FFactionReputationTableRow UNinjaFactionListWidget::GetReputationTier(const FName& TierName) const
{
    FFactionReputationTableRow Result;
    
    if (TierName != NAME_None)
    {
        const TObjectPtr<UNinjaFactionSubsystem> FactionSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UNinjaFactionSubsystem>();
        check(IsValid(FactionSubsystem));
        FactionSubsystem->GetReputationTierByName(TierName, Result);
        
    }

    return Result;
}