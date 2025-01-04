// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_Dissolve.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Curves/CurveFloat.h"
#include "Interfaces/Components/CombatDissolveManagerInterface.h"

UDamageHandler_Dissolve::UDamageHandler_Dissolve()
{
}

void UDamageHandler_Dissolve::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	if (DissolveSettings.IsEmpty() || !IsDead(Parameters) || !IsValid(DamageManager))
	{
		return;
	}
	
	UActorComponent* DissolveManager;
	
	if (DamageManager->Implements<UCombatDissolveManagerInterface>())
	{
		// Fastest search path. Our damage manager is also the dissolve manager.
		DissolveManager = DamageManager;
	}
	else
	{
		// Retrieve the Component using the Combat Manager, since it can create it as well.
		const AActor* Owner = DamageManager->GetOwner();

		UNinjaCombatManagerComponent* CombatManager = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(Owner);
		DissolveManager = CombatManager->GetAndCacheDissolveManager();
	}

	if (IsValid(DissolveManager))
	{
		ICombatDissolveManagerInterface::Execute_Dissolve(DissolveManager, DissolveSettings);	
	}
}
