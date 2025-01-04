// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FFactionReputationTableRow.h"
#include "UObject/Object.h"
#include "NinjaFactionMembershipView.generated.h"

class UNinjaFactionDataAsset;

/**
 * A transfer object that can be used to render a list of Factions in a Widget.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Faction Membership View")
class NINJAFACTIONS_API UNinjaFactionMembershipView : public UObject
{
    
    GENERATED_BODY()

public:

    /** The Data Asset representing the faction. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Faction Membership View")
    TObjectPtr<UNinjaFactionDataAsset> FactionData;

    /** Reputation assigned to this membership. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Faction Membership View")
    float Reputation;

    /** Details about this membership tier. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Faction Membership View")
    FFactionReputationTableRow ReputationTier;
    
};
