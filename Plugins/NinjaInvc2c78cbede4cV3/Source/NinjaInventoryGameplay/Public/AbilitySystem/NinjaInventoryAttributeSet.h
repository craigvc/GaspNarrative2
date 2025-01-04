// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "NinjaInventoryAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Contains attributes that are related to the Inventory System.
 *
 * You can add this Attribute Set directly or extend it in your own game. Regardless of the strategy
 * used to import these attributes into your project, this class must be present to handle some inventory
 * system mechanics such as Wealth, Encumbrance and Gear Level.
 *
 * If you are not using these features, then you can skip adding this Attribute Set.
 */
UCLASS()
class NINJAINVENTORYGAMEPLAY_API UNinjaInventoryAttributeSet : public UAttributeSet
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryAttributeSet();

	/**
	 * Current amount of wealth accumulated by the owner.
	 *
	 * This is an arbitrary value that can represent any type of currency such as
	 * "Money", "Credits", "Souls", "Points", etc.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_Wealth)
	FGameplayAttributeData Wealth;
	ATTRIBUTE_ACCESSORS(ThisClass, Wealth)

	/**
	 * Aggregation of all equipment pieces in use.
	 *
	 * Changing this value automatically triggers a change in the Average Equipment
	 * Level, which is most likely the value that will be mostly used by the game.
	 *
	 * If you initialize this value using a Data Table, then you need to make sure
	 * that the Average Equipment Level is also initialized with a proper value.
	 *
	 * To avoid mismatches, it's recommended to always use Gameplay Effects from
	 * assigned Equipment Pieces to manage the Equipment Level.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_EquipmentLevel)
	FGameplayAttributeData EquipmentLevel;
	ATTRIBUTE_ACCESSORS(ThisClass, EquipmentLevel)

	/**
	 * Average Equipment Level, being the Equipment Level Attribute / Equipment Level Effect Stack.
	 *
	 * This can be updated directly depending on the game setup, but by default it
	 * gets updated when the Equipment Level is modified by a Gameplay Effect.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_AverageEquipmentLevel)
	FGameplayAttributeData AverageEquipmentLevel;
	ATTRIBUTE_ACCESSORS(ThisClass, AverageEquipmentLevel)
	
	/** Weight currently carried by the avatar. It might affect some abilities. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_Encumbrance)
	FGameplayAttributeData Encumbrance;
	ATTRIBUTE_ACCESSORS(ThisClass, Encumbrance)

	/** Maximum weight capacity for this inventory. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_WeightLimit)
	FGameplayAttributeData WeightLimit;
	ATTRIBUTE_ACCESSORS(ThisClass, WeightLimit)	

	/** Amount of slots available in the Backpack container. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory", ReplicatedUsing = OnRep_BackpackSlots)
	FGameplayAttributeData BackpackSlots;
	ATTRIBUTE_ACCESSORS(ThisClass, BackpackSlots)
	
protected:
	
	// -- Begin Attribute Set implementation
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	// -- End Attribute Set implementation

	UFUNCTION()
	virtual void OnRep_Wealth(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_EquipmentLevel(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_AverageEquipmentLevel(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_Encumbrance(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_WeightLimit(const FGameplayAttributeData& OldValue);	

	UFUNCTION()
	virtual void OnRep_BackpackSlots(const FGameplayAttributeData& OldValue);	
	
};
