// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaInventoryAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "NinjaEquipmentFunctionLibrary.h"
#include "AbilitySystem/Effects/InventoryEffect_Level.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Net/UnrealNetwork.h"

UNinjaInventoryAttributeSet::UNinjaInventoryAttributeSet()
{
}

void UNinjaInventoryAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, const float OldValue, const float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetEquipmentLevelAttribute())
	{
		const UAbilitySystemComponent* AbilitySystem = GetOwningAbilitySystemComponentChecked();
		const AActor* AvatarActor = AbilitySystem->GetAvatarActor();
		const UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManager(AvatarActor);

		if (ensure(IsValid(EquipmentManager)))
		{
			const float AbsoluteGearLevel = GetEquipmentLevel();
			const float AverageGearLevel = EquipmentManager->GetAverageGearLevel(AbsoluteGearLevel);
			SetAverageEquipmentLevel(AverageGearLevel);	
		}
	}
}

void UNinjaInventoryAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetEncumbranceAttribute())
	{
		const float ClampedEncumbrance = FMath::Clamp(GetEncumbrance(), 0.f, GetWeightLimit()); 
		SetEncumbrance(ClampedEncumbrance);
	}
}

void UNinjaInventoryAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Wealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, EquipmentLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, AverageEquipmentLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Encumbrance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, WeightLimit, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, BackpackSlots, COND_None, REPNOTIFY_Always);
}

void UNinjaInventoryAttributeSet::OnRep_Wealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Wealth, OldValue);
}

void UNinjaInventoryAttributeSet::OnRep_EquipmentLevel(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, EquipmentLevel, OldValue);
}

void UNinjaInventoryAttributeSet::OnRep_AverageEquipmentLevel(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, AverageEquipmentLevel, OldValue);
}

void UNinjaInventoryAttributeSet::OnRep_Encumbrance(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Encumbrance, OldValue);
}

void UNinjaInventoryAttributeSet::OnRep_WeightLimit(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, WeightLimit, OldValue);
}

void UNinjaInventoryAttributeSet::OnRep_BackpackSlots(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, WeightLimit, OldValue);	
}
