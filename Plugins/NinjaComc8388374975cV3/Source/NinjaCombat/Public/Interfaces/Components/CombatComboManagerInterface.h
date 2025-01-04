// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NinjaCombatDelegates.h"
#include "UObject/Interface.h"
#include "CombatComboManagerInterface.generated.h"

class UInputAction;
class UStateTree;

UINTERFACE(MinimalAPI)
class UCombatComboManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that tracks combat combos.
 */
class NINJACOMBAT_API ICombatComboManagerInterface
{
	
	GENERATED_BODY()

public:

	/**
	 * Binds to a Multicast Delegate that will notify about the combo window state.
	 * 
	 * @param Delegate
	 *		Function to be notified about changes in the combo window state.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void BindToComboWindowChangedDelegate(const FComboWindowChangedDelegate& Delegate);

	/**
	 * Binds to a Multicast Delegate that will notify about the count of targets hit.
	 * 
	 * @param Delegate
	 *		Function to be notified about changes in the target count.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void BindToTargetCountChangedDelegate(const FComboTargetCountChangedDelegate& Delegate);
	
	/**
	 * Binds to a Multicast Delegate that will notify about the combo count changes.
	 * 
	 * @param Delegate
	 *		Function to be notified about changes in the combo count.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void BindToComboCountChangedDelegate(const FComboCountChangedDelegate& Delegate);
	
	/**
	 * Binds to a Multicast Delegate that will notify about the end of a combo.
	 * 
	 * @param Delegate
	 *		Function to be notified about the end of a combo.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void BindToComboFinishedDelegate(const FComboFinishedDelegate& Delegate);

	/**
	 * Unbinds an object from the combo window state delegate.
	 * 
	 * @param Source
	 *		Source object that will be removed from the invocation list.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void UnbindFromComboWindowChangedDelegate(const UObject* Source);

	/**
	 * Unbinds an object from the combo target count delegate.
	 * 
	 * @param Source
	 *		Source object that will be removed from the invocation list.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void UnbindFromComboTargetCountDelegate(const UObject* Source);
	
	/**
	 * Unbinds an object from the combo count delegate.
	 * 
	 * @param Source
	 *		Source object that will be removed from the invocation list.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void UnbindFromComboCountChangedDelegate(const UObject* Source);
	
	/**
	 * Unbinds an object from the combo finished delegate.
	 * 
	 * @param Source
	 *		Source object that will be removed from the invocation list.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void UnbindFromComboFinishedDelegate(const UObject* Source);
	
	/**
	 * Checks if the character has the combo input window open.
	 *
	 * @return
	 *		True if the Combo Window is active. False otherwise.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	bool InComboWindow() const;

	/**
	 * Opens the combo window, allowing chained execution of attacks.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void OpenComboWindow();

	/**
	 * Closes the combo window.
	 */    
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void CloseComboWindow();

	/**
	 * Provides the current Combo Count.
	 *
	 * @return
	 *		The current count for the combo. Zero or greater.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	int32 GetComboCount() const;

	/**
	 * Allows deliberately setting the combo count to a number.
	 *
	 * @param NewComboCount
	 *		New count set to the combo. Must be zero or greater.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void SetComboCount(int32 NewComboCount);

	/**
	 * Provides the amount of targets hit by the current attack.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	int32 GetTargetCount() const;

	/**
	 * Registers a target hit during the current attack.
	 *
	 * @param Target
	 *		Actor that was hit.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void RegisterTargetFromCurrentAttack(const AActor* Target);

	/**
	 * Resets the target count.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void ResetTargetCount();
	
	/**
	 * Starts the combo with a given data asset.
	 *
	 * @param NewComboTree
	 *		New Combo State Tree to use for the combo.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void StartCombo(UStateTree* NewComboTree);

	/**
	 * Advances the combo, via a combo event tag
	 *
	 * @param ComboEventTag
	 *		Combo Event Tag, used to trigger the next ability.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void AdvanceCombo(FGameplayTag ComboEventTag);

	/**
	 * Resets the combo.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Combo Manager Interface")
	void ResetCombo();
	
};
