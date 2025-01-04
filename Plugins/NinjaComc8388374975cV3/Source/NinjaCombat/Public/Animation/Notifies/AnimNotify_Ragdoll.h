// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Animation/NinjaCombatAnimNotify.h"
#include "AnimNotify_Ragdoll.generated.h"

/**
 * Actives the ragdoll system in the combatant's mesh.
 */
UCLASS(meta = (DisplayName = "Ragdoll"))
class NINJACOMBAT_API UAnimNotify_Ragdoll : public UNinjaCombatAnimNotify
{
	
	GENERATED_BODY()

public:

	UAnimNotify_Ragdoll();

	// -- Begin Anim Notify implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- end Anim Notify implementation	

};
