// Ninja Bear Studio Inc., all rights reserved.
#include "AI/BehaviorTree/BTDecorator_CombatantDead.h"

#include "NinjaCombatFunctionLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "Interfaces/Components/CombatDamageManagerInterface.h"

UBTDecorator_CombatantDead::UBTDecorator_CombatantDead()
{
	const TSubclassOf<AActor> AllowedClass = AActor::StaticClass();
	CombatantKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, CombatantKey), AllowedClass);
	NodeName = "Combatant is Dead";
}

void UBTDecorator_CombatantDead::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
	
	const UBlackboardData* BBAsset = GetBlackboardAsset();
	if (ensure(BBAsset))
	{
		CombatantKey.ResolveSelectedKey(*BBAsset);
	}	
}

bool UBTDecorator_CombatantDead::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if (!IsValid(Blackboard))
	{
		return false;
	}
	
	const AActor* CombatantActor = Cast<AActor>(Blackboard->GetValueAsObject(CombatantKey.SelectedKeyName));
	if (!IsValid(CombatantActor))
	{
		return false;
	}
	
	const UActorComponent* DamageManager = UNinjaCombatFunctionLibrary::GetDamageManagerComponent(CombatantActor);
	if (!UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(DamageManager))
	{
		return false;
	}			

	const bool bIsDead = ICombatDamageManagerInterface::Execute_IsDead(DamageManager);
	return bIsDead ^ IsInversed();
}

FString UBTDecorator_CombatantDead::GetStaticDescription() const
{
	const FString NameDesc = CombatantKey.IsSet() ? CombatantKey.SelectedKeyName.ToString() : TEXT("invalid");
	return FString::Printf(TEXT("%s:\nCombatant %s is %s")
		, *Super::GetStaticDescription()
		, *NameDesc
		, IsInversed() ? TEXT("alive") : TEXT("dead"));
}
