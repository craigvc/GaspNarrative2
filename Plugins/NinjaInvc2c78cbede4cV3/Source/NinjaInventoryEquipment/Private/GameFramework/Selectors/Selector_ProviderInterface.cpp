// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/Selectors/Selector_ProviderInterface.h"

#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/EquipmentSceneComponentProviderInterface.h"

USelector_ProviderInterface::USelector_ProviderInterface()
{
	ComponentTags = FGameplayTagContainer::EmptyContainer;
}

USceneComponent* USelector_ProviderInterface::SelectComponent_Implementation(const UNinjaEquipment* Equipment) const
{
	USceneComponent* Component = nullptr;
	
	const APawn* PawnOwner = Equipment->GetPawn();
	if (IsValid(PawnOwner) && PawnOwner->Implements<UEquipmentSceneComponentProviderInterface>())
	{
		Component = IEquipmentSceneComponentProviderInterface::Execute_GetSceneComponent(PawnOwner, Equipment, ComponentTags);
	}

	return Component;
}
