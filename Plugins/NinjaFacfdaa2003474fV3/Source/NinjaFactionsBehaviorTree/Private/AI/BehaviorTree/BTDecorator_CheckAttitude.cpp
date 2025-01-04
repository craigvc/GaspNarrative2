// Ninja Bear Studio Inc., all rights reserved.
#include "AI/BehaviorTree/BTDecorator_CheckAttitude.h"

#include "GenericTeamAgentInterface.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"

UBTDecorator_CheckAttitude::UBTDecorator_CheckAttitude(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = TEXT("Check Attitude");
	AttitudeTest = ETeamAttitude::Hostile;
	
	UEnum* AttitudeEnum = StaticEnum<ETeamAttitude::Type>();
	AttitudeKey.AddEnumFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, AttitudeKey), AttitudeEnum);
}

void UBTDecorator_CheckAttitude::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);
	
	const TObjectPtr<UBlackboardData> BBAsset = GetBlackboardAsset();
	if (ensure(IsValid(BBAsset)))
	{
		AttitudeKey.ResolveSelectedKey(*BBAsset);
	}
}

bool UBTDecorator_CheckAttitude::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();
	const TEnumAsByte Attitude = static_cast<ETeamAttitude::Type>(MyBlackboard->GetValueAsEnum(AttitudeKey.SelectedKeyName));
	const bool bResult = Attitude == AttitudeTest;
	return bResult ^ IsInversed();
}
