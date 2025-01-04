// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Interfaces/CombatActorInfoProxyInterface.h"
#include "NinjaCombatGameplayAbility.generated.h"

class UMovementComponent;
class UAbilityTask_WaitGameplayEvent;
class UNinjaCombatManagerComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaCombatAbility, Log, All);

/**
 * Base Gameplay Ability that provides access to the Combat Component.
 */
UCLASS(Abstract)
class NINJACOMBAT_API UNinjaCombatGameplayAbility : public UGameplayAbility
{
	
	GENERATED_BODY()

public:

	UNinjaCombatGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * Provides the Combat Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UNinjaCombatManagerComponent* GetCombatManagerComponentFromActorInfo() const;	
	
	/**
	 * Provides the Combo Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetComboManagerComponentFromActorInfo() const;

	/**
	 * Provides the Damage Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetDamageManagerComponentFromActorInfo() const;

	/**
	 * Provides the Defense Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetDefenseManagerComponentFromActorInfo() const;
	
	/**
	 * Provides the Motion Warping Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetMotionWarpingComponentFromActorInfo() const;

	/**
	 * Provides the Target Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetTargetManagerComponentFromActorInfo() const;
	
	/**
	 * Provides the Weapon Manager Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UActorComponent* GetWeaponManagerComponentFromActorInfo() const;

	/**
	 * Provides the Character Movement Component from the Actor Info.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Abilities")
	UMovementComponent* GetMovementComponent() const;

	/**
	 * Helper method that can finish an array of latent tasks.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	static void FinishLatentTasks(const TArray<UAbilityTask*>& Tasks);

	/**
	 * Helper method that can finish a latent task.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	static void FinishLatentTask(UAbilityTask* Task);
	
	bool InDebugMode() const { return bEnableDebug; }
	float GetDebugDuration() const { return TimeToDisplayDebugInfo; }
	
protected:

	/** Determines if blueprint activation is on or off. */
	bool bEnableBlueprintActivation;
	
	/** Toggles debug mode on and off. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Debug")
	bool bEnableDebug;

	/** Display duration of debug information. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Ability|Debug")
	float TimeToDisplayDebugInfo;
	
	static const ICombatActorInfoProxyInterface* GetActorInfoProxy();

	/**
	 * Adds initial tags to this ability. Meant to be called in the constructor.
	 */
	void SetInitialTags(FGameplayTagContainer InitialTags);

	/**
	 * Provides all Ability Tags considering the compatibility pre/post UE 5.5.
	 */
	FGameplayTagContainer GetAbilityTags() const;
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	/**
	 * Handles the initialization of the event task. It won't be active yet.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	UAbilityTask_WaitGameplayEvent* InitializeEventTask(FGameplayTag Event, bool bOnlyMatchExact = true);

	/**
	 * Executes the blueprint activation nodes.
	 */
	virtual void ExecuteBlueprintActivation(const FGameplayEventData* TriggerEventData);

	/**
	 * Adds a debug message, if debugging is activated.
	 * 
	 * @param Message
	 *		Message that will be displayed to the log and on-screen.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Abilities")
	virtual void AddDebugMessage(const FString& Message) const;

	/**
	 * Convenience method to handle event payloads.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combat Ability")
	void HandleEventReceived(FGameplayEventData Payload);
	virtual void HandleEventReceived_Implementation(FGameplayEventData Payload) { }
	
};
