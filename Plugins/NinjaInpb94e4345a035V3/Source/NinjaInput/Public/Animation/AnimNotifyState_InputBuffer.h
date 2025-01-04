// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_InputBuffer.generated.h"

/**
 * Enables the all Input Buffers available to the owner, during the notify duration.
 */
UCLASS(EditInlineNew , HideCategories = Object, CollapseCategories, meta = (DisplayName = "Input Buffer"))
class NINJAINPUT_API UAnimNotifyState_InputBuffer : public UAnimNotifyState
{
    
	GENERATED_BODY()

public:

	UAnimNotifyState_InputBuffer();

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;

private:

	float ElapsedTime;
	float NotifyDuration;
    
};
