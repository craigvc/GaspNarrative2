// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/NinjaCombatAnimationProvider.h"

#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "Animation/AnimMontage.h"
#include "Interfaces/Animation/CombatAnimationContextProviderInterface.h"
#include "Interfaces/Animation/CombatAnimationMontageProviderInterface.h"
#include "Runtime/Launch/Resources/Version.h"

UNinjaCombatAnimationProvider::UNinjaCombatAnimationProvider()
{
	DefaultAnimationMontage = nullptr;
	DefaultSectionName = NAME_None;
	DefaultPlayRate = 1.f;
}

UAnimMontage* UNinjaCombatAnimationProvider::GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UAnimMontage* AnimMontage = GetAbilityAnimationMontage(CombatAbility);
	if (AnimMontage != nullptr)
	{
		return AnimMontage;
	}

	return DefaultAnimationMontage;
}

FName UNinjaCombatAnimationProvider::GetSectionName_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	const FName SectionName = GetAbilitySectionName(CombatAbility);
	if (SectionName != NAME_None)
	{
		return SectionName;
	}

	return DefaultSectionName;
}

float UNinjaCombatAnimationProvider::GetPlayRate_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	const float PlayRate = GetAbilityPlayRate(CombatAbility);
	if (PlayRate > 0.f)
	{
		return PlayRate;
	}

	return DefaultPlayRate;
}

UAnimMontage* UNinjaCombatAnimationProvider::GetAbilityAnimationMontage(const UNinjaCombatGameplayAbility* CombatAbility)
{
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationMontageProviderInterface>())
	{
		const FGameplayTagContainer& AbilityTags = GetAbilityTags(CombatAbility);
		UAnimMontage* AnimMontage = ICombatAnimationMontageProviderInterface::Execute_GetAnimationMontage(CombatAbility, AbilityTags);
		return AnimMontage;
	}

	return nullptr;
}

FName UNinjaCombatAnimationProvider::GetAbilitySectionName(const UNinjaCombatGameplayAbility* CombatAbility)
{
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationMontageProviderInterface>())
	{
		const FGameplayTagContainer& AbilityTags = GetAbilityTags(CombatAbility);
		const FName Section = ICombatAnimationMontageProviderInterface::Execute_GetSectionName(CombatAbility, AbilityTags); 
		return Section;
	}

	return NAME_None;
}

float UNinjaCombatAnimationProvider::GetAbilityPlayRate(const UNinjaCombatGameplayAbility* CombatAbility)
{
	if (IsValid(CombatAbility) && CombatAbility->Implements<UCombatAnimationMontageProviderInterface>())
	{
		const FGameplayTagContainer& AbilityTags = GetAbilityTags(CombatAbility);
		const float PlayRate = ICombatAnimationMontageProviderInterface::Execute_GetPlayRate(CombatAbility, AbilityTags);
		return PlayRate;
	}
	
	return 0.f;	
}

FGameplayTagContainer UNinjaCombatAnimationProvider::GetAbilityTags(const UNinjaCombatGameplayAbility* CombatAbility)
{
	FGameplayTagContainer AbilityTags = FGameplayTagContainer::EmptyContainer;
	if (IsValid(CombatAbility))
	{
#if ENGINE_MINOR_VERSION < 5
		AbilityTags.AppendTags(CombatAbility->AbilityTags);
#else
		AbilityTags.AppendTags(CombatAbility->GetAssetTags());
#endif
		
		if (CombatAbility->Implements<UCombatAnimationContextProviderInterface>())
		{
			FGameplayTagContainer ContextTags;
			ICombatAnimationContextProviderInterface::Execute_GetAnimationContext(CombatAbility, ContextTags);
			if (ContextTags.IsValid())
			{
				AbilityTags.AppendTags(ContextTags);
			}
		}
	}
	
	return AbilityTags;
}
