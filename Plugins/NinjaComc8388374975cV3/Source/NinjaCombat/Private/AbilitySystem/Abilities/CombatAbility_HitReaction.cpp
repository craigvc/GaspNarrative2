// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_HitReaction.h"

#include "AbilitySystemComponent.h"
#include "AIController.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatTags.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"

UCombatAbility_HitReaction::UCombatAbility_HitReaction(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UAnimationProvider_HitReaction>(AnimationProviderName)
		.DoNotCreateDefaultSubobject(WarpTargetProviderName))
{
	bRetriggerInstancedAbility = true;
	bRotateToSource = true;
	bMatchAnimationEnd = true;
	bEnableMotionWarping = false;
	WarpTargetProvider = nullptr;
	
	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_HitReaction);
	SetInitialTags(InitialTags);

	ActivationBlockedTags.AddTag(Tag_Combat_State_Dead);

	// Tags used for the context filter. We only care about "damage" details.
	//
	InstigatorTagsFilter.AddTag(Tag_Combat_Effect_Damage);
	
	// Hit Reactions won't be activated if the character is attacking or evading. 
	// The Avatar will only be interrupted if staggered (poise is depleted).
	//
	// Obviously, you can change that behavior my modifying these tags to properly
	// suit your game design. For example, maybe you want hit reactions to always trigger.
	//
	ActivationBlockedTags.AddTag(Tag_Combat_Ability_Attack);
	ActivationBlockedTags.AddTag(Tag_Combat_Ability_Evade);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Opportunity_Attacker);
	ActivationBlockedTags.AddTag(Tag_Combat_State_Opportunity_Victim);

	// Even if the ability activates, there might still be cases where a reaction should
	// not trigger, such as recurring damage. For those cases, the damage effect can be
	// tagged with any of these tags, and the hit reaction will be ignored.
	//
	IgnoredDamageFilter.AddTag(Tag_Combat_Effect_Damage_Recurring);
	
	// This ability activates via a trigger (Gameplay Event). This means it must be
	// assigned to the avatar as default, and it will just sit there waiting for the
	// appropriate event.
	//
	FAbilityTriggerData HitTrigger;
	HitTrigger.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	HitTrigger.TriggerTag = Tag_Combat_Event_Damage_Received;
	AbilityTriggers.Add(HitTrigger);
}

void UCombatAbility_HitReaction::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	ExecuteBlueprintActivation(TriggerEventData);
	
	// The ability can only be activated by a Gameplay Event.
	//
	if (TriggerEventData == nullptr)
	{
		K2_CancelAbility();
	}
	
	// Watch the appropriate event (Damage.Received).
	//
	// In this structure, subclasses can simply watch for their own events.
	// At this point "TriggerEventData" is guaranteed to be valid.
	//
	if (TriggerEventData->EventTag == Tag_Combat_Event_Damage_Received)
	{
		ExecuteHitReaction(*TriggerEventData);
	}
}

bool UCombatAbility_HitReaction::GetHitResult(const FGameplayEventData& TriggerEventData, FHitResult& OutHitResult)
{
	const FHitResult* HitResult = TriggerEventData.ContextHandle.GetHitResult();
	if (HitResult != nullptr)
	{
		OutHitResult = *HitResult;
		return true;
	}

	return false;
}

void UCombatAbility_HitReaction::ExecuteHitReaction_Implementation(const FGameplayEventData& TriggerEventData)
{
	CollectContext(TriggerEventData);

	// Check if the collected context has any of the ignored tags in the filter.
	//
	// Also, can still have cost to this ability. Particularly useful if you want to
	// configure a cooldown to Hit Reactions, so they won't be triggered constantly.
	//
	if (AnimationContext.HasAnyExact(IgnoredDamageFilter) || !K2_CommitAbility())
	{
		COMBAT_LOG_ARGS(Verbose, "Interrupting Hit Reaction for context: %s.", *AnimationContext.ToStringSimple())
		K2_CancelAbility();
	}
	else
	{
		COMBAT_LOG_ARGS(Verbose, "Playing Hit Reaction for context: %s.", *AnimationContext.ToStringSimple())
		PlayAnimationMontage();
		RotateToInstigator(TriggerEventData);	
	}
}

void UCombatAbility_HitReaction::RotateToInstigator_Implementation(const FGameplayEventData& TriggerEventData)
{
	if (!bRotateToSource)
	{
		return;
	}
	
	const AActor* DamageInstigator = TriggerEventData.Instigator;
	ACharacter* AvatarCharacter = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!IsValid(DamageInstigator) || !IsValid(AvatarCharacter))
	{
		return;
	}

	const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(AvatarCharacter->GetActorLocation(), DamageInstigator->GetActorLocation());
	
	AController* AvatarController = AvatarCharacter->GetController();
	const UCharacterMovementComponent* Movement = AvatarCharacter->GetCharacterMovement();

	if (IsValid(AvatarController) && IsValid(Movement) && (Movement->bUseControllerDesiredRotation || AvatarController->IsA<AAIController>()))
	{
		AvatarController->SetControlRotation(LookAtRotation);	
	}
	else
	{
		AvatarCharacter->SetActorRotation(LookAtRotation);
	}
}
