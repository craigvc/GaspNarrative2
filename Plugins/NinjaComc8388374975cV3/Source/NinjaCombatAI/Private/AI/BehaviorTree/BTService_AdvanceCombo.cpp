// Ninja Bear Studio Inc., all rights reserved.
#include "AI/BehaviorTree/BTService_AdvanceCombo.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "AIController.h"
#include "InputAction.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatTags.h"
#include "BehaviorTree/BlackboardData.h"
#include "Interfaces/Components/CombatComboManagerInterface.h"

UBTService_AdvanceCombo::UBTService_AdvanceCombo()
{
	bNotifyBecomeRelevant = true;
	bNotifyTick = false;
	bNotifyCeaseRelevant = true;

	EventMode = ECombatComboEventMode::GameplayTag;
	DefaultInputAction = nullptr;
	DefaultGameplayTag = FGameplayTag::EmptyTag;
}

uint16 UBTService_AdvanceCombo::GetInstanceMemorySize() const
{
	return sizeof(FAdvanceComboServiceMemory);
}

void UBTService_AdvanceCombo::InitializeMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, const EBTMemoryInit::Type InitType) const
{
	Super::InitializeMemory(OwnerComp, NodeMemory, InitType);

	FAdvanceComboServiceMemory* Memory = CastInstanceNodeMemory<FAdvanceComboServiceMemory>(NodeMemory);
	Memory->ComboManager.Reset();
}

void UBTService_AdvanceCombo::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	const AAIController* Owner = Cast<AAIController>(OwnerComp.GetOwner());
	const APawn* Bot = IsValid(Owner) ? Owner->GetPawn() : nullptr;
	
	UActorComponent* ComboManager = UNinjaCombatFunctionLibrary::GetComboManagerComponent(Bot);
	if (IsValid(ComboManager))
	{
		FAdvanceComboServiceMemory* Memory = CastInstanceNodeMemory<FAdvanceComboServiceMemory>(NodeMemory);
		Memory->ComboManager = ComboManager;
		
		FComboWindowChangedDelegate Delegate;
		Delegate.BindDynamic(this, &ThisClass::HandleComboWindowChanged);
		ICombatComboManagerInterface::Execute_BindToComboWindowChangedDelegate(ComboManager, Delegate);
	}
}

void UBTService_AdvanceCombo::OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnCeaseRelevant(OwnerComp, NodeMemory);

	FAdvanceComboServiceMemory* Memory = reinterpret_cast<FAdvanceComboServiceMemory*>(NodeMemory);
	if (Memory && Memory->ComboManager.IsValid() && Memory->ComboManager->IsValidLowLevelFast())
	{
		UActorComponent* ComboManager = Memory->ComboManager.Get();
		ICombatComboManagerInterface::Execute_UnbindFromComboFinishedDelegate(ComboManager, this);
		Memory->ComboManager.Reset();
	}
}

void UBTService_AdvanceCombo::HandleComboWindowChanged_Implementation(UActorComponent* ComboManager, const bool bInComboWindow)
{
	if (!CheckComboManager(ComboManager))
	{
		// The Provided Combo Manager does not match the one for this Node instance.
		// This can normally happen when multiple service instances are running.
		return;
	}
	
	if (bInComboWindow)
	{
		const AActor* Owner = ComboManager->GetOwner();
		switch (EventMode)
		{
			// We are forwarding Gameplay Tags as events. So all we need is a valid Gameplay Tag
			// that can be used as an Event by the Ability System Component. The optional object
			// (in this case, an Input Action) is irrelevant. An empty tag aborts the event.
			//
			case ECombatComboEventMode::GameplayTag:
			{
				const FGameplayTag EventTag = GetComboGameplayTag(Owner);
				SendGameplayEvent(Owner, EventTag, nullptr);
				break;
			}
			// We are using the default Combo Event Tag, sending the Input Action as the optional
			// object, which will be used by the Combo Ability to determine the correct Event Tag.
			// However, if we don't have a valid Input Action, then we'll abort the event (empty tag).
			//
			case ECombatComboEventMode::InputAction:
			{
				const UInputAction* InputAction = GetComboInputAction(Owner);
				const FGameplayTag EventTag = IsValid(InputAction) ? Tag_Combat_Event_Combo_Attack : FGameplayTag::EmptyTag;
				SendGameplayEvent(Owner, EventTag, InputAction);
				break;
			}
		}
	}
}

UBehaviorTreeComponent* UBTService_AdvanceCombo::GetBehaviorTreeComponent(const UActorComponent* ComboManager) const
{
	const APawn* Bot = Cast<APawn>(ComboManager->GetOwner());
	if (!IsValid(Bot))
	{
		return nullptr;
	}

	const AAIController* AIController = Cast<AAIController>(Bot->GetController());
	if (!IsValid(AIController))
	{
		return nullptr;
	}

	return Cast<UBehaviorTreeComponent>(AIController->GetBrainComponent());
}

bool UBTService_AdvanceCombo::CheckComboManager(const UActorComponent* ComboManager) const
{
	const UBehaviorTreeComponent* BehaviorComponent = GetBehaviorTreeComponent(ComboManager);
	if (!IsValid(BehaviorComponent))
	{
		return false;
	}
	
	const FAdvanceComboServiceMemory* Memory = GetNodeMemory<FAdvanceComboServiceMemory>(BehaviorComponent->FindInstanceContainingNode(this));
	if (!Memory || !Memory->ComboManager.IsValid() || Memory->ComboManager->IsValidLowLevelFast())
	{
		return false;
	}

	const UActorComponent* MyComboManager = Memory->ComboManager.Get();
	return IsValid(MyComboManager) && MyComboManager == ComboManager;
}

void UBTService_AdvanceCombo::SendGameplayEvent(const AActor* AbilityOwner, const FGameplayTag EventTag, const UObject* OptionalObject)
{
	if (!EventTag.IsValid())
	{
		return;
	}

	UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(AbilityOwner);
	if (IsValid(AbilityComponent))
	{
		FGameplayEventData Payload;
		Payload.EventTag = EventTag;
		Payload.Instigator = AbilityOwner;
		Payload.Target = AbilityOwner;
		Payload.OptionalObject = OptionalObject;

		AbilityComponent->HandleGameplayEvent(EventTag, &Payload);
	}
}

const UInputAction* UBTService_AdvanceCombo::GetComboInputAction_Implementation(const AActor* Owner) const
{
	return DefaultInputAction;
}

FGameplayTag UBTService_AdvanceCombo::GetComboGameplayTag_Implementation(const AActor* Owner) const
{
	return DefaultGameplayTag;
}
