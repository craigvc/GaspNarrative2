// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/NinjaCombatMotionWarpingTargetProvider.h"

#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "AbilitySystem/Interfaces/CombatTargetReceiverInterface.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

void UNinjaCombatMotionWarpingTargetProvider::RequestWarpTarget_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	if (ensure(IsValid(CombatAbility) && CombatAbility->Implements<UCombatTargetReceiverInterface>()))
	{
		AActor* CombatTarget = nullptr;
		const UActorComponent* TargetManager = CombatAbility->GetTargetManagerComponentFromActorInfo();
		
		if (ensureMsgf(IsValid(TargetManager), TEXT("Target manager not assigned to the avatar.")))
		{
			check(TargetManager->Implements<UCombatTargetManagerInterface>());
			CombatTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetManager);
		}
		
		ICombatTargetReceiverInterface::Execute_ReceiveCombatTarget(CombatAbility, CombatTarget);
	}
}
