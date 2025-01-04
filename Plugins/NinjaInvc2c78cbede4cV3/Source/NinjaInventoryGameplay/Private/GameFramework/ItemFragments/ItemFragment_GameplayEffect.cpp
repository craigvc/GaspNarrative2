// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_GameplayEffect.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Level.h"

UItemFragment_GameplayEffect::UItemFragment_GameplayEffect()
{
	bUseItemLevelAsEffectLevel = false;
}

void UItemFragment_GameplayEffect::ApplyFragment(UNinjaInventoryItem* Item)
{
	Super::ApplyFragment(Item);
	
	if (CanApplyEffect(Item))
	{
		ApplyEffect(Item);
	}
}

void UItemFragment_GameplayEffect::RevertFragment(UNinjaInventoryItem* Item)
{
	RemoveEffect(Item);
	Super::RevertFragment(Item);
}

void UItemFragment_GameplayEffect::SetByCallerMagnitudes(const UNinjaInventoryItem* Item,
	FGameplayEffectSpecHandle& EffectSpecHandle) const
{
	for (const TPair<FGameplayTag, float>& Pair : EffectMagnitudes)
	{
		const FGameplayTag Tag = Pair.Key;
		const float DefaultValue = GetMagnitudeValue(Tag);
		const float ActualValue = TryOverrideDefaultMagnitudeValue(Item, Tag, DefaultValue);
		EffectSpecHandle.Data->SetSetByCallerMagnitude(Tag, ActualValue);
	}
}

bool UItemFragment_GameplayEffect::DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const
{
	if (!bUseItemLevelAsEffectLevel)
	{
		// Not overriding the default value.
		return false;
	}

	const UItemFragment_Level* LevelFragment = Item->FindFragment<UItemFragment_Level>();
	if (!IsValid(LevelFragment))
	{
		// Can't override the effect level, no Level Fragment.
		return false;
	}

	OutEffectLevel = LevelFragment->GetLevel(Item);
	return true;
}

float UItemFragment_GameplayEffect::GetMagnitudeValue(const FGameplayTag& MagnitudeTag) const
{
	if (EffectMagnitudes.Contains(MagnitudeTag))
	{
		// "Pop, pop!" ~~ Magnitude
		//
		return EffectMagnitudes[MagnitudeTag];
	}

	return 0.f;
}

float UItemFragment_GameplayEffect::TryOverrideDefaultMagnitudeValue_Implementation(const UNinjaInventoryItem* Item,
	const FGameplayTag& MagnitudeTag, const float DefaultValue) const
{
	return DefaultValue;
}

#if WITH_EDITOR
bool UItemFragment_GameplayEffect::CanEditChange(const FProperty* InProperty) const
{
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UItemFragment_GameplayEffect, EffectLevel))
	{
		// If the item level is used, then we want to disable the effect level property.
		return !bUseItemLevelAsEffectLevel;
	}
	
	return Super::CanEditChange(InProperty);
}
#endif

