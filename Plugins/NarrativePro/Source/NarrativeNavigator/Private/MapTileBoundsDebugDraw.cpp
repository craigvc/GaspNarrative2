// Copyright Narrative Tools 2022. 


#include "MapTileBoundsDebugDraw.h"
#include <DebugRenderSceneProxy.h>

// Sets default values for this component's properties
UMapTileBoundsDebugDraw::UMapTileBoundsDebugDraw(const FObjectInitializer& ObjectInitializer) : UPrimitiveComponent(ObjectInitializer)
{
	// set up some constants
	PrimaryComponentTick.bCanEverTick = false;
	SetCastShadow(false);
#if WITH_EDITORONLY_DATA
	// Note: this makes this component invisible on level instances, not sure why
	SetIsVisualizationComponent(true);
#endif
	SetHiddenInGame(true);
	bVisibleInReflectionCaptures = false;
	bVisibleInRayTracing = false;
	bVisibleInRealTimeSkyCaptures = false;
	AlwaysLoadOnClient = false;
	bIsEditorOnly = true;
}

FPrimitiveSceneProxy* UMapTileBoundsDebugDraw::CreateSceneProxy()
{
	auto NewSceneProxy = new FDebugRenderSceneProxy(this);

	const FTransform& Transform = GetComponentTransform();

	//Lil test 
	NewSceneProxy->Lines.Add(FDebugRenderSceneProxy::FDebugLine(-FVector(MapWidth), FVector(MapWidth), FColor::Red, 10));

	return NewSceneProxy;

}

FBoxSphereBounds UMapTileBoundsDebugDraw::CalcBounds(const FTransform& LocalToWorld) const
{
	FBoxSphereBounds NewBounds;
	NewBounds.Origin = LocalToWorld.GetLocation();
	NewBounds.BoxExtent = FVector(MapWidth);
	NewBounds.SphereRadius = MapWidth;
	return NewBounds;
}
