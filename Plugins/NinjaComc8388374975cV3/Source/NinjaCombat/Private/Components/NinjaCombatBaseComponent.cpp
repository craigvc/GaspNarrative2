// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatBaseComponent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatSubsystem.h"
#include "TimerManager.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"

UNinjaCombatBaseComponent::UNinjaCombatBaseComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	bBindToAbilityComponent = false;
}

void UNinjaCombatBaseComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bBindToAbilityComponent)
	{
		BindToAbilitySystemComponent();
	}
}

void UNinjaCombatBaseComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);

	OnAbilitySystemComponentReset();
	AbilitySystemComponentPtr.Reset();

	Super::EndPlay(EndPlayReason);
}

bool UNinjaCombatBaseComponent::OwnerHasAuthority() const
{
	const AActor* OwnerActor = GetOwner();
	return IsValid(OwnerActor) && OwnerActor->HasAuthority();
}

bool UNinjaCombatBaseComponent::OwnerIsLocallyControlled() const
{
	const APawn* OwnerPawn = Cast<APawn>(GetOwner());
	return IsValid(OwnerPawn) && OwnerPawn->IsLocallyControlled();
}

bool UNinjaCombatBaseComponent::OwnerIsLocalPlayer() const
{
	const APawn* OwnerPawn = Cast<APawn>(GetOwner());
	return IsValid(OwnerPawn) && OwnerPawn->IsLocallyControlled() && OwnerPawn->IsPlayerControlled();
}

bool UNinjaCombatBaseComponent::HasGameplayTag(const FGameplayTag& TagToCheck) const
{
	const UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	return IsValid(AbilitySystemComponent) && AbilitySystemComponent->HasMatchingGameplayTag(TagToCheck);
}

UAbilitySystemComponent* UNinjaCombatBaseComponent::GetAbilitySystemComponentFromOwner() const
{
	return UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());
}

UAbilitySystemComponent* UNinjaCombatBaseComponent::GetCachedAbilitySystemComponent() const
{
	if (AbilitySystemComponentPtr.IsValid() && AbilitySystemComponentPtr->IsValidLowLevelFast())
	{
		return AbilitySystemComponentPtr.Get();
	}

	return nullptr;
}

void UNinjaCombatBaseComponent::SetAbilitySystemComponent(UAbilitySystemComponent* NewAbilitySystemComponent)
{
	const UAbilitySystemComponent* AbilitySystemComponent = GetCachedAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent))
	{
		OnAbilitySystemComponentReset();
		AbilitySystemComponentPtr.Reset();
	}

	AbilitySystemComponentPtr = NewAbilitySystemComponent;
	OnAbilitySystemComponentReceived();
}

void UNinjaCombatBaseComponent::BindToAbilitySystemComponent()
{
	const APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn->HasAuthority() || OwnerPawn->IsLocallyControlled())
	{
		UAbilitySystemComponent* OwnerAbilitySystemComponent = GetAbilitySystemComponentFromOwner();
		if (IsValid(OwnerAbilitySystemComponent))
		{
			AbilitySystemComponentPtr = OwnerAbilitySystemComponent;
			OnAbilitySystemComponentReceived();
		}
		else
		{
			// Try again on next tick. It may not have been replicated yet.
			GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::BindToAbilitySystemComponent);
		}
	}	
}

void UNinjaCombatBaseComponent::OnAbilitySystemComponentReceived()
{
}

void UNinjaCombatBaseComponent::OnAbilitySystemComponentReset()
{
}

float UNinjaCombatBaseComponent::Roll(const float Min, const float Max) const
{
	const UNinjaCombatSubsystem* CombatSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UNinjaCombatSubsystem>();
	check(IsValid(CombatSubsystem));
	return CombatSubsystem->GetRandomFloatInRange(Min, Max);	
}
