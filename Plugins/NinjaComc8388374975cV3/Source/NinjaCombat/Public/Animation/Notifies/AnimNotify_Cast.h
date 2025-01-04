// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "AnimNotify_Cast.generated.h"

/**
 * Sends a Gameplay Event to perform a cast.
 */
UCLASS(meta = (DisplayName = "Cast"))
class NINJACOMBAT_API UAnimNotify_Cast : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	UAnimNotify_Cast();

	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation	
	
};
