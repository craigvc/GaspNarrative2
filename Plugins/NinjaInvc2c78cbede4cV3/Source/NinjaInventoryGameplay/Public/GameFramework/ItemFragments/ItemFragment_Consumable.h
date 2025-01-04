// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Templates/SubclassOf.h"
#include "ItemFragment_Consumable.generated.h"

class UGameplayEffect;

/**
 * Determines how charges are determined for a consumable.
 */
UENUM(BlueprintType)
enum class EConsumableItemCharges : uint8
{
	/** A gameplay attribute will be used to determine charges. */
	GameplayAttribute,

	/** The item stack will be used to determine consumption. */
	StackFragment,

	/** The framework won't track charges for this item. */
	None,
};

/**
 * Enables the backing item to be consumed, via the Consume Gameplay Ability.
 *
 * Consuming the item applies the Gameplay Effect set in the Fragment and optionally handles charges,
 * as per the strategy also set in the fragment (Gameplay Attribute or Stack Fragment).
 *
 * The Consume Fragment supports the "Consume" operation, which just triggers the backing Gameplay
 * Ability, responsible for the GAS aspects and Animation.
 */
UCLASS(DisplayName = "Consumable")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Consumable : public UNinjaInventoryItemFragment
{
	
	GENERATED_BODY()

public:

	UItemFragment_Consumable();

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation

	/**
	 * Provides the strategy used by this consumable to track its charges.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	EConsumableItemCharges GetCharges() const { return Charges; }

	/**
	 * Provides the Gameplay Attribute used to track this consumable's charges.
	 * Only set if the charges are tracked via Gameplay Attributes.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FGameplayAttribute GetChargesAttribute() const { return ChargesAttribute; }

	/**
	 * Provides the Gameplay Effect class to be applied when the item is consumed.
	 * Should always be valid for a consumable that has been properly configured.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	TSubclassOf<UGameplayEffect> GetEffectClass() const { return EffectClass; }

	/**
	 * Provides the level at which the Gameplay Effect should be applied.
	 *
	 * This considers both the fragment settings and if necessary, tries to retrieve the level
	 * from the appropriate fragment, instead of using the static value set directly in its properties.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	float GetEffectLevel(const UNinjaInventoryItem* Item) const;

	/**
	 * Counts the amount of charges currently available.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	int32 GetCurrentCharges(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Consumes the provided item by sending the appropriate Gameplay Event.
	 *
	 * Consuming an item is ultimately done by the Ability System, using the Consume Gameplay Ability,
	 * which is also responsible for playing an animation related to the consumable.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void Consume(UNinjaInventoryItem* Item);
	
protected:

	/** How charges are consumed for this item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	EConsumableItemCharges Charges;

	/**
	 * Gameplay Attribute used to determine charges for this item.
	 *
	 * If set to GameplayAttribute, then make sure to reduce charges in the Effect Class
	 * applied when the item is consumed (EffectClass).
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (EditCondition = "Charges == EConsumableItemCharges::GameplayAttribute", EditConditionHides))
	FGameplayAttribute ChargesAttribute;
	
	/**
	 * Gameplay effect applied when the item is consumed.
	 *
	 * Multiple consumable qualities or strengths can be reflected by multiple levels in
	 * the same Gameplay Effect class, which is useful to represent more items with the
	 * same Gameplay Effect configuration.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	TSubclassOf<UGameplayEffect> EffectClass;

	/**
	 * If set to true, uses the backing Item's level as the Effect Level.
	 *
	 * If the item does not have a Fragment that can produce an Item Level (implementations
	 * of the Upgradeable Item interface, such as the Level Item Fragment), then the value
	 * set for Effect Level is used instead.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effect")
	bool bUseItemLevelAsEffectLevel;
	
	/**
	 * Level used while applying the consumable Gameplay Effect.
	 * Can be overriden by the Item Level, if the fragment is configured to do so.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (EditCondition = "!bUseItemLevelAsEffectLevel"))
	float EffectLevel;

	/**
	 * Tag that will trigger the proper consume gameplay event.
	 *
	 * This has to match the Gameplay Ability that will be triggered when the Consume
	 * Operation is invoked, so the item can be properly consumed.
	 *
	 * The Consume Operation always happens via Gameplay Abilities, so make sure that
	 * the appropriate Consume Gameplay Ability is assigned to the Inventory Avatar!
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	FGameplayTag ConsumeEventTag;
	
};
