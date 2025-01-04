// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "NinjaInventoryManagerViewModel.h"
#include "ViewModel_InventoryAttributes.generated.h"

class UAbilitySystemComponent;
class UAbilitySystemComponent;

/**
 * Provides values from inventory attributes backing the inventory.
 */
UCLASS(BlueprintType, NotBlueprintable, DisplayName = "Inventory Attributes")
class NINJAINVENTORYUI_API UViewModel_InventoryAttributes : public UNinjaInventoryManagerViewModel
{
	
	GENERATED_BODY()

public:

	UViewModel_InventoryAttributes();

	void SetWealth(float NewWealth);
	void SetEncumbrance(float NewEncumbrance);
	void SetEquipmentLevel(float NewEquipmentLevel);
	void SetAverageEquipmentLevel(float NewAverageEquipmentLevel);
	void SetWeightLimit(float NewWeightLimit);

	/**
	 * Retrieves a value from a Gameplay Attribute or the provided default value.
	 * 
	 * The fresh value is obtained if "bForceRefresh" is set to true and the Inventory/Ability System
	 * assigned to the owner are valid, with a proper attribute set for the attribute.
	 */
	virtual float GetAttributeValueOrDefault(const FGameplayAttribute& Attribute, float Default) const;
	
protected:

	/**
	 * If set to true, forces the refresh of attributes, not relying on the callback values.
	 *
	 * This is a fast solution for scenarios where the Attribute does not provide the correct value in
	 * multiplayer modes, usually due to issues on the Attribute Aggregator not being properly created,
	 * which is a very specific corner case that may arise depending on the Ability System's setup.
	 *
	 * The cost of setting this to true is that on each update, a lookup will be done in the owner's
	 * Ability System, to retrieve the current value for the attribute, instead of just using the value
	 * already provided by the ASC Attribute delegate.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Attributes")
	bool bForceAttributeRefresh;
	
	/** Amount of wealth (funds/currency/souls, etc.) available. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Attributes")
	float Wealth;
	
	/** Current Encumbrance in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Attributes")
	float Encumbrance;

	/** Current GearLevel in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Attributes")
	float EquipmentLevel;

	/** Current Average Gear Level available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Attributes")
	float AverageEquipmentLevel;

	/** Maximum weight supported by this inventory. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Category = "Inventory Attributes")
	float WeightLimit;

	// -- Begin Inventory Manager View Model implementation
	virtual void BindToInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	virtual void UnbindFromInventoryManager_Implementation(UNinjaInventoryManagerComponent* InventoryManager) override;
	// -- End Inventory Manager View Model implementation
	
	/**
	 * Performs the binding of attributes with a valid Ability System component.
	 *
	 * @param AbilitySystemComponent
	 *		Ability System Component to bind. Must be provided.
	 */
	virtual void BindAttributes(UAbilitySystemComponent* AbilitySystemComponent);
	
	/**
	 * Binds a setter function to a gameplay attribute's change delegate.
	 *
	 * @param AbilitySystemComponent	Ability Component broadcasting changes. Must be provided.
	 * @param Attribute					Gameplay Attribute to track. Must be valid.
	 * @param SetterFunction			Lambda representing the setter function to invoke. Must be provided.
	 */
	void BindAttribute(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAttribute& Attribute, const TFunction<void (float)>& SetterFunction);
	
	/**
	 * Reacts to a change in an attribute. Must be connected to an Ability System Component.
	 * 
	 * In the default flow, this is done via the "BindToAbilitySystem" function, which is something
	 * that can be exposed to Blueprints. This one can't, since FOnAttributeChangeData is not exposed.
	 *
	 * @param AttributeChangeData
	 *		Information about the parameter that has changed, including the new value.
	 */
	virtual void OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData);		

private:

	/** All bindings that must be removed when the manager is cleared. */
	TMap<FGameplayAttribute, FDelegateHandle> AttributeBindings;
	
};
