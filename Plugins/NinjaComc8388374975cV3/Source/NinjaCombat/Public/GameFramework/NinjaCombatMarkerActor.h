// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/NinjaCombatPoolableActor.h"
#include "NinjaCombatMarkerActor.generated.h"

class AActor;
class UWidgetComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaCombatTargetLock, Log, All);

/**
 * An actor used to indicate multiple effects and status on a target.
 * 
 * This is only used for the local player. Unless there's an actual target locked on it, it will always have a duration.
 * Otherwise, it will always be returned to the pool after the pre-established amount of time.
 *
 * The expected usage scenario for this is to have a Scene Component in the owner, tagged with the value set in the
 * "TargetMeshTag" property. This Scene Component is attached to the appropriate socket and can be moved as needed.
 */
UCLASS()
class NINJACOMBAT_API ANinjaCombatMarkerActor : public ANinjaCombatPoolableActor
{
	
	GENERATED_BODY()

public:

	static FName TargetLockWidgetName;
	
	ANinjaCombatMarkerActor();

	// -- Begin Actor implementation
	virtual void BeginPlay() override;
	// -- End Actor implementation

	/**
	 * Provides the current target assigned to this lock actor.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Marker Actor")
	AActor* GetCurrentTarget() const { return CurrentTarget; }
	
	/**
	 * Locks on a given target.
	 *
	 * The proper positioning to attach to is determined by this actor's "FindAttachAnchor" function,
	 * which can be further extended to create more complex attachment scenarios. Please check that
	 * function's documentation for more information.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Marker Actor")
	void LockOnTarget(AActor* Target);

	/**
	 * Detaches from the current target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Marker Actor")
	void DismissTarget();
	
	/**
	 * Provides the Widget Component used to show the target lock.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Marker Actor")
	UWidgetComponent* GetTargetLockWidget() const;
	
protected:

	/**
	 * If set to true, it will destroy the actor when detached from a target.
	 * Otherwise, it will detach the actor and make it invisible.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Marker Actor")
	bool bDestroyOnDetach;
	
	/** Tag used to obtain the mesh  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Marker Actor")
	FName TargetMeshTag;
	
	/**
	 * Finds a proper scene component in the actor, that can be used as an Anchor Point.
	 *
	 * This component should also contain the proper attachment socket, for proper positioning,
	 * but you can obviously override this behavior either in Blueprint or C++, in case you want
	 * to determine the anchor point using other means.
	 *
	 * A common use case for that would be a Third Person Game where you are facing a big enemy,
	 * like a dragon, and you want to attach this to specific locations that can be seen by the
	 * player, such as the legs. For that, you might want to do line traces from the camera and
	 * see which Scene Component will be hit at the center of the screen.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Marker Actor")
	USceneComponent* FindAttachAnchor(const AActor* Target) const;

	/**
	 * Attaches to the Anchor Component provided to the function.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Marker Actor")
	bool AttachToTarget(USceneComponent* AnchorComponent);

	/**
	 * Performs tasks that will detach this actor and remove it.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Marker Actor")
	void DetachFromTarget();

	/**
	 * Event dedicated to running any logic when a target is set.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Marker Actor")
	void HandleTargetSet(AActor* Target);
	virtual void HandleTargetSet_Implementation(AActor* Target) { }

	/**
	 * Event dedicated to running any logic when a target is cleared.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Marker Actor")
	void HandleTargetCleared(AActor* Target);
	virtual void HandleTargetCleared_Implementation(AActor* Target) { }

	/**
	 * Sets the current target to all widgets stored in the current Widget Components.
	 * Widgets must implement CombatActorAwareInterface to receive the current target.
	 */
	void SetCombatActorToWidgets() const;
	
private:

	/** Current target. */
	UPROPERTY()
	TObjectPtr<AActor> CurrentTarget;

	/** Widget Component rendering the target lock representation. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UWidgetComponent> TargetLockWidget;
	
};
