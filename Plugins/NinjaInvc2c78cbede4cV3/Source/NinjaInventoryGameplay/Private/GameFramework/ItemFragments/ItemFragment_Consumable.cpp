// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/ItemFragments/ItemFragment_Consumable.h"

#include "AbilitySystemComponent.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryGameplayTags.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "Interfaces/Aspects/UpgradeableItemInterface.h"
#include "Types/FItemFragmentOperationPayload.h"

UItemFragment_Consumable::UItemFragment_Consumable()
{
	bUseItemLevelAsEffectLevel = true;
	Charges = EConsumableItemCharges::StackFragment;
	EffectLevel = 1.f;
	ConsumeEventTag = Tag_Inventory_Event_ConsumeItem;
	OperationTags.AddTagFast(Tag_Inventory_Item_Operation_Consume);
	ItemTags.AddTagFast(Tag_Inventory_Item_Trait_Consumable);
}

UScriptStruct* UItemFragment_Consumable::GetPayloadStruct() const
{
	return FInventoryFragmentConsumeOperationPayload::StaticStruct();
}

bool UItemFragment_Consumable::OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const
{
	const FInventoryFragmentConsumeOperationPayload& ConsumePayload = Payload.Get<FInventoryFragmentConsumeOperationPayload>();

	// Make sure that the payload is valid and the item does have this actual fragment.
	if (!ConsumePayload.IsConsumeOperation() || !ItemHasFragment(ConsumePayload.Item))
	{
		return false;
	}

	// If we are not tracking charges then there's nothing else to check.
	if (Charges == EConsumableItemCharges::None)
    {
    	return true;
    }

	const UNinjaInventoryItem* Item = ConsumePayload.Item;
	const int32 CurrentCharges = GetCurrentCharges(Item);
	return CurrentCharges > 0;
}

void UItemFragment_Consumable::OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload)
{
	const FInventoryFragmentConsumeOperationPayload& ConsumePayload = Payload.Get<FInventoryFragmentConsumeOperationPayload>();
	UNinjaInventoryItem* Item = ConsumePayload.Item;
	Consume(Item);
}

void UItemFragment_Consumable::Consume(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item))
	{
		return;
	}

	UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
	if (!IsValid(AbilityComponent))
	{
		return;
	}

	FGameplayEventData GameplayPayload;
	GameplayPayload.Instigator = AbilityComponent->GetAvatarActor();
	GameplayPayload.Target = AbilityComponent->GetAvatarActor();
	GameplayPayload.EventTag = ConsumeEventTag;
	GameplayPayload.OptionalObject = Item;
	
	AbilityComponent->HandleGameplayEvent(ConsumeEventTag, &GameplayPayload);
}

float UItemFragment_Consumable::GetEffectLevel(const UNinjaInventoryItem* Item) const
{
	if (bUseItemLevelAsEffectLevel && IsValid(Item))
	{
		const TScriptInterface<IUpgradeableItemInterface> UpgradeableItem = UNinjaInventoryFunctionLibrary::GetUpgradeableItemAspect(Item->GetData());
		if (UpgradeableItem.GetObject() != nullptr)
		{
			return UpgradeableItem->GetLevel(Item);
		}
	}

	return EffectLevel;
}

int32 UItemFragment_Consumable::GetCurrentCharges(const UNinjaInventoryItem* Item) const
{
	if (Charges == EConsumableItemCharges::None)
	{
		return 0;
	}

	if (Charges == EConsumableItemCharges::GameplayAttribute)
	{
		const UAbilitySystemComponent* AbilityComponent = Item->GetAbilitySystem();
		const float CurrentCharges = AbilityComponent ? AbilityComponent->GetNumericAttribute(ChargesAttribute) : 0.f;
		return FMath::FloorToInt(CurrentCharges);
	}

	const UItemFragment_Stack* Stack = Item->FindFragment<UItemFragment_Stack>();
	return IsValid(Stack) ? Stack->GetStackSize(Item) : 0;
}
