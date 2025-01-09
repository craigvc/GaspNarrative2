// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomWaypoint.generated.h"

/**Custom userplaced waypoint, added to the map when double clicked */
UCLASS()
class NARRATIVENAVIGATOR_API ACustomWaypoint : public AActor
{
	GENERATED_BODY()
	
public:	

	ACustomWaypoint();

	//Scene root 
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	class USceneComponent* Root;

	//The map marker for the custom waypoint 
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	class UCustomWaypointMarker* WaypointMarker;

};
