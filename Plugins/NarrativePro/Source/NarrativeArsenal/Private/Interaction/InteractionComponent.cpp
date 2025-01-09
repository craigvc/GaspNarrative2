// Copyright Narrative Tools 2024. 

#include "Interaction/InteractionComponent.h"
#include "Interaction/InteractableComponent.h"
#include <GameFramework/PlayerController.h>
#include <GameFramework/Pawn.h>
#include <Engine/World.h>
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include <InputAction.h>
#include "UnrealFramework/NarrativeCharacter.h"
#include "GAS/NarrativeInteractAbility.h"
#include <AbilitySystemComponent.h>
#include "Subsystems/NarrativeSaveSubsystem.h"

#define LOCTEXT_NAMESPACE "InteractionComponent"

// Sets default values for this component's properties
UNarrativeInteractionComponent::UNarrativeInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = TG_PostPhysics;
	PrimaryComponentTick.bAllowTickOnDedicatedServer = true;

	SetAutoActivate(true);
	SetIsReplicatedByDefault(true);

	OccupiedInteractableSlotIdx = -1;
}

void UNarrativeInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	OwningController = Cast<AController>(GetOwner());

	if (OwningController)
	{
		OwningPawn = Cast<ANarrativeCharacter>(OwningController->GetPawn());
	}
}


void UNarrativeInteractionComponent::Load_Implementation()
{
	//Automatically resolve the GUID that points to our occupied interactable 
	if (OccupiedInteractableGUID.IsValid() && OccupiedInteractableSlotIdx != -1)
	{
		if (UNarrativeSaveSubsystem* NSS = GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
		{
			if (AActor* InteractableActor = NSS->LookupActorByGUID(OccupiedInteractableGUID))
			{
				if (UNarrativeInteractableComponent* InteractableComp = Cast<UNarrativeInteractableComponent>(InteractableActor->GetComponentByClass(UNarrativeInteractableComponent::StaticClass())))
				{
					SetOccupiedInteractable(InteractableComp, OccupiedInteractableSlotIdx);
				}
			}
		}
	}
}

void UNarrativeInteractionComponent::SetOccupiedInteractable(class UNarrativeInteractableComponent* Interactable, const int32 SlotIdx)
{
	if (Interactable)
	{
		OccupiedInteractable = Interactable;
		OccupiedInteractableSlotIdx = SlotIdx;

		//We use the interactables stable actor guid to restore the interactable when we load back in 
		if (AActor* InteractableOwner = OccupiedInteractable->GetOwner())
		{
			if (InteractableOwner->Implements<UNarrativeStableActor>())
			{
				OccupiedInteractableGUID = INarrativeStableActor::Execute_GetActorGUID(InteractableOwner);
			}
		}
	}
	else
	{
		OccupiedInteractable = nullptr;
		OccupiedInteractableSlotIdx = -1;
		OccupiedInteractableGUID = FGuid();
	}
}

bool UNarrativeInteractionComponent::ClaimInteractionSlot(class UNarrativeInteractableComponent* Interactable, const int32 SlotIdx)
{
	if (Interactable)
	{
		//Free our slot if we have one already 
		if (InteractionSlotClaimHandle.IsValidHandle())
		{
			if (UNarrativeInteractableComponent* CurrentInteractable = InteractionSlotClaimHandle.HandleOwner.Get())
			{
				CurrentInteractable->UpdateSlotStatus(InteractionSlotClaimHandle, EInteractionSlotStatus::ISS_Free);
			}
		}

		FInteractionSlotClaimHandle Handle = Interactable->ClaimSlot(this, SlotIdx);

		if (Handle.IsValidHandle())
		{
			InteractionSlotClaimHandle = Handle;
			return true;
		}
	}

	return false; 
}

void UNarrativeInteractionComponent::ReleaseInteractionSlot()
{
	//Free our slot 
	if (InteractionSlotClaimHandle.IsValidHandle())
	{
		if (UNarrativeInteractableComponent* Interactable = InteractionSlotClaimHandle.HandleOwner.Get())
		{
			Interactable->UpdateSlotStatus(InteractionSlotClaimHandle, EInteractionSlotStatus::ISS_Free);
		}
	}
	InteractionSlotClaimHandle = FInteractionSlotClaimHandle();
}

#undef LOCTEXT_NAMESPACE
