// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/InventoryAbility_DeactivateEquipment.h"

#include "NinjaEquipmentTags.h"
#include "NinjaInventoryGameplayTags.h"

UInventoryAbility_DeactivateEquipment::UInventoryAbility_DeactivateEquipment(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TargetStateTag = Tag_Equipment_State_Deactivated;
	AnimationEventTag = Tag_Inventory_Event_Animation_Deactivate;

	FAbilityTriggerData& Trigger = AbilityTriggers.AddDefaulted_GetRef();
	Trigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	Trigger.TriggerTag = Tag_Inventory_Event_Equipment_Deactivate;	
}
