// Copyright Narrative Tools 2022. 


#include "NarrativeActivatableWidget.h"
#include "Input/CommonUIInputTypes.h"

UNarrativeActivatableWidget::UNarrativeActivatableWidget()
{
	bUseGameInput = false; 
	bFocusDesiredTargetOnActivate = true; 
	bDeactivateOnBack = false; 
}

void UNarrativeActivatableWidget::NativeDestruct()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		if (Handle.IsValid())
		{
			Handle.Unregister();
		}
	}
	BindingHandles.Empty();

	Super::NativeDestruct();
}

TOptional<FUIInputConfig> UNarrativeActivatableWidget::GetDesiredInputConfig() const
{
	if (bUseGameInput)
	{
		FUIInputConfig GameInput = FUIInputConfig(ECommonInputMode::Game, EMouseCaptureMode::CapturePermanently, true);
		return TOptional<FUIInputConfig>(GameInput);
	}

	return Super::GetDesiredInputConfig();
}

void UNarrativeActivatableWidget::RegisterBinding(FDataTableRowHandle InputAction, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandle& BindingHandle, FText OverrideDisplayName, const bool bShouldDisplayInActionBar/*=true*/)
{
	FBindUIActionArgs BindArgs(InputAction, FSimpleDelegate::CreateLambda([InputAction, Callback]()
		{
			Callback.ExecuteIfBound(InputAction.RowName);
		}));
	BindArgs.bDisplayInActionBar = bShouldDisplayInActionBar;
	BindArgs.OverrideDisplayName = OverrideDisplayName;

	BindingHandle.Handle = RegisterUIActionBinding(BindArgs);
	BindingHandles.Add(BindingHandle.Handle);
}

void UNarrativeActivatableWidget::UnregisterBinding(FInputActionBindingHandle BindingHandle)
{
	RemoveActionBinding(BindingHandle.Handle);

	if (BindingHandle.Handle.IsValid())
	{
		BindingHandle.Handle.Unregister();
		BindingHandles.Remove(BindingHandle.Handle);
	}
}

void UNarrativeActivatableWidget::UnregisterAllBindings()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		Handle.Unregister();
	}
	BindingHandles.Empty();
}

void UNarrativeActivatableWidget::SetBindingDisplayName(FInputActionBindingHandle BindingHandle, FText NewDisplayName)
{
	if (BindingHandle.Handle.IsValid())
	{
		BindingHandle.Handle.SetDisplayName(NewDisplayName);
	}
}

void UNarrativeActivatableWidget::NativeOnActivated()
{
	Super::NativeOnActivated();

	if (bFocusDesiredTargetOnActivate)
	{
		if (UWidget* Widget = NativeGetDesiredFocusTarget())
		{
			Widget->SetFocus();
		}
	}

	NativeRegisterActions();
	RegisterActions();
}

void UNarrativeActivatableWidget::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	UnregisterAllBindings();
}

void UNarrativeActivatableWidget::NativeRegisterActions()
{

}
