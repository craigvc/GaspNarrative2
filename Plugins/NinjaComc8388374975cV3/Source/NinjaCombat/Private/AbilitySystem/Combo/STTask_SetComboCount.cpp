// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Combo/STTask_SetComboCount.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"

USTTask_SetComboCount::USTTask_SetComboCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ComboCount = 0;
	bShouldComplete = true;
}

EStateTreeRunStatus USTTask_SetComboCount::EnterState(FStateTreeExecutionContext& Context,
	const FStateTreeTransitionResult& Transition)
{
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		ICombatComboManagerInterface::Execute_SetComboCount(ComboManager, ComboCount);
		return bShouldComplete ? EStateTreeRunStatus::Succeeded : EStateTreeRunStatus::Running;
	}

	return EStateTreeRunStatus::Failed;
}
