// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/Selectors/Selector_AttachedActor.h"

#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/Pawn.h"

USelector_AttachedActor::USelector_AttachedActor()
{
	ComponentTag = Tag_Equipment_Component;
}

USceneComponent* USelector_AttachedActor::SelectComponent_Implementation(const UNinjaEquipment* Equipment) const
{
	const APawn* OwnerPawn = Equipment->GetPawn();
	const FName TagName = ComponentTag.GetTagName();

	TArray<AActor*> AttachedActors; 
	OwnerPawn->GetAttachedActors(AttachedActors);

	for (const AActor* AttachedActor : AttachedActors)
	{
		USceneComponent* CandidateComponent = AttachedActor->FindComponentByTag<USceneComponent>(TagName);
		if (IsValid(CandidateComponent))
		{
			return CandidateComponent;
		}
	}

	return nullptr;
}
