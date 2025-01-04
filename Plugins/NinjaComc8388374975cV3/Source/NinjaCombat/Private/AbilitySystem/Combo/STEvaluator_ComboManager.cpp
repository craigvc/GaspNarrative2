// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Combo/STEvaluator_ComboManager.h"

#include "NinjaCombatFunctionLibrary.h"
#include "StateTreeExecutionContext.h"

void FStateTreeComboManagerEvaluator::TreeStart(FStateTreeExecutionContext& Context) const
{
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
	const AActor* ComboManagerOwner = InstanceData.ComboManagerOwner;
	InstanceData.ComboManager = UNinjaCombatFunctionLibrary::GetComboManagerComponent(ComboManagerOwner);
}
