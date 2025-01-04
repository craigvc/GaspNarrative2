// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaFactionPlayerController.h"

#include "NinjaFactionFunctionLibrary.h"
#include "GameFramework/Pawn.h"

ANinjaFactionPlayerController::ANinjaFactionPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANinjaFactionPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(InPawn);
}

void ANinjaFactionPlayerController::OnUnPossess()
{
	FactionComponent = nullptr;
	Super::OnUnPossess();
}

void ANinjaFactionPlayerController::OnRep_Pawn()
{
	Super::OnRep_Pawn();

	const TObjectPtr<const APawn> PlayerPawn = GetPawn();
	if (IsValid(PlayerPawn))
	{
		FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(PlayerPawn);	
	}
	else
	{
		FactionComponent = nullptr;
	}
}

FGenericTeamId ANinjaFactionPlayerController::GetGenericTeamId() const
{
	// This will return the Main Team ID from our component or, in case of issues, the default one.
	return UNinjaFactionFunctionLibrary::GetMainTeamId(FactionComponent);
}
