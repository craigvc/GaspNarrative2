// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Components/NinjaCombatWidgetComponent.h"

#include "TimerManager.h"
#include "Interfaces/CombatActorAwareInterface.h"
#include "UI/Interfaces/CombatWidgetInterface.h"

UNinjaCombatWidgetComponent::UNinjaCombatWidgetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UNinjaCombatWidgetComponent::InitWidget()
{
	Super::InitWidget();
	SetCombatTarget();
}

void UNinjaCombatWidgetComponent::SetCombatTarget()
{
	// Make sure we actually do have a widget class set, and it implements the interface.
	if (IsValid(WidgetClass) && WidgetClass->ImplementsInterface(UCombatActorAwareInterface::StaticClass()))
	{
		UUserWidget* MyWidgetInstance = GetWidget();
		if (IsValid(MyWidgetInstance))
		{
			ICombatActorAwareInterface::Execute_SetCombatActor(MyWidgetInstance, GetOwner());
		}
		else
		{
			GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::SetCombatTarget);
		}
	}
}

void UNinjaCombatWidgetComponent::HandleGameplayCue(const FGameplayCueParameters& CueParameters) const
{
	UUserWidget* MyWidgetInstance = GetWidget();
	if (IsValid(MyWidgetInstance) && MyWidgetInstance->Implements<UCombatWidgetInterface>())
	{
		ICombatWidgetInterface::Execute_HandleGameplayCue(MyWidgetInstance, CueParameters);
	}
}
