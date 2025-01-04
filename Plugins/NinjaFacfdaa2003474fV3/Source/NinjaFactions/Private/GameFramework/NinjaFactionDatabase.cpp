// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaFactionDatabase.h"

#include "NinjaFactionSettings.h"
#include "Data/NinjaFactionDataAsset.h"
#include "Engine/AssetManager.h"
#include "Types/FFactionReputationTableRow.h"
#include "UObject/ConstructorHelpers.h"

DEFINE_LOG_CATEGORY(LogNinjaFactionDatabase);

UNinjaFactionDatabase::UNinjaFactionDatabase()
{
}
void UNinjaFactionDatabase::InitializeDatabase_Implementation()
{
	UpdateReputationTable();
}

UNinjaFactionDataAsset* UNinjaFactionDatabase::GetFaction_Implementation(const FGameplayTag& FactionTag) const
{
    TArray<UNinjaFactionDataAsset*> Factions;
    GetFactions(Factions);

    const int32 Idx = Factions.IndexOfByPredicate([FactionTag](const UNinjaFactionDataAsset* FactionData)
        { return FactionData->FactionTag == FactionTag; });

    return Idx != INDEX_NONE ? Factions[Idx] : nullptr; 
}

void UNinjaFactionDatabase::GetFactions_Implementation(TArray<UNinjaFactionDataAsset*>& OutFactions) const
{
}

void UNinjaFactionDatabase::GetReputationTiers_Implementation(
	TArray<FFactionReputationTableRow>& OutReputationTiers) const
{
	OutReputationTiers = CachedReputationTiers;
}

bool UNinjaFactionDatabase::GetReputationTier_Implementation(const int32 Reputation,
    FFactionReputationTableRow& OutReputationTier) const
{
	for (const FFactionReputationTableRow& Row : CachedReputationTiers)
	{
		if (Reputation >= Row.MinReputation && Reputation <= Row.MaxReputation)
		{
			OutReputationTier = Row;
			return true;
		}
	}

	return false;
}

bool UNinjaFactionDatabase::GetReputationTierByName(const FName TierName,
    FFactionReputationTableRow& OutReputationTier) const
{
	for (const FFactionReputationTableRow& Row : CachedReputationTiers)
	{
		if (TierName == Row.UniqueName)
		{
			OutReputationTier = Row;
			return true;
		}
	}

	return false;
}

void UNinjaFactionDatabase::UpdateReputationTable()
{
	const TObjectPtr<const UNinjaFactionSettings> Settings = GetDefault<UNinjaFactionSettings>();
	check(IsValid(Settings));

	if (Settings->ReputationTable.IsValid())
	{
		ReputationTable = Settings->ReputationTable.Get();
		UE_LOG(LogNinjaFactionDatabase, Log, TEXT("Retrieved Reputation Tier Table from Settings."));
	}
	else if(Settings->ReputationTable.IsPending())
	{
		TArray<FSoftObjectPath> AssetList;
		AssetList.Add(Settings->ReputationTable.ToSoftObjectPath());
		
		UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
		check(IsValid(AssetManager));
		
		UE_LOG(LogNinjaFactionDatabase, Log, TEXT("Loading Reputation Tier Table..."));
		const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnReputationTableLoaded);
		AssetManager->LoadAssetList(AssetList, Delegate);
	}

	if (IsValid(ReputationTable))
	{
		CacheReputationTiers();
	}
}

void UNinjaFactionDatabase::OnReputationTableLoaded()
{
	const TObjectPtr<const UNinjaFactionSettings> Settings = GetDefault<UNinjaFactionSettings>();
	check(IsValid(Settings));

	if (Settings->ReputationTable.IsValid())
	{
		ReputationTable = Settings->ReputationTable.Get();
		UE_LOG(LogNinjaFactionDatabase, Log, TEXT("Retrieved Reputation Tier Table from Settings."));
		CacheReputationTiers();
	}
}

void UNinjaFactionDatabase::CacheReputationTiers()
{
	if (IsValid(ReputationTable))
	{
		TArray<FName> Names = ReputationTable->GetRowNames();
		CachedReputationTiers.Empty();
		CachedReputationTiers.Reserve(Names.Num());
	
		for (const FName& Name : Names)
		{
			FFactionReputationTableRow* Entry = ReputationTable->FindRow<FFactionReputationTableRow>(Name, "ReputationCache");
			if (Entry != nullptr)
			{
				Entry->UniqueName = Name;
				CachedReputationTiers.Add(*Entry);
			}
		}

		UE_LOG(LogNinjaFactionDatabase, Log, TEXT("Finished caching %d Reputation Tiers."), CachedReputationTiers.Num());
	}
}
