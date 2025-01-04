// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/CombatibilityChecks/CompatibilityCheck_GenderTag.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaEquipmentTags.h"

bool UCompatibilityCheck_GenderTag::IsCompatible_Implementation(const FGameplayTagContainer AssetTags, AActor* EquipmentOwner) const
{
	const UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(EquipmentOwner);
	if (IsValid(AbilitySystemComponent))
	{
		if (AssetTags.HasTagExact(Tag_Equipment_Gender_Female) && AbilitySystemComponent->HasMatchingGameplayTag(Tag_Equipment_Gender_Female))
		{
			return true;
		}

		if (AssetTags.HasTagExact(Tag_Equipment_Gender_Male) && AbilitySystemComponent->HasMatchingGameplayTag(Tag_Equipment_Gender_Male))
		{
			return true;
		}		
	}

	return false;
}
