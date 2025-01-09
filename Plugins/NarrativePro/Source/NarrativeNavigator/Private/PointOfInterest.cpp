// Copyright Narrative Tools 2022. 


#include "PointOfInterest.h"
#include "NarrativeNavigationComponent.h"
#include "POINavigationMarker.h"
#include <Components/SphereComponent.h>
#include <GameFramework/Pawn.h>
#include <GameFramework/PlayerController.h>

#define LOCTEXT_NAMESPACE "PointOfInterest"

ANavigatorPointOfInterest::ANavigatorPointOfInterest()
{
	
	POISphere = CreateDefaultSubobject<USphereComponent>("POISphere");
	POISphere->SetSphereRadius(500.f);
	POISphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	POISphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SetRootComponent(POISphere);

	bAllowFastTravel = true;

	NavigationMarker = CreateDefaultSubobject<UPOINavigationMarker>("NavigationMarker");
	
}

void ANavigatorPointOfInterest::BeginPlay()
{
	Super::BeginPlay();
}

void ANavigatorPointOfInterest::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
}

void ANavigatorPointOfInterest::SetDiscovered(const bool bDiscovered)
{	
	//Now that the marker has been found, we can refresh its marker, which will cause its color to change 
	if (NavigationMarker)
	{
		NavigationMarker->RefreshMarker();
	}
}

#undef LOCTEXT_NAMESPACE 