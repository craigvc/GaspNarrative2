// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include <ComponentVisualizer.h>

/**
 * Visualizer for InteractableComponent
 */
class NARRATIVEARSENALEDITOR_API FNarrativeInteractableComponentVisualizer : public FComponentVisualizer
{
protected:
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
};
