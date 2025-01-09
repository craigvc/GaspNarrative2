// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "NavigationMarkerComponent.h"
#include "POINavigationMarker.generated.h"

/**
 * Special Navigation marker component intended for points of interest. This marker will also cache its owners location with the POI system, so 
 * you can quickly access points of interest via their tag. 
 */
UCLASS(Blueprintable, DisplayName = "POI Navigation Marker", meta = (BlueprintSpawnableComponent))
class NARRATIVENAVIGATOR_API UPOINavigationMarker : public UNavigationMarkerComponent
{
	GENERATED_BODY()
	
	UPOINavigationMarker(const FObjectInitializer& ObjectInitializer);

public:

	/** The tag for this location*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Point Of Interest", meta = (Categories = "Navigator.PointOfInterest"))
	FGameplayTag POITag;

	/** The display name for this poi when we display it in the UI */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Point Of Interest")
	FText POIDisplayName;

protected: 

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif 

	virtual void BeginPlay() override;

	virtual void OnSelect_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) override;
	virtual bool CanInteract_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const override;
	FText GetMarkerActionText_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const override;

	virtual FText GetMarkerDisplayText_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const;
	virtual FLinearColor GetMarkerColor_Implementation(class APlayerController* Viewer, const FGameplayTag& NavigatorType) const;

};
