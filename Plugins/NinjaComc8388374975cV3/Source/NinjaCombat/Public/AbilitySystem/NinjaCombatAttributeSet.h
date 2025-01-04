// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "Types/FDamageCalculation.h"
#include "NinjaCombatAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) 

/**
 * Contains the minimum attributes required by the Combat System.
 *
 * You can add this Attribute Set directly or extend it in your own game. Regardless of the strategy
 * used to import these attributes into your project, this class must be present to handle the combat
 * system core mechanics such as damage replication and routing to the damage component.
 *
 * Of course, you can replicate this Attribute Set's behavior in your project if you feel comfortable
 * to do so, but this is not a recommended/supported practice as things could get... complicated.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatAttributeSet : public UAttributeSet
{
	
	GENERATED_BODY()

public:

	UNinjaCombatAttributeSet();

	/** Damage received that must be processed and applied. */
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData PendingDamage;
	ATTRIBUTE_ACCESSORS(ThisClass, PendingDamage)

	/** Mitigation cost to damage that was avoided. */
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData PendingMitigationCost;
	ATTRIBUTE_ACCESSORS(ThisClass, PendingMitigationCost)

	/**
	 * Total max health available to the character.
	 *
	 * <pre>
	 * Actual Max Health = (Max Health + Max Health Add) * Max Health Percent;
	 * </pre>
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData MaxHealthTotal;
	ATTRIBUTE_ACCESSORS(ThisClass, MaxHealthTotal)

	/**
	 * Total total max stamina available to the character.
	 *
	 * <pre>
	 * Actual Max Stamina = (Max Stamina + Max Stamina Add) + Max Stamina Percent;
	 * </pre>
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData MaxStaminaTotal;
	ATTRIBUTE_ACCESSORS(ThisClass, MaxStaminaTotal)

	/**
	 * Total max magic available to the character.
	 *
	 * <pre>
	 * Actual Max Stamina = (Max Magic + Max Magic Add) + Max Magic Percent;
	 * </pre>
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Meta Attributes")
	FGameplayAttributeData MaxMagicTotal;
	ATTRIBUTE_ACCESSORS(ThisClass, MaxMagicTotal)
	
	/** Current health available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(ThisClass, Health)

	/** Maximum health available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxHealth);

	/** Flat amount of health added to the maximum health. */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealthAdd)
	FGameplayAttributeData MaxHealthAdd;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxHealthAdd);

	/** Percent of health added to the maximum health. */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealthPercent)
	FGameplayAttributeData MaxHealthPercent;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxHealthPercent);
	
	/** Amount of health regenerated per second. */
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(ThisClass, HealthRegenRate)

	/** Current stamina available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(ThisClass, Stamina)

	/** Maximum stamina available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxStamina);

	/** Flat amount of health added to the maximum stamina. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStaminaAdd)
	FGameplayAttributeData MaxStaminaAdd;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxStaminaAdd);

	/** Percent of health added to the maximum stamina. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_MaxStaminaPercent)
	FGameplayAttributeData MaxStaminaPercent;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxStaminaPercent);
	
	/** Amount of stamina regenerated per second. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_StaminaRegenRate)
	FGameplayAttributeData StaminaRegenRate;
	ATTRIBUTE_ACCESSORS(ThisClass, StaminaRegenRate)

	/** Base delay for stamina to resume regenerating. */
	UPROPERTY(BlueprintReadOnly, Category = "Stamina", ReplicatedUsing = OnRep_StaminaRegenDelay)
	FGameplayAttributeData StaminaRegenDelay;
	ATTRIBUTE_ACCESSORS(ThisClass, StaminaRegenDelay)	
	
	/** Current magic available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_Magic)
	FGameplayAttributeData Magic;
	ATTRIBUTE_ACCESSORS(ThisClass, Magic)

	/** Maximum magic available to the character. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_MaxMagic)
	FGameplayAttributeData MaxMagic;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxMagic);

	/** Flat amount of health added to the maximum magic. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_MaxMagicAdd)
	FGameplayAttributeData MaxMagicAdd;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxMagicAdd);

	/** Percent of health added to the maximum magic. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_MaxMagicPercent)
	FGameplayAttributeData MaxMagicPercent;
	ATTRIBUTE_ACCESSORS_WITH_CUSTOM_INIT(ThisClass, MaxMagicPercent);
	
	/** Amount of magic regenerated per second. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_MagicRegenRate)
	FGameplayAttributeData MagicRegenRate;
	ATTRIBUTE_ACCESSORS(ThisClass, MagicRegenRate)

	/** Base delay for magic to resume regenerating. */
	UPROPERTY(BlueprintReadOnly, Category = "Magic", ReplicatedUsing = OnRep_MagicRegenDelay)
	FGameplayAttributeData MagicRegenDelay;
	ATTRIBUTE_ACCESSORS(ThisClass, MagicRegenDelay)		
	
	/**
	 * Base damage that the owning character can inflict.
	 *
	 * Damage can be set on a base level, by this attribute, or per each attack or projectile directly.
	 * Both are equally valid and each game can decide what's the best approach for their combat system.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_BaseDamage)
	FGameplayAttributeData BaseDamage;
	ATTRIBUTE_ACCESSORS(ThisClass, BaseDamage);

	/**
	 * Chance to apply critical damage, in [0, 1] range.
	 *
	 * Same as the base damage, this attribute can be set at a base level or per attack or projectile.
	 * Both are equally valid and each game can decide what's the best approach for their combat system.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_CriticalHitChance)
	FGameplayAttributeData CriticalHitChance;
	ATTRIBUTE_ACCESSORS(ThisClass, CriticalHitChance);

	/**
	 * Modifier applied when critical damage occurs.
	 *
	 * This modifier is applied to the base damage. For example: setting the base damage value to 100,
	 * with a critical hit multiplier of 1.5 will generate total incoming damage value of 150.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_CriticalHitMultiplier)
	FGameplayAttributeData CriticalHitMultiplier;
	ATTRIBUTE_ACCESSORS(ThisClass, CriticalHitMultiplier);

	/** Chance to block with a weapon, shield or any other means, in [0, 1] range. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockChance)
	FGameplayAttributeData BlockChance;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockChance);

	/** Amount of mitigation provided by blocking, in [0, 1] range. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockMitigation)
	FGameplayAttributeData BlockMitigation;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockMitigation);

	/**
	 * The angle used to determine if blocking is possible.
	 *
	 * It can be modified by specific pieces of equipment such as shields, providing the
	 * functionality of "broader" or "smaller" types.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockAngle)
	FGameplayAttributeData BlockAngle;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockAngle);

	/** A limit of how much damage block can actually mitigate, regardless of cost. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockLimit)
	FGameplayAttributeData BlockLimit;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockLimit);
	
	/** How efficient blocking is in terms of Stamina Cost. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockStaminaCostRate)
	FGameplayAttributeData BlockStaminaCostRate;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockStaminaCostRate);	

	/** Minimum stamina cost to start blocking. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockStaminaCost)
	FGameplayAttributeData BlockStaminaCost;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockStaminaCost);
	
	/** A cooldown applied from blocking, usually as penalty from a breaker hit. */
	UPROPERTY(BlueprintReadOnly, Category = "Block", ReplicatedUsing = OnRep_BlockCooldown)
	FGameplayAttributeData BlockCooldown;
	ATTRIBUTE_ACCESSORS(ThisClass, BlockCooldown);
	
	/** Stamina cost to perform an evade. */
	UPROPERTY(BlueprintReadOnly, Category = "Evade", ReplicatedUsing = OnRep_EvadeStaminaCost)
	FGameplayAttributeData EvadeStaminaCost;
	ATTRIBUTE_ACCESSORS(ThisClass, EvadeStaminaCost);

	/** Cooldown applied before a new evade can be performed. */
	UPROPERTY(BlueprintReadOnly, Category = "Evade", ReplicatedUsing = OnRep_EvadeCooldown)
	FGameplayAttributeData EvadeCooldown;
	ATTRIBUTE_ACCESSORS(ThisClass, EvadeCooldown);
	
	/**
	 * Chance to defend incoming damage, in [0, 1] range.
	 *
	 * This is the effective chance to mitigate damage received. Defense is an umbrella stat, it can be
	 * granted from any reason that is not "passive armor" or "blocking".
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Defense", ReplicatedUsing = OnRep_DefenseChance)
	FGameplayAttributeData DefenseChance;
	ATTRIBUTE_ACCESSORS(ThisClass, DefenseChance);

	/**
	 * Mitigation applied to incoming damage that has been defended, in [0, 1] range.
	 *
	 * This modifier is applied to incoming damage, to determine how much of it can be mitigated.
	 * For example, a damage value of 100 with a 0.2 mitigation results in a damage value of 80.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Defense", ReplicatedUsing = OnRep_DefenseMitigation)
	FGameplayAttributeData DefenseMitigation;
	ATTRIBUTE_ACCESSORS(ThisClass, DefenseMitigation);

	/**
	 * A limit of how much damage the extra defense can actually mitigate, regardless of cost.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Defense", ReplicatedUsing = OnRep_DefenseLimit)
	FGameplayAttributeData DefenseLimit;
	ATTRIBUTE_ACCESSORS(ThisClass, DefenseLimit);
	
	/**
	 * The Stamina Cost for each point of defense mitigated, if any.
	 *
	 * Each game must decide if this cost makes sense. Using stamina to soak incoming damage is very
	 * common in Souls-like games when you are blocking, but not necessarily common in an adventure game.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Defense", ReplicatedUsing = OnRep_DefenseStaminaCostRate)
	FGameplayAttributeData DefenseStaminaCostRate;
	ATTRIBUTE_ACCESSORS(ThisClass, DefenseStaminaCostRate);

	/**
	 * A flat reduction of damage. Absolute value, for flat, non-relative mitigation.
	 *
	 * This value is applied regardless of any defense change. This is just "base armor" and it's
	 * the final layer of damage mitigation, after blocking and defense.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Armor", ReplicatedUsing = OnRep_ArmorReduction)
	FGameplayAttributeData ArmorReduction;
	ATTRIBUTE_ACCESSORS(ThisClass, ArmorReduction);

	/**
	 * How many times the character can perform a Last Stand.
	 *
	 * Abilities, perks, items can modify this as necessary, which will result in the character
	 * surviving fatal damage and reverting to a certain amount of health.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Last Stand", ReplicatedUsing = OnRep_LastStandCount)
	FGameplayAttributeData LastStandCount;
	ATTRIBUTE_ACCESSORS(ThisClass, LastStandCount);

	/**
	 * Amount of health assigned to the character when the Last Stand triggers.
	 *
	 * This is an amount from the owner's max health that gets assigned to health, that now is
	 * most likely zero, due to a fatal damage.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Last Stand", ReplicatedUsing = OnRep_LastStandHealthPercent)
	FGameplayAttributeData LastStandHealthPercent;
	ATTRIBUTE_ACCESSORS(ThisClass, LastStandHealthPercent);

	/** Poise the character has. When poise damage reaches this value, the character is staggered. */
	UPROPERTY(BlueprintReadOnly, Category = "Poise and Stagger", ReplicatedUsing = OnRep_Poise)
	FGameplayAttributeData Poise;
	ATTRIBUTE_ACCESSORS(ThisClass, Poise);
	
	/** Current amount of damage applied to the character's poise. */
	UPROPERTY(BlueprintReadOnly, Category = "Poise and Stagger", ReplicatedUsing = OnRep_PoiseDamage)
	FGameplayAttributeData PoiseDamage;
	ATTRIBUTE_ACCESSORS(ThisClass, PoiseDamage);

	/** How much poise is recovered when the replenish effect ticks. */
	UPROPERTY(BlueprintReadOnly, Category = "Poise and Stagger", ReplicatedUsing = OnRep_PoiseRecovery)
	FGameplayAttributeData PoiseRecovery;
	ATTRIBUTE_ACCESSORS(ThisClass, PoiseRecovery);

	/** How fast recovery will happen, after a hit was received. */
	UPROPERTY(BlueprintReadOnly, Category = "Poise and Stagger", ReplicatedUsing = OnRep_PoiseRecoveryInterval)
	FGameplayAttributeData PoiseRecoveryInterval;
	ATTRIBUTE_ACCESSORS(ThisClass, PoiseRecoveryInterval);

	/** Duration of the stagger state. */
	UPROPERTY(BlueprintReadOnly, Category = "Poise and Stagger", ReplicatedUsing = OnRep_StaggerDuration)
	FGameplayAttributeData StaggerDuration;
	ATTRIBUTE_ACCESSORS(ThisClass, StaggerDuration);
	
	// -- Begin Attribute Set implementation
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void InitFromMetaDataTable(const UDataTable* DataTable) override;
	// -- End Attribute Set implementation

	// -- Begin Custom Initializers
	void InitMaxHealth(float NewVal);
	void InitMaxHealthAdd(float NewVal);
	void InitMaxHealthPercent(float NewVal);
	void InitMaxStamina(float NewVal);
	void InitMaxStaminaAdd(float NewVal);
	void InitMaxStaminaPercent(float NewVal);
	void InitMaxMagic(float NewVal);
	void InitMaxMagicAdd(float NewVal);
	void InitMaxMagicPercent(float NewVal);
	// -- End Custom Initializers
	
	/**
	 * Calculates the absolute max health.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Attributes")
	float GetAbsoluteMaxHealth() const;

	/**
	 * Calculates the absolute max stamina.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Attributes")
	float GetAbsoluteMaxStamina() const;

	/**
	 * Calculates the absolute max magic.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Attributes")
	float GetAbsoluteMaxMagic() const;

protected:

	/** Calculates and processes the Pending Damage. */
	virtual void HandleIncomingDamage(const FGameplayEffectModCallbackData& Data);

	/** Initialize the Calculation Input, based on the provided data and current values. */
	void InitializeDamageCalculationInput(const FGameplayEffectModCallbackData& Data, FDamageCalculationInput& Input) const;

	/** Applies the output data. */
	void ApplyDamage(const FGameplayEffectModCallbackData& Data, const FDamageCalculationOutput& Output);

	/**
	 * Adjusts the balance between current/maximum attributes, once maximum is changed.
	 *
	 * @param AffectedAttribute				Attribute being modified, triggering a re-distribution.
	 * @param MaxAttribute					Attribute representing the maximum value, that's being modified.
	 * @param NewMaxValue					New value being assigned to the Maximum Value.
	 * @param AffectedAttributeProperty		Property that represents the affected attribute.
	 */
	void AdjustAttributeForMaxValueChange(const FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute,
		float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty) const;	

	void RecalculateTotalHealth();
	void RecalculateTotalStamina();
	void RecalculateTotalMagic();

	/**
	 * Calculates an absolute stat, such as health/stamina/magic.
	 * You can override this value if you want to aggregate values differently.
	 */
	virtual float GetAbsoluteValue_Internal(float Base, float Add, float Percent) const;

	/**
	 * Adds or remove a loose gameplay tag based on the current/max value.
	 */
	void AddOrRemoveLooseGameplayTag(FGameplayTag Tag, float Value, float MaxValue) const;
	
	virtual void RecalculateFromAttributeChange(FGameplayAttribute Current, FGameplayAttribute Base, FGameplayAttribute Add,
		FGameplayAttribute Percent, FGameplayAttribute Total, FGameplayAttribute Changed, float NewValue);
	
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxHealthAdd(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxHealthPercent(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxStaminaAdd(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxStaminaPercent(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_StaminaRegenRate(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_StaminaRegenDelay(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_Magic(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxMagic(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxMagicAdd(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MaxMagicPercent(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_MagicRegenRate(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_MagicRegenDelay(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_BaseDamage(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_CriticalHitChance(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_CriticalHitMultiplier(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_BlockChance(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_BlockMitigation(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_BlockAngle(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_BlockLimit(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_BlockStaminaCostRate(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_BlockStaminaCost(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
    virtual void OnRep_BlockCooldown(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_EvadeStaminaCost(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_EvadeCooldown(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_DefenseChance(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_DefenseMitigation(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_DefenseLimit(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_DefenseStaminaCostRate(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_ArmorReduction(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_LastStandCount(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_LastStandHealthPercent(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_Poise(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_PoiseDamage(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_PoiseRecovery(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_PoiseRecoveryInterval(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_StaggerDuration(const FGameplayAttributeData& OldValue);
	
};

