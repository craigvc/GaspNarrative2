// Copyright Narrative Tools 2024. 


#include "NavigationSubsystem.h"
#include "POINavigationMarker.h"
#include <EngineUtils.h>

UNavigationSubsystem::UNavigationSubsystem()
{

}

void UNavigationSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	//Any actors with a POI nav marker should be auto-cached - todo use interface to find all actors that want to be POIs
	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;

		if (UPOINavigationMarker* NavMarker = Cast<UPOINavigationMarker>(Actor->GetComponentByClass(UPOINavigationMarker::StaticClass())))
		{
			AddPointOfInterest_Actor(NavMarker->POITag, NavMarker->POIDisplayName, Actor);
		}
	}
}

bool UNavigationSubsystem::AddPointOfInterest_Vector(FGameplayTag POITag, FText POIDisplayName, const FVector& POILocation)
{
	if (POITag.IsValid() && !POIDisplayName.IsEmptyOrWhitespace())
	{
		FPointOfInterestLocation POI;

		POI.POITag = POITag;
		POI.POIDisplayName = POIDisplayName;
		POI.POILocation = POILocation;

		PointsOfInterest.Add(POITag, POI);

		return true;
	}

	return false; 
}

bool UNavigationSubsystem::AddPointOfInterest_Actor(FGameplayTag POITag, FText POIDisplayName, AActor* POIActor)
{
	if (POITag.IsValid() && !POIDisplayName.IsEmptyOrWhitespace() && IsValid(POIActor))
	{
		FPointOfInterestLocation POI;

		POI.POITag = POITag;
		POI.POIDisplayName = POIDisplayName;
		POI.POIActor = POIActor;
		POI.POILocation = POIActor->GetActorLocation();

		PointsOfInterest.Add(POITag, POI);

		return true;
	}

	return false;
}

bool UNavigationSubsystem::AddPointOfInterest_FromPOIMarker(class UPOINavigationMarker* Marker)
{
	if (Marker->POITag.IsValid() && !Marker->POIDisplayName.IsEmptyOrWhitespace())
	{
		if (AActor* Owner = Marker->GetOwner())
		{
			FPointOfInterestLocation POI;

			POI.POITag = Marker->POITag;
			POI.POIDisplayName = Marker->POIDisplayName;
			POI.POIActor = Owner;
			POI.POILocation = Owner->GetActorLocation();
			POI.POIMarker = Marker;

			PointsOfInterest.Add(Marker->POITag, POI);

			return true;
		}
	}

	return false;
}

bool UNavigationSubsystem::GetPointOfInterest(FPointOfInterestLocation& OutPointOfInterest, const FGameplayTag& POITag)
{
	if (POITag.IsValid() && PointsOfInterest.Contains(POITag))
	{
		OutPointOfInterest = *PointsOfInterest.Find(POITag);

		//If we have an actor update the vector inside so BPs have it 
		if (AActor* POIActor = OutPointOfInterest.POIActor.Get())
		{
			OutPointOfInterest.POILocation = POIActor->GetActorLocation();
		}

		return true;
	}

	return false; 
}

bool UNavigationSubsystem::GetNearestPOIToPoint(FPointOfInterestLocation& OutPointOfInterest, const FVector& TestLocation)
{
	if (PointsOfInterest.Num() <= 0)
	{
		return false; 
	}
	
	FPointOfInterestLocation BestPOI;
	float BestDistance = -1.f;

	for (auto& POIKVP : PointsOfInterest)
	{
		FPointOfInterestLocation& POI = POIKVP.Value;

		const float Dist = FVector::Dist2D(POI.GetPOILocation(), TestLocation);

		if (Dist < BestDistance || BestDistance == -1.f)
		{
			BestPOI = POI;
			BestDistance = Dist;
		}
	}

	OutPointOfInterest = BestPOI;
	return BestDistance != -1.f;
}

FVector FPointOfInterestLocation::GetPOILocation() const
{
	if (POIActor.IsValid())
	{
		return POIActor->GetActorLocation();
	}

	return POILocation;
}
