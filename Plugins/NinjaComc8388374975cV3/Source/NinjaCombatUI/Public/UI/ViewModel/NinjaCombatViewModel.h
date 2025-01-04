// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "MVVMViewModelBase.h"
#include "Interfaces/CombatActorAwareInterface.h"
#include "NinjaCombatViewModel.generated.h"

class UAbilitySystemComponent;

/**
 * Base class for Ninja Combat view models using the Ability System component. 
 */
UCLASS(Abstract, NotBlueprintable)
class NINJACOMBATUI_API UNinjaCombatViewModel : public UMVVMViewModelBase, public ICombatActorAwareInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Combat Actor Aware Implementation
	virtual void SetCombatActor_Implementation(AActor* NewCombatActor) override;
	// -- End Combat Actor Aware Implementation

	// -- Begin UObject implementation
	virtual void BeginDestroy() override;
	// -- End UObject implementation

	/**
	 * Provides the Combat Actor current bound to this Viewmodel.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|View Model")
	AActor* GetCombatActor() const;

	/**
	 * Provides the Ability System Component assigned to this Viewmodel.
	 */
	UAbilitySystemComponent* GetAbilitySystemComponent() const;
	
	/**
	 * Binds this View Model to an Ability Component, so it will react to changes in meaningful attributes.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|View Model")
	virtual void BindToAbilitySystem(const AActor* Owner);

	/**
	 * Unbinds this View Model from an Ability Component and clears all current Attribute Bindings.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|View Model")
	virtual void UnbindFromAbilitySystem(AActor* OldActor);

	bool HasChangedActor() const { return bChangedActor; }
	void SetChangedActor(bool bNewValue);
	
protected:

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetChangedActor", Getter = "HasChangedActor", Category = "Combat")
	bool bChangedActor;

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
	void BindAttribute(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAttribute& Attribute,
		const TFunction<void (float)>& SetterFunction);
	
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

	/**
	 * Binds to any components, for the new Actor. 
	 */
	virtual void BindToCombatSystem(AActor* Actor);

	/**
	 * Unbinds from any components, for the old Actor. 
	 */
	virtual void UnbindFromCombatSystem(AActor* OldActor);

	/**
	 * Resets any relevant properties to the original values.
	 */
	virtual void Reset();
	
private:

	TWeakObjectPtr<AActor> CombatActorPtr;

	TMap<FGameplayAttribute, FDelegateHandle> AttributeHandles;

	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponentPtr;
	
};
