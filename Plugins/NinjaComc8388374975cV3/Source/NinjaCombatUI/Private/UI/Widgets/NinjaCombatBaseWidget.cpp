// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaCombatBaseWidget.h"

#include "AbilitySystemGlobals.h"
#include "MVVMSubsystem.h"
#include "Blueprint/WidgetTree.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Runtime/Launch/Resources/Version.h"
#include "UI/Interfaces/CombatViewModelInterface.h"
#include "UI/ViewModel/NinjaCombatViewModel.h"
#include "View/MVVMView.h"

DEFINE_LOG_CATEGORY(LogNinjaCombatWidget);

UNinjaCombatBaseWidget::UNinjaCombatBaseWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bShowWidgetWithCombatActor = true;
	bCollapseWidgetWithoutCombatActor = true;
	DefaultVisibility = ESlateVisibility::HitTestInvisible;
}

void UNinjaCombatBaseWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DefaultVisibility = GetVisibility();
	
	RefreshVisibility();
	RefreshViewModels();
}

void UNinjaCombatBaseWidget::NativeDestruct()
{
	ClearViewModels();
	Super::NativeDestruct();
}

void UNinjaCombatBaseWidget::SetCombatActor_Implementation(AActor* NewCombatActor)
{
	CombatActor = NewCombatActor;

	RefreshVisibility();
	RefreshViewModels();
}

AActor* UNinjaCombatBaseWidget::GetCombatActor() const
{
	return IsValid(CombatActor) ? CombatActor : GetOwningPlayerPawn(); 
}

UAbilitySystemComponent* UNinjaCombatBaseWidget::GetAbilityComponent() const
{
	return UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetCombatActor());
}

void UNinjaCombatBaseWidget::RefreshVisibility()
{
	if (IsValid(CombatActor) && bShowWidgetWithCombatActor)
	{
		SetVisibility(DefaultVisibility);
	}
	else if (!IsValid(CombatActor) && bCollapseWidgetWithoutCombatActor)
	{
		SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UNinjaCombatBaseWidget::RefreshViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		if (Source != this)
		{
			SetWidgetDataToViewModel(Source);	
		}
	}

#elif ENGINE_MINOR_VERSION > 3

	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		if (Source != this)
		{
			SetWidgetDataToViewModel(Source);	
		}
	}
	
#endif
}

void UNinjaCombatBaseWidget::SetWidgetDataToViewModel(UObject* Source)
{
	if (!IsValid(Source))
	{
		return;
	}

	if (Source->Implements<UCombatViewModelInterface>())
	{
		// Set this first, since it might be required by the next interfaces!
		ICombatViewModelInterface::Execute_SetWidgetOwner(Source, GetOwningPlayer());
	}
	
	if (Source->Implements<UCombatActorAwareInterface>())
	{
		Execute_SetCombatActor(Source, CombatActor);
	}
}


void UNinjaCombatBaseWidget::ClearViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		ClearWidgetDataFromViewModel(Source);
	}

#elif ENGINE_MINOR_VERSION > 3

	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		ClearWidgetDataFromViewModel(Source);
	}
	
#endif
}

void UNinjaCombatBaseWidget::ClearWidgetDataFromViewModel(UObject* Source)
{
	if (!IsValid(Source))
	{
		return;
	}
	
	if (Source->Implements<UCombatActorAwareInterface>())
	{
		Execute_SetCombatActor(Source, nullptr);
	}

	if (Source->Implements<UCombatViewModelInterface>())
	{
		ICombatViewModelInterface::Execute_ClearWidgetOwner(Source);
	}
}
