// Ninja Bear Studio Inc., all rights reserved.
#include "UI/ViewModel/ViewModel_ComboState.h"

#include "NinjaCombatFunctionLibrary.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"

void UViewModel_ComboState::SetCombatActor_Implementation(AActor* NewCombatActor)
{
	Super::SetCombatActor_Implementation(NewCombatActor);

	UActorComponent* ComboManager = UNinjaCombatFunctionLibrary::GetComboManagerComponent(NewCombatActor);
	if (UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(ComboManager))
	{
		FComboWindowChangedDelegate ComboWindowChangedDelegate;
		ComboWindowChangedDelegate.BindDynamic(this, &ThisClass::HandleComboWindowChanged);
		ICombatComboManagerInterface::Execute_BindToComboWindowChangedDelegate(ComboManager, ComboWindowChangedDelegate);
		
		FComboCountChangedDelegate ComboCountChangedDelegate;
		ComboCountChangedDelegate.BindDynamic(this, &ThisClass::HandleComboCountChanged);
		ICombatComboManagerInterface::Execute_BindToComboCountChangedDelegate(ComboManager, ComboCountChangedDelegate);
	}
}

void UViewModel_ComboState::SetInComboWindow(const bool bNewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(bInComboWindow, bNewValue);
}

void UViewModel_ComboState::SetComboCount(const int32 NewValue)
{
	UE_MVVM_SET_PROPERTY_VALUE(ComboCount, NewValue);
}

void UViewModel_ComboState::HandleComboWindowChanged(UActorComponent* ComboManager, const bool bNewValue)
{
	SetInComboWindow(bInComboWindow);	
}

void UViewModel_ComboState::HandleComboCountChanged(UActorComponent* ComboManager, const int32 NewValue)
{
	SetComboCount(ComboCount);
}
