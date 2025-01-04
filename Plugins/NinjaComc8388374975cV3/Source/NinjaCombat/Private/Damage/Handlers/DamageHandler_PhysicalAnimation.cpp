// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_PhysicalAnimation.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Components/CombatPhysicalAnimationInterface.h"

UDamageHandler_PhysicalAnimation::UDamageHandler_PhysicalAnimation()
{
}

void UDamageHandler_PhysicalAnimation::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	UActorComponent* PhysicalAnimationComponent = UNinjaCombatFunctionLibrary::GetPhysicalAnimationComponent(DamageManager->GetOwner());
	if (IsValid(PhysicalAnimationComponent) && ensure(PhysicalAnimationComponent->Implements<UCombatPhysicalAnimationInterface>()))
	{
		const AActor* EffectCauser = Parameters.GetEffectCauser();
		const FGameplayEffectContextHandle& EffectContext = Parameters.EffectContext;
		ICombatPhysicalAnimationInterface::Execute_HandleImpact(PhysicalAnimationComponent, EffectCauser, EffectContext);	
	}
}
