// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/Animation/AnimationProvider_Random.h"

UAnimMontage* UAnimationProvider_Random::GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UAnimMontage* AnimMontage = GetAbilityAnimationMontage(CombatAbility);
	if (AnimMontage != nullptr)
	{
		// The ability is overriding the value.
		return AnimMontage;
	}

	const int32 AnimCount = RandomAnimations.Num(); 
	if (AnimCount == 1)
	{
		// We only have one item. No need to perform random number calculation.
		return RandomAnimations[0].AnimMontage;
	}

	const int32 Index = FMath::RandRange(0, AnimCount - 1);
	return RandomAnimations[Index].AnimMontage;
}
