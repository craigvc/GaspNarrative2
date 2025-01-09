// Copyright Narrative Tools 2022. 


#include "MapTileComponent.h"
#include "NarrativeNavigator.h"
#include "NavigatorGameplayTags.h"

UMapTileComponent::UMapTileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultMarkerSettings.bOverride_bShowActorRotation = true;

	//Map tiles should never show up on the compass, just on the minimap and world maps. 
	MarkerDomain.RemoveTag(FNavigatorGameplayTags::Get().NavigatorTypes_Compass);
}

bool UMapTileComponent::SetMapLayer(const FGameplayTag& NewLayer, const FGameplayTagContainer& Domains)
{
	if (!MapTileLayers.Contains(NewLayer))
	{
		return false;
	}

	//Just do minimap and world map, map layers dont apply to compass and screenspace 
	if (Domains.HasTag(FNavigatorGameplayTags::Get().NavigatorTypes_Minimap))
	{
		MinimapOverrideSettings.bOverride_LocationIcon = true;
		MinimapOverrideSettings.LocationIcon = MapTileLayers[NewLayer];
	}	

	if (Domains.HasTag(FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap))
	{
		WorldMapOverrideSettings.bOverride_LocationIcon = true;
		WorldMapOverrideSettings.LocationIcon = MapTileLayers[NewLayer];
	}

	RefreshMarker();

	return true;
}

bool UMapTileComponent::CanInteract_Implementation(class UNarrativeNavigationComponent* Selector, class APlayerController* SelectorOwner) const
{
	//Map tiles are static icons that we definitely dont want to interact with in any way - they are purely visual 
	return false;
}
