// Copyright Narrative Tools 2024. 


#include "Interaction/PlayerInteractionComponent.h"
#include "Interaction/InteractableComponent.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "GAS/NarrativeInteractAbility.h"
#include <GameFramework/Controller.h>
#include <AbilitySystemComponent.h>
#include "Subsystems/NarrativeSaveSubsystem.h"
#include "NarrativeCollisionChannels.h"

#define LOCTEXT_NAMESPACE "InteractionComponent"

// Sets default values for this component's properties
UPlayerInteractionComponent::UPlayerInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = TG_PostPhysics;
	PrimaryComponentTick.bAllowTickOnDedicatedServer = true;

	ViewedInteractable = nullptr;
	LastInteractionCheckTime = 0.f;
	InteractionCheckDistance = 1000.f;
	RemainingInteractTime = -999.f;

	bInteractHeld = false;
	SetAutoActivate(true);
	SetIsReplicatedByDefault(true);
}

//void UPlayerInteractionComponent::BindToInput(class UEnhancedInputComponent* EnhancedInput)
//{
//	if (EnhancedInput)
//	{
//		for (const auto& InteractInput : InteractionInputs)
//		{
//			int32 i = 0;
//			if (IsValid(InteractInput))
//			{
//				EnhancedInput->BindAction(InteractInput, ETriggerEvent::Started, this, &UPlayerInteractionComponent::InteractInputPressed, i);
//				EnhancedInput->BindAction(InteractInput, ETriggerEvent::Completed, this, &UPlayerInteractionComponent::InteractInputReleased, i);
//
//				++i;
//			}
//		}
//	}
//}


void UPlayerInteractionComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Server wasn't able to get this
	if (!OwningPawn && OwningController)
	{
		OwningPawn = Cast<ANarrativeCharacter>(OwningController->GetPawn());
	}

	if (IsActive())
	{
		if (GetWorld()->TimeSince(LastInteractionCheckTime) > InteractionCheckFrequency)
		{
			PerformInteractionCheck(DeltaTime);
		}

		if (bInteractHeld && ViewedInteractable)
		{
			if (RemainingInteractTime > 0.f)
			{
				RemainingInteractTime -= DeltaTime;
			}

			if (RemainingInteractTime <= 0.f && RemainingInteractTime > -998.f)
			{
				//Since we added slots, we should check those, but if no slots are added just do old style instant interaction
				if (ViewedInteractable->InteractionSlots.Num())
				{
					if (ANarrativeCharacter* OwnerChar = Cast<ANarrativeCharacter>(OwningPawn))
					{
						int32 BestInteractionSlot = ViewedInteractable->GetClosestAvailableSlot(this, ViewedInteractable->GetAvailableSlots(true));

						if (BestInteractionSlot != -1 && ClaimInteractionSlot(ViewedInteractable, BestInteractionSlot))
						{
							FInteractionSlotConfig SlotConfig = ViewedInteractable->GetConfigAtSlot(InteractionSlotClaimHandle.HandleIndex);

							if (IsValid(SlotConfig.SlotInteractBehavior) && IsValid(SlotConfig.SlotInteractBehavior->GetInteractAbility()))
							{
								if (UAbilitySystemComponent* NASC = OwnerChar->GetAbilitySystemComponent())
								{
									//When the ability ends, it will release our slot 
									NASC->K2_GiveAbilityAndActivateOnce(SlotConfig.SlotInteractBehavior->GetInteractAbility(), 1);
								}
							}
						}
					}
				}
				else // We still support this legacy style interaction where there aren't any slots and you just instant interact 
				{
					const bool bInteracted = ViewedInteractable->Interact(OwningPawn, this);

					if (bInteracted && ViewedInteractable)
					{
						OnBeginUseInteractable.Broadcast(ViewedInteractable->GetOwner(), ViewedInteractable);
						OnFinishUseInteractable.Broadcast(ViewedInteractable->GetOwner(), ViewedInteractable);
					}
				}

				RemainingInteractTime = -999.f;
			}
		}
	}
}

void UPlayerInteractionComponent::Deactivate()
{
	Super::Deactivate();

	CouldntFindInteractable();
}

void UPlayerInteractionComponent::Load_Implementation()
{
	Super::Load_Implementation();

	//Decided to scrap saving occupied interactable to disk as it just gets really complicated and will likely introduce bugs. 
	//Players can immediately resume interaction, whereas NPCs need to do it via saving their interact goal. 
	//Reclaim the saved slot and resume interaction 
	//if (OccupiedInteractable && OccupiedInteractableSlotIdx != -1)
	//{
	//	if (OccupiedInteractable->InteractionSlots.Num())
	//	{
	//		if (ANarrativeCharacter* OwnerChar = Cast<ANarrativeCharacter>(OwningPawn))
	//		{
	//			if (ClaimInteractionSlot(OccupiedInteractable, OccupiedInteractableSlotIdx))
	//			{
	//				FInteractionSlotConfig SlotConfig = OccupiedInteractable->GetConfigAtSlot(InteractionSlotClaimHandle.HandleIndex);

	//				if (IsValid(SlotConfig.SlotInteractBehavior) && IsValid(SlotConfig.SlotInteractBehavior->GetInteractAbility()))
	//				{
	//					if (UAbilitySystemComponent* NASC = OwnerChar->GetAbilitySystemComponent())
	//					{
	//						//When the ability ends, it will release our slot 
	//						NASC->K2_GiveAbilityAndActivateOnce(SlotConfig.SlotInteractBehavior->GetInteractAbility(), 1);
	//					}
	//				}
	//			}
	//		}
	//	}
	//}
}

void UPlayerInteractionComponent::PerformInteractionCheck(float DeltaTime)
{
	if (OwningController && OwningPawn)
	{
		FVector EyesLoc;
		FRotator EyesRot;

		OwningController->GetPlayerViewPoint(EyesLoc, EyesRot);

		//Add camera dist from pawn as long camera arms shouldn't effect how far you can interact 
		FVector TraceStart = EyesLoc;
		FVector TraceEnd = (EyesRot.Vector() * (InteractionCheckDistance + FVector::Dist(OwningPawn->GetActorLocation(), EyesLoc))) + TraceStart;
		FHitResult TraceHit;

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(OwningPawn);

		const ECollisionChannel InteractionChannel = Narrative_TraceChannel_Interaction;

		if (FMath::IsNearlyZero(InteractionCheckSphereRadius))
		{
			GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd, InteractionChannel, QueryParams);
		}
		else
		{	
			//With sphere checking, see if a line would hit something first, as a sphere might hit something we're not trying to interact with which is annoying. 
			if (!GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd, InteractionChannel, QueryParams))
			{
				const FCollisionShape Sphere = FCollisionShape::MakeSphere(InteractionCheckSphereRadius);
				GetWorld()->SweepSingleByChannel(TraceHit, TraceStart, TraceEnd, FQuat::Identity, InteractionChannel, Sphere, QueryParams);
			}
		}

		//Check if we hit an interactable object
		if (TraceHit.GetActor())
		{
			if (UNarrativeInteractableComponent* InteractableComponent = Cast<UNarrativeInteractableComponent>(TraceHit.GetActor()->GetComponentByClass(UNarrativeInteractableComponent::StaticClass())))
			{
				if (InteractableComponent->IsActive())
				{
					const float Distance = (OwningPawn->GetActorLocation() - TraceHit.ImpactPoint).Size();

					if (Distance <= InteractableComponent->InteractionDistance)
					{
						FoundInteractable(InteractableComponent);
						return;
					}
				}
			}
		}
	}

	CouldntFindInteractable();
}

void UPlayerInteractionComponent::CouldntFindInteractable()
{
	//Tell the interactable we've stopped focusing on it, and clear the current interactable
	if (ViewedInteractable)
	{
		if (ViewedInteractable)
		{
			ViewedInteractable->EndFocus(OwningPawn, this);
			OnLostInteractable.Broadcast(ViewedInteractable);
		}

		EndInteract();
	}

	ViewedInteractable = nullptr;
}

void UPlayerInteractionComponent::FoundInteractable(UNarrativeInteractableComponent* Interactable)
{
	if (Interactable != ViewedInteractable)
	{
		EndInteract();

		if (ViewedInteractable)
		{
			ViewedInteractable->EndFocus(OwningPawn, this);
		}

		ViewedInteractable = Interactable;
		ViewedInteractable->BeginFocus(OwningPawn, this);
		OnFoundInteractable.Broadcast(Interactable);
	}
}

void UPlayerInteractionComponent::ServerBeginInteract_Implementation()
{
	BeginInteract();
}

void UPlayerInteractionComponent::ServerEndInteract_Implementation()
{
	EndInteract();
}

void UPlayerInteractionComponent::BeginInteract()
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerBeginInteract();
	}
	
	bInteractHeld = true;

	OnInteractPressed.Broadcast(this);
	
	FText ErrorMessage;
	if (ViewedInteractable && ViewedInteractable->CanInteract(OwningPawn, this, ErrorMessage))
	{
		ViewedInteractable->BeginInteract(OwningPawn, this);
		RemainingInteractTime = ViewedInteractable->InteractionTime;
	}
}

void UPlayerInteractionComponent::EndInteract()
{
	if (GetOwnerRole() < ROLE_Authority)
	{
		ServerEndInteract();
	}

	if (ViewedInteractable)
	{
		ViewedInteractable->EndInteract(OwningPawn, this);
		RemainingInteractTime = -999.f;
	}

	bInteractHeld = false;
	OnInteractReleased.Broadcast(this);
}

#undef LOCTEXT_NAMESPACE
