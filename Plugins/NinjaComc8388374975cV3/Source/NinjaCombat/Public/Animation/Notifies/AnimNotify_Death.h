// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "AnimNotify_Death.generated.h"

class UActorComponent;
class UAnimSequenceBase;
class USkeletalMeshComponent;

/**
 * Sends a Gameplay Event to notify that the main part of the Death animation has completed.
 *
 * Even though the Death Ability and Death Logic have mechanisms to accomodate a looping death montage,
 * this is useful to notify the Ability that the main part of the animation has played and from now on,
 * everything else is a loop.
 */
UCLASS(meta = (DisplayName = "Death"))
class NINJACOMBAT_API UAnimNotify_Death : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	/**
	 * Activates ragdoll on death.
	 *
	 * Same behavior as the ragdoll notify, so if both are set to happen at the same frame, then
	 * you don't need to use both of them in the animation sequence/montage.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Death)
	bool bEnableRagdollPhysics;
	
	UAnimNotify_Death();

	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation	

protected:

	/**
	 * Enables Ragdoll Physics if this notify is set to do so.
	 * Same as using the actual ragdoll notify, but it can save one notify.
	 */
	virtual void EnableRagdollPhysics(UActorComponent* DamageManager) const;
	
};
