// Copyright Narrative Tools 2024. 


#include "Components/TeamMarkerComponent.h"
#include <Runtime/AIModule/Classes/GenericTeamAgentInterface.h>
#include <GameFramework/PlayerController.h>
#include "ArsenalStatics.h"

UTeamMarkerComponent::UTeamMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FriendlyColor = FLinearColor::Green;
	NeutralColor = FLinearColor::White;
	HostileColor = FLinearColor::Red;
}

FLinearColor UTeamMarkerComponent::GetMarkerColor_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const
{
	ETeamAttitude::Type Attitude = UArsenalStatics::GetAttitude(GetOwner(), Viewer);

	switch (Attitude)
	{
		case ETeamAttitude::Friendly:
		{
			return FriendlyColor;
		}
		break;
		case ETeamAttitude::Neutral:
		{
			return NeutralColor;
		}
		break;
		case ETeamAttitude::Hostile:
		{
			return HostileColor;
		}
		break;
	}

	return NeutralColor;
}


