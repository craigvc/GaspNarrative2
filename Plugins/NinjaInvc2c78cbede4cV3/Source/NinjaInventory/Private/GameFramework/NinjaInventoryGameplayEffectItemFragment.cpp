// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryGameplayEffectItemFragment.h"

#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "NinjaInventoryLog.h"
#include "GameFramework/NinjaInventoryItem.h"

UNinjaInventoryGameplayEffectItemFragment::UNinjaInventoryGameplayEffectItemFragment()
{
	EffectClass = nullptr;
	EffectLevel = 1.f;
}

bool UNinjaInventoryGameplayEffectItemFragment::HasAppliedEffect(const UNinjaInventoryItem* Item) const
{
	return Item->HasActiveEffectHandle(this);
}

bool UNinjaInventoryGameplayEffectItemFragment::CanApplyEffect(const UNinjaInventoryItem* Item) const
{
	return IsValid(Item) && Item->HasInitializedFragments() && !HasAppliedEffect(Item);
}

float UNinjaInventoryGameplayEffectItemFragment::GetEffectLevel(const UNinjaInventoryItem* Item) const
{
	float OverridenLevel;
	if (DetermineEffectLevel(Item, OverridenLevel))
	{
		return OverridenLevel;
	}

	return EffectLevel;
}

bool UNinjaInventoryGameplayEffectItemFragment::DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const
{
	return false;
}

bool UNinjaInventoryGameplayEffectItemFragment::ApplyEffect(UNinjaInventoryItem* Item, const float EffectLevelOverride)
{
	if (!IsValid(Item))
	{
		INVENTORY_LOG_ARGS(Warning, "Invalid item for Gameplay Effect '%s'!", *GetNameSafe(EffectClass));
		return false; 
	}
	
	UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
	if (!IsValid(AbilityComponent))
	{
		INVENTORY_LOG_ARGS(Warning, "No Ability Component available to apply '%s'!", *GetNameSafe(EffectClass));
		return false;
	}

	// We are ready to apply the effect!
	//
	// Since this fragment can be invoked via the operation flow, which happens on both client and server
	// we need to make sure that the Gameplay Effect is only applied on the server. This is not a validation
	// issue and not worthy of warnings, just a regular control flow.
	//
	if (!Item->OwnerHasAuthority())
	{
		return false;
	}

	const float ActualEffectLevel = EffectLevelOverride != -1.f ? EffectLevelOverride : GetEffectLevel(Item);
	FGameplayEffectSpecHandle Handle;
	
	if (!CreateSpecHandleForItem(Item, Handle, ActualEffectLevel) || !Handle.IsValid())
	{
		INVENTORY_LOG_ARGS(Warning, "Failed to create Gameplay Effect Spec Handle for '%s'!", *GetNameSafe(EffectClass));
		return false;
	}

	const FGameplayEffectSpec& Spec = *Handle.Data.Get();
	const FActiveGameplayEffectHandle& ActiveEffectHandle = AbilityComponent->ApplyGameplayEffectSpecToSelf(Spec);
	
	if (!ActiveEffectHandle.WasSuccessfullyApplied())
	{
		INVENTORY_LOG_ARGS(Warning, "Failed to apply Gameplay Effect '%s'!", *GetNameSafe(EffectClass));
		return false;
	}

	Item->SaveActiveEffectHandle(this, ActiveEffectHandle);
	return true;
}

bool UNinjaInventoryGameplayEffectItemFragment::CreateSpecHandleForItem(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& OutHandle, const float EffectLevelOverride) const
{
	if (!IsValid(Item) || !IsValid(EffectClass))
	{
		return false;
	}
	
	const UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
	if (!ensure(IsValid(AbilityComponent)))
	{
		return false;
	}
	
	const FGameplayEffectContextHandle EffectContextHandle = AbilityComponent->MakeEffectContext();
	if (!EffectContextHandle.IsValid())
	{
		return false;
	}

	const float ActualEffectLevel = EffectLevelOverride != -1.f ? EffectLevelOverride : GetEffectLevel(Item);
	OutHandle = AbilityComponent->MakeOutgoingSpec(EffectClass, ActualEffectLevel, EffectContextHandle);
	
	if (!OutHandle.IsValid())
	{
		return false;
	}
	
	SetByCallerMagnitudes(Item, OutHandle);
	return true;	
}

void UNinjaInventoryGameplayEffectItemFragment::SetByCallerMagnitudes(const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const
{
	TMap<FGameplayTag, float> Magnitudes;
	GetMagnitudes(Item, Magnitudes);
	
	for (const TPair<FGameplayTag, float>& Pair : Magnitudes)
	{
		const FGameplayTag Tag = Pair.Key;
		const float Value = Pair.Value;
		EffectSpecHandle.Data->SetSetByCallerMagnitude(Tag, Value);
	}
}

void UNinjaInventoryGameplayEffectItemFragment::GetMagnitudes_Implementation(const UNinjaInventoryItem* Item, TMap<FGameplayTag, float>& OutMagnitudes) const
{
	// No magnitudes in the default implementation.
}

bool UNinjaInventoryGameplayEffectItemFragment::RemoveEffect(UNinjaInventoryItem* Item, const int32 StacksToRemove)
{
	check(IsValid(Item));

	UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
	if (!IsValid(AbilityComponent) || !Item->OwnerHasAuthority())
	{
		return false;
	}

	FActiveGameplayEffectHandle ActiveHandle;
	Item->GetActiveEffectHandle(this, ActiveHandle);
	if (AbilityComponent->RemoveActiveGameplayEffect(ActiveHandle, StacksToRemove))
	{
		Item->InvalidateEffectHandle(this);
		return true;
	}

	return false;
}

int32 UNinjaInventoryGameplayEffectItemFragment::RemoveEffectByClass(UNinjaInventoryItem* Item, const int32 StacksToRemove)
{
	UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
	if (!IsValid(AbilityComponent) || !Item->OwnerHasAuthority())
	{
		return false;
	}
	
	FGameplayEffectQuery Query;
	Query.EffectDefinition = EffectClass;
	return AbilityComponent->RemoveActiveEffects(Query, StacksToRemove);
}
