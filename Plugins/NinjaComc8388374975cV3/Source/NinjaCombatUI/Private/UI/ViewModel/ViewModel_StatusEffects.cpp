// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_StatusEffects.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h"

TArray<FActiveGameplayEffect> UViewModel_StatusEffects::GetActiveStatusEffects() const
{
	return ActiveStatusEffects;
}

void UViewModel_StatusEffects::BindToAbilitySystem(const AActor* Owner)
{
	Super::BindToAbilitySystem(Owner);

	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent))
	{
		if (AbilitySystemComponent->IsOwnerActorAuthoritative())
		{
			GameplayEffectAppliedDelegateHandle = AbilitySystemComponent->OnGameplayEffectAppliedDelegateToSelf 
				.AddUObject(this, &ThisClass::HandleGameplayEffectApplied);
		}
		else
		{
			GameplayEffectAppliedDelegateHandle = AbilitySystemComponent->OnActiveGameplayEffectAddedDelegateToSelf
				.AddUObject(this, &ThisClass::HandleGameplayEffectApplied);
		}

		GameplayEffectRemovedDelegateHandle = AbilitySystemComponent->OnAnyGameplayEffectRemovedDelegate()
			.AddUObject(this, &ThisClass::HandleGameplayEffectRemoved);		
	}
}

void UViewModel_StatusEffects::HandleGameplayEffectApplied(UAbilitySystemComponent* InstigatorAbilitySystemComponent,
	const FGameplayEffectSpec& GameplayEffectSpec, const FActiveGameplayEffectHandle ActiveGameplayEffectHandle)
{
	const UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}
	
	const FActiveGameplayEffect* ActiveGameplayEffect = AbilitySystemComponent->GetActiveGameplayEffect(ActiveGameplayEffectHandle);
	if (!ActiveGameplayEffect)
	{
		return;
	}

	if (IsEligibleStatusEffect(GameplayEffectSpec))
	{
		AddStatusEffect(*ActiveGameplayEffect);
	}
}

void UViewModel_StatusEffects::HandleGameplayEffectRemoved(const FActiveGameplayEffect& ActiveGameplayEffect)
{
	const TSubclassOf<UGameplayEffect> EffectClass = ActiveGameplayEffect.Spec.Def->GetClass();
	const UGameplayEffectUIData* Data = UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(EffectClass, UGameplayEffectUIData_CombatStatus::StaticClass());
	if (IsValid(Data))
	{
		RemoveStatusEffect(ActiveGameplayEffect);
	}
}

bool UViewModel_StatusEffects::IsEligibleStatusEffect(const FGameplayEffectSpec& GameplayEffectSpec) const
{
	const UGameplayEffect* GameplayEffect = GameplayEffectSpec.Def; 
	if (!IsValid(GameplayEffect))
	{
		return false;
	}
	
	const UGameplayEffectUIData* Data = UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(GameplayEffect->GetClass(), UGameplayEffectUIData_CombatStatus::StaticClass());
	return IsValid(Data);
}

void UViewModel_StatusEffects::AddStatusEffect(const FActiveGameplayEffect& ActiveGameplayEffect)
{
	ActiveStatusEffects.Add(ActiveGameplayEffect);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetActiveStatusEffects);
}

void UViewModel_StatusEffects::RemoveStatusEffect(const FActiveGameplayEffect& ActiveGameplayEffect)
{
	ActiveStatusEffects.Remove(ActiveGameplayEffect);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetActiveStatusEffects);
}
