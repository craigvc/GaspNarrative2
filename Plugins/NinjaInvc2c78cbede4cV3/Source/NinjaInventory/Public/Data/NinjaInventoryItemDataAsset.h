// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "Interfaces/ItemMagnitudeProviderInterface.h"
#include "NinjaInventoryItemDataAsset.generated.h"

#define INVENTORY_ITEM_DATA_ASSET_NAME	TEXT("InventoryItemData")

class UNinjaInventoryItemFragment;
class UNinjaInventoryItem;

/**
 * Bundles information about an Inventory Item.
 */
UCLASS()
class NINJAINVENTORY_API UNinjaInventoryItemDataAsset : public UPrimaryDataAsset, public IItemMagnitudeValueInterface
{
	
	GENERATED_BODY()

public:
	
	static const FPrimaryAssetType DataAssetType;

	UNinjaInventoryItemDataAsset();

	// -- Begin Primary Data Asset implementation	
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	// -- End Primary Data Asset implementation		

	// -- Begin Item Magnitude Value implementation
	virtual float GetMagnitudeForDataTag_Implementation(const UNinjaInventoryItem* Item, const FGameplayTag& DataTag, float DefaultValue) const override;
	virtual TMap<FGameplayTag, float> GetAllMagnitudeValues_Implementation(const UNinjaInventoryItem* Item) const override;
	// -- End Item Magnitude Value implementation
	
	/**
	 * Provides all tags from this definition, including ones provided by fragments.
	 *
	 * @return
	 *		Gameplay Tag Container with all tags defined for this definition, plus the
	 *		ones that are contributed by assigned fragments.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item Data")
	FGameplayTagContainer GetGameplayTags() const;

	/**
	 * Provides all operations available to this item, based on the current fragments.
	 *
	 * @return
	 *		Gameplay Tag Container aggregating all Operation Tags from fragments that
	 *		can support any kind of operation (Operable Aspect/Interface).
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item Data")
	FGameplayTagContainer GetSupportedOperations() const;
	
	/**
	 * Provides the Default Instance Class defined in this data asset.
	 * 
	 * @return
	 *		The default Item Instance class that should be used for this item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item Data")
	TSubclassOf<UNinjaInventoryItem> GetDefaultInstanceClass() const;

	/**
	 * Checks if this Item Data has a given fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Item Data")
	bool HasFragment(const UNinjaInventoryItemFragment* Fragment) const;
	
	/**
	 * Retrieves a fragment by a given class.
	 * 
	 * @param FragmentClass			Fragment type retrieved from the Item Data.
	 * @return						The Fragment instance related to the provided class.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item Data", meta = (DeterminesOutputType = FragmentClass))
	UNinjaInventoryItemFragment* FindFragmentByClass(TSubclassOf<UNinjaInventoryItemFragment> FragmentClass) const;

	/**
	 * Retrieves a fragment implementing a given interface.
	 *
	 * Be aware that if multiple fragments are found for the same interface, the first
	 * one will be returned. If you need all of them, then use "FindFragmentsByInterface".
	 * 
	 * @param FragmentInterface		Interface implemented by the fragment.
	 * @return						First fragment instance implementing the provided interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item Data")
	UNinjaInventoryItemFragment* FindFragmentByInterface(TSubclassOf<UInterface> FragmentInterface) const;

	/**
	 * Retrieves all fragment implementing a given interface.
	 *
	 * @param FragmentInterface		Interface implemented by the fragment.
	 * @return						All fragment instances implementing the provided interface.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item Data")
	TArray<UNinjaInventoryItemFragment*> FindFragmentsByInterface(TSubclassOf<UInterface> FragmentInterface) const;

	/**
	 * Retrieves a fragment by a given class, defined by the provided template value.
	 */
	template <typename ResultClass = UNinjaInventoryItemFragment>
	ResultClass* FindFragment() const
	{
		return Cast<ResultClass>(FindFragmentByClass(ResultClass::StaticClass()));
	}
	
	/**
	 * Initializes all fragments from this definition on an Item that has been initialized.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Item Data")
	void InitializeFragments(UNinjaInventoryItem* Item) const;
	
	/**
	 * Applies all fragments from this definition on an Item that has been granted.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item Data")
	void ApplyFragments(UNinjaInventoryItem* Item) const;

	/**
	 * Reverts all fragments from this definition on an Item that has been removed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Item Data")
	void RevertFragments(UNinjaInventoryItem* Item) const;

protected:
	
	/** Tags that identify this item. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Data")
	FGameplayTagContainer GameplayTags;

	/** Default class used to represent instances. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Data", NoClear)
	TSubclassOf<UNinjaInventoryItem> DefaultInstanceClass;

	/** All fragments assigned to this definition */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Data", Instanced, meta = (NoElementDuplicate))
	TArray<TObjectPtr<UNinjaInventoryItemFragment>> Fragments;
	
};
