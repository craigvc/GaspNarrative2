// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaFactionAttitudeSolver.h"

#include "NinjaFactionFunctionLibrary.h"
#include "NinjaFactionSettings.h"
#include "GameFramework/NinjaFactionDatabase.h"

void UNinjaFactionAttitudeSolver::InitializeSolver_Implementation()
{
    DefaultAttitude = GetDefault<UNinjaFactionSettings>()->DefaultAttitude;
}

ETeamAttitude::Type UNinjaFactionAttitudeSolver::SolveAttitude_Implementation(const AActor* Source, const AActor* Target) const
{
    return DefaultAttitude;
}

UNinjaFactionComponent* UNinjaFactionAttitudeSolver::GetFactionComponent(const AActor* Member)
{
    return UNinjaFactionFunctionLibrary::GetFactionComponent(Member);
}

UNinjaFactionDataAsset* UNinjaFactionAttitudeSolver::GetMainFaction(const AActor* Member)
{
    return UNinjaFactionFunctionLibrary::GetMainFaction(Member);
}

void UNinjaFactionAttitudeSolver::SetDatabase(UNinjaFactionDatabase* NewDatabase)
{
    Database = NewDatabase;
}

void UNinjaFactionAttitudeSolver::SetDefaultAttitude(const ETeamAttitude::Type NewDefaultAttitude)
{
    DefaultAttitude = NewDefaultAttitude;
}
