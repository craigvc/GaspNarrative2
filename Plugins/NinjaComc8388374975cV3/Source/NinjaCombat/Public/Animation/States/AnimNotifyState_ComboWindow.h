// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/NinjaCombatAnimNotifyState.h"
#include "AnimNotifyState_ComboWindow.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

/**
 * Opens a combo window, allowing follow-up attacks to be executed.
 */
UCLASS(meta = (DisplayName = "Combo Window"))
class NINJACOMBAT_API UAnimNotifyState_ComboWindow : public UNinjaCombatAnimNotifyState
{
	
	GENERATED_BODY()

public:

	UAnimNotifyState_ComboWindow();

	// -- Begin Anim Notify State implementation
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify State implementation
	
};
