// Copyright Narrative Tools 2024. 


#include "Interaction/InteractableRenderingComponent.h"
#include "DebugRenderSceneProxy.h"
#include "ObjectEditorUtils.h"
#include <Engine/World.h>
#include "Interaction/InteractableComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InteractableRenderingComponent)

//----------------------------------------------------------------------//
// FInteractableRenderingSceneProxy
//----------------------------------------------------------------------//
class FInteractableRenderingSceneProxy final : public FDebugRenderSceneProxy
{
	typedef TPair<FVector, FVector> FVectorPair;
public:
	SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	/** Initialization constructor. */
	FInteractableRenderingSceneProxy(const UInteractableRenderingComponent& InComponent)
		: FDebugRenderSceneProxy(&InComponent)
	{
//		AActor* Owner = InComponent.GetOwner();
//		if (Owner == nullptr)
//		{
//			return;
//		}
//
//		UNarrativeInteractableComponent* InteractableComp = Owner->FindComponentByClass<UNarrativeInteractableComponent>();
//		if (InteractableComp == nullptr)
//		{
//			return;
//		}
//
//		// For loaded instances, we draw slots only when selected but 
//		// for other cases (e.g. instances newly added to world, preview actors, etc.) we
//		// want to draw all the time to improve authoring.
//		bDrawEvenIfNotSelected = !Owner->HasAnyFlags(RF_WasLoaded);
//
//		constexpr float DebugCylinderRadius = 40.f;
//		constexpr float DebugCylinderHalfHeight = 100.f;
//		FColor DebugColor = FColor::Yellow;
//
//		const FTransform OwnerLocalToWorld = Owner->GetTransform();
//
//		for (int32 i = 0; i < InteractableComp->InteractionSlots.Num(); ++i)
//		{
//			if (InteractableComp->InteractionSlots.IsValidIndex(i))
//			{
//				FInteractionSlotConfig Config = InteractableComp->InteractionSlots[i];
//
//				TOptional<FTransform> Transform = Config.SlotTransform * OwnerLocalToWorld;
//				if (!Transform.IsSet())
//				{
//					continue;
//				}
//#if WITH_EDITORONLY_DATA
//				//DebugColor = Definition->GetSlots()[i].DEBUG_DrawColor;
//#endif
//				const FVector DebugPosition = Transform.GetValue().GetLocation();
//				const FVector Direction = Transform.GetValue().GetRotation().GetForwardVector();
//				Cylinders.Emplace(DebugPosition, DebugCylinderRadius, DebugCylinderHalfHeight, DebugColor);
//				ArrowLines.Emplace(DebugPosition, DebugPosition + Direction * 2.0f * DebugCylinderRadius, DebugColor);
//			}
//		}
	}

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
	{
		FPrimitiveViewRelevance Result;
		Result.bDrawRelevance = IsShown(View) && (IsSelected() || bDrawEvenIfNotSelected);
		Result.bDynamicRelevance = true;
		// ideally the TranslucencyRelevance should be filled out by the material, here we do it conservative
		Result.bSeparateTranslucency = Result.bNormalTranslucency = IsShown(View);
		return Result;
	}

	bool bDrawEvenIfNotSelected = true;
};

//----------------------------------------------------------------------//
// UInteractableRenderingComponent
//----------------------------------------------------------------------//
UInteractableRenderingComponent::UInteractableRenderingComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//// Allows updating in game, while optimizing rendering for the case that it is not modified
	//Mobility = EComponentMobility::Stationary;

	//BodyInstance.SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

	//bIsEditorOnly = true;

	//SetGenerateOverlapEvents(false);
}

FPrimitiveSceneProxy* UInteractableRenderingComponent::CreateSceneProxy()
{
	return new FInteractableRenderingSceneProxy(*this);
}

FBoxSphereBounds UInteractableRenderingComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	FBox BoundingBox(EForceInit::ForceInitToZero);

	if (HasAnyFlags(RF_BeginDestroyed) == false && GetAttachParent() != nullptr)
	{
		UNarrativeInteractableComponent* InteractableComp = nullptr;

		const AActor* Owner = GetOwner();
		if (Owner)
		{
			BoundingBox += Owner->GetActorLocation();
			InteractableComp = Owner->FindComponentByClass<UNarrativeInteractableComponent>();
		}

		if (InteractableComp)
		{
			BoundingBox += InteractableComp->GetInteractableBounds();
		}
	}

	return FBoxSphereBounds(BoundingBox);
}

#if WITH_EDITOR
void UInteractableRenderingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName InteractablesName = TEXT("Interactables");

	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property
		&& FObjectEditorUtils::GetCategoryFName(PropertyChangedEvent.Property) == InteractablesName)
	{
		MarkRenderStateDirty();
	}
}
#endif // WITH_EDITOR
