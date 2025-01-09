// Copyright Narrative Tools 2022. 

#include "NarrativeItem.h"
#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "UObject/UnrealType.h"
#include "Engine/BlueprintGeneratedClass.h"
#include <GameFramework/PlayerState.h>

#define LOCTEXT_NAMESPACE "Item"

#define ItemStat_DisplayName "DisplayName"
#define ItemStat_Weight "Weight"
#define ItemStat_Quantity "Quantity"
#define ItemStat_RechargeDuration "RechargeDuration"
#define ItemStat_StackWeight "StackWeight"
#define ItemStat_MaxStackSize "MaxStackSize"
#define ItemStat_BaseValue "BaseValue"

UNarrativeItem::UNarrativeItem()
{
	DisplayName = LOCTEXT("ItemName", "Item");
	UseActionText = LOCTEXT("UseActionText", "Use");
	Weight = 0.f;
	bStackable = true;
	Quantity = 1;
	MaxStackSize = 2;
	RepKey = 0;
	LastUseTime = -FLT_MAX;
	BaseValue = 10;

	FString NameString = GetName();

	//Add the Default Speaker to the Quest 
	int32 UnderscoreIndex = -1;

	if (NameString.FindChar(TCHAR('_'), UnderscoreIndex))
	{
		//remove item name prefix
		DisplayName = FText::FromString(FName::NameToDisplayString(NameString.RightChop(UnderscoreIndex + 1), false));
	}
	else
	{
		DisplayName = FText::FromString(NameString);
	}

	Stats.Add(FNarrativeItemStat(LOCTEXT("WeightStatDisplayText", "Weight"), ItemStat_Weight, LOCTEXT("WeightStatTooltip", "The weight of the item.")));
	Stats.Add(FNarrativeItemStat(LOCTEXT("QuantityStatDisplayText", "Quantity"), ItemStat_Quantity, LOCTEXT("WeightStatTooltip", "The amount of the item you have.")));
}

void UNarrativeItem::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	//Narrative inventory needs items to support user added blueprint replicated variables 
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	DOREPLIFETIME(UNarrativeItem, Quantity);
	DOREPLIFETIME_CONDITION_NOTIFY(UNarrativeItem, bActive, COND_None, REPNOTIFY_OnChanged);
	DOREPLIFETIME_CONDITION(UNarrativeItem, LastUseTime, COND_OwnerOnly);
}

bool UNarrativeItem::IsSupportedForNetworking() const
{
	return true;
}

class UWorld* UNarrativeItem::GetWorld() const
{
	return World;
}

#if WITH_EDITOR
void UNarrativeItem::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName ChangedPropertyName = PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	//UPROPERTY clamping doesn't support using a variable to clamp so we do in here instead
	if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(UNarrativeItem, Quantity))
	{
		Quantity = FMath::Clamp(Quantity, 1, GetMaxStackSize());
	}
	else if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(UNarrativeItem, bStackable))
	{
		if (!bStackable)
		{
			Quantity = 1;
		}
	}
}

bool UNarrativeItem::CanEditChange(const FProperty* InProperty) const
{
	return Super::CanEditChange(InProperty);
}

#endif

bool UNarrativeItem::HasAuthority() const
{
	return (OwningInventory && OwningInventory->GetOwnerRole() >= ROLE_Authority);
}


void UNarrativeItem::OnRep_bActive(const bool bOldActive)
{
	if (bActive)
	{
		Activated();
	}
	else
	{
		Deactivated();
	}
}

void UNarrativeItem::SetActive(const bool bNewActive, const bool bForce)
{
	if (bCanActivate)
	{
		if (bNewActive != bActive || bForce)
		{
			bActive = bNewActive;
			OnRep_bActive(!bActive);
			MarkDirtyForReplication();
		}
	}

}

void UNarrativeItem::OnRep_Quantity(const int32 OldQuantity)
{
	OnItemModified.Broadcast();
}

void UNarrativeItem::SetQuantity(const int32 NewQuantity)
{
	if (NewQuantity != Quantity)
	{
		const int32 OldQuantity = Quantity;
		Quantity = FMath::Clamp(NewQuantity, 0, GetMaxStackSize());
		OnRep_Quantity(OldQuantity);
		MarkDirtyForReplication();
	}
}

void UNarrativeItem::SetLastUseTime(const float NewLastUseTime)
{
	LastUseTime = NewLastUseTime;
	MarkDirtyForReplication();
}

APlayerController* UNarrativeItem::GetOwningController() const
{
	if (OwningInventory)
	{
		return OwningInventory->GetOwningController();
	}

	return nullptr;
}

APawn* UNarrativeItem::GetOwningPawn() const
{
	//We might need to grab owning pawn before OwningInventory has been set by UInventoryComponent::OnRep_Items() - grab via the playerstate outer instead 
	if (APlayerState* PS = Cast<APlayerState>(GetOuter()))
	{
		if (APawn* P = PS->GetPawn())
		{
			return P;
		}
	}
	else
	{
		if (APawn* P = Cast<APawn>(GetOuter()))
		{
			return P;
		}
	}

	if (OwningInventory)
	{
		return OwningInventory->GetOwningPawn();
	}
	return nullptr;
}

void UNarrativeItem::Use()
{
	
}

void UNarrativeItem::AddedToInventory(class UNarrativeInventoryComponent* Inventory)
{
	
}

void UNarrativeItem::RemovedFromInventory(class UNarrativeInventoryComponent* Inventory)
{
	if (bActive)
	{
		Deactivated();
	}
}

void UNarrativeItem::MarkDirtyForReplication()
{
	//Mark this object for replication
	++RepKey;

	//Mark the array for replication
	if (OwningInventory)
	{
		++OwningInventory->ReplicatedItemsKey;
	}
}

FText UNarrativeItem::GetRawDescription_Implementation()
{
	return Description;
}

FText UNarrativeItem::GetParsedDescription()
{
	//Replace variables in dialogue line
	FString LineString = Description.ToString();

	int32 OpenBraceIdx = -1;
	int32 CloseBraceIdx = -1;
	bool bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
	bool bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);
	uint32 Iters = 0; // More than 50 wildcard replaces and something has probably gone wrong, so safeguard against that

	while (bFoundOpenBrace && bFoundCloseBrace && OpenBraceIdx < CloseBraceIdx && Iters < 50)
	{
		const FString VariableName = LineString.Mid(OpenBraceIdx + 1, CloseBraceIdx - OpenBraceIdx - 1);
		const FString VariableVal = GetStringVariable(VariableName);

		//if (!VariableVal.IsEmpty()) //Not sure why this was even here, unimplemented variables should still be replaced, we'd never want to show {VariableName} to an end user 
		{
			LineString.RemoveAt(OpenBraceIdx, CloseBraceIdx - OpenBraceIdx + 1);
			LineString.InsertAt(OpenBraceIdx, VariableVal);
		}

		bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
		bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);

		Iters++;
	}

	return FText::FromString(LineString);
}

FString UNarrativeItem::GetStringVariable_Implementation(const FString& VariableName)
{
	//Overriable in BP in case you want to add more 
	if (VariableName == ItemStat_DisplayName)
	{
		return DisplayName.ToString();
	}
	else if (VariableName == ItemStat_Weight)
	{
		return FString::SanitizeFloat(Weight);
	}
	else if (VariableName == ItemStat_RechargeDuration)
	{
		return FString::SanitizeFloat(UseRechargeDuration);
	}
	else if (VariableName == ItemStat_StackWeight)
	{
		return FString::SanitizeFloat(GetStackWeight());
	}
	else if (VariableName == ItemStat_Quantity)
	{
		return FString::FromInt(Quantity);
	}
	else if (VariableName == ItemStat_MaxStackSize)
	{
		return FString::FromInt(MaxStackSize);
	}
	else if (VariableName == ItemStat_BaseValue)
	{
		return FString::FromInt(BaseValue);
	}

	return FString();
}

void UNarrativeItem::Activated_Implementation() 
{

}

void UNarrativeItem::Deactivated_Implementation() 
{

}

bool UNarrativeItem::CanBeRemoved_Implementation() const
{
	return true;
}

bool UNarrativeItem::CanUse_Implementation() const
{
	return true;
}

bool UNarrativeItem::ShouldUseOnAdd_Implementation() const
{
	return false;
}

bool UNarrativeItem::ShouldShowInInventory_Implementation() const
{
	//By default, don't show vendors equipped items in their store  
	if (OwningInventory && OwningInventory->bIsVendor)
	{
		if (bActive)
		{
			return false; 
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE
