// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "NarrativeAttributeSetBase.generated.h"


// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

//Lyra uses this system to effectively broadcast attribute changes - we'll make use of this! 
DECLARE_MULTICAST_DELEGATE_FourParams(FNarrativeAttributeEvent, AActor* /*EffectInstigator*/, AActor* /*EffectCauser*/, const FGameplayEffectSpec& /*EffectSpec*/, float /*EffectMagnitude*/);


/**
 * Base attribute set for Narrative pro. We haven't seperated out attack and health values, however this may be nice if your game requires it. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UNarrativeAttributeSetBase();

	// AttributeSet Overrides
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Our XP points - we implement this as an attribute which may be overkill 
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_XP, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData XP;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, XP)

	// Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.
	// Positive changes can directly use this.
	// Negative changes to Health should go through Damage meta attribute.
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, Health)

	// MaxHealth is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, MaxHealth)

	// Current stamina, used to execute special abilities. Capped by MaxStamina.
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_Stamina, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, Stamina)

	// MaxStamina is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStamina, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, MaxStamina)

	// Stamina regen rate will passively increase Stamina every second
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_StaminaRegenRate, meta = (NarrativeSaveAttribute))
	FGameplayAttributeData StaminaRegenRate;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, StaminaRegenRate)

	//Attack rating acts as a multiplier for attack damage. Attack multiplier = AttackRating / 100.  Used by the damage calculation 
	UPROPERTY(BlueprintReadOnly, Category = "Armor", ReplicatedUsing = OnRep_AttackRating)
	FGameplayAttributeData AttackRating;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, AttackRating )

	// Armor reduces the amount of damage done by attackers
	UPROPERTY(BlueprintReadOnly, Category = "Armor", ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, Armor)

	// MeleeAttackDamage is the amount of damage our melee attacks do. 
	UPROPERTY(BlueprintReadOnly, Category = "MeleeAttackDamage", ReplicatedUsing = OnRep_AttackDamage)
	FGameplayAttributeData AttackDamage;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, AttackDamage)

	// Doesn't need to be replicated, is just a meta attribute server uses to apply damage to players. 
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UNarrativeAttributeSetBase, Damage)

	FNarrativeAttributeEvent OnOutOfHealth;

protected:
	// Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.
	// (i.e. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	/**
	* These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication
	**/
	UFUNCTION()
	virtual void OnRep_XP(const FGameplayAttributeData& OldXP);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);

	UFUNCTION()
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);

	UFUNCTION()
	virtual void OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate);

	UFUNCTION()
	virtual void OnRep_Armor(const FGameplayAttributeData& OldArmor);

	UFUNCTION()
	virtual void OnRep_AttackRating(const FGameplayAttributeData& OldAttackRating);

	UFUNCTION()
	virtual void OnRep_AttackDamage(const FGameplayAttributeData& OldAttackDamage);
};
