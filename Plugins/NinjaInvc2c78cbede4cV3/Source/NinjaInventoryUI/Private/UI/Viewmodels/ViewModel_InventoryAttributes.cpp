// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Viewmodels/ViewModel_InventoryAttributes.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystem/NinjaInventoryAttributeSet.h"
#include "Components/NinjaInventoryManagerComponent.h"

UViewModel_InventoryAttributes::UViewModel_InventoryAttributes()
{
	bForceAttributeRefresh = false;
	Wealth = 0.f;
	Encumbrance = 0.f;
	EquipmentLevel = 0.f;
	AverageEquipmentLevel = 0.f;
	WeightLimit = 0.f;
}

void UViewModel_InventoryAttributes::BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	if (IsValid(InventoryManager))
	{
		UAbilitySystemComponent* AbilitySystemComponent = InventoryManager->GetAbilitySystemComponent();
		if (IsValid(AbilitySystemComponent))
		{
			BindAttributes(AbilitySystemComponent);
		}
	}
}

void UViewModel_InventoryAttributes::BindAttributes(UAbilitySystemComponent* AbilitySystemComponent)
{
	BindAttribute(AbilitySystemComponent, UNinjaInventoryAttributeSet::GetWealthAttribute(), [this](const float Value){ SetWealth(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaInventoryAttributeSet::GetEncumbranceAttribute(), [this](const float Value){ SetEncumbrance(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaInventoryAttributeSet::GetEquipmentLevelAttribute(), [this](const float Value){ SetEquipmentLevel(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaInventoryAttributeSet::GetAverageEquipmentLevelAttribute(), [this](const float Value){ SetAverageEquipmentLevel(Value); });
	BindAttribute(AbilitySystemComponent, UNinjaInventoryAttributeSet::GetWeightLimitAttribute(), [this](const float Value){ SetWeightLimit(Value); });
}

void UViewModel_InventoryAttributes::BindAttribute(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAttribute& Attribute, const TFunction<void(float)>& SetterFunction)
{
	check(IsValid(AbilitySystemComponent));
	check(Attribute.IsValid());
	check(SetterFunction != nullptr);

	FOnGameplayAttributeValueChange& Delegate = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute);
	if (Delegate.IsBoundToObject(this))
	{
		Delegate.RemoveAll(this);
	}

	// Track future changes.
	const FDelegateHandle Handle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute)
		.AddUObject(this, &ThisClass::OnAttributeChanged);

	// Get current value.
	const float AttributeValue = AbilitySystemComponent->GetNumericAttribute(Attribute);
	SetterFunction(AttributeValue);

	AttributeBindings.Add(Attribute, Handle);
}

void UViewModel_InventoryAttributes::OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData)
{
	if (AttributeChangeData.Attribute == UNinjaInventoryAttributeSet::GetWealthAttribute())
	{
		const float Default = AttributeChangeData.NewValue;
		const float NewValue = GetAttributeValueOrDefault(UNinjaInventoryAttributeSet::GetWealthAttribute(), Default);
		SetWealth(NewValue);	
	}
	else if (AttributeChangeData.Attribute == UNinjaInventoryAttributeSet::GetEncumbranceAttribute())
	{
		const float Default = AttributeChangeData.NewValue;
		const float NewValue = GetAttributeValueOrDefault(UNinjaInventoryAttributeSet::GetEncumbranceAttribute(), Default);
		SetEncumbrance(NewValue);	
	}
	else if (AttributeChangeData.Attribute == UNinjaInventoryAttributeSet::GetEquipmentLevelAttribute())
	{
		const float Default = AttributeChangeData.NewValue;
		const float NewValue = GetAttributeValueOrDefault(UNinjaInventoryAttributeSet::GetEquipmentLevelAttribute(), Default);
		SetEquipmentLevel(NewValue);	
	}
	else if (AttributeChangeData.Attribute == UNinjaInventoryAttributeSet::GetAverageEquipmentLevelAttribute())
	{
		const float Default = AttributeChangeData.NewValue;
		const float NewValue = GetAttributeValueOrDefault(UNinjaInventoryAttributeSet::GetAverageEquipmentLevelAttribute(), Default);
		SetAverageEquipmentLevel(NewValue);	
	}
	else if (AttributeChangeData.Attribute == UNinjaInventoryAttributeSet::GetWeightLimitAttribute())
	{
		const float Default = AttributeChangeData.NewValue;
		const float NewValue = GetAttributeValueOrDefault(UNinjaInventoryAttributeSet::GetWeightLimitAttribute(), Default);
		SetWeightLimit(NewValue);		
	}
}

float UViewModel_InventoryAttributes::GetAttributeValueOrDefault(const FGameplayAttribute& Attribute, const float Default) const
{
	float Value = Default;

	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (bForceAttributeRefresh && ensure(IsValid(InventoryManager)))
	{
		const UAbilitySystemComponent* AbilitySystemComponent = InventoryManager->GetAbilitySystemComponent();
		if (ensure(IsValid(AbilitySystemComponent)) && AbilitySystemComponent->HasAttributeSetForAttribute(Attribute))
		{
			Value = AbilitySystemComponent->GetNumericAttribute(Attribute);
		}
	}

	return Value;
}

void UViewModel_InventoryAttributes::SetWealth(const float NewWealth)
{
	UE_MVVM_SET_PROPERTY_VALUE(Wealth, NewWealth);
}

void UViewModel_InventoryAttributes::SetEncumbrance(const float NewEncumbrance)
{
	UE_MVVM_SET_PROPERTY_VALUE(Encumbrance, NewEncumbrance);
}

void UViewModel_InventoryAttributes::SetEquipmentLevel(const float NewEquipmentLevel)
{
	UE_MVVM_SET_PROPERTY_VALUE(EquipmentLevel, NewEquipmentLevel);
}

void UViewModel_InventoryAttributes::SetAverageEquipmentLevel(const float NewAverageEquipmentLevel)
{
	UE_MVVM_SET_PROPERTY_VALUE(AverageEquipmentLevel, NewAverageEquipmentLevel);
}

void UViewModel_InventoryAttributes::SetWeightLimit(const float NewWeightLimit)
{
	UE_MVVM_SET_PROPERTY_VALUE(WeightLimit, NewWeightLimit);
}

void UViewModel_InventoryAttributes::UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager)
{
	UAbilitySystemComponent* AbilitySystemComponent = InventoryManager->GetAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent))
	{
		for (auto It = AttributeBindings.CreateIterator(); It; ++It)
		{
			const FGameplayAttribute& Attribute = It.Key();
			FDelegateHandle& Handle = It.Value();
			
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute)
				.Remove(Handle);

			Handle.Reset();
			It.RemoveCurrent();
		}
	}
}
