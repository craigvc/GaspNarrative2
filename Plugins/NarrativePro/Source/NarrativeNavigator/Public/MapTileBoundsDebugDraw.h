// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MapTileBoundsDebugDraw.generated.h"

UCLASS( )
class NARRATIVENAVIGATOR_API UMapTileBoundsDebugDraw : public UPrimitiveComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMapTileBoundsDebugDraw(const FObjectInitializer& ObjectInitializer);

	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;

	/** The width our map should be, in unreal units (cm)*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Map Bounds")
	float MapWidth;
	
	/*The number of 1024x1024 tiles that should make up the map. For smaller maps you could use a single tile - for large open world maps you'll want more
	or your map will become blurry and low resolution. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Map Bounds")
	int32 NumTiles;
};
