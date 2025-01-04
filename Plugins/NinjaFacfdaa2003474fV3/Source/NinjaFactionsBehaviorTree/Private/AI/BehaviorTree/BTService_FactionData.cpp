// Ninja Bear Studio Inc., all rights reserved.
#include "AI/BehaviorTree/BTService_FactionData.h"

#include "GenericTeamAgentInterface.h"
#include "NinjaFactionFunctionLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"
#include "Components/NinjaFactionComponent.h"
#include "GameFramework/Controller.h"

UBTService_FactionData::UBTService_FactionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = TEXT("Faction Data");
	bNotifyTick = true;
	Interval = 0.5;
	
	FactionMemberKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, FactionMemberKey), AActor::StaticClass());
	TeamIdKey.AddIntFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, TeamIdKey));
	FactionTagKey.AddNameFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, FactionTagKey));

	UEnum* AttitudeEnum = StaticEnum<ETeamAttitude::Type>();
	AttitudeTowardsAgentKey.AddEnumFilter(this, GET_MEMBER_NAME_CHECKED(ThisClass, AttitudeTowardsAgentKey), AttitudeEnum);
}

void UBTService_FactionData::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	const TObjectPtr<UBlackboardData> BBAsset = GetBlackboardAsset();
	if (ensure(IsValid(BBAsset)))
	{
		FactionMemberKey.ResolveSelectedKey(*BBAsset);
		TeamIdKey.ResolveSelectedKey(*BBAsset);
		FactionTagKey.ResolveSelectedKey(*BBAsset);
		AttitudeTowardsAgentKey.ResolveSelectedKey(*BBAsset);
	}
}

void UBTService_FactionData::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	bool bSolved = false;
	
	UBlackboardComponent* MyBlackboard = OwnerComp.GetBlackboardComponent();

	const AController* ContextOwner = Cast<AController>(OwnerComp.GetOwner());
	const AActor* FactionMember = Cast<AActor>(MyBlackboard->GetValueAsObject(FactionMemberKey.SelectedKeyName));

	if (IsValid(FactionMember) && IsValid(ContextOwner))
	{
		const UNinjaFactionComponent* FactionComponent = UNinjaFactionFunctionLibrary::GetFactionComponent(FactionMember);
		FFactionMembership MainMembership;
		TEnumAsByte<ETeamAttitude::Type> Attitude;
		
		if (IsValid(FactionComponent)
			&& FactionComponent->GetMainFactionMembership(MainMembership)
			&& UNinjaFactionFunctionLibrary::GetAttitude(ContextOwner, FactionMember, Attitude))
		{
			const FGameplayTag FactionTag = MainMembership.GetFactionTag();
			const uint8 TeamId = MainMembership.GetGenericTeamId().GetId();

			MyBlackboard->SetValueAsInt(TeamIdKey.SelectedKeyName, TeamId);
			MyBlackboard->SetValueAsName(FactionTagKey.SelectedKeyName, FactionTag.GetTagName());
			MyBlackboard->SetValueAsEnum(AttitudeTowardsAgentKey.SelectedKeyName, Attitude);
			bSolved = true;
		}
	}

	if (!bSolved)
	{
		MyBlackboard->ClearValue(TeamIdKey.SelectedKeyName);
		MyBlackboard->ClearValue(FactionTagKey.SelectedKeyName);
		MyBlackboard->ClearValue(AttitudeTowardsAgentKey.SelectedKeyName);
	}	
}
