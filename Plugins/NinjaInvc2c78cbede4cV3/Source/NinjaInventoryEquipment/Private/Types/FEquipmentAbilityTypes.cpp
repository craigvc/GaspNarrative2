// Ninja Bear Studio Inc., all rights reserved.
#include "Types/FEquipmentAbilityTypes.h"

void FEquipmentAbilityHandles::AddGameplayAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if (Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FEquipmentAbilityHandles::AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle)
{
	if (Handle.IsValid())
	{
		GameplayEffectHandles.Add(Handle);
	}
}

void FEquipmentAbilityHandles::AddAttributeSet(UAttributeSet* AttributeSet)
{
	if (AttributeSet != nullptr)
	{
		GrantedAttributeSets.Add(AttributeSet);
	}
}

bool FEquipmentAbilityHandles::HasValidHandles() const
{
	return !AbilitySpecHandles.IsEmpty()
		|| !GameplayEffectHandles.IsEmpty()
		|| !GrantedAttributeSets.IsEmpty();
}
