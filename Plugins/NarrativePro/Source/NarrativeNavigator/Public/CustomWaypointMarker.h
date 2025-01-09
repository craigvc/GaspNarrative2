// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "NavigationMarkerComponent.h"
#include "CustomWaypointMarker.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENAVIGATOR_API UCustomWaypointMarker : public UNavigationMarkerComponent
{
	GENERATED_BODY()
	
	UCustomWaypointMarker(const FObjectInitializer& ObjectInitializer);

	virtual FText GetMarkerActionText_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const override;
	virtual void OnSelect_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) override;

};
