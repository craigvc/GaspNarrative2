// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativePlayerController.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "InteractionComponent.h"
#include "NarrativeNavigationComponent.h"
#include <EnhancedInputComponent.h>
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeCheatManager.h"

ANarrativePlayerController::ANarrativePlayerController(const class FObjectInitializer& ObjectInitializer)
{
	InteractionComponent = CreateDefaultSubobject<UNarrativeInteractionComponent>(TEXT("InteractionComponent"));
	NavigationComponent = CreateDefaultSubobject<UNarrativeNavigationComponent>(TEXT("NavigationComponent"));
	TalesComponent = CreateDefaultSubobject<UNarrativeComponent>(TEXT("TalesComponent"));

	CheatClass = UNarrativeCheatManager::StaticClass();
}

void ANarrativePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}

void ANarrativePlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void ANarrativePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (InteractionComponent)
		{
			InteractionComponent->BindToInput(EnhancedInput);
		}
	}
}

class UAbilitySystemComponent* ANarrativePlayerController::GetAbilitySystemComponent() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetAbilitySystemComponent();
	}

	return nullptr;
}

void ANarrativePlayerController::SetGenericTeamId(const FGenericTeamId& TeamID)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		PS->SetGenericTeamId(TeamID);
	}
}

FGenericTeamId ANarrativePlayerController::GetGenericTeamId() const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetGenericTeamId();
	}

	return FGenericTeamId::NoTeam;
}

ETeamAttitude::Type ANarrativePlayerController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetTeamAttitudeTowards(Other);
	}

	return ETeamAttitude::Neutral;
}
