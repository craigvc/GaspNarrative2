// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryLootWidget.h"

#include "MVVMSubsystem.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "TimerManager.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "UI/Viewmodels/NinjaInventoryManagerViewModel.h"
#include "View/MVVMView.h"

UNinjaInventoryLootWidget::UNinjaInventoryLootWidget()
{
	bSetVisibilityOnActivated = true;
	bSetVisibilityOnDeactivated = true;
}

void UNinjaInventoryLootWidget::NativeConstruct()
{
	Super::NativeConstruct();
	DeactivateWidget();
	InitializeInventory();
}

void UNinjaInventoryLootWidget::InitializeInventory()
{
	const APlayerController* PlayerControllerOwner = GetOwningPlayer();
	if (IsValid(PlayerControllerOwner))
	{
		UNinjaInventoryManagerComponent* InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(PlayerControllerOwner);
		if (IsValid(InventoryManager))
		{
			InitializeViewModels(InventoryManager);	
		}
		else
		{
			const FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &ThisClass::InitializeInventory);
			GetWorld()->GetTimerManager().SetTimerForNextTick(TimerDelegate);
		}
	}	
}

void UNinjaInventoryLootWidget::InitializeViewModels(UNinjaInventoryManagerComponent* InventoryManager)
{
#if ENGINE_MINOR_VERSION == 3
	
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();

	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* ViewModel = ViewSource.Source; 
		SetInventoryManagerToViewModel(ViewModel, InventoryManager);
	}
	
#elif ENGINE_MINOR_VERSION > 3

	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();

	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* ViewModel = ViewSource.Source; 
		SetInventoryManagerToViewModel(ViewModel, InventoryManager);
	}
	
#endif
}

void UNinjaInventoryLootWidget::SetInventoryManagerToViewModel(UObject* Source, UNinjaInventoryManagerComponent* InventoryManager)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryManagerViewModel>())
	{
		UNinjaInventoryManagerViewModel* ItemDataViewModel = Cast<UNinjaInventoryManagerViewModel>(Source);
		ItemDataViewModel->SetInventoryManager(InventoryManager);
	}
}

void UNinjaInventoryLootWidget::SetHasLoot(bool bHasLoot)
{
	if (bHasLoot)
	{
		ActivateWidget();	
	}
	else
	{
		DeactivateWidget();
	}
}

