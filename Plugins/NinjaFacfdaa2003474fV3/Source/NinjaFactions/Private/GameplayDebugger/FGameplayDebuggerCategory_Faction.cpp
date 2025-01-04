// Ninja Bear Studio Inc., all rights reserved.
#include "GameplayDebugger/FGameplayDebuggerCategory_Faction.h"

#include "NinjaFactionFunctionLibrary.h"

#if WITH_GAMEPLAY_DEBUGGER

#include "Components/NinjaFactionComponent.h"
#include "Data/NinjaFactionDataAsset.h"

FGameplayDebuggerCategory_Faction::FGameplayDebuggerCategory_Faction()
{
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_Faction::MakeInstance()
{
    return MakeShareable(new FGameplayDebuggerCategory_Faction());
}

void FGameplayDebuggerCategory_Faction::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
    DisplayFactionData(OwnerPC, DebugActor);
}

void FGameplayDebuggerCategory_Faction::DisplayFactionData(const APlayerController* OwnerPC, const AActor* DebugActor)
{
    const TObjectPtr<const UNinjaFactionComponent> FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(DebugActor);
    if (IsValid(FactionComponent))
    {
        FFactionMembership Membership;
        if (FactionComponent->GetMainFactionMembership(Membership))
        {
        	const int32 MembershipCount = FactionComponent->GetFactionMemberships().Num();
            const TObjectPtr<const UNinjaFactionDataAsset> MainFactionData = Membership.FactionData;
            
            const int32 Reputation = Membership.Reputation;
            const FName TierName = Membership.TierName;

        	AddTextLine(FString::Printf(TEXT("Faction Memberships: %d"), MembershipCount));
        	
            AddTextLine(FString::Printf(TEXT("Main Faction: %s [Tag: %s, Team: %d]"),
                *MainFactionData->DisplayName.ToString(), *MainFactionData->FactionTag.ToString(), MainFactionData->TeamId));

        	AddTextLine(FString::Printf(TEXT("Reputation: %d [Tier: %s]"),
				Reputation, *TierName.ToString()));
        }
    }
}
#endif
