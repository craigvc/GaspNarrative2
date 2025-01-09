// Copyright Narrative Tools 2022. 


#include "CustomWaypoint.h"
#include "CustomWaypointMarker.h"

// Sets default values
ACustomWaypoint::ACustomWaypoint()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	WaypointMarker = CreateDefaultSubobject<UCustomWaypointMarker>(TEXT("WaypointMarker"));

	#if WITH_EDITOR

	SetIsSpatiallyLoaded(false);

	#endif 


}
