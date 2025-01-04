// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NinjaCombatCameraAnchorActor.generated.h"

class UCameraComponent;
/**
 * An actor with a camera that can be used as an anchor for camera animations.
 */
UCLASS(Blueprintable, Placeable)
class NINJACOMBATCAMERA_API ANinjaCombatCameraAnchorActor : public AActor
{
	
	GENERATED_BODY()

public:

	/** Name used for the Camera Component. Can be used for replacements in C++. */
	static FName CameraName;
	
	ANinjaCombatCameraAnchorActor(const FObjectInitializer& ObjectInitializer);

	// -- Begin Actor implementation
	virtual void Tick(float DeltaSeconds) override;
	// -- Begin End implementation
	
	/**
	 * Provides the Camera Component assigned to this actor.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Camera")
	UCameraComponent* GetCamera() const;

	/**
	 * Sets the source for this anchor point. Usually the player pawn.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ninja Combat|Camera")
	void SetSource(AActor* Source);

protected:

	/** If set to true, will follow the source. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera Anchor")
	bool bFollowSource = true;
	
private:

	/** Camera used for the animation viewport. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UCameraComponent> Camera;

	/** A reference to the source, such as the player pawn, that originated this anchor. */
	TWeakObjectPtr<AActor> SourcePtr;
	
};
