// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryWindowWidget.h"

#include "MVVMSubsystem.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "TimerManager.h"
#include "Async/NinjaInventoryAction_WaitForInventorySystem.h"
#include "Blueprint/WidgetTree.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "UI/NinjaInventoryTooltipController.h"
#include "UI/Interfaces/InventoryItemViewInterface.h"
#include "UI/Interfaces/InventoryWindowAwareInterface.h"
#include "UI/Viewmodels/NinjaInventoryManagerViewModel.h"
#include "View/MVVMView.h"

UNinjaInventoryWindowWidget::UNinjaInventoryWindowWidget()
{
	bSetVisibilityOnActivated = true;
	bSetVisibilityOnDeactivated = true;
	
	InventoryManagerPoolInterval = 0.2f;
	TooltipControllerClass = UNinjaInventoryTooltipController::StaticClass();

	SetIsFocusable(true);
}

void UNinjaInventoryWindowWidget::NativeConstruct()
{
	Super::NativeConstruct();
	TryConnectToInventoryManager();
}

void UNinjaInventoryWindowWidget::NativeTick(const FGeometry& MyGeometry, const float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (IsValid(TooltipController))
	{
		TooltipController->Tick(InDeltaTime);
	}
}

void UNinjaInventoryWindowWidget::NativeDestruct()
{
	if (IsValid(InventoryManagerAction))
	{
		InventoryManagerAction->Cancel();
		InventoryManagerAction = nullptr;
	}
	
	Super::NativeDestruct();
}

void UNinjaInventoryWindowWidget::TryConnectToInventoryManager()
{
	APlayerController* InventoryOwner = GetOwningPlayer();
	
	InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(InventoryOwner);
	if (IsValid(InventoryManager) && InventoryManager->IsInventoryInitialized())
	{
		InitializeInventory();
	}
	else
	{
		InventoryManagerAction = UNinjaInventoryAction_WaitForInventorySystem::CreateAction(this, InventoryOwner, InventoryManagerPoolInterval);
		if (IsValid(InventoryManagerAction))
		{
			InventoryManagerAction->OnCompleted.AddUniqueDynamic(this, &ThisClass::InitializeInventory);
			InventoryManagerAction->Activate();
		}	
	}	
}

void UNinjaInventoryWindowWidget::InitializeInventory()
{
	if (!IsValid(InventoryManager))
	{
		const APlayerController* PlayerControllerOwner = GetOwningPlayer();
		InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(PlayerControllerOwner);
	}
	
	if (IsValid(InventoryManager))
	{
		InitializeItemTooltipController();
		InitializeWidgets();
		InitializeViewModels();
	}
	else
	{
		const APlayerController* PlayerControllerOwner = GetOwningPlayer();
		INVENTORY_LOG_ARGS(Warning, "Unable to retrieve inventory for %s!", *GetNameSafe(PlayerControllerOwner));
	}
}

void UNinjaInventoryWindowWidget::InitializeItemTooltipController()
{
	if (IsValid(TooltipControllerClass))
	{
		TooltipController = NewObject<UNinjaInventoryTooltipController>(GetOuter(), TooltipControllerClass);
		checkf(IsValid(TooltipController), TEXT("Unexpected null value for the Tooltip Controller!"));
		TooltipController->Initialize(GetOwningPlayer());
	}
}

void UNinjaInventoryWindowWidget::InitializeWidgets()
{
	WidgetTree->ForEachWidget([&] (UWidget* Widget)
	{
		SetInventoryWindowToWidget(Widget);
	});
}

void UNinjaInventoryWindowWidget::SetInventoryWindowToWidget(UWidget* Widget)
{
	if (IsValid(Widget) && Widget->Implements<UInventoryWindowAwareInterface>())
	{
		IInventoryWindowAwareInterface::Execute_SetInventoryWindowWidget(Widget, this);
	}
}

void UNinjaInventoryWindowWidget::InitializeViewModels()
{
	const UMVVMView* View = UMVVMSubsystem::GetViewFromUserWidget(this);
	if (!IsValid(View) || !View->AreSourcesInitialized())
	{
		INVENTORY_LOG(Verbose, "No Viewmodel sources assigned or initialized for Inventory Window Widget!");
		return;
	}

#if ENGINE_MINOR_VERSION == 3
	
	const TArrayView<const FMVVMViewSource> Sources = View->GetSources();
	for (const FMVVMViewSource& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source; 
		SetInventoryViewModel(Source);
	}

#elif ENGINE_MINOR_VERSION > 3
	
	const TArrayView<const FMVVMView_Source> Sources = View->GetSources();
	for (const FMVVMView_Source& ViewSource : Sources)
	{
		UObject* Source = ViewSource.Source;
		SetInventoryViewModel(Source);
	}
	
#endif
}

void UNinjaInventoryWindowWidget::SetInventoryViewModel(UObject* Source)
{
	if (IsValid(Source) && Source->IsA<UNinjaInventoryManagerViewModel>())
	{
		UNinjaInventoryManagerViewModel* ViewModel = Cast<UNinjaInventoryManagerViewModel>(Source);
		ViewModel->SetInventoryManager(InventoryManager);
	}
}

UWidget* UNinjaInventoryWindowWidget::NativeGetDesiredFocusTarget() const
{
	UWidget* BlueprintWidget = Super::NativeGetDesiredFocusTarget();
	if (IsValid(BlueprintWidget))
	{
		return BlueprintWidget;
	}
	
	TArray<UWidget*> Widgets;
	WidgetTree->GetAllWidgets(Widgets);
	
	const int32 ItemWidgetIdx = Widgets.IndexOfByPredicate([](const UWidget* Widget)
	{
		return Widget->Implements<UInventoryItemViewInterface>()
			&& IInventoryItemViewInterface::Execute_HasItem(Widget);
	});

	if (ItemWidgetIdx == INDEX_NONE)
	{
		return nullptr;
	}

	return Widgets[ItemWidgetIdx];
}

UNinjaInventoryManagerComponent* UNinjaInventoryWindowWidget::GetInventoryManager() const
{
	return InventoryManager;
}

UNinjaInventoryTooltipController* UNinjaInventoryWindowWidget::GetTooltipController() const
{
	return TooltipController;
}

UNinjaInventoryTooltipWidget* UNinjaInventoryWindowWidget::RequestTooltip(UUserWidget* RequestingWidget) const
{
	if (IsValid(TooltipController))
	{
		return TooltipController->RequestTooltip(RequestingWidget);
	}

	return nullptr;
}
