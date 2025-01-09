// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigatorStatics.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENAVIGATOR_API UNavigatorStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// Add a navigation marker to the given actor! Navigator will automatically destroy the marker when the Navigation marker or its owning actor are destroyed. 
	UFUNCTION(BlueprintCallable, Category="Navigation", meta=(UnsafeDuringActorConstruction = "true"))
	static UNavigationMarkerComponent* AddNavigationMarkerToActor(class AActor* ActorToMark, const FNavigationMarkerSettings& MarkerSettings, UPARAM(meta = (Categories = "Navigator.NavigatorTypes")) const FGameplayTagContainer& MarkerDomain);

};
