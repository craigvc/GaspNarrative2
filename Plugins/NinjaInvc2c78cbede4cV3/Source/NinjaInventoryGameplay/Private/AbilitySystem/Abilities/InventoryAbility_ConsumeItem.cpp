// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h"

#include "AbilitySystemComponent.h"
#include "NinjaInventoryGameplayTags.h"
#include "NinjaInventoryLog.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Consumable.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "Interfaces/Aspects/StackableItemInterface.h"

UInventoryAbility_ConsumeItem::UInventoryAbility_ConsumeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ConsumableQuery = FGameplayTagQuery::MakeQuery_MatchTag(Tag_Inventory_Item_Trait_Consumable);
	ItemFoundAnimationTags = FGameplayTagContainer::EmptyContainer;
	ItemMissingAnimationTags = FGameplayTagContainer::EmptyContainer;
	AnimationStrategy = EInventoryAnimationStrategy::AlwaysExecute;

	FAbilityTriggerData& Trigger = AbilityTriggers.AddDefaulted_GetRef();
	Trigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	Trigger.TriggerTag = Tag_Inventory_Event_ConsumeItem;
}

bool UInventoryAbility_ConsumeItem::HasConsumableData() const
{
	if (!IsValid(ConsumableItem))
	{
		return false;
	}

	if (!IsValid(ConsumableFragment))
	{
		return false;
	}

	if (ConsumableFragment->GetCharges() == EConsumableItemCharges::StackFragment && !IsValid(StackFragment))
	{
		return false;
	}
	
	return true;
}

const UNinjaInventoryItem* UInventoryAbility_ConsumeItem::GetConsumableItem() const
{
	return ConsumableItem;
}

const UItemFragment_Consumable* UInventoryAbility_ConsumeItem::GetConsumableFragment() const
{
	return ConsumableFragment;
}

bool UInventoryAbility_ConsumeItem::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags)
		&& IsValid(GetInventoryManager()) && !IsValid(ConsumableFragment);
}

void UInventoryAbility_ConsumeItem::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{			
		constexpr bool bReplicateEndAbility = true;
		CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility);
	}

	UNinjaInventoryItem* CandidateItem = GetOrFindInventoryItem(TriggerEventData);
	InitializeData(CandidateItem);

	if (HasConsumableData())
	{
		FGameplayTagContainer QueryTags = FGameplayTagContainer::EmptyContainer;
		CandidateItem->GetOwnedGameplayTags(QueryTags);
		
		QueryTags.AppendTags(ItemFoundAnimationTags);
		LoadAnimationMontage(QueryTags);
	}
	else if (ItemMissingAnimationTags.IsValid())
	{
		LoadAnimationMontage(ItemMissingAnimationTags);
	}
	else
	{
		K2_CancelAbility();
	}
}

UNinjaInventoryItem* UInventoryAbility_ConsumeItem::GetOrFindInventoryItem(const FGameplayEventData* TriggerEventData) const
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	check(IsValid(InventoryManager));

	if (!TriggerEventData)
	{
		return InventoryManager->GetFirstItemByQuery(ConsumableQuery);
	}
	
	const UNinjaInventoryItem* PayloadItem = Cast<UNinjaInventoryItem>(TriggerEventData->OptionalObject);
	if (PayloadItem == nullptr)
	{
		// Try again, but now looking for the item in the second Optional Object!
		PayloadItem = Cast<UNinjaInventoryItem>(TriggerEventData->OptionalObject2);
	}
	
	if (!InventoryManager->HasItem(PayloadItem))
	{
		INVENTORY_LOG_ARGS(Warning, "Payload item %s is not managed by the Inventory!", *GetNameSafe(PayloadItem));
		return nullptr;
	}

	return const_cast<UNinjaInventoryItem*>(PayloadItem);
}

void UInventoryAbility_ConsumeItem::InitializeData(UNinjaInventoryItem* Item)
{
	if (!IsValid(Item))
	{
		return;
	}
	
	const UItemFragment_Consumable* Consumable = Item->FindFragment<UItemFragment_Consumable>();
	if (IsValid(Consumable) && IsValid(Consumable->GetEffectClass()))
	{
		ConsumableFragment = Consumable;
		INVENTORY_LOG_ARGS(Verbose, "Item %s will be used by the Consume Ability.", *GetNameSafe(Item));
	}
	else
	{
		const FString Issue = IsValid(Consumable) ? "fragment" : "gameplay effect";
		INVENTORY_LOG_ARGS(Warning, "Item %s does not have a consumable %s!", *GetNameSafe(Item), *Issue);
		return;
	}

	// Collect the Stack Fragment as well to avoid unnecessary operations with an incomplete item.
	if (Consumable->GetCharges() == EConsumableItemCharges::StackFragment)
	{
		const UItemFragment_Stack* Stack = Item->FindFragment<UItemFragment_Stack>();
		if (IsValid(Stack))
		{
			StackFragment = Stack;
		}
		else
		{
			INVENTORY_LOG_ARGS(Warning, "Item %s does not have a stack fragment!", *GetNameSafe(Item));
			return;
		}
	}

	// Store the item that we need, since we haven't returned before.
	ConsumableItem = Item;
}

void UInventoryAbility_ConsumeItem::ClearData()
{
	ConsumableItem = nullptr;
	ConsumableFragment = nullptr;
	StackFragment = nullptr;
}

void UInventoryAbility_ConsumeItem::HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, const FName MontageSection)
{
	Super::HandleAnimationLoaded_Implementation(MontageToPlay, MontageSection);

	// If we are not supposed to wait for a gameplay event, then we can consume the item now.
	if (AnimationStrategy != EInventoryAnimationStrategy::WaitForGameplayEvent)
	{
		ConsumeItem();
	}
}

void UInventoryAbility_ConsumeItem::HandleAnimationNotFound_Implementation()
{
	// If this is ability is set to always consume the item, then do that regardless of the animation.
	if (AnimationStrategy == EInventoryAnimationStrategy::AlwaysExecute)
	{
		ConsumeItem();
	}

	K2_EndAbility();
}

void UInventoryAbility_ConsumeItem::HandleEventReceived_Implementation(const FGameplayEventData Payload)
{
	// If we are waiting for a Gameplay Event, then we are free to consume the item now.
	if (Payload.EventTag == AnimationEventTag && AnimationStrategy != EInventoryAnimationStrategy::WaitForGameplayEvent)
	{
		ConsumeItem();
	}
}

void UInventoryAbility_ConsumeItem::ConsumeItem_Implementation()
{
	ApplyConsumableEffect();
	UpdateStack();
}

void UInventoryAbility_ConsumeItem::ApplyConsumableEffect_Implementation()
{
	if (!IsValid(ConsumableFragment))
	{
		INVENTORY_LOG(Warning, "No consumable item actually found!");
		return;	
	}

	if (!K2_HasAuthority())
	{
		INVENTORY_LOG(Warning, "No authority to apply the consumable effect!");
		return;
	}
	
	FGameplayEffectContextHandle ContextHandle = MakeEffectContext(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo());
	ContextHandle.AddSourceObject(ConsumableFragment);

	const TSubclassOf<UGameplayEffect> ConsumableEffectClass = ConsumableFragment->GetEffectClass();
	const float ConsumableEffectLevel = ConsumableFragment->GetEffectLevel(ConsumableItem);
	
	const FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(ConsumableEffectClass, ConsumableEffectLevel);
	SpecHandle.Data->SetContext(ContextHandle);

	K2_ApplyGameplayEffectSpecToOwner(SpecHandle);
}

void UInventoryAbility_ConsumeItem::UpdateStack_Implementation()
{
	if (K2_HasAuthority() && IsValid(StackFragment))
	{
		UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
		IStackableItemInterface* Stack = Cast<IStackableItemInterface>(ConsumableItem->FindFragmentByInterface(UStackableItemInterface::StaticClass()));

		if (Stack != nullptr)
		{
			const int32 StackSize = Stack->GetStackSize(ConsumableItem) - 1;
			Stack->SetStackSize(ConsumableItem, StackSize);
		}
		else
		{
			InventoryManager->RemoveItem(ConsumableItem);
		}
	}	
}

void UInventoryAbility_ConsumeItem::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	ClearData();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
