// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataAsset.h"
#include "NinjaFactionDataAsset.generated.h"

class UDataTable;

/**
 * Contains information about a Faction.
 *
 * Factions are an extension of Generic Teams, introduced by Unreal Engine's AI Module. Factions
 * will provide everything expected by the core Perception/Team systems, but also allow designers
 * to establish such relationships in a declarative way.
 */
UCLASS(DisplayName = "Faction Data")
class NINJAFACTIONS_API UNinjaFactionDataAsset : public UPrimaryDataAsset
{
    
    GENERATED_BODY()

public:

    static FName AssetType;

    /** Name displayed for this faction, using the Localization System. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    FText DisplayName;

    /**  Gameplay Tag uniquely identifies this Faction. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction", meta = (Categories = "Factions.ID"))
    FGameplayTag FactionTag;
    
    /** Team ID assigned to this faction, to be used by Unreal Engine's core framework. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    uint8 TeamId;

    /** A color that represents this faction. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    FColor Color;
    
    /**
     * Optional Gameplay Tags that can further define this faction.
     *
     * It can be used to provide macro-categories that later on can be used to sort factions in the
     * game's user interface, or to define faction traits such as preys and predators.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    FGameplayTagContainer Tags;
    
    /**
     * Default attitude between members of this faction.
     *
     * For regular attitude checks that won't depend on reputation, this defines how teams members
     * behave towards each other. If reputation is involved, this will be used to determine the
     * attitude towards a pawn without the backing attribute, but with this Faction's Tag.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitudeTowardsMyFaction;
    
    /**
     * Default attitude between members of this faction and a different one.
     *
     * For regular attitude checks that won't depend on reputation, this defines how this team
     * behave towards another team. If reputation is involved, this will be used to determine the
     * attitude towards a pawn without the backing attribute, and without this Faction's Tag.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
    TEnumAsByte<ETeamAttitude::Type> DefaultAttitudeTowardsOtherFactions;

    /**
     * Attitudes that are different from the default settings.
     * 
     * The table must use the FactionAlignmentTableRow as the row type. Only relevant if the
     * attitude solver uses the table. A reputation-based solver, for example, might not use it.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaFactions.FactionAlignmentTableRow"))
    TObjectPtr<UDataTable> AttitudeMatrix;

    UNinjaFactionDataAsset();

    // -- Begin Primary Data Asset implementation
    virtual FPrimaryAssetId GetPrimaryAssetId() const override;
    // -- End Primary Data Asset implementation

    /**
     * Provides the Team ID converted into the Generic Team struct.
     */
    FGenericTeamId GetTeamId() const;
    
};
