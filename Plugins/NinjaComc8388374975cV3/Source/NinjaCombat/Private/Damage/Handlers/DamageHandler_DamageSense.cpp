// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_DamageSense.h"

#include "NinjaCombatSettings.h"
#include "Components/ActorComponent.h"
#include "Perception/AISense_Damage.h"

UDamageHandler_DamageSense::UDamageHandler_DamageSense()
{
}

void UDamageHandler_DamageSense::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	if (DamageManager->GetOwner()->HasAuthority())
	{
		const ICombatEffectContextProxyInterface* Proxy = GetDefault<UNinjaCombatSettings>()->GetDefaultEffectContextProxy();
		if (Proxy != nullptr)
		{
			const float Damage = Proxy->GetDamageApplied(Parameters.EffectContext.Get());

			AActor* DamageInstigator = Parameters.GetInstigator();
			AActor* DamageTarget = DamageManager->GetOwner();
	
			if (Damage > 0 && IsValid(DamageInstigator) && IsValid(DamageTarget))
			{
				UAISense_Damage::ReportDamageEvent(DamageInstigator->GetWorld(), DamageTarget,
					DamageInstigator, Damage, DamageInstigator->GetActorLocation(), DamageTarget->GetActorLocation());        
			}
		}	
	}
}
