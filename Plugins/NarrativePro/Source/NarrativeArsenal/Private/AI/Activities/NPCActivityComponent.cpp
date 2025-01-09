// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCActivityComponent.h"
#include "AI/Activities/NPCActivitySchedule.h"
#include "AI/Activities/ActivityGroup.h"
#include "AI/Activities/NPCGoalGenerator.h"
#include <Serialization/ObjectAndNameAsStringProxyArchive.h>
#include <Serialization/MemoryReader.h>
#include <Serialization/MemoryWriter.h>
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "VisualLogger/VisualLogger.h"
#include "AI/Activities/NPCActivityConfiguration.h"
#include "ArsenalStatics.h"
#include "Settlements/SettlementSubsystem.h"
#include "Settlements/Activities/SettlementActivityComponent.h"

// CVars
namespace ActivityComponentCVars
{
	static int32 EnableScheduledGoals = 1;
	FAutoConsoleVariableRef CVarNetEnableMoveCombining(
		TEXT("ac.EnableScheduledGoals"),
		EnableScheduledGoals,
		TEXT("Whether NPC Activity Components will add scheduled goals. This will not remove already created scheduled goals.\n")
		TEXT("0: Disable, 1: Enable"),
		ECVF_Default);

}

// Sets default values for this component's properties
UNPCActivityComponent::UNPCActivityComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetAutoActivate(true);
}

void UNPCActivityComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerController = CastChecked<ANarrativeNPCController>(GetOwner());
}

void UNPCActivityComponent::Activate(bool bReset)
{
	Super::Activate(bReset);

	PerformActivitySelection();
}

void UNPCActivityComponent::Deactivate()
{
	Super::Deactivate();

	if (CurrentActivity)
	{
		StopCurrentActivity();
	}
}

#if ENABLE_VISUAL_LOG

void UNPCActivityComponent::DescribeSelfToVisLog(struct FVisualLogEntry* Snapshot) const
{
	FVisualLogStatusCategory Category;
	Category.Category = "Activity Component";
	//Category.Category = FString::Printf(TEXT("Activity Component (Current Activity: %s)"), *GetNameSafe(CurrentActivity));

	for (auto& GoalKVP : Goals)
	{
		for (auto& Goal : GoalKVP.Value.Goals)
		{
			Category.Add(GetNameSafe(GoalKVP.Key), Goal->GetDebugString());
		}
	}

	if (Snapshot)
	{
		Snapshot->Status.Add(Category);
	}
}

#endif 

#if WITH_GAMEPLAY_DEBUGGER

void UNPCActivityComponent::DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const
{
	if (DebuggerCategory)
	{
		UWorld* World = GetWorld();

		if (!World)
		{
			return;
		}

		ANarrativeGameState* GS = Cast<ANarrativeGameState>(World->GetGameState());

		if (!GS)
		{
			return;
		}

		const float TOD = GS->GetTimeOfDay();

		DebuggerCategory->AddTextLine(FString::Printf(TEXT("Time of day: %f. Day advance speed: %f"), TOD, GS->GetTimeOfDayAdvanceSpeed()));

		DebuggerCategory->AddTextLine(FString::Printf(TEXT("Current Activity: %s acting on goal: %s"), *GetNameSafe(CurrentActivity), *GetNameSafe(CurrentActivity ? CurrentActivity->ActivityGoal : nullptr)));

		FString Generators = FString::Printf(TEXT("Goal Generators Added: %d | "), GoalGenerators.Num());

		for (auto& GoalGen : GoalGenerators)
		{
			if (GoalGen)
			{
				Generators += FString::Printf(TEXT("%s | "), *GetNameSafe(GoalGen));
			}
		}

		DebuggerCategory->AddTextLine(Generators);

		FString ActivityGroupStr = FString::Printf(TEXT("ActivityGroups Added: %d | "), ActivityGroups.Num());

		for (auto& Group : ActivityGroups)
		{
			if (Group)
			{
				ActivityGroupStr += FString::Printf(TEXT("%s | "), *GetNameSafe(Group));
			}
		}

		DebuggerCategory->AddTextLine(ActivityGroupStr);

		if (ActiveScheduledActivites.Num())
		{
			DebuggerCategory->AddTextLine(FString::Printf(TEXT("Scheduled Tasks: %d"), ActiveScheduledActivites.Num()));

			for (auto& SA : ActiveScheduledActivites)
			{
				if (SA)
				{
					if (UArsenalStatics::IsTimeInRange(TOD, SA->StartTime, SA->EndTime))
					{
						DebuggerCategory->AddTextLine(FString::Printf(TEXT("    {green} %.0f-%.0f: %s"), SA->StartTime, SA->EndTime, *SA->DescribeBehavior()));
					}
					else
					{
						DebuggerCategory->AddTextLine(FString::Printf(TEXT("    %.0f-%.0f: %s"), SA->StartTime, SA->EndTime, *SA->DescribeBehavior()));
					}
				}
			}
		}

		//List our owning settements schedule also 
		if (OwnerController)
		{
			if (ANarrativeNPCCharacter* NPCChar = OwnerController->GetControlledNPC())
			{
				if (NPCChar->GetOwningSettlement().IsValid())
				{
					if (USettlementSubsystem* SettlementSub = GetWorld()->GetSubsystem<USettlementSubsystem>())
					{
						if (ASettlement* Settlement = SettlementSub->GetSettlement(NPCChar->GetOwningSettlement()))
						{
							if (USettlementActivityComponent* SettlementAC = Settlement->SettlementActivityManager)
							{
								SettlementAC->DescribeSelfToGameplayDebugger(DebuggerCategory);
							}
						}
					}
				}
			}
		}

		for (auto& GoalKVP : Goals)
		{
			if (GoalKVP.Value.Goals.Num())
			{
				DebuggerCategory->AddTextLine(FString::Printf(TEXT("Goal Container %s:"), *GetNameSafe(GoalKVP.Key)));

				for (auto& Goal : GoalKVP.Value.Goals)
				{
					if (Goal)
					{
						if (CurrentActivity && Goal == CurrentActivity->ActivityGoal)
						{
							DebuggerCategory->AddTextLine(FString::Printf(TEXT("{yellow}   %s | Score %f"), *Goal->GetDebugString(), Goal->GetGoalScore()));
						}
						else
						{
							DebuggerCategory->AddTextLine(FString::Printf(TEXT("   %s | Score %f"), *Goal->GetDebugString(), Goal->GetGoalScore()));
						}
					}
				}
			}
		}
	}
}

#endif 

bool UNPCActivityComponent::PerformActivitySelection(bool bCheckNew)
{
	if (!IsActive())
	{
		return false;
	}

	FString FailReason; 

	/**Check what activity we need to run. Fall back to Fallback activity if we don't have a valid one we can use. 
	
	ActivityGroups hold activities and have preconditions about whether we can run the activity group. This allows us to easily early out
	on a bunch of activities. For example the Attack Activity Group may have many attacks activities in it, but we won't check any of them if we 
	dont have a valid attack target. 

	We ask all groups for valid activities we can run. These activities can also provide a goal item for them to act on. For example, 
	an Attack Activity might be valid, because we have an Attack Goal. We'll ask the Attack Goal for its best attack target, and we'll
	feed that into the activity. For example RunActivity(AttackActivity, BestAttackTarget)

	Activities have a GoalClass variable that we use to see which activity maps to which goal - we use that to find the goal items. 
	*/
	if (CurrentActivity && CurrentActivity->ActivityGoal)
	{
		UNPCGoalItem* OldBestItem = CurrentActivity->ActivityGoal;
		UNPCGoalItem* BestItem = nullptr;
		TArray<UNPCGoalItem*> InvalidGoals;
		const float CurrentScore = CurrentActivity->ScoreActivity(GetGoals(CurrentActivity->SupportedGoalType), BestItem, InvalidGoals);

		for (auto& InvalidGoal : InvalidGoals)
		{
			if (InvalidGoal)
			{
				RemoveGoal(InvalidGoal);
			}
		}

		//If we have an activity scoring above 0 and its goal hasn't changed, we're fine to continue on 
		if (CurrentActivity && CurrentScore > 0.f && !bCheckNew) 
		{
			return false;
		}
	}

	TArray<UNPCActivity*> ValidActivities;
	
	for (auto& Group : ActivityGroups)
	{
		if (Group)
		{
			Group->GetActivitesInGroup(ValidActivities);
		}
	}
	
	//Lets find the best activity to run, and the best goal to give the activity  
	UNPCActivity* ActivityToRun = nullptr;
	UNPCGoalItem* GoalParam = nullptr; 

	//Ask all activities for a score
	float BestScore = -1.f;

	for (auto& Activity : ValidActivities)
	{
		if (Activity)
		{
			UNPCGoalItem* BestGoal = nullptr;
			TArray<UNPCGoalItem*> InvalidGoals;
			const float Score = Activity->ScoreActivity(GetGoals(Activity->SupportedGoalType), BestGoal, InvalidGoals);

			for (auto& InvalidGoal : InvalidGoals)
			{
				if (InvalidGoal)
				{
					RemoveGoal(InvalidGoal);
				}
			}

			//Scores less than or equal to zero can be interrupted 
			if (Score > 0.f && Score > BestScore)
			{
				BestScore = Score;
				GoalParam = BestGoal;
				ActivityToRun = Activity;
			}
		}
	}
	
	if (ActivityToRun && GoalParam)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Running activity %s with goal %s"), *GetNameSafe(ActivityToRun), *(GoalParam->GetDebugString()));
		RunActivity(ActivityToRun, GoalParam, FailReason);
		return true;
	}
	else if(!CurrentActivity || CurrentActivity->GetClass() != FallbackActivity->GetClass())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Running fallback activity %s"), *GetNameSafe(FallbackActivity));
		RunActivity(FallbackActivity, nullptr, FailReason);
		return true; 
	}


	return false; 
}

bool UNPCActivityComponent::CanRunActivity(UNPCActivity* ActivityTemplate,   UNPCGoalItem* ActivityGoal, FString& FailReason) const
{
	if(!OwnerController || !OwnerController->HasAuthority())
	{
		FailReason = "Not Authority";
		return false; 
	}

	if (!ActivityTemplate)
	{
		FailReason = "Null template provided";
		return false; 
	}

	//Check priority - this may be removed as we move to goal-oriented 
	//if (CurrentActivity && CurrentActivity->Priority > ActivityTemplate->Priority)
	//{
	//	FailReason = "Current activity priority was higher value";
	//	return false; 
	//}

	//Tag checks
	if (OwnerController->HasAnyMatchingGameplayTags(ActivityTemplate->BlockTags))
	{
		FailReason = "Owner had blocked tag";
		return false;
	}

	if (!OwnerController->HasAllMatchingGameplayTags(ActivityTemplate->RequireTags))
	{
		FailReason = "Owner didnt have required tag";
		return false;
	}

	//Possibly ask template itself if it can run? 
	if (!ActivityTemplate->CanRunActivity(FailReason))
	{
		return false; 
	}

	return true; 
}

bool UNPCActivityComponent::StartActivity(UNPCActivity* NewActivity,  UNPCGoalItem* ActivityGoal, FString& FailReason)
{
	if (ANarrativeNPCCharacter* CharacterOwner = Cast<ANarrativeNPCCharacter>(GetOwner()))
	{
		OwnerController = Cast<ANarrativeNPCController>(CharacterOwner->GetController());
	}

	if (CanRunActivity(NewActivity, ActivityGoal, FailReason))
	{
		if (CurrentActivity)
		{
			CurrentActivity->EndActivity();
			CurrentActivity->K2_EndActivity();
		}

		CurrentActivity = NewActivity;

		CurrentActivity->ActivityGoal = ActivityGoal;

		if(CurrentActivity)
		{
			//Can still fail after starting, NPCs blackboard can fail to initialize itself 
			const bool bSucceeded = CurrentActivity->RunActivity();
			CurrentActivity->K2_RunActivity();

			if (!bSucceeded)
			{
				CurrentActivity = nullptr; 
				return false; 
			}

			return true; 
		}
	}

	return false; 
}

//void UNPCActivityComponent::GetSaveGoals(TArray<FSavedGoalItem>& OutSaveGoals)
//{
//	//Store all our goals and their SaveGame vars to our save record where we can read them back later 
//	OutSaveGoals.Empty();
//
//	for (auto& GoalKVP : Goals) 
//	{
//		FNPCGoalContainer& GoalSet = GoalKVP.Value;
//
//		for (auto& Goal : GoalSet.Goals)
//		{
//			if (Goal && Goal->bSaveGoal)
//			{
//				FSavedGoalItem SavedGoal;
//				SavedGoal.Class = Goal->GetClass();
//
//				FMemoryWriter MemWriter(SavedGoal.Data);
//				FObjectAndNameAsStringProxyArchive Ar(MemWriter, true);
//				Ar.ArIsSaveGame = true;
//
//				//Let the goal store any savegame data it needs first
//				Goal->PrepareForSave();
//				Goal->Serialize(Ar);
//
//				OutSaveGoals.Add(SavedGoal);
//			}
//		}
//	}
//}
//
//void UNPCActivityComponent::LoadSavedGoals(const TArray<FSavedGoalItem>& SavedGoals)
//{
//	
//	for (auto& SaveGoal : SavedGoals)
//	{
//		if (SaveGoal.Class)
//		{
//			if (UNPCGoalItem* NewGoal = NewObject<UNPCGoalItem>(this, SaveGoal.Class))
//			{
//				FMemoryReader MemReader(SaveGoal.Data);
//				FObjectAndNameAsStringProxyArchive Ar(MemReader, true);
//				Ar.ArIsSaveGame = true;
//
//				NewGoal->Serialize(Ar);
//
//				NewGoal->OwnerController = OwnerController; 
//				NewGoal->OnLoaded();
//
//				/*No one will have a pointer to the remade goal, but thats okay imo, stuff like followplayer can just 
//				search the goals for it if it needs. */
//				AddGoal(NewGoal);
//			}
//		}
//	}
//}

bool UNPCActivityComponent::RunActivity(UNPCActivity* ActivityTemplate,  UNPCGoalItem* Goal, FString& FailReason)
{
	if (ActivityTemplate)
	{
		//Disallow restarting an already going activity 
		//if (CurrentActivity->GetClass() != ActivityTemplate->GetClass())
		{
			if (UNPCActivity* NewActivity = DuplicateObject<UNPCActivity>(ActivityTemplate, this))
			{
				NewActivity->OwnerController = OwnerController;
				NewActivity->OwnerActivityComponent = this;

				UNPCActivity* OldActivity = CurrentActivity;

				if (StartActivity(NewActivity, Goal, FailReason))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void UNPCActivityComponent::SetActivitySchedule(class UNPCActivitySchedule* Schedule)
{
	if (Schedule)
	{
		ActivitySchedule = Schedule;

		ActiveScheduledActivites.Empty();

		for (auto& NPCScheduledBehavior : ActivitySchedule->Activities)
		{
			if (UScheduledBehavior_NPC* ScheduledActivity = DuplicateObject<UScheduledBehavior_NPC>(NPCScheduledBehavior, this))
			{
				ScheduledActivity->SetOwner(this); 
				ScheduledActivity->BindBehavior(GetWorld(), true);

				ActiveScheduledActivites.Add(ScheduledActivity);
			}
		}
	}
}

void UNPCActivityComponent::SetActivityConfiguration(class UNPCActivityConfiguration* Config)
{
	if (Config)
	{
		GoalGenerators.Empty();
		ActivityGroups.Empty();

		if (Config)
		{
			if (Config->FallbackActivity)
			{
				FallbackActivity = DuplicateObject<UNPCActivity>(Config->FallbackActivity, this);
			}

			for (auto& GenTemplate : Config->GoalGenerators)
			{
				if (UNPCGoalGenerator* GoalGenCopy = DuplicateObject<UNPCGoalGenerator>(GenTemplate, this))
				{
					GoalGenerators.Add(GoalGenCopy);
				}
			}

			for (auto& GenGroup : Config->ActivityGroups)
			{
				if (UActivityGroup* GenGroupCopy = DuplicateObject<UActivityGroup>(GenGroup, this))
				{
					ActivityGroups.Add(GenGroupCopy);
				}
			}

			for (auto& Group : ActivityGroups)
			{
				if (Group)
				{
					Group->SetOwner(OwnerController, this);
				}
			}

			//Initialize our goal generators, so they can start generating goals for us 
			for(auto& GoalGenerator : GoalGenerators)
			{
				if (GoalGenerator)
				{
					GoalGenerator->Initialize(OwnerController, this);
				}
			}

			PerformActivitySelection();
		}
	}
}

void UNPCActivityComponent::StopCurrentActivity()
{
	if (CurrentActivity)
	{
		UE_LOG(LogTemp, Warning, TEXT("Ending activity %s"), *CurrentActivity->ActivityName.ToString());
		CurrentActivity->EndActivity();
		CurrentActivity->K2_EndActivity();
	}

	CurrentActivity = nullptr; 

}

UNPCGoalItem* UNPCActivityComponent::AddGoal(UNPCGoalItem* NewGoal, const bool bTriggerReselect)
{
	if (NewGoal)
	{
		//Add the goal to the set. At the moment we're not hashing goals by unique object - we could add support for this though. 
		if (!Goals.Contains(NewGoal->GetClass()))
		{
			FNPCGoalContainer NewGoalSet;
			NewGoalSet.Goals.Add(NewGoal);

			if (UObject* Key = NewGoal->GetGoalKey())
			{
				NewGoalSet.GoalUniqueObjectMap.Add(Key, NewGoal);
			}

			Goals.Add(NewGoal->GetClass(), NewGoalSet);
		}
		else
		{	
			//Enforce uniqueness - dont allow multiple goals with same key
			if (UObject* Key = NewGoal->GetGoalKey())
			{
				if (Goals[NewGoal->GetClass()].GoalUniqueObjectMap.Contains(Key))
				{
					return nullptr;
				}

				Goals[NewGoal->GetClass()].GoalUniqueObjectMap.Add(Key, NewGoal);
			}

			Goals[NewGoal->GetClass()].Goals.Add(NewGoal);

		}

		NewGoal->CreationTime = GetWorld()->GetTimeSeconds();

		const float TOD = UArsenalStatics::GetTimeOfDay(this);

		//If our goal created didnt set this assume goal was supposed to start at current time 
		if (NewGoal->IntendedTODStartTime < 0.f)
		{
			NewGoal->IntendedTODStartTime = TOD;
		}

		NewGoal->TODCreationTime = TOD;
		NewGoal->OwnerController = OwnerController; 

		//By default if new goal scores higher than existing one lets perform a reselect 
		if ((!CurrentActivity || !CurrentActivity->ActivityGoal) || CurrentActivity && CurrentActivity->ActivityGoal && NewGoal->GetGoalScore() > CurrentActivity->ActivityGoal->GetGoalScore())
		{
			PerformActivitySelection(true);
		}
		else if (bTriggerReselect) 		//Adding a new goal can ask for a reselect if it wants. 
		{
			PerformActivitySelection();
		}

		return NewGoal; 
	}

	return nullptr;
}

void UNPCActivityComponent::RemoveGoal(UNPCGoalItem* GoalToRemove)
{
	if (GoalToRemove)
	{
		if (Goals.Contains(GoalToRemove->GetClass()))
		{
			Goals[GoalToRemove->GetClass()].Goals.Remove(GoalToRemove);

			if (UObject* Key = GoalToRemove->GetGoalKey())
			{
				Goals[GoalToRemove->GetClass()].GoalUniqueObjectMap.Remove(Key);
			}

			UE_LOG(LogTemp, Warning, TEXT("Removing goal %s"), *GoalToRemove->GetDebugString());

			//If we're removing our current activities goal, we'll need a reselect 
			if (CurrentActivity && CurrentActivity->ActivityGoal == GoalToRemove)
			{
				CurrentActivity->ActivityGoal = nullptr;
				PerformActivitySelection();
			}
		}
	}
}

FNPCGoalContainer UNPCActivityComponent::GetGoals(const TSubclassOf<UNPCGoalItem>& GoalType)
{
	if (Goals.Contains(GoalType))
	{
		return Goals[GoalType];
	}

	return FNPCGoalContainer();
}


UNPCGoalItem* UNPCActivityComponent::GetGoalByKey(const TSubclassOf<UNPCGoalItem>& GoalType, const UObject* Key)
{
	if (Goals.Contains(GoalType))
	{
		if (Goals[GoalType].GoalUniqueObjectMap.Contains(Key))
		{
			return Goals[GoalType].GoalUniqueObjectMap[Key];
		}
	}

	return nullptr; 
}

void UNPCActivityComponent::Load_Implementation()
{

	for (auto& SaveGoal : SavedGoals)
	{
		if (SaveGoal.Class)
		{
			if (UNPCGoalItem* NewGoal = NewObject<UNPCGoalItem>(this, SaveGoal.Class))
			{
				FMemoryReader MemReader(SaveGoal.Data);
				FObjectAndNameAsStringProxyArchive Ar(MemReader, true);
				Ar.ArIsSaveGame = true;

				NewGoal->Serialize(Ar);

				NewGoal->OwnerController = OwnerController; 
				NewGoal->OnLoaded();

				/*No one will have a pointer to the remade goal, but thats okay imo, stuff like followplayer can just 
				search the goals for it if it needs. */
				AddGoal(NewGoal);
			}
		}
	}
}

void UNPCActivityComponent::PrepareForSave_Implementation()
{
	//Store all our goals and their SaveGame vars to our save record where we can read them back later 
	SavedGoals.Empty();

	for (auto& GoalKVP : Goals)
	{
		FNPCGoalContainer& GoalSet = GoalKVP.Value;

		for (auto& Goal : GoalSet.Goals)
		{
			if (Goal && Goal->bSaveGoal)
			{
				FSavedGoalItem SavedGoal;
				SavedGoal.Class = Goal->GetClass();

				FMemoryWriter MemWriter(SavedGoal.Data);
				FObjectAndNameAsStringProxyArchive Ar(MemWriter, true);
				Ar.ArIsSaveGame = true;

				//Let the goal store any savegame data it needs first
				Goal->PrepareForSave();
				Goal->Serialize(Ar);

				SavedGoals.Add(SavedGoal);
			}
		}
	}
}
//
//void UScheduledGoal_NPC::OnHitTimeStart(float EventTime, float ActualTime, bool bFiredFromAdvancedTime)
//{
//	//Ensure activity hasnt already ended or is about to end - TODO will this handle 2400->0 shift correctly? 
//	if (ScheduledActivity.GoalTemplate && ActualTime < ScheduledActivity.EndTime)
//	{
//		if (UNPCActivityComponent* ActivityComp = Cast<UNPCActivityComponent>(GetOuter()))
//		{
//			UE_LOG(LogTemp, Warning, TEXT("Scheduled Goal %s added"), *ScheduledActivity.GoalTemplate->GetDebugString());
//
//			ActiveGoal = ActivityComp->AddGoal(ScheduledActivity.GoalTemplate);
//		}
//	}
//}
//
//void UScheduledGoal_NPC::OnHitTimeEnd(float EventTime, float ActualTime, bool bFiredFromAdvancedTime)
//{
//	if (ActiveGoal)
//	{
//		if (UNPCActivityComponent* ActivityComp = Cast<UNPCActivityComponent>(GetOuter()))
//		{
//			ActivityComp->RemoveGoal(ActiveGoal);
//		}
//	}
//}

#if WITH_GAMEPLAY_DEBUGGER

FGameplayDebuggerCategory_ActivityComponent::FGameplayDebuggerCategory_ActivityComponent()
{

}

void FGameplayDebuggerCategory_ActivityComponent::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	ANarrativeNPCCharacter* MyPawn = Cast<ANarrativeNPCCharacter>(DebugActor);
	AAIController* MyController = MyPawn ? Cast<AAIController>(MyPawn->Controller) : nullptr;
	UNPCActivityComponent* ActivityComp = GetValid(MyPawn ? MyPawn->GetActivityComponent() : nullptr);
	
	if (ActivityComp)
	{
		//DataPack.CompName = ActivityComp->GetName();
		ActivityComp->DescribeSelfToGameplayDebugger(this);
		//DataPack.TreeDesc = ActivityComp->GetDebugInfoString();

		//if (BrainComp->GetBlackboardComponent())
		{
			//DataPack.BlackboardDesc = BrainComp->GetBlackboardComponent()->GetDebugInfoString(EBlackboardDescription::KeyWithValue);
		}
	}
}

void FGameplayDebuggerCategory_ActivityComponent::DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext)
{
	//CanvasContext.Printf(TEXT("CUSTOM ACTIVITY DRAW DATA"));
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_ActivityComponent::MakeInstance()
{
	return MakeShareable(new FGameplayDebuggerCategory_ActivityComponent());
}

#endif 