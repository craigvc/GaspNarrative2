// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/InventoryAbility_ActivateEquipment.h"

#include "NinjaEquipmentTags.h"
#include "NinjaInventoryGameplayTags.h"

UInventoryAbility_ActivateEquipment::UInventoryAbility_ActivateEquipment(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TargetStateTag = Tag_Equipment_State_Activated;
	AnimationEventTag = Tag_Inventory_Event_Animation_Activate;

	FAbilityTriggerData& Trigger = AbilityTriggers.AddDefaulted_GetRef();
	Trigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	Trigger.TriggerTag = Tag_Inventory_Event_Equipment_Activate;
}
