// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_TargetLock.h"

#include "NinjaCombatDelegates.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatLog.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/Components/CombatTargetManagerInterface.h"

void UViewModel_TargetLock::SetWidgetOwner_Implementation(APlayerController* NewWidgetOwner)
{
	if (NewWidgetOwner == nullptr)
	{
		return;
	}
	
	WidgetOwnerPtr = NewWidgetOwner;
	
	const APawn* Combatant = NewWidgetOwner->GetPawn();
	if (!IsValid(Combatant))
	{
		COMBAT_LOG_ARGS(Warning, "No Combatant retrieved from Controller %s!", *GetNameSafe(NewWidgetOwner));
		return;
	}
	
	UActorComponent* TargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(Combatant);
	if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetComponent))
	{
		FCombatTargetChangedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleTargetChanged);
		ICombatTargetManagerInterface::Execute_BindToCombatTargetChangedDelegate(TargetComponent, Delegate);

		const AActor* CurrentTarget = ICombatTargetManagerInterface::Execute_GetCombatTarget(TargetComponent);

		const bool bNewIsLockedByHUDOwner = IsValid(CurrentTarget) && CurrentTarget == GetCombatActor(); 
		SetIsLockedByHUDOwner(bNewIsLockedByHUDOwner);
	}
}

void UViewModel_TargetLock::ClearWidgetOwner_Implementation()
{
	const APlayerController* WidgetOwner = GetWidgetOwner();
	if (!IsValid(WidgetOwner))
	{
		return;
	}

	UActorComponent* TargetComponent = UNinjaCombatFunctionLibrary::GetTargetManagerComponent(WidgetOwner->GetPawn());
	if (UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(TargetComponent))
	{
		ICombatTargetManagerInterface::Execute_UnbindFromTargetChangedDelegate(TargetComponent, this);
	}

	WidgetOwnerPtr.Reset();
}

APlayerController* UViewModel_TargetLock::GetWidgetOwner() const
{
	if (WidgetOwnerPtr.IsValid() && WidgetOwnerPtr->IsValidLowLevelFast())
	{
		return WidgetOwnerPtr.Get();
	}

	return nullptr;
}

void UViewModel_TargetLock::HandleTargetChanged(UActorComponent*, const AActor* NewCombatTarget, const AActor*)
{
	const bool bNewIsLockedByHUDOwner = IsValid(NewCombatTarget) && NewCombatTarget == GetCombatActor(); 
	SetIsLockedByHUDOwner(bNewIsLockedByHUDOwner);
}

void UViewModel_TargetLock::SetIsLockedByHUDOwner(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsLockedByHUDOwner, bNewValue);
}

void UViewModel_TargetLock::Reset()
{
	SetIsLockedByHUDOwner(false);
}