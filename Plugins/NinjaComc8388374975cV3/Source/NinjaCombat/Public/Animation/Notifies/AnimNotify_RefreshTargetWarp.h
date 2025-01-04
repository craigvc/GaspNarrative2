// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "AnimNotify_RefreshTargetWarp.generated.h"

/**
 * Refreshes the Target Location for a given warp target name.
 */
UCLASS(meta = (DisplayName = "Refresh Target Warp"))
class NINJACOMBAT_API UAnimNotify_RefreshTargetWarp : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	/** Name used to find the warp target for this modifier */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
	FName WarpTargetName = NAME_None;

	/** A distance offset between the owner and the provided target. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
	float DistanceOffset = 100.f;
	
	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation
	
};
