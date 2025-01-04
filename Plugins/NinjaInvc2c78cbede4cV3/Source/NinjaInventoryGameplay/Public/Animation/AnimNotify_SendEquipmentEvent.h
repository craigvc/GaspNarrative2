// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SendEquipmentEvent.generated.h"

class UNinjaEquipment;

/**
 * Sends an Equipment Gameplay Event.
 */
UCLASS(DisplayName = "Send Equipment Event")
class NINJAINVENTORYGAMEPLAY_API UAnimNotify_SendEquipmentEvent : public UAnimNotify
{
	
	GENERATED_BODY()

public:

	UAnimNotify_SendEquipmentEvent();
	
	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify implementation

protected:

	/** Tag representing the event, matching the ongoing gameplay ability. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notify: Send Equipment Event", meta = (Categories = "Inventory.Event"))
	FGameplayTag EventTag;

	/**
	 * All gameplay tags used to match with equipment that has been pre-selected in a State Ability.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notify: Send Equipment Event")
	FGameplayTagContainer EquipmentTags;
	
};
