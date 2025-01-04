// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaFactionSettings.h"

#include "GameFramework/FactionDatabases/FactionDatabase_DataAssets.h"
#include "GameFramework/FactionSolvers/FactionSolver_SimpleAttitudeCheck.h"

UNinjaFactionSettings::UNinjaFactionSettings()
{
	DefaultTeam = FGenericTeamId::NoTeam.GetId();
    DefaultAttitude = ETeamAttitude::Neutral;
    FactionDatabaseClass = UFactionDatabase_DataAssets::StaticClass();
    FactionSolverClass = UFactionSolver_SimpleAttitudeCheck::StaticClass();
}
