// Ninja Bear Studio Inc., all rights reserved.
#include "AI/NinjaFactionAIController.h"

#include "NinjaFactionFunctionLibrary.h"
#include "NinjaFactionSettings.h"
#include "NinjaFactionSubsystem.h"
#include "Components/NinjaFactionComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Perception/AIPerceptionComponent.h"

ANinjaFactionAIController::ANinjaFactionAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ANinjaFactionAIController::BeginPlay()
{
	Super::BeginPlay();
	InitializeDefaultTeam();
}

void ANinjaFactionAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(InPawn);
	if (IsValid(FactionComponent))
	{
		const FGenericTeamId OldTeamId = CachedTeamId;
		
		CachedTeamId = UNinjaFactionFunctionLibrary::GetMainTeamId(FactionComponent);
		FactionComponent->OnFactionAdded.AddUniqueDynamic(this, &ThisClass::OnFactionAdded);

		if (OldTeamId != CachedTeamId)
		{
			RefreshPerceptionSystem();	
		}
	}
}

void ANinjaFactionAIController::OnUnPossess()
{
	if (IsValid(FactionComponent))
	{
		FactionComponent->OnFactionAdded.RemoveAll(this);
		FactionComponent = nullptr;
		InitializeDefaultTeam();
	}
	
	Super::OnUnPossess();
}

FGenericTeamId ANinjaFactionAIController::GetGenericTeamId() const
{
	// This will return the Main Team ID from our component or, in case of issues, the default one.
	return UNinjaFactionFunctionLibrary::GetMainTeamId(FactionComponent);
}

ETeamAttitude::Type ANinjaFactionAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const TObjectPtr<const UNinjaFactionSubsystem> FactionSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UNinjaFactionSubsystem>();
	check(IsValid(FactionSubsystem));
	
	const ETeamAttitude::Type Attitude = FactionSubsystem->GetAttitude(GetPawn(), &Other);
	return Attitude;
}

void ANinjaFactionAIController::InitializeDefaultTeam()
{
	const TObjectPtr<const UNinjaFactionSettings> FactionSettings = GetDefault<UNinjaFactionSettings>();
	check(IsValid(FactionSettings));
	
	CachedTeamId = FGenericTeamId(FactionSettings->DefaultTeam);
	RefreshPerceptionSystem();
}

void ANinjaFactionAIController::RefreshPerceptionSystem()
{
	const TObjectPtr<UAIPerceptionComponent> Perception = GetPerceptionComponent();
	if (IsValid(Perception))
	{
		// Update the perception lister so it can process the new faction.
		Perception->RequestStimuliListenerUpdate();
	}	
}

void ANinjaFactionAIController::OnFactionAdded_Implementation(const FFactionMembership& FactionMembership)
{
	if (FactionMembership.IsMainFaction())
	{
		CachedTeamId = UNinjaFactionFunctionLibrary::GetMainTeamId(FactionComponent);	
	}
}
