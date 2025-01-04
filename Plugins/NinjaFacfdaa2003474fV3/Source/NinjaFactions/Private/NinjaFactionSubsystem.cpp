// Ninja Bear Studio Inc., all rights reserved.
// ReSharper disable IdentifierTypo
#include "NinjaFactionSubsystem.h"

#include "NinjaFactionFunctionLibrary.h"
#include "NinjaFactionSettings.h"
#include "Data/NinjaFactionDataAsset.h"
#include "GameFramework/NinjaFactionAttitudeSolver.h"
#include "GameFramework/NinjaFactionDatabase.h"

void UNinjaFactionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    InitializeFactionObjects();
}

void UNinjaFactionSubsystem::Deinitialize()
{
    FactionSolver = nullptr;
    FactionDatabase = nullptr;
    Super::Deinitialize();
}

void UNinjaFactionSubsystem::InitializeFactionObjects()
{
    const TObjectPtr<const UNinjaFactionSettings> FactionSettings = GetDefault<UNinjaFactionSettings>();
    check(IsValid(FactionSettings));

    DefaultAttitude = FactionSettings->DefaultAttitude;
    
    const TSubclassOf<UNinjaFactionDatabase> DatabaseClass = FactionSettings->FactionDatabaseClass; 
    if (ensure(IsValid(DatabaseClass)))
    {
        FactionDatabase = NewObject<UNinjaFactionDatabase>(this, DatabaseClass);
        FactionDatabase->InitializeDatabase();
    }

    const TSubclassOf<UNinjaFactionAttitudeSolver> SolverClass = FactionSettings->FactionSolverClass; 
    if (ensure(IsValid(SolverClass)))
    {
        FactionSolver = NewObject<UNinjaFactionAttitudeSolver>(this, SolverClass);
        FactionSolver->SetDatabase(FactionDatabase);
        FactionSolver->SetDefaultAttitude(DefaultAttitude);
        FactionSolver->InitializeSolver();
    }
}

UNinjaFactionDataAsset* UNinjaFactionSubsystem::GetFaction(const FGameplayTag& FactionTag) const
{
    check(IsValid(FactionDatabase));
    return FactionDatabase->GetFaction(FactionTag);
}

void UNinjaFactionSubsystem::GetFactions(TArray<UNinjaFactionDataAsset*>& OutFactions) const
{
    check(IsValid(FactionDatabase));
    FactionDatabase->GetFactions(OutFactions);
}

void UNinjaFactionSubsystem::GetReputationTiers(TArray<FFactionReputationTableRow>& OutReputationTiers) const
{
    check(IsValid(FactionDatabase));
    FactionDatabase->GetReputationTiers(OutReputationTiers);
}

bool UNinjaFactionSubsystem::GetReputationTier(const int32 Reputation,
    FFactionReputationTableRow& OutReputationTier) const
{
    check(IsValid(FactionDatabase));
    return FactionDatabase->GetReputationTier(Reputation, OutReputationTier);
}

bool UNinjaFactionSubsystem::GetReputationTierByName(const FName TierName,
    FFactionReputationTableRow& OutReputationTier) const
{
    check(IsValid(FactionDatabase));
    return FactionDatabase->GetReputationTierByName(TierName, OutReputationTier);
}

ETeamAttitude::Type UNinjaFactionSubsystem::GetAttitude(const AActor* Source, const AActor* Target) const
{
    check(IsValid(FactionSolver));
    return FactionSolver->SolveAttitude(Source, Target);
}

UNinjaFactionComponent* UNinjaFactionSubsystem::GetFactionComponent(const AActor* Member)
{
	return UNinjaFactionFunctionLibrary::GetFactionComponent(Member);
}