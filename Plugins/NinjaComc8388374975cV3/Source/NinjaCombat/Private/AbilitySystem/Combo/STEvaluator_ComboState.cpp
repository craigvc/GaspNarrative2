// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Combo/STEvaluator_ComboState.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"

USTEvaluator_ComboState::USTEvaluator_ComboState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bInComboWindow = false;
	ComboCount = 0;
	TargetCount = 0;
}

void USTEvaluator_ComboState::Tick(FStateTreeExecutionContext& Context, const float DeltaTime)
{
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		bInComboWindow = ICombatComboManagerInterface::Execute_InComboWindow(ComboManager);
		ComboCount = ICombatComboManagerInterface::Execute_GetComboCount(ComboManager);
		TargetCount = ICombatComboManagerInterface::Execute_GetTargetCount(ComboManager);
	}
	else
	{
		bInComboWindow = false;
		ComboCount = 0;
		TargetCount = 0;
	}
}
