// Copyright Narrative Tools 2024. 

#include "InteractableComponent.h"
#include <UObject/ConstructorHelpers.h>
#include <Materials/MaterialInterface.h>
#include <Components/MeshComponent.h>
#include <GameFramework/Actor.h>
#include "InteractionComponent.h"
#include <InputAction.h>

#define LOCTEXT_NAMESPACE "InteractableComponent"

// Sets default values for this component's properties
UNarrativeInteractableComponent::UNarrativeInteractableComponent()
{
	InteractionTime = 0.f;
	InteractionDistance = 200.f;
	InteractableNameText = LOCTEXT("InteractableNameText", "Interactable Object");
	InteractableActionText = LOCTEXT("InteractableActionText", "Interact");
	
	auto FocusedOverlayFinder = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("/Script/Engine.Material'/NarrativePro/NarrativeInteraction/Materials/M_Pulse.M_Pulse'"));
	if (FocusedOverlayFinder.Succeeded())
	{
		FocusedOverlayMaterial = FocusedOverlayFinder.Object;
	}

	SetAutoActivate(true);
	SetComponentTickEnabled(false);
}


void UNarrativeInteractableComponent::Deactivate()
{
	Super::Deactivate();
}

void UNarrativeInteractableComponent::SetInteractableNameText(const FText& NewNameText)
{
	InteractableNameText = NewNameText;
}

void UNarrativeInteractableComponent::SetInteractableActionText(const FText& NewActionText)
{
	InteractableActionText = NewActionText;
}

void UNarrativeInteractableComponent::InteractInputPressed(int32 i)
{
	if (Interactions.IsValidIndex(i))
	{
		UE_LOG(LogTemp, Warning, TEXT("Valid input %s was pressed! "), *Interactions[i].InteractableNameText.ToString());
	}
}

void UNarrativeInteractableComponent::InteractInputReleased(int32 i)
{
	if (Interactions.IsValidIndex(i))
	{
		UE_LOG(LogTemp, Warning, TEXT("Valid input %s was released! "), *Interactions[i].InteractableNameText.ToString());
	}
}

void UNarrativeInteractableComponent::BeginFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	if (!IsActive() || !GetOwner() || !Interactor)
	{
		return;
	}

	OnBeginFocus.Broadcast(Interactor, InteractionComp);

	if (GetNetMode() != NM_DedicatedServer)
	{
		TInlineComponentArray<UMeshComponent*> Meshes;
		GetOwner()->GetComponents(Meshes);

		for (auto& Mesh : Meshes)
		{
			if (Mesh)
			{
				Mesh->SetOverlayMaterial(FocusedOverlayMaterial);
			}
		}
	}
}

void UNarrativeInteractableComponent::EndFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	OnEndFocus.Broadcast(Interactor, InteractionComp);

	if (GetNetMode() != NM_DedicatedServer)
	{
		TInlineComponentArray<UMeshComponent*> Meshes;
		GetOwner()->GetComponents(Meshes);

		for (auto& Mesh : Meshes)
		{
			if (Mesh)
			{
				Mesh->SetOverlayMaterial(nullptr);
			}
		}
	}
}

void UNarrativeInteractableComponent::BeginInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	OnBeginInteract(Interactor, InteractionComp);
	OnBeginInteracted.Broadcast(Interactor, InteractionComp);
}

void UNarrativeInteractableComponent::EndInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	OnEndInteract(Interactor, InteractionComp);
	OnEndInteracted.Broadcast(Interactor, InteractionComp);
}

bool UNarrativeInteractableComponent::Interact(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{
	FText ErrorMessage;

	const bool bCanInteract = CanInteract(Interactor, InteractionComp, ErrorMessage);

	if (bCanInteract)
	{
		OnInteract(Interactor, InteractionComp);
		OnInteracted.Broadcast(Interactor, InteractionComp);
	}

	return bCanInteract;
}

void UNarrativeInteractableComponent::OnInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{

}

void UNarrativeInteractableComponent::OnBeginInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{

}

void UNarrativeInteractableComponent::OnEndInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp)
{

}

bool UNarrativeInteractableComponent::CanInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& ErrorMessage)
{
	return true; 
}

#undef LOCTEXT_NAMESPACE
