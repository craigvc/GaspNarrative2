// Ninja Bear Studio Inc., all rights reserved.
#include "AI/StateTree/StateTreeCombatantDeadCondition.h"

#include "NinjaCombatFunctionLibrary.h"
#include "StateTreeExecutionContext.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

bool FStateTreeCombatantDeadCondition::TestCondition(FStateTreeExecutionContext& Context) const
{
	const AActor* CombatantActor = CastChecked<AActor>(Context.GetOwner());
	if (IsValid(CombatantActor))
	{
		if (CombatantActor->IsA<AController>())
		{
			const AController* Controller = Cast<AController>(CombatantActor);
			CombatantActor = Controller->GetPawn();
		}
	}

	if (!IsValid(CombatantActor))
	{
		return false;
	}

	const UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(CombatantActor);
	if (!UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
	{
		return false;
	}

	const bool bIsDead = ICombatDamageManagerInterface::Execute_IsDead(DamageManager);
	return bIsDead ^ bInvert;
}
