// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Providers/Animation/AnimationProvider_Weapon.h"

#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "AbilitySystem/Interfaces/CombatWeaponAnimationProviderInterface.h"
#include "Animation/AnimMontage.h"
#include "Interfaces/Animation/CombatAnimationMontageProviderInterface.h"
#include "Runtime/Launch/Resources/Version.h"

UAnimMontage* UAnimationProvider_Weapon::GetMontageToPlay_Implementation(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UAnimMontage* AnimMontage = GetAbilityAnimationMontage(CombatAbility);
	if (AnimMontage != nullptr)
	{
		// The ability is overriding the value.
		return AnimMontage;
	}
	
	const UObject* SourceObject = CombatAbility->GetSourceObject(CombatAbility->GetCurrentAbilitySpecHandle(), CombatAbility->GetCurrentActorInfo());
	if (IsValid(SourceObject) && SourceObject->Implements<UCombatAnimationMontageProviderInterface>())
	{
		FGameplayTagContainer AbilityTags;
#if ENGINE_MINOR_VERSION < 5
		AbilityTags.AppendTags(CombatAbility->AbilityTags);
#else
		AbilityTags.AppendTags(CombatAbility->GetAssetTags());
#endif
		
		UAnimMontage* Montage = ICombatAnimationMontageProviderInterface::Execute_GetAnimationMontage(SourceObject, AbilityTags);
		if (IsValid(Montage))
		{
			return Montage;	
		}
	}
	
	return DefaultAnimationMontage;
}
