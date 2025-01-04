// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_PoiseAndStagger.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatDelegates.h"
#include "NinjaCombatFunctionLibrary.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"
#include "Kismet/KismetMathLibrary.h"

void UViewModel_PoiseAndStagger::BindAttributes(UAbilitySystemComponent* AbilitySystemComponent)
{
	Super::BindAttributes(AbilitySystemComponent);

	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetPoiseAttribute(), [this](const float Value){ SetPoise(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetPoiseDamageAttribute(), [this](const float Value){ SetPoiseDamage(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetPoiseRecoveryAttribute(), [this](const float Value){ SetPoiseRecovery(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetPoiseRecoveryIntervalAttribute(), [this](const float Value){ SetPoiseRecoveryInterval(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaCombatAttributeSet::GetStaggerDurationAttribute(), [this](const float Value){ SetStaggerDuration(Value); });
}

void UViewModel_PoiseAndStagger::OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData)
{
	if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetPoiseAttribute())
	{
		SetPoise(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetPoiseDamageAttribute())
	{
		SetPoiseDamage(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetPoiseRecoveryAttribute())
	{
		SetPoiseRecovery(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetPoiseRecoveryIntervalAttribute())
	{
		SetPoiseRecoveryInterval(AttributeChangeData.NewValue);
	}
	else if (AttributeChangeData.Attribute == UNinjaCombatAttributeSet::GetStaggerDurationAttribute())
	{
		SetStaggerDuration(AttributeChangeData.NewValue);
	}
}

void UViewModel_PoiseAndStagger::BindToCombatSystem(AActor* Actor)
{
	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Actor);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
	{
		FStaggeredStateChangedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleStaggeredStateChanged);
		ICombatDamageManagerInterface::Execute_BindToStaggerStateChangedDelegate(DamageComponent, Delegate);

		const bool bStaggered = ICombatDamageManagerInterface::Execute_IsStaggered(DamageComponent);
		SetIsStaggered(bStaggered);
	}
}

void UViewModel_PoiseAndStagger::UnbindFromCombatSystem(AActor* OldActor)
{
	UActorComponent* DamageComponent = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(OldActor);
	if (UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageComponent))
	{
		ICombatDamageManagerInterface::Execute_UnbindFromStaggerStateChangedDelegate(DamageComponent, this);
	}
}

void UViewModel_PoiseAndStagger::Reset()
{
	SetIsStaggered(false);
	SetPoise(0.f);
	SetPoiseDamage(0.f);
	SetPoiseRecovery(0.f);
	SetPoiseRecoveryInterval(0.f);
	SetPoisePercent(0.f);
	SetStaggerDuration(0.f);
}

void UViewModel_PoiseAndStagger::HandleStaggeredStateChanged(UActorComponent*, const bool bNewIsStaggered)
{
	SetIsStaggered(bNewIsStaggered);
}

void UViewModel_PoiseAndStagger::SetIsStaggered(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsStaggered, bNewValue);
}

void UViewModel_PoiseAndStagger::SetPoise(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(Poise, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(PoiseDamage, Poise);
		SetPoisePercent(NewPercent);
	}
}

void UViewModel_PoiseAndStagger::SetPoiseDamage(const float NewValue)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(PoiseDamage, NewValue))
	{
		const float NewPercent = UKismetMathLibrary::SafeDivide(PoiseDamage, Poise);
		SetPoisePercent(NewPercent);
	}
}

void UViewModel_PoiseAndStagger::SetPoiseRecovery(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(PoiseRecovery, NewValue);
}

void UViewModel_PoiseAndStagger::SetPoiseRecoveryInterval(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(PoiseRecoveryInterval, NewValue);
}

void UViewModel_PoiseAndStagger::SetPoisePercent(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(PoisePercent, NewValue);
}

void UViewModel_PoiseAndStagger::SetStaggerDuration(const float NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(StaggerDuration, NewValue);
}
