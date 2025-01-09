// Copyright Narrative Tools 2022. 


#include "MapTileBounds.h"
#include <Components/BoxComponent.h>
#include "MapTileBoundsDebugDraw.h"

// Sets default values
AMapTileBounds::AMapTileBounds()
{

	MapWidth = 10000.f;
	NumTiles = 3;

	MapTileBounds = CreateDefaultSubobject<UBoxComponent>("MapTileBounds");
	MapTileBounds->SetLineThickness(10.f);
	MapTileBounds->SetBoxExtent(FVector(MapWidth / 2, MapWidth / 2, 1.f));
	SetRootComponent(MapTileBounds);

	DebugDraw = CreateDefaultSubobject<UMapTileBoundsDebugDraw>("DebugDraw");

#if WITH_EDITOR

	SetIsSpatiallyLoaded(false);

#endif 

}
#if WITH_EDITOR
void AMapTileBounds::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (MapTileBounds && PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AMapTileBounds, MapWidth))
	{
		MapTileBounds->SetBoxExtent(FVector(MapWidth / 2, MapWidth / 2, 1.f));
		UpdateDebugDraw();
	}

	if (DebugDraw)
	{
		DebugDraw->MapWidth = MapWidth;
		DebugDraw->NumTiles = NumTiles;
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif 
void AMapTileBounds::UpdateDebugDraw()
{
	if (DebugDraw)
	{
		DebugDraw->MarkRenderStateDirty();
	}
}

