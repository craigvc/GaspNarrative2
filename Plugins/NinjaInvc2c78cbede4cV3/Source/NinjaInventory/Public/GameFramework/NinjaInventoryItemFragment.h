// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "NinjaInventoryItem.h"
#include "Interfaces/Aspects/OperableItemInterface.h"
#include "Types/FInventoryFragmentMemory.h"
#include "UObject/Object.h"
#include "NinjaInventoryItemFragment.generated.h"

class UNinjaInventoryItem;

/**
 * Represents a particular aspect of an inventory item.
 *
 * Inventory items are built by aggregation, meaning that all multiple aspects of an item,
 * such as its Icon, Gameplay Abilities, Weight, Quality and so on are defined by fragments.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, DefaultToInstanced, EditInlineNew)
class NINJAINVENTORY_API UNinjaInventoryItemFragment : public UObject, public IOperableItemInterface
{

	GENERATED_BODY()

public:

	UNinjaInventoryItemFragment();

	/**
	 * Checks if the provided item has this actual item fragment instance.
	 *
	 * Some operations might want to check this to ensure that the item in their payload is an
	 * item that actually has the fragment that will execute the operation. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	bool ItemHasFragment(const UNinjaInventoryItem* Item) const;
	
	/**
	 * Initializes the effects of this fragment on a given Item Instance.
	 * 
	 * This event happens when the item is instantiated in the owning Inventory Manager,
	 * in the authoritative version.
	 *
	 * This is a good place to initialize the fragment memories in their initial states.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja Inventory|Fragments")
	virtual void InitializeFragment(UNinjaInventoryItem* Item);
	
	/**
	 * Applies the effects of this fragment on a given Item Instance.
	 * 
	 * This event happens after the item has been fully assigned to the Inventory Manager,
	 * along with its memories. It wil be called in the authoritative and client version.
	 *
	 * This is a good place to execute any logic or bind to other fragments or events.  
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void ApplyFragment(UNinjaInventoryItem* Item);

	/**
	 * Reverts the effects of this fragment from a given Item Instance.
	 * 
	 * This event happens when the item is removed from an owner. All effects and memories
	 * are still available, so the item can properly clean itself up before removal.
	 *
	 * There is no need to clear the fragment's memory from the owning item.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void RevertFragment(UNinjaInventoryItem* Item);
	
	/**
	 * Callback invoked whenever this Fragment's memory is created in the backend.
	 *
	 * Meant to be called by the memory replication in the owning item.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment")
	void HandleMemoryCreated(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Callback invoked whenever this Fragment's memory is updated in the backend.
	 *
	 * Meant to be called by the memory replication in the owning item.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment")
	void HandleMemoryUpdated(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory);

	/**
	 * Callback invoked whenever this Fragment's memory is removed from the backend.
	 *
	 * Meant to be called by the memory replication in the owning item.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment")
	void HandleMemoryRemoved(UNinjaInventoryItem* Item);
	
	/**
	 * Provides all tags that can be assigned to the owning item.
	 * 
	 * @return
	 *		Gameplay Tags that this fragment contributes to the owning item.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	FGameplayTagContainer GetItemTags() const { return ItemTags; }

	/**
	 * Provides all Gameplay Tags representing supported operations.
	 *
	 * @return
	 *		Gameplay Tags of operations supported by this fragment.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual FGameplayTagContainer GetSupportedOperationTags() const override { return OperationTags; }

	/**
	 * Evaluates if a given operation can be performed.
	 *
	 * @param Payload				Payload containing details about the operation.
	 * @return						True if this fragment can perform the request operation.
	 */	
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	virtual bool EvaluateOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const override;

	/**
	 * Performs a viable operation between this fragment and anything provided in the payload.
	 *
	 * @param Payload
	 *		An instanced struct containing the specific payload for this operation.
	 */	
	UFUNCTION(BlueprintCallable, Category = "Ninja Inventory|Fragments")
	virtual void PerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) override;
	
protected:

	/** Tags that this fragment contributes to the owning definition. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fragment")
	FGameplayTagContainer ItemTags;

	/** Tags representing operations supported by this fragment. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fragment", meta = (Categories = "Inventory.Item.Fragment.Operation"))
	FGameplayTagContainer OperationTags;

	/**
	 * Provides the Payload Struct that represents this operable item's payload.
	 *
	 * @return
	 *		The Script Struct representing the Operation Payload supported by the fragment.
	 *		Usually null in fragments that do not support any operations. 
	 */
	virtual UScriptStruct* GetPayloadStruct() const;
	
	/**
	 * Checks if the item has authority.
	 *
	 * An item can only have network authority if it's assigned to an Inventory
	 * Manager, and this component has an owner with network authority.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Fragments")
	static bool ItemHasAuthority(const UNinjaInventoryItem* Item);

	/**
	 * Initializes the effects of this fragment on a given Item Instance.
	 * 
	 * This event happens when the item is instantiated in the owning Inventory Manager,
	 * in the authoritative version.
	 *
	 * This is a good place to initialize the fragment memories in their initial states.
	 *
	 * This extension point is available to Blueprints and C++ and its invoked once its
	 * native counterpart has finished executing. At a framework level, there's no need
	 * to invoke the parent implementation of this function.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment", BlueprintAuthorityOnly)
	void OnInitializeFragment(UNinjaInventoryItem* Item);
	
	/**
	 * Applies the effects of this fragment on a given Item Instance.
	 * 
	 * This event happens after the item has been fully assigned to the Inventory Manager,
	 * along with its memories. It wil be called in the authoritative and client version.
	 *
	 * This is a good place to execute any logic or bind to other fragments or events.
	 *
	 * This extension point is available to Blueprints and C++ and its invoked once its
	 * native counterpart has finished executing. At a framework level, there's no need
	 * to invoke the parent implementation of this function.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment")
	void OnApplyFragment(UNinjaInventoryItem* Item);

	/**
	 * Reverts the effects of this fragment from a given Item Instance.
	 * 
	 * This event happens when the item is removed from an owner. All effects and memories
	 * are still available, so the item can properly clean itself up before removal.
	 *
	 * This extension point is available to Blueprints and C++ and its invoked once its
	 * native counterpart has finished executing. At a framework level, there's no need
	 * to invoke the parent implementation of this function.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Item Fragment")
	void OnRevertFragment(UNinjaInventoryItem* Item);

	/**
	 * Checks if this fragment can perform an operation on the provided payload.
	 * 
	 * Default checks for a valid item, the payload type and operation tags are already
	 * covered for you, so you don't need to worry about those.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Operable Item Fragment", DisplayName = "Can Perform Operation")
	bool OnEvaluateOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload) const;
	
	/**
	 * Performs an operation on the provided payload.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Operable Item Fragment")
	void OnPerformOperation(const TInstancedStruct<FInventoryFragmentPayload>& Payload);

	/**
	 * Provides the Fragment Memory for this Fragment in the provided item.
	 *
	 * This is useful to avoid the boilerplate code necessary to deal with TInstanceStruct.
	 * Here is an example usage for this function:
	 *
	 * <pre>
	 * const FMyFragmentMemory MyMemory;
	 * if (GetMemory<FMyFragmentMemory>(Item, MyMemory))
	 * {
	 *     return MyMemory.SomeParameter;
	 * }
	 * </pre>
	 * 
	 * @param Item			Item storing the memory for this fragment.
	 * @param OutMemory		Access to the memory for the current fragment.
	 * @return				Immutable memory for this fragment. May be null.
	 */	
	template<typename T = FInventoryFragmentMemory, typename = std::enable_if_t<std::is_base_of_v<FInventoryFragmentMemory, std::decay_t<T>>>>
	bool GetMemory(const UNinjaInventoryItem* Item, T& OutMemory) const
	{
		static_assert(TIsDerivedFrom<T, FInventoryFragmentMemory>::Value, "T must be derived from FInventoryItemFragmentMemory.");

		if (!IsValid(Item))
		{
			return false;	
		}
		
		TInstancedStruct<FInventoryFragmentMemory> InstancedMemory;
		if (!Item->GetFragmentMemory(GetClass(), InstancedMemory))
		{
			return false;
		}

		OutMemory = InstancedMemory.Get<T>();
		return true;
	}
	
	/**
	 * Saves or updates a Fragment Memory of a given type, and returns the memory index.
	 *
	 * This is useful to avoid the boilerplate code necessary to deal with TInstanceStruct.
	 * Here is an example usage for this function.
	 * 
	 * <pre>
	 * FMyFragmentMemory MyMemory;
	 * FragmentMemory.SomeParameter = Item->PerformSomeCalculation();
	 * SaveMemory<FMyFragmentMemory>(Item, MyMemory);
	 * </pre>
	 * 
	 * @param Item
	 *		Item that will receive the new memory. Must be provided.
	 *
	 * @param FragmentMemory
	 *		The new memory that must match the template provided to the function, this
	 *		is mandatory and failing to comply will result in a static assertion.
	 *
	 * @return
	 *		The index to the saved memory, in the provided item.
	 */
	template<typename T = FInventoryFragmentMemory, typename = std::enable_if_t<std::is_base_of_v<FInventoryFragmentMemory, std::decay_t<T>>>>
	int32 SaveMemory(UNinjaInventoryItem* Item, T& FragmentMemory)
	{
		static_assert(TIsDerivedFrom<T, FInventoryFragmentMemory>::Value, "T must be derived from FInventoryItemFragmentMemory.");
		
		if (!IsValid(Item) || !Item->OwnerHasAuthority())
		{
			return INDEX_NONE;	
		}
		
		TInstancedStruct<FInventoryFragmentMemory> InstancedMemory = TInstancedStruct<FInventoryFragmentMemory>::Make<T>(FragmentMemory);
		return Item->SaveFragmentMemory(this, InstancedMemory);
	}
	
	/**
	 * The predicate used for better memory access while querying/save/update.
	 * 
	 * It provides the Memory that can be used and a boolean value informing if this is a new memory.
	 * It returns a boolean that will determine if the memory will be saved or not.
	 */
	template<typename T = FInventoryFragmentMemory, typename = std::enable_if_t<std::is_base_of_v<FInventoryFragmentMemory, std::decay_t<T>>>>
	using TFragmentMemoryPredicate = TFunction<bool(T*, bool)>;
	
	/**
	 * Saves or updates a memory, allowing the caller to modify the memory or cancel the operation.
	 *
	 * This is useful for situations where fragments must obtain the memory, perform operations or tests
	 * on its values and then potentially save them. This creates two or more access to memories which
	 * can be avoided by this method, as it will perform one access to load the memory.
	 *
	 * Here is a sample usage for this function, with a predicate. Please note that you can capture the
	 * item itself in the predicate, other variables, or the class itself ("this").
	 * 
	 * <pre>
	 * SaveMemoryWithPredicate<FMyFragmentMemory>(Item, [this, Item](FMyFragmentMemory& FragmentMemory, bool bIsNew)
	 * {
	 *     if (!EnsureSaveConditions(FragmentMemory))
	 *     {
	 *         // Conditions not met, we do not want to save the memory.
	 *         return false;
	 *     }
	 *
	 *     // Update memory data and return true so the memory is saved.
	 *     FragmentMemory.SomeParameter = Item->PerformSomeCalculation();
	 *     return true; 
	 * }
	 * </pre>
	 * 
	 * @param Item
	 *		Item that has or will have the memory being saved. It may also provide data to the predicate,
	 *		which can use this data to decide if the memory will be saved or not.
	 * 
	 * @param DataHandler
	 *		A predicate that performs any logic with a pre-existing memory, based on TFragmentMemoryPredicate.
	 *		You can apply any decision logic with the provided memory, returning true or false to dictate if
	 *		this method should save that memory or not.
	 *		
	 * @return
	 *		The Memory ID for the memory in the current item. It will be INDEX_NONE if the memory have not
	 *		been saved, either because of an internal validation error or because the predicate cancelled it.
	 */
	template<typename T = FInventoryFragmentMemory, typename = std::enable_if_t<std::is_base_of_v<FInventoryFragmentMemory, std::decay_t<T>>>>
	int32 SaveMemoryWithPredicate(UNinjaInventoryItem* Item, const TFragmentMemoryPredicate<T>& DataHandler)
	{
		static_assert(TIsDerivedFrom<T, FInventoryFragmentMemory>::Value, "T must be derived from FInventoryItemFragmentMemory.");
		
		if (!IsValid(Item) || !Item->OwnerHasAuthority())
		{
			return INDEX_NONE;
		}
		
		bool bIsNew = false;
		
		TInstancedStruct<FInventoryFragmentMemory> InstancedMemory;
		if (!Item->GetFragmentMemory(GetClass(), InstancedMemory))
		{
			// We don't have a memory for this request, so let's create an empty one.
			InstancedMemory = TInstancedStruct<FInventoryFragmentMemory>::Make<T>(T());
			bIsNew = true;
		}

		T* FragmentMemory = InstancedMemory.GetMutablePtr<T>();
		checkf(FragmentMemory != nullptr, TEXT("Unexpected null Fragment Memory."));
		
		if (DataHandler(FragmentMemory, bIsNew))
		{
			// This will return the index of the saved memory, which is what we want.
			return Item->SaveFragmentMemory(this, InstancedMemory);
		}

		return INDEX_NONE;
	}

};
