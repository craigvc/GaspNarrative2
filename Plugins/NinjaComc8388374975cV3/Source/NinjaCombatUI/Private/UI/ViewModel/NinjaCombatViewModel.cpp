// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/NinjaCombatViewModel.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "TimerManager.h"
#include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "Engine/World.h"

void UNinjaCombatViewModel::SetCombatActor_Implementation(AActor* NewCombatActor)
{
	AActor* OldActor = GetCombatActor();
	if (IsValid(OldActor))
	{
		UnbindFromAbilitySystem(OldActor);
		UnbindFromCombatSystem(OldActor);
		Reset();
	}

	if (IsValid(NewCombatActor))
	{
		CombatActorPtr = NewCombatActor;
		BindToAbilitySystem(NewCombatActor);
		BindToCombatSystem(NewCombatActor);
		
		const bool bIsNewActor = OldActor != NewCombatActor;
		SetChangedActor(bIsNewActor);
	}
}

void UNinjaCombatViewModel::BindToAbilitySystem(const AActor* Owner)
{
	if (!IsValid(Owner))
	{
		return;
	}
	
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner);
	if (IsValid(AbilitySystemComponent) && AbilitySystemComponent->GetAttributeSet(UNinjaCombatAttributeSet::StaticClass()))
	{
		BindAttributes(AbilitySystemComponent);
		AbilitySystemComponentPtr = AbilitySystemComponent;
	}
	else
	{
		const FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &ThisClass::BindToAbilitySystem, Owner);
		GetWorld()->GetTimerManager().SetTimerForNextTick(TimerDelegate);
	}
}

void UNinjaCombatViewModel::UnbindFromAbilitySystem(AActor* OldActor)
{
	if (AbilitySystemComponentPtr.IsValid() && AbilitySystemComponentPtr->IsValidLowLevelFast())
	{
		for (TPair<FGameplayAttribute, FDelegateHandle>& Pair : AttributeHandles)
		{
			AbilitySystemComponentPtr->GetGameplayAttributeValueChangeDelegate(Pair.Key).Remove(Pair.Value);
			Pair.Value.Reset();
		}

		AttributeHandles.Empty();
		AbilitySystemComponentPtr.Reset();
	}
}

void UNinjaCombatViewModel::SetChangedActor(const bool bNewValue)
{
	bChangedActor = bNewValue;
	BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::bChangedActor);
}

void UNinjaCombatViewModel::BeginDestroy()
{
	AActor* OldActor = GetCombatActor();
	if (IsValid(OldActor))
	{
		UnbindFromAbilitySystem(OldActor);
	}
	
	Super::BeginDestroy();
}

AActor* UNinjaCombatViewModel::GetCombatActor() const
{
	if (CombatActorPtr.IsValid() && CombatActorPtr->IsValidLowLevelFast())
	{
		return CombatActorPtr.Get();
	}

	return nullptr;
}

UAbilitySystemComponent* UNinjaCombatViewModel::GetAbilitySystemComponent() const
{
	if (AbilitySystemComponentPtr.IsValid() && AbilitySystemComponentPtr->IsValidLowLevelFast())
	{
		return AbilitySystemComponentPtr.Get();
	}

	return nullptr;
}

void UNinjaCombatViewModel::BindAttributes(UAbilitySystemComponent* AbilitySystemComponent)
{
}

void UNinjaCombatViewModel::BindAttribute(UAbilitySystemComponent* AbilitySystemComponent,
	const FGameplayAttribute& Attribute, const TFunction<void(float)>& SetterFunction)
{
	check(IsValid(AbilitySystemComponent));
	check(Attribute.IsValid());
	check(SetterFunction != nullptr);

	if (!AttributeHandles.Contains(Attribute))
	{
		// Track future changes.
		const FDelegateHandle& Handle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute).AddUObject(this, &ThisClass::OnAttributeChanged);
		AttributeHandles.Add(Attribute, Handle);
	}

	// Get current value.
	const float AttributeValue = AbilitySystemComponent->GetNumericAttribute(Attribute);
	SetterFunction(AttributeValue);	
}

void UNinjaCombatViewModel::OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData)
{
	// Nothing by default.
}

void UNinjaCombatViewModel::BindToCombatSystem(AActor* Actor)
{
	// Nothing by default.
}

void UNinjaCombatViewModel::UnbindFromCombatSystem(AActor* OldActor)
{
	// Nothing by default.
}

void UNinjaCombatViewModel::Reset()
{
	// Nothing by default.
}