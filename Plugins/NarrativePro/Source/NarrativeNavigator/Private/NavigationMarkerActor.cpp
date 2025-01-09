// Copyright Narrative Tools 2024. 


#include "NavigationMarkerActor.h"
#include "NavigationMarkerComponent.h"
#include "NavigatorGameplayTags.h"

// Sets default values
ANavigationMarkerActor::ANavigationMarkerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);

	MarkerComponent = CreateDefaultSubobject<UNavigationMarkerComponent>(TEXT("NavigationMarker"));

	FGameplayTagContainer MarkerDomain;

	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Compass);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Minimap);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap);
	MarkerDomain.AddTag(FNavigatorGameplayTags::Get().NavigatorTypes_Screenspace);

	MarkerComponent->SetDefaultDomains(MarkerDomain);
}

