// Ninja Bear Studio Inc., all rights reserved.
#include "UI/Widgets/NinjaInventoryDropZoneWidget.h"

#include "NinjaInventoryGameplayFunctionLibrary.h"
#include "NinjaInventoryLog.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Engine/HitResult.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/ItemFragments/ItemFragment_Pickup.h"
#include "UI/NinjaInventoryDragDropOperation.h"

void UNinjaInventoryDropZoneWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	SetVisibility(ESlateVisibility::Visible);
}

bool UNinjaInventoryDropZoneWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	const UNinjaInventoryDragDropOperation* Operation = Cast<UNinjaInventoryDragDropOperation>(InOperation);
	if (!IsValid(Operation))
	{
		return false;
	}

	UNinjaInventoryItem* Item = Operation->GetItem();
	UNinjaInventoryManagerComponent* InventoryManager = Operation->GetInventoryManager();
	
	if (!IsValid(Item) || !IsValid(InventoryManager))
	{
		return false;
	}
	
	UItemFragment_Pickup* PickupFragment = Item->FindFragment<UItemFragment_Pickup>();
	if (!IsValid(PickupFragment) || !PickupFragment->CanDropItem(Item))
	{
		return false;
	}

	const FVector Location = GetDropLocationInWorldSpace(Operation);
	const bool bDropScopeIsLocal = DetermineDropScope(Item);
		
	const TInstancedStruct<FInventoryFragmentPayload>& Payload = UNinjaInventoryGameplayFunctionLibrary::CreateDropPayload(Item, Location, bDropScopeIsLocal); 
	InventoryManager->PerformFragmentOperation(PickupFragment, Payload);

	return true;
}

FVector UNinjaInventoryDropZoneWidget::GetDropLocationInWorldSpace_Implementation(const UNinjaInventoryDragDropOperation* Operation) const
{
	const UWidget* VisualWidget = Operation->DefaultDragVisual;
	FVector2D PixelPosition; FVector2D ViewportPosition;
	USlateBlueprintLibrary::LocalToViewport(GetWorld(), VisualWidget->GetCachedGeometry(), FVector2D::ZeroVector, PixelPosition, ViewportPosition);

	FCollisionQueryParams Params;
	Params.bTraceComplex = true;
	
	FHitResult Hit;
	const APlayerController* PlayerController = GetOwningPlayer();
	if (PlayerController->GetHitResultAtScreenPosition(PixelPosition, ECC_Visibility, Params, Hit))
	{
		return Hit.Location;
	}

	INVENTORY_LOG(Warning, "Unable to retrieve widget location! Using actor location instead.");
	return PlayerController->GetPawn()->GetActorLocation();
}

bool UNinjaInventoryDropZoneWidget::DetermineDropScope_Implementation(const UNinjaInventoryItem* Item) const
{
	return bIsLocalOnly;
}
