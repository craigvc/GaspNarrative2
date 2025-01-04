// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h"

#include "ContextualAnimSceneActorComponent.h"
#include "ContextualAnimSceneAsset.h"
#include "NinjaCombatLog.h"
#include "Interfaces/CombatOpportunityTargetInterface.h"
#include "Runtime/Launch/Resources/Version.h"

UAbilityTask_PlayOpportunityAnimation::UAbilityTask_PlayOpportunityAnimation()
{
	bEnableDebug = false;
}

UAbilityTask_PlayOpportunityAnimation* UAbilityTask_PlayOpportunityAnimation::CreateTask(
	UGameplayAbility* OwningAbility, UContextualAnimSceneAsset* SceneAsset, AActor* Attacker, AActor* Victim,
	const bool bEnableDebug)
{
	UAbilityTask_PlayOpportunityAnimation* NewTask = NewAbilityTask<UAbilityTask_PlayOpportunityAnimation>(OwningAbility);
	
	NewTask->bEnableDebug = bEnableDebug;
	NewTask->Attacker = Attacker;
	NewTask->Victim = Victim;
	NewTask->SceneAsset = SceneAsset;
	
	return NewTask;	
}

void UAbilityTask_PlayOpportunityAnimation::Activate()
{
	Super::Activate();

	if (!IsValid(Attacker) || !IsValid(Victim))
	{
		COMBAT_LOG(Warning, "Missing attacker or victim!");
		HandleSceneFailed();
		EndTask();
		return;
	}
	
	const UContextualAnimSceneAsset* ActualSceneAsset = SceneAsset;
	if (Victim->Implements<UCombatOpportunityTargetInterface>())
	{
		FGameplayTagContainer Tags;
		
#if ENGINE_MINOR_VERSION < 5
		Tags.AppendTags(Ability->AbilityTags);
#else
		Tags.AppendTags(Ability->GetAssetTags());
#endif
		
		const UContextualAnimSceneAsset* OverrideSceneAsset = ICombatOpportunityTargetInterface::Execute_GetContextualAnimSceneAsset(Victim, Tags);
		if (IsValid(OverrideSceneAsset))
		{
			ActualSceneAsset = OverrideSceneAsset; 
		}
	}

	if (!IsValid(ActualSceneAsset))
	{
		COMBAT_LOG(Warning, "Missing scene asset!");
		HandleSceneFailed();
		EndTask();
		return;
	}
	
	UContextualAnimSceneActorComponent* AnimComponent = Attacker->FindComponentByClass<UContextualAnimSceneActorComponent>();
	if (IsValid(AnimComponent))
	{
		AnimComponent->bEnableDebug = bEnableDebug;
		AnimComponent->OnJoinedSceneDelegate.AddUniqueDynamic(this, &ThisClass::HandleAvatarJoinedScene);
		AnimComponent->OnLeftSceneDelegate.AddUniqueDynamic(this, &ThisClass::HandleAvatarLeftScene);
	}
	else
	{
		COMBAT_LOG_ARGS(Warning, "Unable to find the Anim Scene Component for %s!", *GetNameSafe(Attacker));
		HandleSceneFailed();
		EndTask();
		return;
	}

	const FContextualAnimSceneBindingContext Primary(Victim, Victim->GetTransform());
	const FContextualAnimSceneBindingContext Secondary(Attacker, Attacker->GetTransform());

	static constexpr int32 SectionIdx = 0;
	FContextualAnimSceneBindings AnimSceneBindings;
	
	if (!FContextualAnimSceneBindings::TryCreateBindings(*SceneAsset, SectionIdx, Primary, Secondary, AnimSceneBindings))
	{
		COMBAT_LOG_ARGS(Warning, "Unable to create Anim Scene Bindings for %s!", *GetNameSafe(SceneAsset));
		HandleSceneFailed();
		EndTask();
		return;
	}

	if (!AdditionalSceneActors.IsEmpty() && AnimSceneBindings.IsValid())
	{
		for (TPair<FName, TObjectPtr<AActor>>& Entry : AdditionalSceneActors)
		{
			if (IsValid(Entry.Value))
			{
				AnimSceneBindings.BindActorToRole(*Entry.Value, Entry.Key);
			}
		}
	}

	if (AnimComponent->StartContextualAnimScene(AnimSceneBindings))
	{
		COMBAT_LOG_ARGS(Log, "Started Contextual Animation %s between attacker %s and victim %s.",
			*GetNameSafe(ActualSceneAsset), *GetNameSafe(Attacker), *GetNameSafe(Victim));
	}
	else
	{
		COMBAT_LOG_ARGS(Log, "Unable to start Anim Scene for %s!", *GetNameSafe(SceneAsset));
		HandleSceneFailed();
		EndTask();
	}
}

void UAbilityTask_PlayOpportunityAnimation::SetAdditionalSceneActors(TMap<FName, AActor*> ActorMap)
{
	if (ActorMap.IsEmpty())
	{
		return;
	}
	
	for (TPair<FName, AActor*>& Entry : ActorMap)
	{
		if (Entry.Key != NAME_None && IsValid(Entry.Value))
		{
			AdditionalSceneActors.Add(Entry.Key, Entry.Value);	
		}
	}
}

void UAbilityTask_PlayOpportunityAnimation::HandleAvatarJoinedScene(UContextualAnimSceneActorComponent* SceneActorComponent)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnJoinedScene.Broadcast(SceneActorComponent);
	}
}

void UAbilityTask_PlayOpportunityAnimation::HandleAvatarLeftScene(UContextualAnimSceneActorComponent* SceneActorComponent)
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnLeftScene.Broadcast(SceneActorComponent);
	}
}

void UAbilityTask_PlayOpportunityAnimation::HandleSceneFailed()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnSceneFailed.Broadcast(nullptr);
	}
}
