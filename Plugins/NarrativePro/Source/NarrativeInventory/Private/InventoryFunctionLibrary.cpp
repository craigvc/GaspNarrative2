// Copyright Narrative Tools 2022. 

#include "InventoryFunctionLibrary.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/PlayerController.h"
#include "InventoryComponent.h"
#include "NarrativeItem.h"

class UNarrativeInventoryComponent* UInventoryFunctionLibrary::GetInventoryComponentFromTarget(AActor* Target)
{
	if (!Target)
	{
		return nullptr;
	}

	if (UNarrativeInventoryComponent* InventoryComp = Target->FindComponentByClass<UNarrativeInventoryComponent>())
	{
		return InventoryComp;
	}

	//Try player state, then pawn, then controller 
	if (APawn* OwningPawn = Cast<APawn>(Target))
	{
		if (OwningPawn->GetPlayerState())
		{
			return OwningPawn->GetPlayerState()->FindComponentByClass<UNarrativeInventoryComponent>();
		}

		if (OwningPawn->GetController())
		{
			return OwningPawn->GetController()->FindComponentByClass<UNarrativeInventoryComponent>();
		}
	}

	//Same for controller based target 
	if (APlayerController* OwningController = Cast<APlayerController>(Target))
	{
		if (OwningController->GetPawn())
		{
			if (OwningController->GetPlayerState<APlayerState>())
			{
				return OwningController->GetPlayerState<APlayerState>()->FindComponentByClass<UNarrativeInventoryComponent>();
			}


			return OwningController->GetPawn()->FindComponentByClass<UNarrativeInventoryComponent>();
		}
	}

	return nullptr;
}

TArray<class UNarrativeItem*> UInventoryFunctionLibrary::SortItemArrayAlphabetical(TArray<class UNarrativeItem*> InItems, const bool bReverse)
{

	TArray<class UNarrativeItem*> RetItems = InItems;

	//Sort the replies by their Y position in the graph
	if (bReverse)
	{
		RetItems.Sort([](const UNarrativeItem& ItemA, const UNarrativeItem& ItemB) {
			return ItemA.DisplayName.ToString() < ItemB.DisplayName.ToString();
			});
	}
	else
	{
		RetItems.Sort([](const UNarrativeItem& ItemA, const UNarrativeItem& ItemB) {
			return ItemA.DisplayName.ToString() > ItemB.DisplayName.ToString();
			});
	}

	return RetItems;
}

TArray<class UNarrativeItem*> UInventoryFunctionLibrary::SortItemArrayWeight(TArray<class UNarrativeItem*> InItems, const bool bReverse)
{
	TArray<class UNarrativeItem*> RetItems = InItems;

	//Sort the replies by their Y position in the graph
	if (bReverse)
	{
		RetItems.Sort([](const UNarrativeItem& ItemA, const UNarrativeItem& ItemB) {
			return ItemA.GetStackWeight() > ItemB.GetStackWeight();
			});
	}
	else
	{
		RetItems.Sort([](const UNarrativeItem& ItemA, const UNarrativeItem& ItemB) {
			return ItemA.GetStackWeight() < ItemB.GetStackWeight();
			});
	}

	
	return RetItems;
}
