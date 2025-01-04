// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_PlayOpportunityAnimation.generated.h"

class UContextualAnimSceneAsset;
class UContextualAnimSceneActorComponent;

/**
 * Plays a Contextual Animation for an Opportunity Attack.
 */
UCLASS()
class NINJACOMBAT_API UAbilityTask_PlayOpportunityAnimation : public UAbilityTask
{

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpportunityAnimationEvent, UContextualAnimSceneActorComponent*, SceneActorComponent);
	
	GENERATED_BODY()

public:

	/** Broadcasts an actor that joined the scene. */
	UPROPERTY(BlueprintAssignable)
	FOpportunityAnimationEvent OnJoinedScene;

	/** Broadcasts an actor that has left the scene. */
	UPROPERTY(BlueprintAssignable)
	FOpportunityAnimationEvent OnLeftScene;

	/** The Scene has failed to play. */
	UPROPERTY(BlueprintAssignable)
	FOpportunityAnimationEvent OnSceneFailed;
	
	UAbilityTask_PlayOpportunityAnimation();

	/**
	 * Creates the Ability Task, with the provided data.
	 */
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true"), Category = "Ability|Tasks")
	static UAbilityTask_PlayOpportunityAnimation* CreateTask(UGameplayAbility* OwningAbility, UContextualAnimSceneAsset* SceneAsset, AActor* Attacker, AActor* Victim, bool bEnableDebug = false);

	// -- Begin Ability Task implementation
	virtual void Activate() override;
	// -- End Ability Task implementation

	/**
	 * Adds additional actors to the map.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks")
	void SetAdditionalSceneActors(TMap<FName, AActor*> ActorMap);
	
protected:

	/** Sets this task to debug mode. */
	bool bEnableDebug;

	/** Anim Scene that manages the contextual animation. */
	UPROPERTY()
	TObjectPtr<UContextualAnimSceneAsset> SceneAsset;
	
	/** Actor that will play the Attacker role in the scene. */
	UPROPERTY()
	TObjectPtr<AActor> Attacker;

	/** Actor that will play the Victim role in the scene. */
	UPROPERTY()
	TObjectPtr<AActor> Victim;
	
	/** A map of roles and additional actors that will also join the scene. */
	UPROPERTY()
	TMap<FName, TObjectPtr<AActor>> AdditionalSceneActors;
	
	UFUNCTION()
	virtual void HandleAvatarJoinedScene(UContextualAnimSceneActorComponent* SceneActorComponent);
	
	UFUNCTION()
	virtual void HandleAvatarLeftScene(UContextualAnimSceneActorComponent* SceneActorComponent);

	UFUNCTION()
	virtual void HandleSceneFailed();
	
};
