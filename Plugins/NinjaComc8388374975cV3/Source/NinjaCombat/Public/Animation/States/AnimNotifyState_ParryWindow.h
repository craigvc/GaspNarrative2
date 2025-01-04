// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "Animation/NinjaCombatAnimNotifyState.h"
#include "AnimNotifyState_ParryWindow.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

/**
 * Opens a parry window, allowing opportunity attacks to be executed.
 */
UCLASS(meta = (DisplayName = "Parry Window"))
class NINJACOMBAT_API UAnimNotifyState_ParryWindow : public UNinjaCombatAnimNotifyState
{
	
	GENERATED_BODY()

public:

	UAnimNotifyState_ParryWindow();

	// -- Begin Anim Notify State implementation
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify State implementation

protected:

	/** Gameplay Effect that represents the parry window. */
	UPROPERTY()
	TSubclassOf<UGameplayEffect> ParryWindowEffectClass;

	/** Handle for the active Parry Window effect. Must be removed when the Notify ends. */
	FActiveGameplayEffectHandle EffectHandle;

};
