// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/NinjaCombatGameplayAbility.h"
#include "Types/ECombatComboEventMode.h"
#include "CombatAbility_Combo.generated.h"

class UInputAction;
class UStateTree;
class UAbilityTask_WaitGameplayEvent;

/**
 * Maps Input Actions to Event Tags.
 */
USTRUCT(BlueprintType)
struct FComboEventMapping
{
	
	GENERATED_BODY()

	/** Input Action that will trigger the combo event. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Event Mapping")
	TObjectPtr<const UInputAction> InputAction;

	/** Gameplay Tag representing the combo event. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo Event Mapping")
	FGameplayTag ComboEventTag;
	
};

/**
 * An ability that works in conjunction with the Combo Component to orchestrate multiple abilities.
 */
UCLASS()
class NINJACOMBAT_API UCombatAbility_Combo : public UNinjaCombatGameplayAbility
{
	
	GENERATED_BODY()

public:

	UCombatAbility_Combo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Checks if this ability is in the combo window.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	bool InComboWindow() const;

	/**
	 * Provides the current counter for the combo. 
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	int32 GetComboCount() const;	
	
protected:

	/** State Tree representing the Combo. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Combo", meta = (RequiredAssetDataTags = "Schema=/Script/NinjaCombat.NinjaCombatComboComponentSchema"))
	TObjectPtr<UStateTree> ComboTree;
	
	/**
	 * Gameplay Abilities used by the combo, granted when the main ability's avatar is set.
	 * These abilities are granted using the same level as the Combo Ability.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Combo")
	TArray<TSubclassOf<UGameplayAbility>> AbilityClasses;

	/** Determines how events are determined for the Combo: Input Actions or Direct Tags. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Combo")
	ECombatComboEventMode EventMode;
	
	/** Input Actions mapped to events in the combo. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Combo", meta = (TitleProperty = "InputAction", EditCondition = "EventMode == ECombatComboEventMode::InputAction", EditConditionHides))
	TArray<FComboEventMapping> EventMappings;
	
	/** Gameplay Effect applied when the character is in a Combo Window. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Combo")
	TSubclassOf<UGameplayEffect> ComboWindowEffectClass;
	
	// -- Begin Gameplay Ability implementation
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) override;
	// -- End Gameplay Ability implementation

	/**
	 * Adds all combo abilities required by this combo.
	 */
	virtual void GiveComboAbilities(const FGameplayAbilitySpec& CurrentSpec);

	/**
	 * Removes all combo abilities granted by this combo.
	 */
	virtual void RemoveComboAbilities();
	
	/**
	 * Handles the Combo Finished event, broadcast by the Combo Manager.
	 */
	UFUNCTION()
	void HandleComboFinished(UActorComponent* ComboManager, bool bSucceeded);

	/**
	 * Retrieves the Input Action from an Event Payload.
	 * Checks both the Primary and Secondary Optional Objects.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Ability")
	const UInputAction* GetInputActionFromEvent(const FGameplayEventData& Payload) const;

	/**
	 * Retrieves the Actor (Target Hit) from an Event Payload.
	 * Checks both the Primary and Secondary Optional Objects.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Ability")
	const AActor* GetTargetHitFromEvent(const FGameplayEventData& Payload) const;
	
	/**
	 * Retrieves a Gameplay Tag for the Combo Event related to an input.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	FGameplayTag GetComboEventFromInputAction(const UInputAction* InputAction) const;

	/**
	 * Advances the combo.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void AdvanceCombo(const FGameplayEventData& Payload);
	
	/**
	 * Applies the Combo Window Effect.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void ApplyComboWindowEffect();

	/**
	 * Revokes the active Combo Window Effect.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	void RemoveComboWindowEffect();

	/**
	 * Registers an incoming target from a combo attack.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void RegisterTargetFromPayload(FGameplayEventData Payload);

	/**
	 * Resets the target count for the current combo.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void ResetCurrentTargets();

	/**
	 * Advances the combo in the server.
	 */
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AdvanceCombo(const FGameplayEventData& Payload);
	
private:

	/** Keeps track of combo events. */
    UPROPERTY()
    TObjectPtr<UAbilityTask_WaitGameplayEvent> ComboEventTask;

	/** Handle for the applied Combo Window Effect. */
	FActiveGameplayEffectHandle ComboWindowEffectHandle;

	/** Additional handles created when this ability was granted. */
	TArray<FGameplayAbilitySpecHandle> AdditionalAbilityHandles;
	
};
