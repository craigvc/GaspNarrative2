// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ToggleRotationDuringRootMotion.generated.h"

/**
 * Allows input/control rotation during Root Motion.
 */
UCLASS(EditInlineNew , HideCategories = Object, CollapseCategories, meta = (DisplayName = "Toggle Rotation During Root Motion"))
class NINJAINPUT_API UAnimNotifyState_ToggleRotationDuringRootMotion : public UAnimNotifyState
{
	
	GENERATED_BODY()

public:

	UAnimNotifyState_ToggleRotationDuringRootMotion();
	
	// -- Begin Anim Notify State implementation
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify State implementation
	
private:

	/** Control flag so we won't revert a setting that we never changed. */
	bool bChangedProperty = false;
	
};
