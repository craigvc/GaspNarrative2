// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatComboManagerComponent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatTags.h"
#include "StateTree.h"
#include "StateTreeExecutionContext.h"
#include "TimerManager.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"

#if ENGINE_MINOR_VERSION > 3
#include "AbilitySystem/Combo/NinjaCombatComboComponentSchema.h"
#endif

UNinjaCombatComboManagerComponent::UNinjaCombatComboManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bStartLogicAutomatically = false;
	bInComboWindow = false;
	bUpdateOnEveryTarget = false;
	ComboCount = 0;
	ComboCountOnAdvance = INDEX_NONE;
	SetIsReplicatedByDefault(true);
}

void UNinjaCombatComboManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ComboCount);
	DOREPLIFETIME(ThisClass, TargetCount);
	
	DOREPLIFETIME_CONDITION(ThisClass, bInComboWindow, COND_SkipOwner);
}

void UNinjaCombatComboManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	BindToAbilitySystemComponent();
	OnStateTreeRunStatusChanged.AddUniqueDynamic(this, &ThisClass::HandleTreeStatusChanged);
}

void UNinjaCombatComboManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnbindFromAbilitySystemComponent();
	OnStateTreeRunStatusChanged.RemoveAll(this);
	Super::EndPlay(EndPlayReason);
}

void UNinjaCombatComboManagerComponent::OpenComboWindow_Implementation()
{
	if (!bInComboWindow)
	{
		const APawn* OwnerPawn = Cast<APawn>(GetOwner());
		if (GetOwner()->HasAuthority() || (OwnerPawn && OwnerPawn->IsLocallyControlled()))
		{
			const bool bWasInComboWindow = bInComboWindow;
			bInComboWindow = true;
			OnRep_InComboWindow(bWasInComboWindow);
		}
	}
}

void UNinjaCombatComboManagerComponent::CloseComboWindow_Implementation()
{
	if (bInComboWindow)
	{
		if (HasAuthorityOrIsLocallyControlled())
		{
			const bool bWasInComboWindow = bInComboWindow;
			bInComboWindow = false;
			OnRep_InComboWindow(bWasInComboWindow);
		}
	}
}

void UNinjaCombatComboManagerComponent::SetComboCount_Implementation(const int32 NewComboCount)
{
	if (NewComboCount >= 0)
	{
		ComboCount = NewComboCount;	
	}
}

void UNinjaCombatComboManagerComponent::StartCombo_Implementation(UStateTree* NewComboTree)
{
	check(IsValid(NewComboTree));

	Execute_ResetCombo(this);
	StateTreeRef.SetStateTree(NewComboTree);
	StartLogic();
}

void UNinjaCombatComboManagerComponent::AdvanceCombo_Implementation(const FGameplayTag ComboEventTag)
{
	if (ComboEventTag.IsValid() && ComboCount != ComboCountOnAdvance)
	{
		COMBAT_LOG_ARGS(Verbose, "Advancing combo from event '%s'.", *ComboEventTag.ToString());

		SendStateTreeEvent(ComboEventTag);
		Execute_CloseComboWindow(this);
		ComboCountOnAdvance = ComboCount;
	}
}

void UNinjaCombatComboManagerComponent::RegisterTargetFromCurrentAttack_Implementation(const AActor* Target)
{
	// This value should be updated if the manager is configured to update on every
	// target, OR if it is not, and the current value is zero, so it has to change to 1.
	//
	const bool bShouldUpdate = bUpdateOnEveryTarget || TargetCount == 0;
	
	if (IsValid(Target) && HasAuthorityOrIsLocallyControlled() && bShouldUpdate)
	{
		TargetCount++;
		OnRep_TargetCount();
	}
}

void UNinjaCombatComboManagerComponent::ResetTargetCount_Implementation()
{
	if (TargetCount > 0 && HasAuthorityOrIsLocallyControlled())
	{
		TargetCount = 0;
		OnRep_TargetCount();
	}
}

void UNinjaCombatComboManagerComponent::ResetCombo_Implementation()
{
	if (IsRunning())
	{
		const static FString Reason = TEXT("Resetting the Combo.");
		StopLogic(Reason);
	}

	bInComboWindow = false;
	ComboCount = 0;
	ComboCountOnAdvance = INDEX_NONE;
	TargetCount = 0;
}

bool UNinjaCombatComboManagerComponent::InComboWindow_Implementation() const
{
	if (bInComboWindow)
	{
		return true;
	}

	const UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());
	return IsValid(AbilitySystemComponent) && AbilitySystemComponent->HasMatchingGameplayTag(Tag_Combat_State_ComboWindow);
}

void UNinjaCombatComboManagerComponent::HandleTreeStatusChanged(const EStateTreeRunStatus StateTreeRunStatus)
{
	if (IsFinished(StateTreeRunStatus))
	{
		const bool bSucceeded = StateTreeRunStatus == EStateTreeRunStatus::Succeeded;
		OnComboFinished.Broadcast(this, bSucceeded);	
		Execute_ResetCombo(this);
	}
}

bool UNinjaCombatComboManagerComponent::HasAuthorityOrIsLocallyControlled() const
{
	const APawn* OwnerPawn = Cast<APawn>(GetOwner());
	return OwnerPawn->HasAuthority() || OwnerPawn->IsLocallyControlled();
}

void UNinjaCombatComboManagerComponent::BindToAbilitySystemComponent()
{
	if (HasAuthorityOrIsLocallyControlled())
	{
		UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());
		if (IsValid(AbilitySystemComponent))
		{
			ComboWindowTagHandle = AbilitySystemComponent->RegisterGameplayTagEvent(Tag_Combat_State_ComboWindow, EGameplayTagEventType::NewOrRemoved)
				.AddUObject(this, &ThisClass::HandleTagChanged);			
		}
		else
		{
			// Try again on next tick. It may not have been replicated yet.
			GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::BindToAbilitySystemComponent);
		}
	}
}

void UNinjaCombatComboManagerComponent::UnbindFromAbilitySystemComponent()
{
	UAbilitySystemComponent* AbilitySystemComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());
	if (IsValid(AbilitySystemComponent))
	{
		if (ComboWindowTagHandle.IsValid())
		{
			AbilitySystemComponent->UnregisterGameplayTagEvent(ComboWindowTagHandle, Tag_Combat_State_ComboWindow, EGameplayTagEventType::NewOrRemoved);
			ComboWindowTagHandle.Reset();			
		}
	}
}

void UNinjaCombatComboManagerComponent::HandleTagChanged(const FGameplayTag CallbackTag, const int32 NewCount)
{
	if (CallbackTag == Tag_Combat_State_ComboWindow)
	{
		if (NewCount > 0)
		{
			Execute_OpenComboWindow(this);
		}
		else
		{
			Execute_CloseComboWindow(this);
		}
	}	
}

bool UNinjaCombatComboManagerComponent::IsFinished(const EStateTreeRunStatus& StateTreeRunStatus)
{
	return StateTreeRunStatus == EStateTreeRunStatus::Failed || StateTreeRunStatus == EStateTreeRunStatus::Succeeded;
}

void UNinjaCombatComboManagerComponent::OnRep_InComboWindow_Implementation(bool bWasInComboWindow)
{
	const FString ComboWindowState = bInComboWindow ? TEXT("open") : TEXT("closed");
	COMBAT_LOG_ARGS(Verbose, "Combo window is %s.", *ComboWindowState);
	OnComboWindowChanged.Broadcast(this, bInComboWindow);
}

void UNinjaCombatComboManagerComponent::OnRep_TargetCount_Implementation()
{
	COMBAT_LOG_ARGS(Verbose, "Target count is %d.", TargetCount);
	OnTargetCountChanged.Broadcast(this, TargetCount);
}

void UNinjaCombatComboManagerComponent::OnRep_ComboCount_Implementation()
{
	COMBAT_LOG_ARGS(Verbose, "Combo count is %d.", ComboCount);
	OnComboCountChanged.Broadcast(this, ComboCount);
}

#if ENGINE_MINOR_VERSION > 3
TSubclassOf<UStateTreeSchema> UNinjaCombatComboManagerComponent::GetSchema() const
{
	return UNinjaCombatComboComponentSchema::StaticClass();
}

bool UNinjaCombatComboManagerComponent::CollectExternalData(const FStateTreeExecutionContext& Context, const UStateTree* StateTree,
	const TArrayView<const FStateTreeExternalDataDesc> Data, const TArrayView<FStateTreeDataView> OutDataViews) const
{
	return UNinjaCombatComboComponentSchema::CollectExternalData(Context, StateTree, Data, OutDataViews);
}

bool UNinjaCombatComboManagerComponent::SetContextRequirements(FStateTreeExecutionContext& Context, const bool bLogErrors)
{
	Context.SetCollectExternalDataCallback(FOnCollectStateTreeExternalData::CreateUObject(this, &UNinjaCombatComboManagerComponent::CollectExternalData));
	return UNinjaCombatComboComponentSchema::SetContextRequirements(*this, Context, bLogErrors);
}
#endif

void UNinjaCombatComboManagerComponent::BindToComboWindowChangedDelegate_Implementation(const FComboWindowChangedDelegate& Delegate)
{
	OnComboWindowChanged.AddUnique(Delegate);
}

void UNinjaCombatComboManagerComponent::BindToTargetCountChangedDelegate_Implementation(const FComboTargetCountChangedDelegate& Delegate)
{
	OnTargetCountChanged.AddUnique(Delegate);
}

void UNinjaCombatComboManagerComponent::BindToComboCountChangedDelegate_Implementation(const FComboCountChangedDelegate& Delegate)
{
	OnComboCountChanged.AddUnique(Delegate);
}

void UNinjaCombatComboManagerComponent::BindToComboFinishedDelegate_Implementation(const FComboFinishedDelegate& Delegate)
{
	OnComboFinished.AddUnique(Delegate);
}

void UNinjaCombatComboManagerComponent::UnbindFromComboWindowChangedDelegate_Implementation(const UObject* Source)
{
	OnComboWindowChanged.RemoveAll(Source);
}

void UNinjaCombatComboManagerComponent::UnbindFromComboTargetCountDelegate_Implementation(const UObject* Source)
{
	OnTargetCountChanged.RemoveAll(Source);
}

void UNinjaCombatComboManagerComponent::UnbindFromComboCountChangedDelegate_Implementation(const UObject* Source)
{
	OnComboCountChanged.RemoveAll(Source);
}

void UNinjaCombatComboManagerComponent::UnbindFromComboFinishedDelegate_Implementation(const UObject* Source)
{
	OnComboFinished.RemoveAll(Source);
}