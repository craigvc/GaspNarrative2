// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaInventoryGameplayAbility.h"
#include "Interfaces/InventoryAnimationReceiverInterface.h"
#include "Types/EInventoryAnimationStrategy.h"
#include "Types/FInventoryAnimationTableRow.h"
#include "NinjaInventoryAnimationAbility.generated.h"

class UAnimMontage;
class UDataTable;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_WaitGameplayEvent;

/**
 * Base ability providing a structure for animation-related tasks. 
 */
UCLASS(Abstract)
class NINJAINVENTORYGAMEPLAY_API UNinjaInventoryAnimationAbility : public UNinjaInventoryGameplayAbility, public IInventoryAnimationReceiverInterface
{
	
	GENERATED_BODY()

public:

	UNinjaInventoryAnimationAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
protected:

	/** A table of Animation Montages for events handled by this ability. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (RequiredAssetDataTags = "RowStructure=/Script/NinjaInventoryGameplay.InventoryAnimationTableRow"))
	TObjectPtr<UDataTable> MontageTable;

	/** Defines how the item can be consumed from an animation's perspective. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
	EInventoryAnimationStrategy AnimationStrategy;

	/**
	 * An optional animation event to wait before changing the state.
	 * Only relevant if the strategy is set to "Gameplay Event".
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment State", meta = (Categories = "Inventory.Event.Animation", EditCondition = "AnimationStrategy == EInventoryAnimationStrategy::WaitForGameplayEvent"))
	FGameplayTag AnimationEventTag;
	
	// -- Begin Gameplay Ability implementation
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;	
	// -- End Gameplay Ability implementation	
	
	// -- Begin Equipment Montage Receiver implementation
	virtual void HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, FName MontageSection) override;
	virtual void HandleAnimationNotFound_Implementation() override;
	// -- End Equipment Montage Receiver implementation

	void LoadAnimationMontage(const FGameplayTagContainer& AnimationTags);
	void OnAssetLoaded(TSharedPtr<FInventoryAnimationTableRow> AnimationData);
	void InitializeAndActivateMontageTask(UAnimMontage* MontageToPlay, const FName MontageSection);
	void InitializeAndActivateEventTask();

	/**
	 * Handles a Gameplay Event that has been received, probably from the Animation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Montage Ability")
	void HandleEventReceived(const FGameplayEventData Payload);
	
private:

	/** Plays the selected Animation Montage. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_PlayMontageAndWait> PlayMontageTask;	

	/** Waits for the tracked Gameplay Event from the ongoing animation. */
	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitGameplayEvent> WaitEventTask;
	
};
