// Copyright Narrative Tools 2024. 


#include "NavigatorStatics.h"
#include "NavigationMarkerComponent.h"
#include <GameplayTagContainer.h>
#include <GameFramework/Actor.h>

UNavigationMarkerComponent* UNavigatorStatics::AddNavigationMarkerToActor(class AActor* ActorToMark, const FNavigationMarkerSettings& MarkerSettings, const FGameplayTagContainer& InMarkerDomain)
{
	if (ActorToMark)
	{
		UNavigationMarkerComponent* Marker = Cast<UNavigationMarkerComponent>(ActorToMark->AddComponentByClass(UNavigationMarkerComponent::StaticClass(), false, FTransform(), false));
		if (Marker)
		{
			Marker->DefaultMarkerSettings = MarkerSettings;
			Marker->SetDomains(InMarkerDomain);

			return Marker;
		}
	}

	return nullptr;
}
