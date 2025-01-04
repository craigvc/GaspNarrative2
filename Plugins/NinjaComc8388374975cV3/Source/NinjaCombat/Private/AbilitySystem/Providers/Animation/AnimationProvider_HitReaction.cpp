// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "Animation/AnimMontage.h"
#include "Engine/World.h"
#include "Interfaces/Animation/CombatAnimationContextProviderInterface.h"

UAnimMontage* UAnimationProvider_HitReaction::GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UAnimMontage* AnimMontage = GetAbilityAnimationMontage(CombatAbility);
	if (AnimMontage != nullptr)
	{
		// The ability is overriding the value.
		return AnimMontage;
	}
	
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationContextProviderInterface>())
	{
		FGameplayTagContainer Context;
		if (GetAnimationContext(CombatAbility, Context))
		{
			for (const FHitReactionContext& HitReactionContext : HitReactionContexts)
			{
				if (Applies(Context, HitReactionContext))
				{
					return HitReactionContext.AnimMontage;
				}
			}	
		}
	}

	return DefaultAnimationMontage;
}

bool UAnimationProvider_HitReaction::GetAnimationContext(const UNinjaCombatGameplayAbility* CombatAbility, FGameplayTagContainer& OutContext)
{
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationContextProviderInterface>())
	{
		return ICombatAnimationContextProviderInterface::Execute_GetAnimationContext(CombatAbility, OutContext);
	}

	return false;
}

bool UAnimationProvider_HitReaction::GetEffectContext(const UNinjaCombatGameplayAbility* CombatAbility, FGameplayEffectContextHandle& OutHandle)
{
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationContextProviderInterface>())
	{
		return ICombatAnimationContextProviderInterface::Execute_GetEffectContext(CombatAbility, OutHandle);
	}

	return false;	
}

bool UAnimationProvider_HitReaction::CalculateAnimationAngle_Implementation(UNinjaCombatGameplayAbility* CombatAbility, float& OutAngle) const
{
	FGameplayEffectContextHandle Handle;
	if (!GetEffectContext(CombatAbility, Handle))
	{
		OutAngle = 0.f;
		return false;
	}

	const AActor* Instigator = Handle.GetInstigator();
	if (!IsValid(Instigator))
	{
		OutAngle = 0.f;
		return false;
	}
	
	const FHitResult* HitResult = Handle.GetHitResult();
	if (HitResult == nullptr)
	{
		OutAngle = 0.f;
		return false;
	}
	
	const AActor* Avatar = CombatAbility->GetAvatarActorFromActorInfo();
	if (Avatar == nullptr)
	{
		OutAngle = 0.f;
		return false;
	}
	
	static constexpr float FrontAngle = 0.f;
	OutAngle = UNinjaCombatFunctionLibrary::CalculateHitAngleFromHitResult(Instigator, Avatar, *HitResult, FrontAngle, HitLocationWeight, AttackerLocationWeight);
	
	COMBAT_LOG_ARGS(Verbose, "Hit Direction is %f.", OutAngle);
	return true;
}

bool UAnimationProvider_HitReaction::Applies_Implementation(const FGameplayTagContainer& AbilityContext, const FHitReactionContext& HitReactionContext) const
{
	return HitReactionContext.ContextTags.HasAnyExact(AbilityContext)
		&& IsValid(HitReactionContext.AnimMontage);
}
