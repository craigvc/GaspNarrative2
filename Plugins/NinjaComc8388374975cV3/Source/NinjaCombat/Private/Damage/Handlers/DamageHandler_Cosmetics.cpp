// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_Cosmetics.h"

#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "Interfaces/CombatMeleeInterface.h"
#include "Interfaces/CombatProjectileInterface.h"

UDamageHandler_Cosmetics::UDamageHandler_Cosmetics()
{
	bHandleMeleeDamage = true;
	bHandleProjectileImpact = true;
}

void UDamageHandler_Cosmetics::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	FHitResult HitResult;
	if (Parameters.EffectContext.GetHitResult())
	{
		HitResult = *Parameters.EffectContext.GetHitResult();
	}
	else
	{
		AActor* Target = DamageManager->GetOwner();
		HitResult = FHitResult(Target, nullptr, Parameters.Location, Parameters.Normal);
	}
	
	const AActor* EffectCauser = Parameters.GetEffectCauser();
	if (IsValid(EffectCauser))
	{
		const FGameplayTagContainer& SourceTags = Parameters.AggregatedSourceTags;
		const FGameplayTagContainer& TargetTags = Parameters.AggregatedTargetTags;
		
		if (IsMeleeDamage(Parameters) && EffectCauser->Implements<UCombatMeleeInterface>())
		{
			ICombatMeleeInterface::Execute_HandleMeleeDamageCosmetics(EffectCauser, HitResult, SourceTags, TargetTags);	
		}
			
		if (IsRangedDamage(Parameters) && EffectCauser->Implements<UCombatProjectileInterface>())
		{
			ICombatProjectileInterface::Execute_HandleImpactCosmetics(EffectCauser, HitResult, SourceTags, TargetTags);
		}
	}
}
