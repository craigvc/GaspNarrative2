// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_CombatVitals.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "Kismet/KismetMathLibrary.h"

void UViewModel_CombatVitals::BindAttributes(UAbilitySystemComponent* AbilitySystemComponent)
{
	Super::BindAttributes(AbilitySystemComponent);

	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetHealthAttribute(), [this](const float Value){ SetHealth(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetMaxHealthTotalAttribute(), [this](const float Value){ SetMaxHealthTotal(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetStaminaAttribute(), [this](const float Value){ SetStamina(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetMaxStaminaTotalAttribute(), [this](const float Value){ SetMaxStaminaTotal(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetMagicAttribute(), [this](const float Value){ SetMagic(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetMaxMagicTotalAttribute(), [this](const float Value){ SetMaxMagicTotal(Value); });
}

void UViewModel_CombatVitals::OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData)
{
	if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetHealthAttribute())
	{
		SetHealth(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetMaxHealthTotalAttribute())
	{
		SetMaxHealthTotal(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetStaminaAttribute())
	{
		SetStamina(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetMaxStaminaTotalAttribute())
	{
		SetMaxStaminaTotal(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetMagicAttribute())
	{
		SetMagic(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetMaxMagicTotalAttribute())
	{
		SetMaxMagicTotal(AttributeChangeData.NewValue);
	}
}

void UViewModel_CombatVitals::SetIsDead(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsDead, bNewValue);
}

void UViewModel_CombatVitals::SetHealth(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(Health, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Health, MaxHealthTotal);
		SetHealthPercent(NewPercent);
	}
}

void UViewModel_CombatVitals::SetMaxHealthTotal(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(MaxHealthTotal, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Health, MaxHealthTotal);
		SetHealthPercent(NewPercent);
	}
}

void UViewModel_CombatVitals::SetHealthPercent(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(HealthPercent, NewValue))
	{
		const bool bNewIsDead = HealthPercent == 0.f;
		SetIsDead(bNewIsDead);
	}
}

void UViewModel_CombatVitals::SetStamina(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(Stamina, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Stamina, MaxStaminaTotal);
		SetStaminaPercent(NewPercent);
	}
}

void UViewModel_CombatVitals::SetMaxStaminaTotal(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(MaxStaminaTotal, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Stamina, MaxStaminaTotal);
		SetStaminaPercent(NewPercent);
	}	
}

void UViewModel_CombatVitals::SetStaminaPercent(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(StaminaPercent, NewValue);
}

void UViewModel_CombatVitals::SetMagic(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(Magic, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Magic, MaxMagicTotal);
		SetMagicPercent(NewPercent);
	}
}

void UViewModel_CombatVitals::SetMaxMagicTotal(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(MaxMagicTotal, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(Magic, MaxMagicTotal);
		SetMagicPercent(NewPercent);
	}	
}

void UViewModel_CombatVitals::SetMagicPercent(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(MagicPercent, NewValue);
}
