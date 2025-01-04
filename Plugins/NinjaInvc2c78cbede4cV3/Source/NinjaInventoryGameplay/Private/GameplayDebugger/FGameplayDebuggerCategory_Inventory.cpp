// Ninja Bear Studio Inc., all rights reserved.
#include "GameplayDebugger/FGameplayDebuggerCategory_Inventory.h"

#include "GameFramework/ItemFragments/ItemFragment_Quality.h"

#if WITH_GAMEPLAY_DEBUGGER

#include "CanvasItem.h"
#include "NinjaEquipmentTags.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryTags.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Engine/Canvas.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "GameFramework/ItemFragments/ItemFragment_Durability.h"
#include "GameFramework/ItemFragments/ItemFragment_Equipment.h"
#include "GameFramework/ItemFragments/ItemFragment_Level.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "GameFramework/ItemFragments/ItemFragment_UserInterface.h"
#include "GameFramework/ItemFragments/ItemFragment_Weight.h"

namespace UE::NinjaInventory::Debug
{
	// This is the longest name we can use for the UI (string format truncate with %.35s).
	// We use a variety of letters because MeasureString depends on kerning.
	const FString LongestDebugObjectName{ TEXT("ABCDEFGHIJKLMNOPQRSTUVWXYZ_ ABCDEFGH") };
}

FGameplayDebuggerCategory_Inventory::FGameplayDebuggerCategory_Inventory()
{
	BindKeyPress(EKeys::One.GetFName(), FGameplayDebuggerInputModifier::Shift, this, &FGameplayDebuggerCategory_Inventory::ToggleDefaultContainers, EGameplayDebuggerInputMode::Local);
	BindKeyPress(EKeys::Two.GetFName(), FGameplayDebuggerInputModifier::Shift, this, &FGameplayDebuggerCategory_Inventory::ToggleEquipmentContainers, EGameplayDebuggerInputMode::Local);
	BindKeyPress(EKeys::Three.GetFName(), FGameplayDebuggerInputModifier::Shift, this, &FGameplayDebuggerCategory_Inventory::ToggleLootableContainers, EGameplayDebuggerInputMode::Local);
	BindKeyPress(EKeys::Four.GetFName(), FGameplayDebuggerInputModifier::Shift, this, &FGameplayDebuggerCategory_Inventory::ToggleEmptyContainers, EGameplayDebuggerInputMode::Local);
	BindKeyPress(EKeys::Five.GetFName(), FGameplayDebuggerInputModifier::Shift, this, &FGameplayDebuggerCategory_Inventory::ToggleItemDetails, EGameplayDebuggerInputMode::Local);
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_Inventory::MakeInstance()
{
	return MakeShareable(new FGameplayDebuggerCategory_Inventory());
}

void FGameplayDebuggerCategory_Inventory::DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext)
{
	const UNinjaInventoryManagerComponent* InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(OwnerPC);
	if (IsValid(InventoryManager))
	{
		CanvasContext.CursorX += 200.0f;
		CanvasContext.CursorY -= CanvasContext.GetLineHeight();
		const TCHAR* Active = TEXT("{green}");
		const TCHAR* Inactive = TEXT("{grey}");
		CanvasContext.Printf(TEXT("Default [%s%s{white}]\tEquipment [%s%s{white}]\tLoot [%s%s{white}]\tEmpty [%s%s{white}]\tDetails [%s%s{white}]"),
			bShowDefaultContainers ? Active : Inactive, *GetInputHandlerDescription(0),
			bShowEquipmentContainers ? Active : Inactive, *GetInputHandlerDescription(1),
			bShowLootableContainers ? Active : Inactive, *GetInputHandlerDescription(2),
			bShowEmptyContainers ? Active : Inactive, *GetInputHandlerDescription(3),
			bShowItemDetails ? Active : Inactive, *GetInputHandlerDescription(4));
	}

	if (LastDrawDataEndSize <= 0.0f)
	{
		// Default to the full frame size
		LastDrawDataEndSize = CanvasContext.Canvas->SizeY - CanvasContext.CursorY - CanvasContext.CursorX;
	}

	const float ThisDrawDataStartPosition = CanvasContext.CursorY;
	
	const FVector2D BackgroundPosition{ CanvasContext.CursorX, CanvasContext.CursorY };
	const FVector2D BackgroundSize(CanvasContext.Canvas->SizeX - (2.0f * CanvasContext.CursorX), LastDrawDataEndSize);

	// Dark overlay for the text.
	constexpr FLinearColor BackgroundColor(0.1f, 0.1f, 0.1f, 0.8f);
	FCanvasTileItem Background(FVector2D(0.0f), BackgroundSize, BackgroundColor);
	Background.BlendMode = SE_BLEND_Translucent;
	CanvasContext.DrawItem(Background, BackgroundPosition.X, BackgroundPosition.Y);

	DrawInventoryItems(OwnerPC, CanvasContext, InventoryManager);
	
	LastDrawDataEndSize = CanvasContext.CursorY - ThisDrawDataStartPosition;
}

void FGameplayDebuggerCategory_Inventory::DrawInventoryItems(APlayerController* OwnerPC,
	FGameplayDebuggerCanvasContext& CanvasContext, const UNinjaInventoryManagerComponent* InventoryManager)
{
	using namespace UE::NinjaInventory::Debug;
	constexpr float Padding = 10.0f;
	
	static float MaxLineSize = 0.0f;
	if (MaxLineSize <= 0.0f)
	{
		float TempSizeY;
		const FString MaxLineString = FString::Printf(TEXT("%.35s: 0.000 [0.000]"), *LongestDebugObjectName);
		CanvasContext.MeasureString(MaxLineString, MaxLineSize, TempSizeY);
	}

	static float ItemNameSize = 0.f, PositionNameSize = 0.f, StackNameSize = 0.f, WeightNameSize = 0.f, EquipmentSize = 0.f;
	if (ItemNameSize <= 0.0f)
	{
		float TempSizeY = 0.0f;

		// We have to actually use representative strings because of the kerning.
		CanvasContext.MeasureString(*LongestDebugObjectName, ItemNameSize, TempSizeY);
		CanvasContext.MeasureString(TEXT("position: 000"), PositionNameSize, TempSizeY);
		CanvasContext.MeasureString(TEXT("stack: 000 / 000 / 000"), StackNameSize, TempSizeY);
		CanvasContext.MeasureString(TEXT("weight: 000.00 /000.00"), WeightNameSize, TempSizeY);
		CanvasContext.MeasureString(TEXT("equipment: no instance"), EquipmentSize, TempSizeY);
		ItemNameSize += Padding;
	}	
	
	const float ColumnWidth = MaxLineSize + Padding;
	const float CanvasWidth = CanvasContext.Canvas->SizeX;
	const int Columns = FMath::Max(1, FMath::FloorToInt(CanvasWidth / ColumnWidth));

	TArray<UNinjaInventoryContainer*> Containers;
	if (IsValid(InventoryManager))
	{
	 	Containers = InventoryManager->GetContainers();
		for (const UNinjaInventoryContainer* Container : Containers)
		{
			FGameplayTagContainer ContainerTags;
			Container->GetOwnedGameplayTags(ContainerTags);

			const bool bIsDefaultContainer = ContainerTags.HasTagExact(Tag_Inventory_Container_Default);
			if (bIsDefaultContainer && !bShowDefaultContainers)
			{
				continue;
			}

			const bool bIsEquipmentContainer = ContainerTags.HasTagExact(Tag_Inventory_Container_Equipment);
			if (bIsEquipmentContainer && !bShowEquipmentContainers)
			{
				continue;
			}

			const bool bIsLootableContainer = ContainerTags.HasTagExact(Tag_Inventory_Container_Lootable);
			if (bIsLootableContainer && !bShowLootableContainers)
			{
				continue;
			}

			const int32 ItemCount = InventoryManager->CountItemsInContainer(Container);
			if (ItemCount == 0 && !bShowEmptyContainers)
			{
				continue;
			}
			
			TStringBuilder<1024> FullContainerName;
			FullContainerName.Appendf(TEXT("%s"), *Container->GetData()->GetDisplayName().ToString());

			if (!bIsEquipmentContainer)
			{
				const int32 Slots = InventoryManager->CountAvailableSlotsInContainer(Container);
				const int32 TotalSlots = InventoryManager->CountTotalSlotsInContainer(Container);
				FullContainerName.Appendf(TEXT(" {Turquoise}[slots: %.3d / %.3d]"), Slots, TotalSlots);	
			}
			
			if (bIsDefaultContainer)
			{
				FullContainerName.Append(TEXT(" {Turquoise}[def]"));
			}

			if (bIsEquipmentContainer)
			{
				FullContainerName.Append(TEXT(" {Turquoise}[equip]"));
			}

			if (bIsLootableContainer)
			{
				FullContainerName.Append(TEXT(" {Turquoise}[loot]"));
			}
			
			CanvasContext.Print(*FullContainerName);
			CanvasContext.CursorX += 200.0f;
			CanvasContext.CursorY -= CanvasContext.GetLineHeight();

			// Start items in a new line.
			CanvasContext.MoveToNewLine();
		
			TArray<UNinjaInventoryItem*> Items = InventoryManager->GetItemsByContainer(Container);
			if (Items.IsEmpty())
			{
				const float CursorX = CanvasContext.CursorX + Padding;
				const float CursorY = CanvasContext.CursorY;
				const float PositionX = CursorX + ItemNameSize * 0;
			
				CanvasContext.PrintAt(PositionX, CursorY, FString::Printf(TEXT("{grey}empty")));
				CanvasContext.MoveToNewLine();
			}
		
			for (const UNinjaInventoryItem* Item : Items)
			{
				const float CursorX = CanvasContext.CursorX + Padding;
				float CursorY = CanvasContext.CursorY;

				FString ItemName;
				const UItemFragment_UserInterface* UserInterfaceFragment = Item->FindFragment<UItemFragment_UserInterface>();
				if (IsValid(UserInterfaceFragment))
				{
					ItemName = UserInterfaceFragment->GetDisplayName().ToString();
				}
				else
				{
					ItemName = *GetNameSafe(Item);
				}

				int32 Position;
				const UItemFragment_Container* ContainerFragment = Item->FindFragment<UItemFragment_Container>();
				if (IsValid(ContainerFragment))
				{
					Position = ContainerFragment->GetPosition(Item);
				}
				else
				{
					Position = INDEX_NONE;
				}

				int32 Stack, StackLimit, MaximumLimit;
				const UItemFragment_Stack* StackFragment = Item->FindFragment<UItemFragment_Stack>();
				if (IsValid(StackFragment))
				{
					Stack = StackFragment->GetStackSize(Item);
					StackLimit = StackFragment->GetStackLimit();
					MaximumLimit = StackFragment->GetMaximumLimit();
				}
				else
				{
					Stack = 0;
					StackLimit = 0;
					MaximumLimit = 0;
				}

				float Weight, TotalWeight;
				const UItemFragment_Weight* WeightFragment = Item->FindFragment<UItemFragment_Weight>();
				if (IsValid(WeightFragment))
				{
					Weight = WeightFragment->GetWeight();
					TotalWeight = WeightFragment->GetTotalWeight(Item);
				}
				else
				{
					Weight = 0.f;
					TotalWeight = 0.f;
				}

				FString EquipmentState = "n/a";
				const UItemFragment_Equipment* EquipmentFragment = Item->FindFragment<UItemFragment_Equipment>();
				if (IsValid(EquipmentFragment))
				{
					const UNinjaEquipment* Equipment = EquipmentFragment->GetEquipment(Item);
					if (IsValid(Equipment))
					{
						FGameplayTag StateTag = Equipment->GetStateTag();
						EquipmentState = StateTag == Tag_Equipment_State_Activated ? "activated" : "deactivated";
					}
					else
					{
						EquipmentState = "no instance";
					}
				}

				int32 Level;
				const UItemFragment_Level* LevelFragment = Item->FindFragment<UItemFragment_Level>();
				if (IsValid(LevelFragment))
				{
					Level = LevelFragment->GetLevel(Item);
				}
				else
				{
					Level = 0;
				}
				
				int32 Durability, MaxDurability;
				const UItemFragment_Durability* DurabilityFragment = Item->FindFragment<UItemFragment_Durability>();
				if (IsValid(DurabilityFragment))
				{
					Durability = DurabilityFragment->GetDurability(Item);
					MaxDurability = DurabilityFragment->GetMaximumDurability();
				}
				else
				{
					Durability = 0;
					MaxDurability = 0;
				}			

				FString Quality = "n/a";
				const UItemFragment_Quality* QualityFragment = Item->FindFragment<UItemFragment_Quality>();
				if (IsValid(QualityFragment))
				{
					Quality = QualityFragment->GetQualityText().ToString();
				}
				
				float PositionX = CursorX + ItemNameSize * 0;
				CanvasContext.PrintAt(PositionX, CursorY, FString::Printf(TEXT("{yellow}%s"), *ItemName.Left(35)));

				if (!bShowItemDetails)
				{
					PositionX = CursorX + ItemNameSize * 1;
					CanvasContext.PrintAt(PositionX, CursorY, FString::Printf(TEXT("{grey}position: {white}%.3d"), Position));

					PositionX = CursorX + ItemNameSize * 2 + PositionNameSize;
					CanvasContext.PrintAt(PositionX, CursorY, FString::Printf(TEXT("{grey}stack: {white}%03d / %03d / %03d"), Stack, StackLimit, MaximumLimit));

					PositionX = CursorX + ItemNameSize * 3 + PositionNameSize + StackNameSize + WeightNameSize;
					CanvasContext.PrintAt(PositionX, CursorY, FString::Printf(TEXT("{grey}equipment: {white}%s"), *EquipmentState));
				}
				
				// PrintAt would have reset these values, restore them.
				CanvasContext.CursorX = CursorX + (CanvasWidth / Columns);
				CanvasContext.CursorY = CursorY;

				// If we're going to overflow, go to the next line...
				if (CanvasContext.CursorX + ColumnWidth >= CanvasWidth)
				{
					CanvasContext.MoveToNewLine();
					CanvasContext.CursorX += Padding;
				}
				
				// End the row with a new line.
				if (CanvasContext.CursorX != CanvasContext.DefaultX)
				{
					CanvasContext.MoveToNewLine();
				}

				if (bShowItemDetails)
				{
					CursorY = CanvasContext.CursorY;
					PositionX = CursorX + Padding + ItemNameSize * 0;
					
					CanvasContext.PrintAt(PositionX, CursorY,
						FString::Printf(TEXT("{grey}position: {white}%.3d - {grey}stack: {white}%03d / %03d / %03d - {grey}level: {white}%03d - {grey}quality: {white}%s - {grey}durability: {white}%03d / %03d - {grey}weight: {white}%.2f / %.2f - {grey}equipment: {white}%s"),
						Position,
						Stack, StackLimit, MaximumLimit,
						Level,
						*Quality,
						Durability, MaxDurability,
						Weight, TotalWeight,
						*EquipmentState)
					);
					
					CanvasContext.MoveToNewLine();
				}
			}
			
			// End with a newline to separate from the other categories.
			CanvasContext.MoveToNewLine();
		}
	}
}

void FGameplayDebuggerCategory_Inventory::ToggleDefaultContainers()
{
	bShowDefaultContainers = !bShowDefaultContainers;
}

void FGameplayDebuggerCategory_Inventory::ToggleEquipmentContainers()
{
	bShowEquipmentContainers = !bShowEquipmentContainers;
}

void FGameplayDebuggerCategory_Inventory::ToggleLootableContainers()
{
	bShowLootableContainers = !bShowLootableContainers;
}

void FGameplayDebuggerCategory_Inventory::ToggleEmptyContainers()
{
	bShowEmptyContainers = !bShowEmptyContainers;
}

void FGameplayDebuggerCategory_Inventory::ToggleItemDetails()
{
	bShowItemDetails = !bShowItemDetails;
}
#endif
