// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/Abilities/CombatAbility_Stagger.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatTags.h"

UCombatAbility_Stagger::UCombatAbility_Stagger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FGameplayTagContainer InitialTags;
	InitialTags.AddTagFast(Tag_Combat_Ability_Stagger);
	SetInitialTags(InitialTags);

	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Attack);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Cast);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Combo);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Evade);
	CancelAbilitiesWithTag.AddTag(Tag_Combat_Ability_Opportunity);

	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Attack);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Cast);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Combo);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Evade);
	BlockAbilitiesWithTag.AddTag(Tag_Combat_Ability_Opportunity);
	
	FAbilityTriggerData& StaggerTrigger = AbilityTriggers.AddDefaulted_GetRef();
	StaggerTrigger.TriggerSource = EGameplayAbilityTriggerSource::OwnedTagAdded;
	StaggerTrigger.TriggerTag = Tag_Combat_State_Staggered;
}

void UCombatAbility_Stagger::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo_Ensured();
	StaggerTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_Staggered, EGameplayTagEventType::NewOrRemoved)
		.AddUObject(this, &ThisClass::HandleTagChanged);

	static constexpr bool bIsStaggered = true;
	HandleStagger(bIsStaggered);
}

void UCombatAbility_Stagger::HandleTagChanged(const FGameplayTag GameplayTag, const int TagCount)
{
	if (GameplayTag == Tag_Combat_State_Staggered && TagCount == 0)
	{
		static constexpr bool bIsStaggered = false;
		HandleStagger(bIsStaggered);
		K2_EndAbility();
	}
}

void UCombatAbility_Stagger::HandleStagger_Implementation(bool bStaggered)
{
	// Nothing by default.
}
