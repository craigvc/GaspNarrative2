// Copyright Narrative Tools 2022. 


#include "NarrativeNavigationComponent.h"
#include "NavigationMarkerComponent.h"
#include "MapTileBounds.h"
#include <EngineUtils.h>
#include <Kismet/GameplayStatics.h>
#include "CustomWaypoint.h"
#include "PointOfInterest.h"
#include <Net/UnrealNetwork.h>
#include "MapTileComponent.h"

// Sets default values for this component's properties
UNarrativeNavigationComponent::UNarrativeNavigationComponent()
{
	SetIsReplicatedByDefault(true);
	MapWidth = 5000.f;
	MapOrigin = FVector2D::ZeroVector;
	MaxCustomWaypoints = 5;
}


void UNarrativeNavigationComponent::BeginPlay()
{
	Super::BeginPlay();

	//Try pull our navdata from the maptilebounds should one exist 
	for (TActorIterator<AMapTileBounds> It(GetWorld()); It; ++It)
	{
		MapTileBounds = *It;

		if (MapTileBounds)
		{
			MapWidth = MapTileBounds->MapWidth;
			MapOrigin = FVector2D(MapTileBounds->GetActorLocation());

			break;
		}
	}
}

void UNarrativeNavigationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UNarrativeNavigationComponent, DiscoveredPOIs, COND_OwnerOnly);
}

bool UNarrativeNavigationComponent::AddMarker(class UNavigationMarkerComponent* NavMarker)
{
	if (NavMarker)
	{
		if (UMapTileComponent* MapTile = Cast<UMapTileComponent>(NavMarker))
		{
			MapTiles.Add(MapTile);
		}

		Markers.Add(NavMarker);
		OnMarkerAdded.Broadcast(NavMarker);
		return true;
	}

	return false;
}

bool UNarrativeNavigationComponent::RemoveMarker(class UNavigationMarkerComponent* NavMarker)
{
	if (NavMarker)
	{
		if (UMapTileComponent* MapTile = Cast<UMapTileComponent>(NavMarker))
		{
			MapTiles.Remove(MapTile);
		}

		Markers.Remove(NavMarker);
		OnMarkerRemoved.Broadcast(NavMarker);
		return true;
	}
	return false;
}

void UNarrativeNavigationComponent::ServerSelectMarker_Implementation(class UNavigationMarkerComponent* Marker)
{
	SelectMarker(Marker);
}

void UNarrativeNavigationComponent::SelectMarker(class UNavigationMarkerComponent* Marker)
{
	if (APlayerController* OwnerPC = Cast<APlayerController>(GetOwner()))
	{
		if (Marker && Marker->CanInteract(this, OwnerPC))
		{
			if (GetOwnerRole() < ROLE_Authority)
			{
				ServerSelectMarker(Marker);
			}

			Marker->OnSelect(this, OwnerPC);
			Marker->OnSelected.Broadcast(this, OwnerPC);
		}
	}
}

bool UNarrativeNavigationComponent::SetMapLayer(FGameplayTag NewLayer, FGameplayTagContainer Domains)
{
	for (auto& MapTile : MapTiles)
	{
		if (MapTile)
		{
			const bool bSucceeded = MapTile->SetMapLayer(NewLayer, Domains);

			if (!bSucceeded)
			{
				return false;
			}
		}
	}

	return true;
}

void UNarrativeNavigationComponent::DiscoverPOI(const FGameplayTag& POITag)
{
	if (!DiscoveredPOIs.HasTag(POITag))
	{
		DiscoveredPOIs.AddTagFast(POITag);
		OnPOIDiscovered.Broadcast(POITag);

		//Find the marker in the world that represents this POI and refresh it 
		if (UNavigationSubsystem* NavSubsystem = GetWorld()->GetSubsystem<UNavigationSubsystem>())
		{
			FPointOfInterestLocation POI;

			if (NavSubsystem->GetPointOfInterest(POI, POITag))
			{
				if (UNavigationMarkerComponent* Marker = POI.POIMarker.Get())
				{
					Marker->RefreshMarker();
				}
			}
		}
	}
}

bool UNarrativeNavigationComponent::HasDiscoveredPOI(const FGameplayTag& POITag) const
{
	return DiscoveredPOIs.HasTag(POITag);
}

ACustomWaypoint* UNarrativeNavigationComponent::PlaceCustomWaypoint(const FTransform& Transform)
{
	if (CustomWaypoints.Num() + 1 <= MaxCustomWaypoints)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.bNoFail = true;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Owner = GetOwner();

		if (ACustomWaypoint* Waypoint = GetWorld()->SpawnActor<ACustomWaypoint>(ACustomWaypoint::StaticClass(), Transform, SpawnParams))
		{
			CustomWaypoints.AddUnique(Waypoint);

			return Waypoint;
		}
	}

	return nullptr;
}

void UNarrativeNavigationComponent::RemoveCustomWaypoint(class ACustomWaypoint* Waypoint)
{
	if (Waypoint)
	{
		CustomWaypoints.Remove(Waypoint);
		Waypoint->Destroy();
	}
}

void UNarrativeNavigationComponent::PrepareForSave_Implementation()
{
	for (auto& Waypoint : CustomWaypoints)
	{
		if (Waypoint)
		{
			SavedCustomMarkerTransforms.Add(Waypoint->GetActorTransform());
		}
	}
}

void UNarrativeNavigationComponent::Load_Implementation()
{
	//Destroy our existing waypoints, and load the ones in the save file  
	for (auto& Waypoint : CustomWaypoints)
	{
		if (Waypoint)
		{
			Waypoint->Destroy();
		}
	}
	CustomWaypoints.Empty();

	for (auto& MarkerTransform : SavedCustomMarkerTransforms)
	{
		PlaceCustomWaypoint(MarkerTransform);
	}

	/** Our player data loads after the marker data has loaded, so the markers won't have the correct color yet. Go through the markers we've found, and ask them for an update. 
	TODO in the long term, having a system for LoadingPhases may be a cleaner solution to these sorts of hacks, but so far we've been able to get by fine without a phased system - could look into this in future however*/
	if (UNavigationSubsystem* NavSubsystem = GetWorld()->GetSubsystem<UNavigationSubsystem>())
	{
		for (auto& POI : DiscoveredPOIs)
		{
			//Find the marker in the world that represents this POI and refresh it 
			FPointOfInterestLocation POIData;

			if (NavSubsystem->GetPointOfInterest(POIData, POI))
			{
				if (UNavigationMarkerComponent* Marker = POIData.POIMarker.Get())
				{
					Marker->RefreshMarker();
				}
			}
		}
	}

	//DiscoveredPOIs = NavigatorSave->DiscoveredPOIs;
	// 
	//for (TActorIterator<ANavigatorPointOfInterest> It(GetWorld()); It; ++It)
	//{
	//	if (It)
	//	{
	//		if (ANavigatorPointOfInterest* POI = *It)
	//		{
	//			POI->SetDiscovered(HasDiscoveredPOI(POI));
	//		}
	//	}
	//}

}

