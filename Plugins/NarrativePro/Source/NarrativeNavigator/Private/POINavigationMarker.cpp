// Copyright Narrative Tools 2022. 


#include "POINavigationMarker.h"
#include "PointOfInterest.h"
#include "NarrativeNavigationComponent.h"
#include "NavigationSubsystem.h"
#include <GameFramework/PlayerController.h>
#include <Engine/World.h>

#define LOCTEXT_NAMESPACE "POINavigationMarker"

UPOINavigationMarker::UPOINavigationMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultMarkerActionText = LOCTEXT("FastTravelText", "Fast Travel");
	POIDisplayName = LOCTEXT("POIDisplayNameText", "Point Of Interest");
}

#if WITH_EDITOR
void UPOINavigationMarker::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UPOINavigationMarker, POIDisplayName))
	{
		DefaultMarkerSettings.LocationDisplayName = POIDisplayName;
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif 

void UPOINavigationMarker::BeginPlay()
{
	Super::BeginPlay();

	if (POITag.IsValid())
	{
		if (UNavigationSubsystem* NavigationSubsystem = GetWorld()->GetSubsystem<UNavigationSubsystem>())
		{
			NavigationSubsystem->AddPointOfInterest_FromPOIMarker(this);
		}
	}

}

void UPOINavigationMarker::OnSelect_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner)
{
	if (Selector)
	{
		if (UNavigationSubsystem* NavigationSubsystem = GetWorld()->GetSubsystem<UNavigationSubsystem>())
		{
			FPointOfInterestLocation POI;
			NavigationSubsystem->GetPointOfInterest(POI, POITag);
			Selector->OnFastTravelRequested.Broadcast(POI);
		}
	}
}

FLinearColor UPOINavigationMarker::GetMarkerColor_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const
{
	FLinearColor Color = Super::GetMarkerColor_Implementation(Viewer, NavigatorType);

	if (UNarrativeNavigationComponent* NavComp = Cast<UNarrativeNavigationComponent>(Viewer->GetComponentByClass(UNarrativeNavigationComponent::StaticClass())))
	{
		if (NavComp->HasDiscoveredPOI(POITag))
		{
			Color.A = 1.f;
		}
		else
		{
			Color.A = .5f;
		}
	}

	return Color;
}

FText UPOINavigationMarker::GetMarkerDisplayText_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const
{
	FText DisplayText = Super::GetMarkerDisplayText_Implementation(Viewer, NavigatorType);

	if (UNarrativeNavigationComponent* NavComp = Cast<UNarrativeNavigationComponent>(Viewer->GetComponentByClass(UNarrativeNavigationComponent::StaticClass())))
	{
		if (NavComp->HasDiscoveredPOI(POITag))
		{
			return FText::Format(LOCTEXT("POIDiscoveredFormat", "{0} {1}"), DisplayText, LOCTEXT("DiscoveredText", "(Discovered)"));
		}
	}

	return DisplayText;
}

FText UPOINavigationMarker::GetMarkerActionText_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const
{
	if (CanInteract(Selector, SelectorOwner))
	{
		return LOCTEXT("FastTravelText", "Fast Travel");
	}

	return FText::GetEmpty();
}

bool UPOINavigationMarker::CanInteract_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const
{
	if (Selector)
	{
		if (Selector->HasDiscoveredPOI(POITag))
		{
			return true;
		}
	}

	return false; 
}

#undef LOCTEXT_NAMESPACE 