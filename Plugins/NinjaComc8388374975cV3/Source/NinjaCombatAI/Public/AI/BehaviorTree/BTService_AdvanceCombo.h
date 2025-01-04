// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BehaviorTree/BTService.h"
#include "Types/ECombatComboEventMode.h"
#include "BTService_AdvanceCombo.generated.h"

class UInputAction;

struct FAdvanceComboServiceMemory : FBTCompositeMemory
{
	/**
	 * Combo Manager for the current Service Node.
	 * Used to compare with other incoming events.
	 */
	TWeakObjectPtr<UActorComponent> ComboManager;
};

/**
 * Advances a Combo using Gameplay Events or Input Actions provided by a customizable logic.
 */
UCLASS(DisplayName = "Advance Combo", Category = "Ninja Combat")
class NINJACOMBATAI_API UBTService_AdvanceCombo : public UBTService
{
	
	GENERATED_BODY()

public:

	/** Determines how the combo is advanced by this Service. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo")
	ECombatComboEventMode EventMode;

	/** Default Input Action used when the Event Mode is set to "Input Action". */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo", meta = (EditCondition = "EventMode == ECombatComboEventMode::InpputAction"))
	TObjectPtr<UInputAction> DefaultInputAction;

	/** Default Gameplay Tag used when the Event Mode is set to "Gameplay Tag. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo", meta = (EditCondition = "EventMode == ECombatComboEventMode::InpputAction"))
	FGameplayTag DefaultGameplayTag;
	
	UBTService_AdvanceCombo();
	
	// -- Begin Service implementation
	virtual uint16 GetInstanceMemorySize() const override;
	virtual void InitializeMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryInit::Type InitType) const override;
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	// -- End Service implementation

protected:

	/**
	 * Handles the new state for a Combo Window.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Service")
	void HandleComboWindowChanged(UActorComponent* ComboManager, bool bInComboWindow);
	
	/**
	 * Provides the Input Action used to advance the combo.
	 * Invoked if the Event Mode is set to "Input Action".
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Service")
	const UInputAction* GetComboInputAction(const AActor* Owner) const;

	/**
	 * Provides the Gameplay Tag used to advance the combo.
	 * Invoked if the Event Mode is set to "Gameplay Event".
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Combo Service")
	FGameplayTag GetComboGameplayTag(const AActor* Owner) const;

	/**
	 * Retrieves the Behavior Tree Component from the Combo Manager.
	 * 
	 * By default,this will go through the Owner's AI Controller, and retrieve the
	 * Behavior Tree Component from there, but if you can override this if you have
	 * a faster path to the Behavior Tree Component.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|AI")
	virtual UBehaviorTreeComponent* GetBehaviorTreeComponent(const UActorComponent* ComboManager) const;

	/**
	 * Checks if the provided Combo Manager matches the one in the Service Memory.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|AI")
	virtual bool CheckComboManager(const UActorComponent* ComboManager) const;
	
	/**
	 * Sends a Gameplay Event to the owner's ASC, using the provided event tag and object.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|AI")
	virtual void SendGameplayEvent(const AActor* AbilityOwner, FGameplayTag EventTag, const UObject* OptionalObject);
	
};

