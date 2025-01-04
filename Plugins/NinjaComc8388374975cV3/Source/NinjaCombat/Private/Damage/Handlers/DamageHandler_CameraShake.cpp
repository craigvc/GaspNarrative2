// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_CameraShake.h"

#include "NinjaCombatTags.h"
#include "Camera/CameraShakeBase.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

UDamageHandler_CameraShake::UDamageHandler_CameraShake()
{
	DefaultScale = 1.f;
	DefaultCameraShake.BlockedTags.AddTagFast(Tag_Combat_Effect_Damage_Recurring);
}

void UDamageHandler_CameraShake::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	const APawn* OwnerPawn = Cast<APawn>(DamageManager->GetOwner());
	if (!IsValid(OwnerPawn) || !OwnerPawn->IsPlayerControlled())
	{
		return;
	}
	
	APlayerController* PlayerController = Cast<APlayerController>(OwnerPawn->GetController());
	if (!IsValid(PlayerController))
	{
		return;
	}
	
	const TSubclassOf<UCameraShakeBase> CameraShake = GetCameraShake(Parameters);
	if (IsValid(CameraShake))
	{
		const float Scale = GetScale(Parameters);
		PlayerController->ClientStartCameraShake(CameraShake, Scale);
	}
}

TSubclassOf<UCameraShakeBase> UDamageHandler_CameraShake::GetCameraShake(const FGameplayCueParameters& Parameters) const
{
	FGameplayTagContainer Context = FGameplayTagContainer::EmptyContainer;
	CollectTagContext(Parameters, Context);
	
	if (!ContextualCameraShakes.IsEmpty())
	{
		for (const FCameraShakeDamageReaction& Reaction : ContextualCameraShakes)
		{
			if (Reaction.ContextTags.HasAnyExact(Context) && !Context.HasAny(Reaction.BlockedTags))
			{
				return Reaction.CameraShake;
			}
		}
	}

	if (DefaultCameraShake.ContextTags.HasAnyExact(Context) && !Context.HasAny(DefaultCameraShake.BlockedTags))
	{
		return DefaultCameraShake.CameraShake;
	}

	return nullptr;
}

float UDamageHandler_CameraShake::GetScale(const FGameplayCueParameters& Parameters) const
{
	if (!ContextualCameraShakes.IsEmpty())
	{
		FGameplayTagContainer Context = FGameplayTagContainer::EmptyContainer;
		CollectTagContext(Parameters, Context);

		for (const FCameraShakeDamageReaction& Reaction : ContextualCameraShakes)
		{
			if (Reaction.ContextTags.HasAnyExact(Context))
			{
				return Reaction.Scale;
			}
		}
	}

	return DefaultScale;
}

void UDamageHandler_CameraShake::CollectTagContext(const FGameplayCueParameters& Parameters, FGameplayTagContainer& OutContextTags) const
{
	FGameplayTagContainer TagFilter = FGameplayTagContainer::EmptyContainer;
	TagFilter.AddTag(Tag_Combat_Effect_Damage);
	TagFilter.AddTag(Tag_Combat_Effect_Debuff);
	
	const FGameplayTagContainer FilteredSourceTags = Parameters.AggregatedSourceTags.Filter(TagFilter);
	OutContextTags.AppendTags(FilteredSourceTags);

	const FGameplayTagContainer FilteredTargetTags = Parameters.AggregatedTargetTags.Filter(TagFilter);
	OutContextTags.AppendTags(FilteredTargetTags);
}
