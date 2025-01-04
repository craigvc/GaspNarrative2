// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaFactionDataAsset.h"

#include "GenericTeamAgentInterface.h"
#include "NinjaFactionTags.h"
#include "Types/FFactionAlignmentTableRow.h"

FName UNinjaFactionDataAsset::AssetType = TEXT("FactionSetup"); 

UNinjaFactionDataAsset::UNinjaFactionDataAsset()
{
    DisplayName = NSLOCTEXT("FactionData", "SampleName", "Faction Name");
    FactionTag = Tag_Factions_ID_Default;
    TeamId = FGenericTeamId::NoTeam;
    Color = FColor::Emerald;
    Tags = FGameplayTagContainer::EmptyContainer;
    DefaultAttitudeTowardsMyFaction = ETeamAttitude::Friendly;
    DefaultAttitudeTowardsOtherFactions = ETeamAttitude::Neutral;
}

FPrimaryAssetId UNinjaFactionDataAsset::GetPrimaryAssetId() const
{
    return FPrimaryAssetId(AssetType, GetFName());
}

FGenericTeamId UNinjaFactionDataAsset::GetTeamId() const
{
    return FGenericTeamId(TeamId);
}
