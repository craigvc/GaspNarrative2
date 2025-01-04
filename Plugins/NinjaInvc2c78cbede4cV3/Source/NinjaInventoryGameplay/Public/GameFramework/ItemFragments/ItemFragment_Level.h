// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaInventoryGameplayEffectItemFragment.h"
#include "Interfaces/Aspects/UpgradeableItemInterface.h"
#include "ItemFragment_Level.generated.h"

struct FInventoryItemFragmentLevelMemory;

/**
 * Represents the level or potency of an item.
 *
 * The item level effect is only applied when the Equipment is activated. This means that this
 * fragment is only ever relevant for Inventory Items that also have an Equipment Fragment.
 */
UCLASS(DisplayName = "Level")
class NINJAINVENTORYGAMEPLAY_API UItemFragment_Level : public UNinjaInventoryGameplayEffectItemFragment, public IUpgradeableItemInterface
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemLevelChangedSignature, UNinjaInventoryItem*, Item, int32, Level);
	
	GENERATED_BODY()

public:

	/** Broadcasts when the level changes. */
	UPROPERTY(BlueprintAssignable)
	FItemLevelChangedSignature OnLevelChanged;
	
	UItemFragment_Level();

	// -- Begin Item Fragment implementation
	virtual void OnInitializeFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void OnApplyFragment_Implementation(UNinjaInventoryItem* Item) override;
	virtual void HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	virtual void HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory) override;
	// -- End Item Fragment implementation

	// -- Begin Operable Item implementation
	virtual UScriptStruct* GetPayloadStruct() const override;
	virtual bool OnEvaluateOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;
	virtual void OnPerformOperation_Implementation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	// -- End Operable Item implementation

	/**
	 * Informs if the level can be upgraded (i.e. crafting).
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool CanUpgrade() const override { return bCanUpgrade; }
	
	/**
	 * Provides the Gear Level for the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual int32 GetLevel(const UNinjaInventoryItem* Item) const override;

	/**
	 * Overrides the level with an absolute value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SetLevel(UNinjaInventoryItem* Item, int32 NewLevel) override;

	/**
	 * Increments the level by a certain amount.
	 * More efficient than reading and then saving a value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void Upgrade(UNinjaInventoryItem* Item, int32 Increment) override;
	
protected:
	
	/**
	 * Informs if this item can be upgraded during gameplay.
	 * Allowing the level to be upgraded also enables the Upgrade Operation.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment")
	bool bCanUpgrade;
	
	/**
	 *
	 * Level of the equipment/gear related to this item.
	 * 
	 * This overrides the Effect Level property, so the Level gameplay effect is always
	 * applied at this item's level. You can use that to scale the effect or safely ignore it.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0))
	int32 Level;

	/**
	 * Maximum level that this item can reach.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragment", meta = (UIMin = 0, ClampMin = 0))
	int32 MaximumLevel;
	
	// -- Begin Gameplay Effect Fragment implementation
	virtual bool CanApplyEffect(const UNinjaInventoryItem* Item) const override;
	virtual bool ApplyEffect(UNinjaInventoryItem* Item, float EffectLevelOverride = -1.f) override;
	virtual bool DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const override;
	virtual void GetMagnitudes_Implementation(const UNinjaInventoryItem* Item, TMap<FGameplayTag, float>& OutMagnitudes) const override;
	// -- End Gameplay Effect Fragment implementation

	/**
	 * Clamps the value between zero and max level.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	int32 ClampLevel(int32 Value) const;
	
	/**
	 * Removes the effect if necessary and applies it again.
	 * Meant to be used when the memory is updated with a new level.
	 */
	void ReApplyLevelEffect(UNinjaInventoryItem* Item, float NewLevel);
	
	/**
	 * Broadcasts changes related to this fragment data in the backing item.
	 * It will evaluate last versus current values to determine which changes must be broadcast.
	 */
	virtual void BroadcastChanges(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Disables the effect when the item is removed.
	 */
	UFUNCTION()
	void SynchronizedFromItemRemoved(UNinjaInventoryItem* Item);
	
	/**
	 * Synchronizes the gear level based on the current container.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void SynchronizeFromContainer(UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container);

private:

	/** Synchronizes the upgradeable trait based on the "upgrade" flag. */
	void SynchronizeUpgradeableTrait();
	
#if WITH_EDITOR
public:

	// -- Begin Editor implementation
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	// -- End Editor implementation
	
#endif
};
