// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Types/FInventoryFragmentMemory.h"
#include "ItemFragment_Durability.generated.h"

/**
 * Keeps track of an item's current durability.
 */
UCLASS(DisplayName = "Durability")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Durability : public UNinjaInventoryItemFragment, public IItemMagnitudeValueInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDurabilityChangedSignature, UNinjaInventoryItem*, Item, int32, Durability);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the durability changes. */
	UPROPERTY(BlueprintAssignable)
	FItemDurabilityChangedSignature OnDurabilityChanged;

	UItemFragment_Durability();
	
	// -- Begin Fragment implementation
	virtual void OnInitializeFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	virtual void HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	// -- End Fragment implementation

	// -- Begin Item Magnitude Value implementation
	virtual float GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, float DefaultValue) const override;
	virtual TMap<FGameplayTag, float> GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const override;
	// -- End Item Magnitude Value implementation	

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation
	
	/**
	 * Informs if the level can be upgraded (i.e. crafting).
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	bool CanBreak() const { return bCanBreak; }	

	/**
	 * Checks if the item is broken.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	static bool IsBroken(const UNinjaInventoryItem* Item);

	/**
	 * Checks if the item is indestructible.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	static bool IsIndestructible(const UNinjaInventoryItem* Item);

	/**
	 * Provides the maximum durability for an item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	int32 GetMaximumDurability() const { return Durability; }
	
	/**
	 * Provides the current durability for the provided item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	int32 GetDurability(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Sets a new durability, overriding the current value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetDurability(UNinjaInventoryItem* Item, int32 NewDurability);

	/**
	 * Adds wear to the current durability. Checks if the item is indestructible.
	 *
	 * @param Item			Item to apply wear.
	 * @param WearAmount	Amount of wear to apply, must be positive.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void AddWear(UNinjaInventoryItem* Item, int32 WearAmount);

	/**
	 * Repairs the item to its original durability. Checks if the item is indestructible.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void Repair(UNinjaInventoryItem* Item);
	
protected:

	/** Allows this item to wear and break. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bCanBreak;
	
	/** Maximum durability points available to the item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	int32 Durability;

	/**
	 * Broadcast changes in the durability memory. Updates the internal tags.
	 */
	virtual void BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Adds or removes the broken trait on the item.
	 */
	virtual void SynchronizeBrokenTraitOnItem(UNinjaInventoryItem* Item, int32 TargetDurability) const;
	
private:

	/** Synchronizes the indestructible trait based on the "broken" flag. */
	void SynchronizeIndestructibleTraitOnData();

	/** Synchronizes the broken trait based on the "durability" flag. */
	void SynchronizeBrokenTraitOnData(int32 TargetDurability);
	
#if WITH_EDITOR
public:

	// -- Begin Editor implementation
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	// -- Begin Editor implementation
	
#endif
};
